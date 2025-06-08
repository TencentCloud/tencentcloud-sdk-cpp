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

#include <tencentcloud/wedata/v20210820/model/ExecutorResourceGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ExecutorResourceGroupInfo::ExecutorResourceGroupInfo() :
    m_executorGroupIdHasBeenSet(false),
    m_executorGroupNameHasBeenSet(false),
    m_executorGroupDescHasBeenSet(false),
    m_executorResourceTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_basicResourcePackageHasBeenSet(false),
    m_advanceResourcePackageHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_regionEnHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_projectDisplayNameHasBeenSet(false),
    m_associateProjectNumsHasBeenSet(false),
    m_isLockedHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_mQPackageVOHasBeenSet(false),
    m_firstChoiceHasBeenSet(false),
    m_pythonSubVersionsHasBeenSet(false)
{
}

CoreInternalOutcome ExecutorResourceGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecutorGroupId") && !value["ExecutorGroupId"].IsNull())
    {
        if (!value["ExecutorGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.ExecutorGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupId = string(value["ExecutorGroupId"].GetString());
        m_executorGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupName") && !value["ExecutorGroupName"].IsNull())
    {
        if (!value["ExecutorGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.ExecutorGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupName = string(value["ExecutorGroupName"].GetString());
        m_executorGroupNameHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupDesc") && !value["ExecutorGroupDesc"].IsNull())
    {
        if (!value["ExecutorGroupDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.ExecutorGroupDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupDesc = string(value["ExecutorGroupDesc"].GetString());
        m_executorGroupDescHasBeenSet = true;
    }

    if (value.HasMember("ExecutorResourceType") && !value["ExecutorResourceType"].IsNull())
    {
        if (!value["ExecutorResourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.ExecutorResourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executorResourceType = value["ExecutorResourceType"].GetInt64();
        m_executorResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("BasicResourcePackage") && !value["BasicResourcePackage"].IsNull())
    {
        if (!value["BasicResourcePackage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.BasicResourcePackage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_basicResourcePackage.Deserialize(value["BasicResourcePackage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_basicResourcePackageHasBeenSet = true;
    }

    if (value.HasMember("AdvanceResourcePackage") && !value["AdvanceResourcePackage"].IsNull())
    {
        if (!value["AdvanceResourcePackage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.AdvanceResourcePackage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advanceResourcePackage.Deserialize(value["AdvanceResourcePackage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_advanceResourcePackageHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("RegionEn") && !value["RegionEn"].IsNull())
    {
        if (!value["RegionEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.RegionEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionEn = string(value["RegionEn"].GetString());
        m_regionEnHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectDisplayName") && !value["ProjectDisplayName"].IsNull())
    {
        if (!value["ProjectDisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.ProjectDisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectDisplayName = string(value["ProjectDisplayName"].GetString());
        m_projectDisplayNameHasBeenSet = true;
    }

    if (value.HasMember("AssociateProjectNums") && !value["AssociateProjectNums"].IsNull())
    {
        if (!value["AssociateProjectNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.AssociateProjectNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_associateProjectNums = value["AssociateProjectNums"].GetInt64();
        m_associateProjectNumsHasBeenSet = true;
    }

    if (value.HasMember("IsLocked") && !value["IsLocked"].IsNull())
    {
        if (!value["IsLocked"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.IsLocked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLocked = value["IsLocked"].GetBool();
        m_isLockedHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.SourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetInt64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("MQPackageVO") && !value["MQPackageVO"].IsNull())
    {
        if (!value["MQPackageVO"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.MQPackageVO` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mQPackageVO.Deserialize(value["MQPackageVO"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mQPackageVOHasBeenSet = true;
    }

    if (value.HasMember("FirstChoice") && !value["FirstChoice"].IsNull())
    {
        if (!value["FirstChoice"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.FirstChoice` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_firstChoice = value["FirstChoice"].GetBool();
        m_firstChoiceHasBeenSet = true;
    }

    if (value.HasMember("PythonSubVersions") && !value["PythonSubVersions"].IsNull())
    {
        if (!value["PythonSubVersions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.PythonSubVersions` is not array type"));

        const rapidjson::Value &tmpValue = value["PythonSubVersions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_pythonSubVersions.push_back((*itr).GetString());
        }
        m_pythonSubVersionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExecutorResourceGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_executorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_executorGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_executorGroupDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_executorResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executorResourceType, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_basicResourcePackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicResourcePackage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicResourcePackage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_advanceResourcePackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvanceResourcePackage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advanceResourcePackage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_regionEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionEn.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectDisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectDisplayName.c_str(), allocator).Move(), allocator);
    }

    if (m_associateProjectNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociateProjectNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_associateProjectNums, allocator);
    }

    if (m_isLockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLocked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLocked, allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_mQPackageVOHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MQPackageVO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mQPackageVO.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_firstChoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstChoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstChoice, allocator);
    }

    if (m_pythonSubVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PythonSubVersions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_pythonSubVersions.begin(); itr != m_pythonSubVersions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ExecutorResourceGroupInfo::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void ExecutorResourceGroupInfo::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

string ExecutorResourceGroupInfo::GetExecutorGroupName() const
{
    return m_executorGroupName;
}

void ExecutorResourceGroupInfo::SetExecutorGroupName(const string& _executorGroupName)
{
    m_executorGroupName = _executorGroupName;
    m_executorGroupNameHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::ExecutorGroupNameHasBeenSet() const
{
    return m_executorGroupNameHasBeenSet;
}

string ExecutorResourceGroupInfo::GetExecutorGroupDesc() const
{
    return m_executorGroupDesc;
}

void ExecutorResourceGroupInfo::SetExecutorGroupDesc(const string& _executorGroupDesc)
{
    m_executorGroupDesc = _executorGroupDesc;
    m_executorGroupDescHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::ExecutorGroupDescHasBeenSet() const
{
    return m_executorGroupDescHasBeenSet;
}

int64_t ExecutorResourceGroupInfo::GetExecutorResourceType() const
{
    return m_executorResourceType;
}

void ExecutorResourceGroupInfo::SetExecutorResourceType(const int64_t& _executorResourceType)
{
    m_executorResourceType = _executorResourceType;
    m_executorResourceTypeHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::ExecutorResourceTypeHasBeenSet() const
{
    return m_executorResourceTypeHasBeenSet;
}

string ExecutorResourceGroupInfo::GetRegion() const
{
    return m_region;
}

void ExecutorResourceGroupInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ExecutorResourceGroupInfo::GetVpcId() const
{
    return m_vpcId;
}

void ExecutorResourceGroupInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ExecutorResourceGroupInfo::GetSubnetId() const
{
    return m_subnetId;
}

void ExecutorResourceGroupInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ExecutorResourceGroupInfo::GetProjectId() const
{
    return m_projectId;
}

void ExecutorResourceGroupInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

ExecutorResourcePackageInfo ExecutorResourceGroupInfo::GetBasicResourcePackage() const
{
    return m_basicResourcePackage;
}

void ExecutorResourceGroupInfo::SetBasicResourcePackage(const ExecutorResourcePackageInfo& _basicResourcePackage)
{
    m_basicResourcePackage = _basicResourcePackage;
    m_basicResourcePackageHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::BasicResourcePackageHasBeenSet() const
{
    return m_basicResourcePackageHasBeenSet;
}

ExecutorResourcePackageInfo ExecutorResourceGroupInfo::GetAdvanceResourcePackage() const
{
    return m_advanceResourcePackage;
}

void ExecutorResourceGroupInfo::SetAdvanceResourcePackage(const ExecutorResourcePackageInfo& _advanceResourcePackage)
{
    m_advanceResourcePackage = _advanceResourcePackage;
    m_advanceResourcePackageHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::AdvanceResourcePackageHasBeenSet() const
{
    return m_advanceResourcePackageHasBeenSet;
}

int64_t ExecutorResourceGroupInfo::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void ExecutorResourceGroupInfo::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string ExecutorResourceGroupInfo::GetRegionEn() const
{
    return m_regionEn;
}

void ExecutorResourceGroupInfo::SetRegionEn(const string& _regionEn)
{
    m_regionEn = _regionEn;
    m_regionEnHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::RegionEnHasBeenSet() const
{
    return m_regionEnHasBeenSet;
}

int64_t ExecutorResourceGroupInfo::GetRegionId() const
{
    return m_regionId;
}

void ExecutorResourceGroupInfo::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string ExecutorResourceGroupInfo::GetProjectName() const
{
    return m_projectName;
}

void ExecutorResourceGroupInfo::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string ExecutorResourceGroupInfo::GetProjectDisplayName() const
{
    return m_projectDisplayName;
}

void ExecutorResourceGroupInfo::SetProjectDisplayName(const string& _projectDisplayName)
{
    m_projectDisplayName = _projectDisplayName;
    m_projectDisplayNameHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::ProjectDisplayNameHasBeenSet() const
{
    return m_projectDisplayNameHasBeenSet;
}

int64_t ExecutorResourceGroupInfo::GetAssociateProjectNums() const
{
    return m_associateProjectNums;
}

void ExecutorResourceGroupInfo::SetAssociateProjectNums(const int64_t& _associateProjectNums)
{
    m_associateProjectNums = _associateProjectNums;
    m_associateProjectNumsHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::AssociateProjectNumsHasBeenSet() const
{
    return m_associateProjectNumsHasBeenSet;
}

bool ExecutorResourceGroupInfo::GetIsLocked() const
{
    return m_isLocked;
}

void ExecutorResourceGroupInfo::SetIsLocked(const bool& _isLocked)
{
    m_isLocked = _isLocked;
    m_isLockedHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::IsLockedHasBeenSet() const
{
    return m_isLockedHasBeenSet;
}

int64_t ExecutorResourceGroupInfo::GetSourceType() const
{
    return m_sourceType;
}

void ExecutorResourceGroupInfo::SetSourceType(const int64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

MQPackageVO ExecutorResourceGroupInfo::GetMQPackageVO() const
{
    return m_mQPackageVO;
}

void ExecutorResourceGroupInfo::SetMQPackageVO(const MQPackageVO& _mQPackageVO)
{
    m_mQPackageVO = _mQPackageVO;
    m_mQPackageVOHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::MQPackageVOHasBeenSet() const
{
    return m_mQPackageVOHasBeenSet;
}

bool ExecutorResourceGroupInfo::GetFirstChoice() const
{
    return m_firstChoice;
}

void ExecutorResourceGroupInfo::SetFirstChoice(const bool& _firstChoice)
{
    m_firstChoice = _firstChoice;
    m_firstChoiceHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::FirstChoiceHasBeenSet() const
{
    return m_firstChoiceHasBeenSet;
}

vector<string> ExecutorResourceGroupInfo::GetPythonSubVersions() const
{
    return m_pythonSubVersions;
}

void ExecutorResourceGroupInfo::SetPythonSubVersions(const vector<string>& _pythonSubVersions)
{
    m_pythonSubVersions = _pythonSubVersions;
    m_pythonSubVersionsHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::PythonSubVersionsHasBeenSet() const
{
    return m_pythonSubVersionsHasBeenSet;
}

