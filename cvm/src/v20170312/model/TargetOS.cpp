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

#include <tencentcloud/cvm/v20170312/model/TargetOS.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

TargetOS::TargetOS() :
    m_targetOSTypeHasBeenSet(false),
    m_targetOSVersionHasBeenSet(false)
{
}

CoreInternalOutcome TargetOS::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetOSType") && !value["TargetOSType"].IsNull())
    {
        if (!value["TargetOSType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetOS.TargetOSType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetOSType = string(value["TargetOSType"].GetString());
        m_targetOSTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetOSVersion") && !value["TargetOSVersion"].IsNull())
    {
        if (!value["TargetOSVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetOS.TargetOSVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetOSVersion = string(value["TargetOSVersion"].GetString());
        m_targetOSVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetOS::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetOSTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetOSType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetOSType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetOSVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetOSVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetOSVersion.c_str(), allocator).Move(), allocator);
    }

}


string TargetOS::GetTargetOSType() const
{
    return m_targetOSType;
}

void TargetOS::SetTargetOSType(const string& _targetOSType)
{
    m_targetOSType = _targetOSType;
    m_targetOSTypeHasBeenSet = true;
}

bool TargetOS::TargetOSTypeHasBeenSet() const
{
    return m_targetOSTypeHasBeenSet;
}

string TargetOS::GetTargetOSVersion() const
{
    return m_targetOSVersion;
}

void TargetOS::SetTargetOSVersion(const string& _targetOSVersion)
{
    m_targetOSVersion = _targetOSVersion;
    m_targetOSVersionHasBeenSet = true;
}

bool TargetOS::TargetOSVersionHasBeenSet() const
{
    return m_targetOSVersionHasBeenSet;
}

