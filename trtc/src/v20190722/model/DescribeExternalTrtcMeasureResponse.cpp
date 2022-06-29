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

#include <tencentcloud/trtc/v20190722/model/DescribeExternalTrtcMeasureResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

DescribeExternalTrtcMeasureResponse::DescribeExternalTrtcMeasureResponse() :
    m_sdkAppIdTrtrTimeUsagesHasBeenSet(false),
    m_anchorUsageModeHasBeenSet(false),
    m_audienceUsageModeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeExternalTrtcMeasureResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SdkAppIdTrtrTimeUsages") && !rsp["SdkAppIdTrtrTimeUsages"].IsNull())
    {
        if (!rsp["SdkAppIdTrtrTimeUsages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtrTimeUsages` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SdkAppIdTrtrTimeUsages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SdkAppIdNewTrtcTimeUsage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sdkAppIdTrtrTimeUsages.push_back(item);
        }
        m_sdkAppIdTrtrTimeUsagesHasBeenSet = true;
    }

    if (rsp.HasMember("AnchorUsageMode") && !rsp["AnchorUsageMode"].IsNull())
    {
        if (!rsp["AnchorUsageMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnchorUsageMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_anchorUsageMode = string(rsp["AnchorUsageMode"].GetString());
        m_anchorUsageModeHasBeenSet = true;
    }

    if (rsp.HasMember("AudienceUsageMode") && !rsp["AudienceUsageMode"].IsNull())
    {
        if (!rsp["AudienceUsageMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudienceUsageMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audienceUsageMode = string(rsp["AudienceUsageMode"].GetString());
        m_audienceUsageModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeExternalTrtcMeasureResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sdkAppIdTrtrTimeUsagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppIdTrtrTimeUsages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sdkAppIdTrtrTimeUsages.begin(); itr != m_sdkAppIdTrtrTimeUsages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_anchorUsageModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorUsageMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_anchorUsageMode.c_str(), allocator).Move(), allocator);
    }

    if (m_audienceUsageModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudienceUsageMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audienceUsageMode.c_str(), allocator).Move(), allocator);
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


vector<SdkAppIdNewTrtcTimeUsage> DescribeExternalTrtcMeasureResponse::GetSdkAppIdTrtrTimeUsages() const
{
    return m_sdkAppIdTrtrTimeUsages;
}

bool DescribeExternalTrtcMeasureResponse::SdkAppIdTrtrTimeUsagesHasBeenSet() const
{
    return m_sdkAppIdTrtrTimeUsagesHasBeenSet;
}

string DescribeExternalTrtcMeasureResponse::GetAnchorUsageMode() const
{
    return m_anchorUsageMode;
}

bool DescribeExternalTrtcMeasureResponse::AnchorUsageModeHasBeenSet() const
{
    return m_anchorUsageModeHasBeenSet;
}

string DescribeExternalTrtcMeasureResponse::GetAudienceUsageMode() const
{
    return m_audienceUsageMode;
}

bool DescribeExternalTrtcMeasureResponse::AudienceUsageModeHasBeenSet() const
{
    return m_audienceUsageModeHasBeenSet;
}


