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

#include <tencentcloud/tcss/v20201101/model/ComplianceBenchmarkStandardEnable.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ComplianceBenchmarkStandardEnable::ComplianceBenchmarkStandardEnable() :
    m_standardIdHasBeenSet(false),
    m_enableHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceBenchmarkStandardEnable::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StandardId") && !value["StandardId"].IsNull())
    {
        if (!value["StandardId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceBenchmarkStandardEnable.StandardId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_standardId = value["StandardId"].GetUint64();
        m_standardIdHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceBenchmarkStandardEnable.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceBenchmarkStandardEnable::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_standardIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_standardId, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

}


uint64_t ComplianceBenchmarkStandardEnable::GetStandardId() const
{
    return m_standardId;
}

void ComplianceBenchmarkStandardEnable::SetStandardId(const uint64_t& _standardId)
{
    m_standardId = _standardId;
    m_standardIdHasBeenSet = true;
}

bool ComplianceBenchmarkStandardEnable::StandardIdHasBeenSet() const
{
    return m_standardIdHasBeenSet;
}

bool ComplianceBenchmarkStandardEnable::GetEnable() const
{
    return m_enable;
}

void ComplianceBenchmarkStandardEnable::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ComplianceBenchmarkStandardEnable::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

