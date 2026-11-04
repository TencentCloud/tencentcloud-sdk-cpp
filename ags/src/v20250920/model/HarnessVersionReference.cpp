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

#include <tencentcloud/ags/v20250920/model/HarnessVersionReference.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

HarnessVersionReference::HarnessVersionReference() :
    m_harnessEngineHasBeenSet(false),
    m_harnessEngineVersionHasBeenSet(false)
{
}

CoreInternalOutcome HarnessVersionReference::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HarnessEngine") && !value["HarnessEngine"].IsNull())
    {
        if (!value["HarnessEngine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HarnessVersionReference.HarnessEngine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_harnessEngine = string(value["HarnessEngine"].GetString());
        m_harnessEngineHasBeenSet = true;
    }

    if (value.HasMember("HarnessEngineVersion") && !value["HarnessEngineVersion"].IsNull())
    {
        if (!value["HarnessEngineVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HarnessVersionReference.HarnessEngineVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_harnessEngineVersion = string(value["HarnessEngineVersion"].GetString());
        m_harnessEngineVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HarnessVersionReference::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_harnessEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HarnessEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_harnessEngine.c_str(), allocator).Move(), allocator);
    }

    if (m_harnessEngineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HarnessEngineVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_harnessEngineVersion.c_str(), allocator).Move(), allocator);
    }

}


string HarnessVersionReference::GetHarnessEngine() const
{
    return m_harnessEngine;
}

void HarnessVersionReference::SetHarnessEngine(const string& _harnessEngine)
{
    m_harnessEngine = _harnessEngine;
    m_harnessEngineHasBeenSet = true;
}

bool HarnessVersionReference::HarnessEngineHasBeenSet() const
{
    return m_harnessEngineHasBeenSet;
}

string HarnessVersionReference::GetHarnessEngineVersion() const
{
    return m_harnessEngineVersion;
}

void HarnessVersionReference::SetHarnessEngineVersion(const string& _harnessEngineVersion)
{
    m_harnessEngineVersion = _harnessEngineVersion;
    m_harnessEngineVersionHasBeenSet = true;
}

bool HarnessVersionReference::HarnessEngineVersionHasBeenSet() const
{
    return m_harnessEngineVersionHasBeenSet;
}

