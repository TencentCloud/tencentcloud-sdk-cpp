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

#include <tencentcloud/clb/v20180317/model/TestModelInputModalitiesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

TestModelInputModalitiesResponse::TestModelInputModalitiesResponse() :
    m_modelHasBeenSet(false),
    m_supportedModalitiesHasBeenSet(false),
    m_probeDetailsHasBeenSet(false)
{
}

CoreInternalOutcome TestModelInputModalitiesResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("SupportedModalities") && !rsp["SupportedModalities"].IsNull())
    {
        if (!rsp["SupportedModalities"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SupportedModalities` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SupportedModalities"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportedModalities.push_back((*itr).GetString());
        }
        m_supportedModalitiesHasBeenSet = true;
    }

    if (rsp.HasMember("ProbeDetails") && !rsp["ProbeDetails"].IsNull())
    {
        if (!rsp["ProbeDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProbeDetails` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ProbeDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ModalityProbeDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_probeDetails.push_back(item);
        }
        m_probeDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string TestModelInputModalitiesResponse::ToJsonString() const
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

    if (m_supportedModalitiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportedModalities";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportedModalities.begin(); itr != m_supportedModalities.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_probeDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProbeDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_probeDetails.begin(); itr != m_probeDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
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


string TestModelInputModalitiesResponse::GetModel() const
{
    return m_model;
}

bool TestModelInputModalitiesResponse::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<string> TestModelInputModalitiesResponse::GetSupportedModalities() const
{
    return m_supportedModalities;
}

bool TestModelInputModalitiesResponse::SupportedModalitiesHasBeenSet() const
{
    return m_supportedModalitiesHasBeenSet;
}

vector<ModalityProbeDetail> TestModelInputModalitiesResponse::GetProbeDetails() const
{
    return m_probeDetails;
}

bool TestModelInputModalitiesResponse::ProbeDetailsHasBeenSet() const
{
    return m_probeDetailsHasBeenSet;
}


