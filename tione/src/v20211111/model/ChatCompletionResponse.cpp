/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/tione/v20211111/model/ChatCompletionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ChatCompletionResponse::ChatCompletionResponse() :
    m_modelHasBeenSet(false),
    m_choicesHasBeenSet(false),
    m_idHasBeenSet(false),
    m_usageHasBeenSet(false)
{
}

CoreInternalOutcome ChatCompletionResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Model") && !rsp["Model"].IsNull())
    {
        if (!rsp["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(rsp["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (rsp.HasMember("Choices") && !rsp["Choices"].IsNull())
    {
        if (!rsp["Choices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Choices` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Choices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Choice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_choices.push_back(item);
        }
        m_choicesHasBeenSet = true;
    }

    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(rsp["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("Usage") && !rsp["Usage"].IsNull())
    {
        if (!rsp["Usage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Usage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_usage.Deserialize(rsp["Usage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_usageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ChatCompletionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_choicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Choices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_choices.begin(); itr != m_choices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_usage.ToJsonObject(value[key.c_str()], allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string ChatCompletionResponse::GetModel() const
{
    return m_model;
}

bool ChatCompletionResponse::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<Choice> ChatCompletionResponse::GetChoices() const
{
    return m_choices;
}

bool ChatCompletionResponse::ChoicesHasBeenSet() const
{
    return m_choicesHasBeenSet;
}

string ChatCompletionResponse::GetId() const
{
    return m_id;
}

bool ChatCompletionResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

Usage ChatCompletionResponse::GetUsage() const
{
    return m_usage;
}

bool ChatCompletionResponse::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}


