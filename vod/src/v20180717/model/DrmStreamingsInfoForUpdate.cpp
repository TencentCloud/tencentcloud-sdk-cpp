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

#include <tencentcloud/vod/v20180717/model/DrmStreamingsInfoForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DrmStreamingsInfoForUpdate::DrmStreamingsInfoForUpdate() :
    m_simpleAesDefinitionHasBeenSet(false),
    m_widevineDefinitionHasBeenSet(false),
    m_fairPlayDefinitionHasBeenSet(false)
{
}

CoreInternalOutcome DrmStreamingsInfoForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SimpleAesDefinition") && !value["SimpleAesDefinition"].IsNull())
    {
        if (!value["SimpleAesDefinition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DrmStreamingsInfoForUpdate.SimpleAesDefinition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_simpleAesDefinition = value["SimpleAesDefinition"].GetUint64();
        m_simpleAesDefinitionHasBeenSet = true;
    }

    if (value.HasMember("WidevineDefinition") && !value["WidevineDefinition"].IsNull())
    {
        if (!value["WidevineDefinition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DrmStreamingsInfoForUpdate.WidevineDefinition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_widevineDefinition = value["WidevineDefinition"].GetUint64();
        m_widevineDefinitionHasBeenSet = true;
    }

    if (value.HasMember("FairPlayDefinition") && !value["FairPlayDefinition"].IsNull())
    {
        if (!value["FairPlayDefinition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DrmStreamingsInfoForUpdate.FairPlayDefinition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fairPlayDefinition = value["FairPlayDefinition"].GetUint64();
        m_fairPlayDefinitionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DrmStreamingsInfoForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_simpleAesDefinitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimpleAesDefinition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_simpleAesDefinition, allocator);
    }

    if (m_widevineDefinitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WidevineDefinition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_widevineDefinition, allocator);
    }

    if (m_fairPlayDefinitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FairPlayDefinition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fairPlayDefinition, allocator);
    }

}


uint64_t DrmStreamingsInfoForUpdate::GetSimpleAesDefinition() const
{
    return m_simpleAesDefinition;
}

void DrmStreamingsInfoForUpdate::SetSimpleAesDefinition(const uint64_t& _simpleAesDefinition)
{
    m_simpleAesDefinition = _simpleAesDefinition;
    m_simpleAesDefinitionHasBeenSet = true;
}

bool DrmStreamingsInfoForUpdate::SimpleAesDefinitionHasBeenSet() const
{
    return m_simpleAesDefinitionHasBeenSet;
}

uint64_t DrmStreamingsInfoForUpdate::GetWidevineDefinition() const
{
    return m_widevineDefinition;
}

void DrmStreamingsInfoForUpdate::SetWidevineDefinition(const uint64_t& _widevineDefinition)
{
    m_widevineDefinition = _widevineDefinition;
    m_widevineDefinitionHasBeenSet = true;
}

bool DrmStreamingsInfoForUpdate::WidevineDefinitionHasBeenSet() const
{
    return m_widevineDefinitionHasBeenSet;
}

uint64_t DrmStreamingsInfoForUpdate::GetFairPlayDefinition() const
{
    return m_fairPlayDefinition;
}

void DrmStreamingsInfoForUpdate::SetFairPlayDefinition(const uint64_t& _fairPlayDefinition)
{
    m_fairPlayDefinition = _fairPlayDefinition;
    m_fairPlayDefinitionHasBeenSet = true;
}

bool DrmStreamingsInfoForUpdate::FairPlayDefinitionHasBeenSet() const
{
    return m_fairPlayDefinitionHasBeenSet;
}

