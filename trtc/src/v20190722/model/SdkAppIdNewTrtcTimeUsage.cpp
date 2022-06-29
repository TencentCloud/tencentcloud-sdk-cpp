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

#include <tencentcloud/trtc/v20190722/model/SdkAppIdNewTrtcTimeUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

SdkAppIdNewTrtcTimeUsage::SdkAppIdNewTrtcTimeUsage() :
    m_sdkAppIdHasBeenSet(false),
    m_trtcTimeUsagesHasBeenSet(false),
    m_audienceTrtcTimeUsagesHasBeenSet(false)
{
}

CoreInternalOutcome SdkAppIdNewTrtcTimeUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SdkAppId") && !value["SdkAppId"].IsNull())
    {
        if (!value["SdkAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdNewTrtcTimeUsage.SdkAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = string(value["SdkAppId"].GetString());
        m_sdkAppIdHasBeenSet = true;
    }

    if (value.HasMember("TrtcTimeUsages") && !value["TrtcTimeUsages"].IsNull())
    {
        if (!value["TrtcTimeUsages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SdkAppIdNewTrtcTimeUsage.TrtcTimeUsages` is not array type"));

        const rapidjson::Value &tmpValue = value["TrtcTimeUsages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrtcTimeNewUsage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_trtcTimeUsages.push_back(item);
        }
        m_trtcTimeUsagesHasBeenSet = true;
    }

    if (value.HasMember("AudienceTrtcTimeUsages") && !value["AudienceTrtcTimeUsages"].IsNull())
    {
        if (!value["AudienceTrtcTimeUsages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SdkAppIdNewTrtcTimeUsage.AudienceTrtcTimeUsages` is not array type"));

        const rapidjson::Value &tmpValue = value["AudienceTrtcTimeUsages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrtcTimeNewUsage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audienceTrtcTimeUsages.push_back(item);
        }
        m_audienceTrtcTimeUsagesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SdkAppIdNewTrtcTimeUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_trtcTimeUsagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrtcTimeUsages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_trtcTimeUsages.begin(); itr != m_trtcTimeUsages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_audienceTrtcTimeUsagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudienceTrtcTimeUsages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audienceTrtcTimeUsages.begin(); itr != m_audienceTrtcTimeUsages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SdkAppIdNewTrtcTimeUsage::GetSdkAppId() const
{
    return m_sdkAppId;
}

void SdkAppIdNewTrtcTimeUsage::SetSdkAppId(const string& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool SdkAppIdNewTrtcTimeUsage::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

vector<TrtcTimeNewUsage> SdkAppIdNewTrtcTimeUsage::GetTrtcTimeUsages() const
{
    return m_trtcTimeUsages;
}

void SdkAppIdNewTrtcTimeUsage::SetTrtcTimeUsages(const vector<TrtcTimeNewUsage>& _trtcTimeUsages)
{
    m_trtcTimeUsages = _trtcTimeUsages;
    m_trtcTimeUsagesHasBeenSet = true;
}

bool SdkAppIdNewTrtcTimeUsage::TrtcTimeUsagesHasBeenSet() const
{
    return m_trtcTimeUsagesHasBeenSet;
}

vector<TrtcTimeNewUsage> SdkAppIdNewTrtcTimeUsage::GetAudienceTrtcTimeUsages() const
{
    return m_audienceTrtcTimeUsages;
}

void SdkAppIdNewTrtcTimeUsage::SetAudienceTrtcTimeUsages(const vector<TrtcTimeNewUsage>& _audienceTrtcTimeUsages)
{
    m_audienceTrtcTimeUsages = _audienceTrtcTimeUsages;
    m_audienceTrtcTimeUsagesHasBeenSet = true;
}

bool SdkAppIdNewTrtcTimeUsage::AudienceTrtcTimeUsagesHasBeenSet() const
{
    return m_audienceTrtcTimeUsagesHasBeenSet;
}

