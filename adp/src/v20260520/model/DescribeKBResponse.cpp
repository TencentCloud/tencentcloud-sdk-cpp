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

#include <tencentcloud/adp/v20260520/model/DescribeKBResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeKBResponse::DescribeKBResponse() :
    m_appIdListHasBeenSet(false),
    m_capacityInfoHasBeenSet(false),
    m_esConfigHasBeenSet(false),
    m_modelConfigHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_summaryHasBeenSet(false)
{
}

CoreInternalOutcome DescribeKBResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AppIdList") && !rsp["AppIdList"].IsNull())
    {
        if (!rsp["AppIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppIdList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AppIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_appIdList.push_back((*itr).GetString());
        }
        m_appIdListHasBeenSet = true;
    }

    if (rsp.HasMember("CapacityInfo") && !rsp["CapacityInfo"].IsNull())
    {
        if (!rsp["CapacityInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CapacityInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_capacityInfo.Deserialize(rsp["CapacityInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_capacityInfoHasBeenSet = true;
    }

    if (rsp.HasMember("EsConfig") && !rsp["EsConfig"].IsNull())
    {
        if (!rsp["EsConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EsConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_esConfig.Deserialize(rsp["EsConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_esConfigHasBeenSet = true;
    }

    if (rsp.HasMember("ModelConfig") && !rsp["ModelConfig"].IsNull())
    {
        if (!rsp["ModelConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelConfig.Deserialize(rsp["ModelConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelConfigHasBeenSet = true;
    }

    if (rsp.HasMember("Owner") && !rsp["Owner"].IsNull())
    {
        if (!rsp["Owner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Owner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_owner.Deserialize(rsp["Owner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerHasBeenSet = true;
    }

    if (rsp.HasMember("Summary") && !rsp["Summary"].IsNull())
    {
        if (!rsp["Summary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Summary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_summary.Deserialize(rsp["Summary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_summaryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeKBResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_appIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_appIdList.begin(); itr != m_appIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_capacityInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_capacityInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_esConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_esConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modelConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_owner.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_summary.ToJsonObject(value[key.c_str()], allocator);
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


vector<string> DescribeKBResponse::GetAppIdList() const
{
    return m_appIdList;
}

bool DescribeKBResponse::AppIdListHasBeenSet() const
{
    return m_appIdListHasBeenSet;
}

KBCapacity DescribeKBResponse::GetCapacityInfo() const
{
    return m_capacityInfo;
}

bool DescribeKBResponse::CapacityInfoHasBeenSet() const
{
    return m_capacityInfoHasBeenSet;
}

ESConfig DescribeKBResponse::GetEsConfig() const
{
    return m_esConfig;
}

bool DescribeKBResponse::EsConfigHasBeenSet() const
{
    return m_esConfigHasBeenSet;
}

KBModelConfig DescribeKBResponse::GetModelConfig() const
{
    return m_modelConfig;
}

bool DescribeKBResponse::ModelConfigHasBeenSet() const
{
    return m_modelConfigHasBeenSet;
}

Operator DescribeKBResponse::GetOwner() const
{
    return m_owner;
}

bool DescribeKBResponse::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

KBSummary DescribeKBResponse::GetSummary() const
{
    return m_summary;
}

bool DescribeKBResponse::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}


