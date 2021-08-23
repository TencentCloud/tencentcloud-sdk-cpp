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

#include <tencentcloud/trtc/v20190722/model/OneSdkAppIdTranscodeTimeUsagesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

OneSdkAppIdTranscodeTimeUsagesInfo::OneSdkAppIdTranscodeTimeUsagesInfo() :
    m_sdkAppIdTranscodeTimeUsagesHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false)
{
}

CoreInternalOutcome OneSdkAppIdTranscodeTimeUsagesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SdkAppIdTranscodeTimeUsages") && !value["SdkAppIdTranscodeTimeUsages"].IsNull())
    {
        if (!value["SdkAppIdTranscodeTimeUsages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OneSdkAppIdTranscodeTimeUsagesInfo.SdkAppIdTranscodeTimeUsages` is not array type"));

        const rapidjson::Value &tmpValue = value["SdkAppIdTranscodeTimeUsages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SdkAppIdTrtcMcuTranscodeTimeUsage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sdkAppIdTranscodeTimeUsages.push_back(item);
        }
        m_sdkAppIdTranscodeTimeUsagesHasBeenSet = true;
    }

    if (value.HasMember("TotalNum") && !value["TotalNum"].IsNull())
    {
        if (!value["TotalNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OneSdkAppIdTranscodeTimeUsagesInfo.TotalNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = value["TotalNum"].GetUint64();
        m_totalNumHasBeenSet = true;
    }

    if (value.HasMember("SdkAppId") && !value["SdkAppId"].IsNull())
    {
        if (!value["SdkAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OneSdkAppIdTranscodeTimeUsagesInfo.SdkAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = string(value["SdkAppId"].GetString());
        m_sdkAppIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OneSdkAppIdTranscodeTimeUsagesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sdkAppIdTranscodeTimeUsagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppIdTranscodeTimeUsages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sdkAppIdTranscodeTimeUsages.begin(); itr != m_sdkAppIdTranscodeTimeUsages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNum, allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkAppId.c_str(), allocator).Move(), allocator);
    }

}


vector<SdkAppIdTrtcMcuTranscodeTimeUsage> OneSdkAppIdTranscodeTimeUsagesInfo::GetSdkAppIdTranscodeTimeUsages() const
{
    return m_sdkAppIdTranscodeTimeUsages;
}

void OneSdkAppIdTranscodeTimeUsagesInfo::SetSdkAppIdTranscodeTimeUsages(const vector<SdkAppIdTrtcMcuTranscodeTimeUsage>& _sdkAppIdTranscodeTimeUsages)
{
    m_sdkAppIdTranscodeTimeUsages = _sdkAppIdTranscodeTimeUsages;
    m_sdkAppIdTranscodeTimeUsagesHasBeenSet = true;
}

bool OneSdkAppIdTranscodeTimeUsagesInfo::SdkAppIdTranscodeTimeUsagesHasBeenSet() const
{
    return m_sdkAppIdTranscodeTimeUsagesHasBeenSet;
}

uint64_t OneSdkAppIdTranscodeTimeUsagesInfo::GetTotalNum() const
{
    return m_totalNum;
}

void OneSdkAppIdTranscodeTimeUsagesInfo::SetTotalNum(const uint64_t& _totalNum)
{
    m_totalNum = _totalNum;
    m_totalNumHasBeenSet = true;
}

bool OneSdkAppIdTranscodeTimeUsagesInfo::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

string OneSdkAppIdTranscodeTimeUsagesInfo::GetSdkAppId() const
{
    return m_sdkAppId;
}

void OneSdkAppIdTranscodeTimeUsagesInfo::SetSdkAppId(const string& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool OneSdkAppIdTranscodeTimeUsagesInfo::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

