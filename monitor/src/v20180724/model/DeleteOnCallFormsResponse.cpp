/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/monitor/v20180724/model/DeleteOnCallFormsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DeleteOnCallFormsResponse::DeleteOnCallFormsResponse() :
    m_failedOnCallFormIDsHasBeenSet(false),
    m_successOnCallFormIDsHasBeenSet(false)
{
}

CoreInternalOutcome DeleteOnCallFormsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FailedOnCallFormIDs") && !rsp["FailedOnCallFormIDs"].IsNull())
    {
        if (!rsp["FailedOnCallFormIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailedOnCallFormIDs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailedOnCallFormIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failedOnCallFormIDs.push_back((*itr).GetString());
        }
        m_failedOnCallFormIDsHasBeenSet = true;
    }

    if (rsp.HasMember("SuccessOnCallFormIDs") && !rsp["SuccessOnCallFormIDs"].IsNull())
    {
        if (!rsp["SuccessOnCallFormIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SuccessOnCallFormIDs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SuccessOnCallFormIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_successOnCallFormIDs.push_back((*itr).GetString());
        }
        m_successOnCallFormIDsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DeleteOnCallFormsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_failedOnCallFormIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedOnCallFormIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_failedOnCallFormIDs.begin(); itr != m_failedOnCallFormIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_successOnCallFormIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessOnCallFormIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_successOnCallFormIDs.begin(); itr != m_successOnCallFormIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


vector<string> DeleteOnCallFormsResponse::GetFailedOnCallFormIDs() const
{
    return m_failedOnCallFormIDs;
}

bool DeleteOnCallFormsResponse::FailedOnCallFormIDsHasBeenSet() const
{
    return m_failedOnCallFormIDsHasBeenSet;
}

vector<string> DeleteOnCallFormsResponse::GetSuccessOnCallFormIDs() const
{
    return m_successOnCallFormIDs;
}

bool DeleteOnCallFormsResponse::SuccessOnCallFormIDsHasBeenSet() const
{
    return m_successOnCallFormIDsHasBeenSet;
}


