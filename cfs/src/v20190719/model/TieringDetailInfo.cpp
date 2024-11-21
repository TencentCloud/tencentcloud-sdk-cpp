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

#include <tencentcloud/cfs/v20190719/model/TieringDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

TieringDetailInfo::TieringDetailInfo() :
    m_tieringSizeInBytesHasBeenSet(false),
    m_secondaryTieringSizeInBytesHasBeenSet(false)
{
}

CoreInternalOutcome TieringDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TieringSizeInBytes") && !value["TieringSizeInBytes"].IsNull())
    {
        if (!value["TieringSizeInBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TieringDetailInfo.TieringSizeInBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tieringSizeInBytes = value["TieringSizeInBytes"].GetInt64();
        m_tieringSizeInBytesHasBeenSet = true;
    }

    if (value.HasMember("SecondaryTieringSizeInBytes") && !value["SecondaryTieringSizeInBytes"].IsNull())
    {
        if (!value["SecondaryTieringSizeInBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TieringDetailInfo.SecondaryTieringSizeInBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryTieringSizeInBytes = value["SecondaryTieringSizeInBytes"].GetInt64();
        m_secondaryTieringSizeInBytesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TieringDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tieringSizeInBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TieringSizeInBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tieringSizeInBytes, allocator);
    }

    if (m_secondaryTieringSizeInBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryTieringSizeInBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secondaryTieringSizeInBytes, allocator);
    }

}


int64_t TieringDetailInfo::GetTieringSizeInBytes() const
{
    return m_tieringSizeInBytes;
}

void TieringDetailInfo::SetTieringSizeInBytes(const int64_t& _tieringSizeInBytes)
{
    m_tieringSizeInBytes = _tieringSizeInBytes;
    m_tieringSizeInBytesHasBeenSet = true;
}

bool TieringDetailInfo::TieringSizeInBytesHasBeenSet() const
{
    return m_tieringSizeInBytesHasBeenSet;
}

int64_t TieringDetailInfo::GetSecondaryTieringSizeInBytes() const
{
    return m_secondaryTieringSizeInBytes;
}

void TieringDetailInfo::SetSecondaryTieringSizeInBytes(const int64_t& _secondaryTieringSizeInBytes)
{
    m_secondaryTieringSizeInBytes = _secondaryTieringSizeInBytes;
    m_secondaryTieringSizeInBytesHasBeenSet = true;
}

bool TieringDetailInfo::SecondaryTieringSizeInBytesHasBeenSet() const
{
    return m_secondaryTieringSizeInBytesHasBeenSet;
}

