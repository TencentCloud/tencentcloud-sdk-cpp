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

#include <tencentcloud/dsgc/v20190723/model/ScanTaskComplianceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ScanTaskComplianceInfo::ScanTaskComplianceInfo() :
    m_complianceGroupIdHasBeenSet(false),
    m_complianceGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome ScanTaskComplianceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComplianceGroupId") && !value["ComplianceGroupId"].IsNull())
    {
        if (!value["ComplianceGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskComplianceInfo.ComplianceGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_complianceGroupId = value["ComplianceGroupId"].GetInt64();
        m_complianceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ComplianceGroupName") && !value["ComplianceGroupName"].IsNull())
    {
        if (!value["ComplianceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskComplianceInfo.ComplianceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_complianceGroupName = string(value["ComplianceGroupName"].GetString());
        m_complianceGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanTaskComplianceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_complianceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_complianceGroupId, allocator);
    }

    if (m_complianceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_complianceGroupName.c_str(), allocator).Move(), allocator);
    }

}


int64_t ScanTaskComplianceInfo::GetComplianceGroupId() const
{
    return m_complianceGroupId;
}

void ScanTaskComplianceInfo::SetComplianceGroupId(const int64_t& _complianceGroupId)
{
    m_complianceGroupId = _complianceGroupId;
    m_complianceGroupIdHasBeenSet = true;
}

bool ScanTaskComplianceInfo::ComplianceGroupIdHasBeenSet() const
{
    return m_complianceGroupIdHasBeenSet;
}

string ScanTaskComplianceInfo::GetComplianceGroupName() const
{
    return m_complianceGroupName;
}

void ScanTaskComplianceInfo::SetComplianceGroupName(const string& _complianceGroupName)
{
    m_complianceGroupName = _complianceGroupName;
    m_complianceGroupNameHasBeenSet = true;
}

bool ScanTaskComplianceInfo::ComplianceGroupNameHasBeenSet() const
{
    return m_complianceGroupNameHasBeenSet;
}

