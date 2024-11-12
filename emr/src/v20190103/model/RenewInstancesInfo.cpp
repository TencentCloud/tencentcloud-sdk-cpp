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

#include <tencentcloud/emr/v20190103/model/RenewInstancesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

RenewInstancesInfo::RenewInstancesInfo() :
    m_emrResourceIdHasBeenSet(false),
    m_flagHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_memDescHasBeenSet(false),
    m_cpuNumHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_specHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_rootSizeHasBeenSet(false),
    m_rootStorageTypeHasBeenSet(false),
    m_mCMultiDiskHasBeenSet(false)
{
}

CoreInternalOutcome RenewInstancesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EmrResourceId") && !value["EmrResourceId"].IsNull())
    {
        if (!value["EmrResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstancesInfo.EmrResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emrResourceId = string(value["EmrResourceId"].GetString());
        m_emrResourceIdHasBeenSet = true;
    }

    if (value.HasMember("Flag") && !value["Flag"].IsNull())
    {
        if (!value["Flag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstancesInfo.Flag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flag = value["Flag"].GetInt64();
        m_flagHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstancesInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("MemDesc") && !value["MemDesc"].IsNull())
    {
        if (!value["MemDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstancesInfo.MemDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memDesc = string(value["MemDesc"].GetString());
        m_memDescHasBeenSet = true;
    }

    if (value.HasMember("CpuNum") && !value["CpuNum"].IsNull())
    {
        if (!value["CpuNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstancesInfo.CpuNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuNum = value["CpuNum"].GetInt64();
        m_cpuNumHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstancesInfo.DiskSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = string(value["DiskSize"].GetString());
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstancesInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstancesInfo.Spec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spec = string(value["Spec"].GetString());
        m_specHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstancesInfo.StorageType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = value["StorageType"].GetInt64();
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("RootSize") && !value["RootSize"].IsNull())
    {
        if (!value["RootSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstancesInfo.RootSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rootSize = value["RootSize"].GetInt64();
        m_rootSizeHasBeenSet = true;
    }

    if (value.HasMember("RootStorageType") && !value["RootStorageType"].IsNull())
    {
        if (!value["RootStorageType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstancesInfo.RootStorageType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rootStorageType = value["RootStorageType"].GetInt64();
        m_rootStorageTypeHasBeenSet = true;
    }

    if (value.HasMember("MCMultiDisk") && !value["MCMultiDisk"].IsNull())
    {
        if (!value["MCMultiDisk"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RenewInstancesInfo.MCMultiDisk` is not array type"));

        const rapidjson::Value &tmpValue = value["MCMultiDisk"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MultiDiskMC item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mCMultiDisk.push_back(item);
        }
        m_mCMultiDiskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RenewInstancesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_emrResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmrResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_emrResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flag, allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_memDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuNum, allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskSize.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spec.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageType, allocator);
    }

    if (m_rootSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rootSize, allocator);
    }

    if (m_rootStorageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootStorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rootStorageType, allocator);
    }

    if (m_mCMultiDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCMultiDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mCMultiDisk.begin(); itr != m_mCMultiDisk.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RenewInstancesInfo::GetEmrResourceId() const
{
    return m_emrResourceId;
}

void RenewInstancesInfo::SetEmrResourceId(const string& _emrResourceId)
{
    m_emrResourceId = _emrResourceId;
    m_emrResourceIdHasBeenSet = true;
}

bool RenewInstancesInfo::EmrResourceIdHasBeenSet() const
{
    return m_emrResourceIdHasBeenSet;
}

int64_t RenewInstancesInfo::GetFlag() const
{
    return m_flag;
}

void RenewInstancesInfo::SetFlag(const int64_t& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool RenewInstancesInfo::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

string RenewInstancesInfo::GetIp() const
{
    return m_ip;
}

void RenewInstancesInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool RenewInstancesInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string RenewInstancesInfo::GetMemDesc() const
{
    return m_memDesc;
}

void RenewInstancesInfo::SetMemDesc(const string& _memDesc)
{
    m_memDesc = _memDesc;
    m_memDescHasBeenSet = true;
}

bool RenewInstancesInfo::MemDescHasBeenSet() const
{
    return m_memDescHasBeenSet;
}

int64_t RenewInstancesInfo::GetCpuNum() const
{
    return m_cpuNum;
}

void RenewInstancesInfo::SetCpuNum(const int64_t& _cpuNum)
{
    m_cpuNum = _cpuNum;
    m_cpuNumHasBeenSet = true;
}

bool RenewInstancesInfo::CpuNumHasBeenSet() const
{
    return m_cpuNumHasBeenSet;
}

string RenewInstancesInfo::GetDiskSize() const
{
    return m_diskSize;
}

void RenewInstancesInfo::SetDiskSize(const string& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool RenewInstancesInfo::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string RenewInstancesInfo::GetExpireTime() const
{
    return m_expireTime;
}

void RenewInstancesInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool RenewInstancesInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string RenewInstancesInfo::GetSpec() const
{
    return m_spec;
}

void RenewInstancesInfo::SetSpec(const string& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool RenewInstancesInfo::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

int64_t RenewInstancesInfo::GetStorageType() const
{
    return m_storageType;
}

void RenewInstancesInfo::SetStorageType(const int64_t& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool RenewInstancesInfo::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

int64_t RenewInstancesInfo::GetRootSize() const
{
    return m_rootSize;
}

void RenewInstancesInfo::SetRootSize(const int64_t& _rootSize)
{
    m_rootSize = _rootSize;
    m_rootSizeHasBeenSet = true;
}

bool RenewInstancesInfo::RootSizeHasBeenSet() const
{
    return m_rootSizeHasBeenSet;
}

int64_t RenewInstancesInfo::GetRootStorageType() const
{
    return m_rootStorageType;
}

void RenewInstancesInfo::SetRootStorageType(const int64_t& _rootStorageType)
{
    m_rootStorageType = _rootStorageType;
    m_rootStorageTypeHasBeenSet = true;
}

bool RenewInstancesInfo::RootStorageTypeHasBeenSet() const
{
    return m_rootStorageTypeHasBeenSet;
}

vector<MultiDiskMC> RenewInstancesInfo::GetMCMultiDisk() const
{
    return m_mCMultiDisk;
}

void RenewInstancesInfo::SetMCMultiDisk(const vector<MultiDiskMC>& _mCMultiDisk)
{
    m_mCMultiDisk = _mCMultiDisk;
    m_mCMultiDiskHasBeenSet = true;
}

bool RenewInstancesInfo::MCMultiDiskHasBeenSet() const
{
    return m_mCMultiDiskHasBeenSet;
}

