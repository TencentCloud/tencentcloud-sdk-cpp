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

#include <tencentcloud/trtc/v20190722/model/SdkAppIdRecordUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

SdkAppIdRecordUsage::SdkAppIdRecordUsage() :
    m_sdkAppIdHasBeenSet(false),
    m_usagesHasBeenSet(false)
{
}

CoreInternalOutcome SdkAppIdRecordUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SdkAppId") && !value["SdkAppId"].IsNull())
    {
        if (!value["SdkAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdRecordUsage.SdkAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = string(value["SdkAppId"].GetString());
        m_sdkAppIdHasBeenSet = true;
    }

    if (value.HasMember("Usages") && !value["Usages"].IsNull())
    {
        if (!value["Usages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SdkAppIdRecordUsage.Usages` is not array type"));

        const rapidjson::Value &tmpValue = value["Usages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecordUsage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_usages.push_back(item);
        }
        m_usagesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SdkAppIdRecordUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_usagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_usages.begin(); itr != m_usages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SdkAppIdRecordUsage::GetSdkAppId() const
{
    return m_sdkAppId;
}

void SdkAppIdRecordUsage::SetSdkAppId(const string& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool SdkAppIdRecordUsage::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

vector<RecordUsage> SdkAppIdRecordUsage::GetUsages() const
{
    return m_usages;
}

void SdkAppIdRecordUsage::SetUsages(const vector<RecordUsage>& _usages)
{
    m_usages = _usages;
    m_usagesHasBeenSet = true;
}

bool SdkAppIdRecordUsage::UsagesHasBeenSet() const
{
    return m_usagesHasBeenSet;
}

