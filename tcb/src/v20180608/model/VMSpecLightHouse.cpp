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

#include <tencentcloud/tcb/v20180608/model/VMSpecLightHouse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

VMSpecLightHouse::VMSpecLightHouse() :
    m_bundleIdHasBeenSet(false),
    m_bundleConfigHasBeenSet(false)
{
}

CoreInternalOutcome VMSpecLightHouse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BundleId") && !value["BundleId"].IsNull())
    {
        if (!value["BundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VMSpecLightHouse.BundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleId = string(value["BundleId"].GetString());
        m_bundleIdHasBeenSet = true;
    }

    if (value.HasMember("BundleConfig") && !value["BundleConfig"].IsNull())
    {
        if (!value["BundleConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VMSpecLightHouse.BundleConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleConfig = string(value["BundleConfig"].GetString());
        m_bundleConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VMSpecLightHouse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleConfig.c_str(), allocator).Move(), allocator);
    }

}


string VMSpecLightHouse::GetBundleId() const
{
    return m_bundleId;
}

void VMSpecLightHouse::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool VMSpecLightHouse::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string VMSpecLightHouse::GetBundleConfig() const
{
    return m_bundleConfig;
}

void VMSpecLightHouse::SetBundleConfig(const string& _bundleConfig)
{
    m_bundleConfig = _bundleConfig;
    m_bundleConfigHasBeenSet = true;
}

bool VMSpecLightHouse::BundleConfigHasBeenSet() const
{
    return m_bundleConfigHasBeenSet;
}

