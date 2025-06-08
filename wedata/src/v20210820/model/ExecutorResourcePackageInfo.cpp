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

#include <tencentcloud/wedata/v20210820/model/ExecutorResourcePackageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ExecutorResourcePackageInfo::ExecutorResourcePackageInfo() :
    m_resourcePackageNumHasBeenSet(false),
    m_cpuNumHasBeenSet(false),
    m_executorResourcePackageIdHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescriptionHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_extInfoHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectBindTimeHasBeenSet(false),
    m_resourcePackageUsageHasBeenSet(false),
    m_productResourceIdListHasBeenSet(false),
    m_lifeTimeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_resourceStandardHasBeenSet(false),
    m_totalMemoryHasBeenSet(false)
{
}

CoreInternalOutcome ExecutorResourcePackageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourcePackageNum") && !value["ResourcePackageNum"].IsNull())
    {
        if (!value["ResourcePackageNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.ResourcePackageNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePackageNum = value["ResourcePackageNum"].GetInt64();
        m_resourcePackageNumHasBeenSet = true;
    }

    if (value.HasMember("CpuNum") && !value["CpuNum"].IsNull())
    {
        if (!value["CpuNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.CpuNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuNum = value["CpuNum"].GetInt64();
        m_cpuNumHasBeenSet = true;
    }

    if (value.HasMember("ExecutorResourcePackageId") && !value["ExecutorResourcePackageId"].IsNull())
    {
        if (!value["ExecutorResourcePackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.ExecutorResourcePackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorResourcePackageId = string(value["ExecutorResourcePackageId"].GetString());
        m_executorResourcePackageIdHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.MemSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetInt64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDescription") && !value["StatusDescription"].IsNull())
    {
        if (!value["StatusDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.StatusDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDescription = string(value["StatusDescription"].GetString());
        m_statusDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ExtInfo") && !value["ExtInfo"].IsNull())
    {
        if (!value["ExtInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.ExtInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extInfo.Deserialize(value["ExtInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extInfoHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectBindTime") && !value["ProjectBindTime"].IsNull())
    {
        if (!value["ProjectBindTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.ProjectBindTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectBindTime = value["ProjectBindTime"].GetInt64();
        m_projectBindTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourcePackageUsage") && !value["ResourcePackageUsage"].IsNull())
    {
        if (!value["ResourcePackageUsage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.ResourcePackageUsage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourcePackageUsage.Deserialize(value["ResourcePackageUsage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourcePackageUsageHasBeenSet = true;
    }

    if (value.HasMember("ProductResourceIdList") && !value["ProductResourceIdList"].IsNull())
    {
        if (!value["ProductResourceIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.ProductResourceIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["ProductResourceIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_productResourceIdList.push_back((*itr).GetInt64());
        }
        m_productResourceIdListHasBeenSet = true;
    }

    if (value.HasMember("LifeTime") && !value["LifeTime"].IsNull())
    {
        if (!value["LifeTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.LifeTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lifeTime = value["LifeTime"].GetInt64();
        m_lifeTimeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceStandard") && !value["ResourceStandard"].IsNull())
    {
        if (!value["ResourceStandard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.ResourceStandard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceStandard = string(value["ResourceStandard"].GetString());
        m_resourceStandardHasBeenSet = true;
    }

    if (value.HasMember("TotalMemory") && !value["TotalMemory"].IsNull())
    {
        if (!value["TotalMemory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageInfo.TotalMemory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalMemory = value["TotalMemory"].GetUint64();
        m_totalMemoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExecutorResourcePackageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourcePackageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePackageNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourcePackageNum, allocator);
    }

    if (m_cpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuNum, allocator);
    }

    if (m_executorResourcePackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorResourcePackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorResourcePackageId.c_str(), allocator).Move(), allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memSize, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectBindTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectBindTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectBindTime, allocator);
    }

    if (m_resourcePackageUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePackageUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourcePackageUsage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_productResourceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductResourceIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_productResourceIdList.begin(); itr != m_productResourceIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_lifeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifeTime, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceStandardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceStandard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceStandard.c_str(), allocator).Move(), allocator);
    }

    if (m_totalMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalMemory, allocator);
    }

}


int64_t ExecutorResourcePackageInfo::GetResourcePackageNum() const
{
    return m_resourcePackageNum;
}

void ExecutorResourcePackageInfo::SetResourcePackageNum(const int64_t& _resourcePackageNum)
{
    m_resourcePackageNum = _resourcePackageNum;
    m_resourcePackageNumHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::ResourcePackageNumHasBeenSet() const
{
    return m_resourcePackageNumHasBeenSet;
}

int64_t ExecutorResourcePackageInfo::GetCpuNum() const
{
    return m_cpuNum;
}

void ExecutorResourcePackageInfo::SetCpuNum(const int64_t& _cpuNum)
{
    m_cpuNum = _cpuNum;
    m_cpuNumHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::CpuNumHasBeenSet() const
{
    return m_cpuNumHasBeenSet;
}

string ExecutorResourcePackageInfo::GetExecutorResourcePackageId() const
{
    return m_executorResourcePackageId;
}

void ExecutorResourcePackageInfo::SetExecutorResourcePackageId(const string& _executorResourcePackageId)
{
    m_executorResourcePackageId = _executorResourcePackageId;
    m_executorResourcePackageIdHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::ExecutorResourcePackageIdHasBeenSet() const
{
    return m_executorResourcePackageIdHasBeenSet;
}

int64_t ExecutorResourcePackageInfo::GetMemSize() const
{
    return m_memSize;
}

void ExecutorResourcePackageInfo::SetMemSize(const int64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

int64_t ExecutorResourcePackageInfo::GetStatus() const
{
    return m_status;
}

void ExecutorResourcePackageInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ExecutorResourcePackageInfo::GetStatusDescription() const
{
    return m_statusDescription;
}

void ExecutorResourcePackageInfo::SetStatusDescription(const string& _statusDescription)
{
    m_statusDescription = _statusDescription;
    m_statusDescriptionHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::StatusDescriptionHasBeenSet() const
{
    return m_statusDescriptionHasBeenSet;
}

int64_t ExecutorResourcePackageInfo::GetExpireTime() const
{
    return m_expireTime;
}

void ExecutorResourcePackageInfo::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

ExecutorResourcePackageExtInfo ExecutorResourcePackageInfo::GetExtInfo() const
{
    return m_extInfo;
}

void ExecutorResourcePackageInfo::SetExtInfo(const ExecutorResourcePackageExtInfo& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

string ExecutorResourcePackageInfo::GetProjectId() const
{
    return m_projectId;
}

void ExecutorResourcePackageInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t ExecutorResourcePackageInfo::GetProjectBindTime() const
{
    return m_projectBindTime;
}

void ExecutorResourcePackageInfo::SetProjectBindTime(const int64_t& _projectBindTime)
{
    m_projectBindTime = _projectBindTime;
    m_projectBindTimeHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::ProjectBindTimeHasBeenSet() const
{
    return m_projectBindTimeHasBeenSet;
}

ExecutorResourcePackageUsageInfo ExecutorResourcePackageInfo::GetResourcePackageUsage() const
{
    return m_resourcePackageUsage;
}

void ExecutorResourcePackageInfo::SetResourcePackageUsage(const ExecutorResourcePackageUsageInfo& _resourcePackageUsage)
{
    m_resourcePackageUsage = _resourcePackageUsage;
    m_resourcePackageUsageHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::ResourcePackageUsageHasBeenSet() const
{
    return m_resourcePackageUsageHasBeenSet;
}

vector<int64_t> ExecutorResourcePackageInfo::GetProductResourceIdList() const
{
    return m_productResourceIdList;
}

void ExecutorResourcePackageInfo::SetProductResourceIdList(const vector<int64_t>& _productResourceIdList)
{
    m_productResourceIdList = _productResourceIdList;
    m_productResourceIdListHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::ProductResourceIdListHasBeenSet() const
{
    return m_productResourceIdListHasBeenSet;
}

int64_t ExecutorResourcePackageInfo::GetLifeTime() const
{
    return m_lifeTime;
}

void ExecutorResourcePackageInfo::SetLifeTime(const int64_t& _lifeTime)
{
    m_lifeTime = _lifeTime;
    m_lifeTimeHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::LifeTimeHasBeenSet() const
{
    return m_lifeTimeHasBeenSet;
}

string ExecutorResourcePackageInfo::GetVpcId() const
{
    return m_vpcId;
}

void ExecutorResourcePackageInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ExecutorResourcePackageInfo::GetVpcName() const
{
    return m_vpcName;
}

void ExecutorResourcePackageInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string ExecutorResourcePackageInfo::GetSubnetId() const
{
    return m_subnetId;
}

void ExecutorResourcePackageInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ExecutorResourcePackageInfo::GetSubnetName() const
{
    return m_subnetName;
}

void ExecutorResourcePackageInfo::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string ExecutorResourcePackageInfo::GetResourceStandard() const
{
    return m_resourceStandard;
}

void ExecutorResourcePackageInfo::SetResourceStandard(const string& _resourceStandard)
{
    m_resourceStandard = _resourceStandard;
    m_resourceStandardHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::ResourceStandardHasBeenSet() const
{
    return m_resourceStandardHasBeenSet;
}

uint64_t ExecutorResourcePackageInfo::GetTotalMemory() const
{
    return m_totalMemory;
}

void ExecutorResourcePackageInfo::SetTotalMemory(const uint64_t& _totalMemory)
{
    m_totalMemory = _totalMemory;
    m_totalMemoryHasBeenSet = true;
}

bool ExecutorResourcePackageInfo::TotalMemoryHasBeenSet() const
{
    return m_totalMemoryHasBeenSet;
}

