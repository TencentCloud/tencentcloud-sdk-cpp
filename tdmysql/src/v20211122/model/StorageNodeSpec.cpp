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

#include <tencentcloud/tdmysql/v20211122/model/StorageNodeSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

StorageNodeSpec::StorageNodeSpec() :
    m_specCodeHasBeenSet(false),
    m_storageNodeCpuHasBeenSet(false),
    m_storageNodeMemHasBeenSet(false),
    m_storageNodeMaxNumHasBeenSet(false),
    m_storageNodeMaxDiskHasBeenSet(false),
    m_storageNodeMinNumHasBeenSet(false),
    m_storageNodeMinDiskHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_storageNodeDefaultDiskHasBeenSet(false),
    m_instanceModeHasBeenSet(false),
    m_diskTypeCategoryHasBeenSet(false)
{
}

CoreInternalOutcome StorageNodeSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpecCode") && !value["SpecCode"].IsNull())
    {
        if (!value["SpecCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageNodeSpec.SpecCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specCode = string(value["SpecCode"].GetString());
        m_specCodeHasBeenSet = true;
    }

    if (value.HasMember("StorageNodeCpu") && !value["StorageNodeCpu"].IsNull())
    {
        if (!value["StorageNodeCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageNodeSpec.StorageNodeCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageNodeCpu = value["StorageNodeCpu"].GetInt64();
        m_storageNodeCpuHasBeenSet = true;
    }

    if (value.HasMember("StorageNodeMem") && !value["StorageNodeMem"].IsNull())
    {
        if (!value["StorageNodeMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageNodeSpec.StorageNodeMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageNodeMem = value["StorageNodeMem"].GetInt64();
        m_storageNodeMemHasBeenSet = true;
    }

    if (value.HasMember("StorageNodeMaxNum") && !value["StorageNodeMaxNum"].IsNull())
    {
        if (!value["StorageNodeMaxNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageNodeSpec.StorageNodeMaxNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageNodeMaxNum = value["StorageNodeMaxNum"].GetInt64();
        m_storageNodeMaxNumHasBeenSet = true;
    }

    if (value.HasMember("StorageNodeMaxDisk") && !value["StorageNodeMaxDisk"].IsNull())
    {
        if (!value["StorageNodeMaxDisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageNodeSpec.StorageNodeMaxDisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageNodeMaxDisk = value["StorageNodeMaxDisk"].GetInt64();
        m_storageNodeMaxDiskHasBeenSet = true;
    }

    if (value.HasMember("StorageNodeMinNum") && !value["StorageNodeMinNum"].IsNull())
    {
        if (!value["StorageNodeMinNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageNodeSpec.StorageNodeMinNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageNodeMinNum = value["StorageNodeMinNum"].GetInt64();
        m_storageNodeMinNumHasBeenSet = true;
    }

    if (value.HasMember("StorageNodeMinDisk") && !value["StorageNodeMinDisk"].IsNull())
    {
        if (!value["StorageNodeMinDisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageNodeSpec.StorageNodeMinDisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageNodeMinDisk = value["StorageNodeMinDisk"].GetInt64();
        m_storageNodeMinDiskHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageNodeSpec.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("StorageNodeDefaultDisk") && !value["StorageNodeDefaultDisk"].IsNull())
    {
        if (!value["StorageNodeDefaultDisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageNodeSpec.StorageNodeDefaultDisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageNodeDefaultDisk = value["StorageNodeDefaultDisk"].GetInt64();
        m_storageNodeDefaultDiskHasBeenSet = true;
    }

    if (value.HasMember("InstanceMode") && !value["InstanceMode"].IsNull())
    {
        if (!value["InstanceMode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StorageNodeSpec.InstanceMode` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceMode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceMode.push_back((*itr).GetString());
        }
        m_instanceModeHasBeenSet = true;
    }

    if (value.HasMember("DiskTypeCategory") && !value["DiskTypeCategory"].IsNull())
    {
        if (!value["DiskTypeCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageNodeSpec.DiskTypeCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskTypeCategory = string(value["DiskTypeCategory"].GetString());
        m_diskTypeCategoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageNodeSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specCode.c_str(), allocator).Move(), allocator);
    }

    if (m_storageNodeCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageNodeCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageNodeCpu, allocator);
    }

    if (m_storageNodeMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageNodeMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageNodeMem, allocator);
    }

    if (m_storageNodeMaxNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageNodeMaxNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageNodeMaxNum, allocator);
    }

    if (m_storageNodeMaxDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageNodeMaxDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageNodeMaxDisk, allocator);
    }

    if (m_storageNodeMinNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageNodeMinNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageNodeMinNum, allocator);
    }

    if (m_storageNodeMinDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageNodeMinDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageNodeMinDisk, allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_storageNodeDefaultDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageNodeDefaultDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageNodeDefaultDisk, allocator);
    }

    if (m_instanceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceMode.begin(); itr != m_instanceMode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_diskTypeCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskTypeCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskTypeCategory.c_str(), allocator).Move(), allocator);
    }

}


string StorageNodeSpec::GetSpecCode() const
{
    return m_specCode;
}

void StorageNodeSpec::SetSpecCode(const string& _specCode)
{
    m_specCode = _specCode;
    m_specCodeHasBeenSet = true;
}

bool StorageNodeSpec::SpecCodeHasBeenSet() const
{
    return m_specCodeHasBeenSet;
}

int64_t StorageNodeSpec::GetStorageNodeCpu() const
{
    return m_storageNodeCpu;
}

void StorageNodeSpec::SetStorageNodeCpu(const int64_t& _storageNodeCpu)
{
    m_storageNodeCpu = _storageNodeCpu;
    m_storageNodeCpuHasBeenSet = true;
}

bool StorageNodeSpec::StorageNodeCpuHasBeenSet() const
{
    return m_storageNodeCpuHasBeenSet;
}

int64_t StorageNodeSpec::GetStorageNodeMem() const
{
    return m_storageNodeMem;
}

void StorageNodeSpec::SetStorageNodeMem(const int64_t& _storageNodeMem)
{
    m_storageNodeMem = _storageNodeMem;
    m_storageNodeMemHasBeenSet = true;
}

bool StorageNodeSpec::StorageNodeMemHasBeenSet() const
{
    return m_storageNodeMemHasBeenSet;
}

int64_t StorageNodeSpec::GetStorageNodeMaxNum() const
{
    return m_storageNodeMaxNum;
}

void StorageNodeSpec::SetStorageNodeMaxNum(const int64_t& _storageNodeMaxNum)
{
    m_storageNodeMaxNum = _storageNodeMaxNum;
    m_storageNodeMaxNumHasBeenSet = true;
}

bool StorageNodeSpec::StorageNodeMaxNumHasBeenSet() const
{
    return m_storageNodeMaxNumHasBeenSet;
}

int64_t StorageNodeSpec::GetStorageNodeMaxDisk() const
{
    return m_storageNodeMaxDisk;
}

void StorageNodeSpec::SetStorageNodeMaxDisk(const int64_t& _storageNodeMaxDisk)
{
    m_storageNodeMaxDisk = _storageNodeMaxDisk;
    m_storageNodeMaxDiskHasBeenSet = true;
}

bool StorageNodeSpec::StorageNodeMaxDiskHasBeenSet() const
{
    return m_storageNodeMaxDiskHasBeenSet;
}

int64_t StorageNodeSpec::GetStorageNodeMinNum() const
{
    return m_storageNodeMinNum;
}

void StorageNodeSpec::SetStorageNodeMinNum(const int64_t& _storageNodeMinNum)
{
    m_storageNodeMinNum = _storageNodeMinNum;
    m_storageNodeMinNumHasBeenSet = true;
}

bool StorageNodeSpec::StorageNodeMinNumHasBeenSet() const
{
    return m_storageNodeMinNumHasBeenSet;
}

int64_t StorageNodeSpec::GetStorageNodeMinDisk() const
{
    return m_storageNodeMinDisk;
}

void StorageNodeSpec::SetStorageNodeMinDisk(const int64_t& _storageNodeMinDisk)
{
    m_storageNodeMinDisk = _storageNodeMinDisk;
    m_storageNodeMinDiskHasBeenSet = true;
}

bool StorageNodeSpec::StorageNodeMinDiskHasBeenSet() const
{
    return m_storageNodeMinDiskHasBeenSet;
}

string StorageNodeSpec::GetStorageType() const
{
    return m_storageType;
}

void StorageNodeSpec::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool StorageNodeSpec::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

int64_t StorageNodeSpec::GetStorageNodeDefaultDisk() const
{
    return m_storageNodeDefaultDisk;
}

void StorageNodeSpec::SetStorageNodeDefaultDisk(const int64_t& _storageNodeDefaultDisk)
{
    m_storageNodeDefaultDisk = _storageNodeDefaultDisk;
    m_storageNodeDefaultDiskHasBeenSet = true;
}

bool StorageNodeSpec::StorageNodeDefaultDiskHasBeenSet() const
{
    return m_storageNodeDefaultDiskHasBeenSet;
}

vector<string> StorageNodeSpec::GetInstanceMode() const
{
    return m_instanceMode;
}

void StorageNodeSpec::SetInstanceMode(const vector<string>& _instanceMode)
{
    m_instanceMode = _instanceMode;
    m_instanceModeHasBeenSet = true;
}

bool StorageNodeSpec::InstanceModeHasBeenSet() const
{
    return m_instanceModeHasBeenSet;
}

string StorageNodeSpec::GetDiskTypeCategory() const
{
    return m_diskTypeCategory;
}

void StorageNodeSpec::SetDiskTypeCategory(const string& _diskTypeCategory)
{
    m_diskTypeCategory = _diskTypeCategory;
    m_diskTypeCategoryHasBeenSet = true;
}

bool StorageNodeSpec::DiskTypeCategoryHasBeenSet() const
{
    return m_diskTypeCategoryHasBeenSet;
}

