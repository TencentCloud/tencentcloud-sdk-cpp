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

#include <tencentcloud/tcb/v20180608/model/DescribePlatformEnvUsageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribePlatformEnvUsageResponse::DescribePlatformEnvUsageResponse() :
    m_resourcesHasBeenSet(false),
    m_totalCreditsHasBeenSet(false),
    m_creditsScaleHasBeenSet(false)
{
}

CoreInternalOutcome DescribePlatformEnvUsageResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Resources") && !rsp["Resources"].IsNull())
    {
        if (!rsp["Resources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Resources` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Resources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PlatformResUsageItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resources.push_back(item);
        }
        m_resourcesHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCredits") && !rsp["TotalCredits"].IsNull())
    {
        if (!rsp["TotalCredits"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCredits` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCredits = rsp["TotalCredits"].GetUint64();
        m_totalCreditsHasBeenSet = true;
    }

    if (rsp.HasMember("CreditsScale") && !rsp["CreditsScale"].IsNull())
    {
        if (!rsp["CreditsScale"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreditsScale` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_creditsScale = rsp["CreditsScale"].GetUint64();
        m_creditsScaleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePlatformEnvUsageResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resources.begin(); itr != m_resources.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCreditsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCredits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCredits, allocator);
    }

    if (m_creditsScaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditsScale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creditsScale, allocator);
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


vector<PlatformResUsageItem> DescribePlatformEnvUsageResponse::GetResources() const
{
    return m_resources;
}

bool DescribePlatformEnvUsageResponse::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

uint64_t DescribePlatformEnvUsageResponse::GetTotalCredits() const
{
    return m_totalCredits;
}

bool DescribePlatformEnvUsageResponse::TotalCreditsHasBeenSet() const
{
    return m_totalCreditsHasBeenSet;
}

uint64_t DescribePlatformEnvUsageResponse::GetCreditsScale() const
{
    return m_creditsScale;
}

bool DescribePlatformEnvUsageResponse::CreditsScaleHasBeenSet() const
{
    return m_creditsScaleHasBeenSet;
}


