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

#include <tencentcloud/tsf/v20180326/model/EmptyDirOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

EmptyDirOption::EmptyDirOption() :
    m_enableMemoryHasBeenSet(false),
    m_storageCapacityHasBeenSet(false),
    m_storageUnitHasBeenSet(false),
    m_sizeLimitHasBeenSet(false)
{
}

CoreInternalOutcome EmptyDirOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableMemory") && !value["EnableMemory"].IsNull())
    {
        if (!value["EnableMemory"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EmptyDirOption.EnableMemory` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableMemory = value["EnableMemory"].GetBool();
        m_enableMemoryHasBeenSet = true;
    }

    if (value.HasMember("StorageCapacity") && !value["StorageCapacity"].IsNull())
    {
        if (!value["StorageCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EmptyDirOption.StorageCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageCapacity = value["StorageCapacity"].GetInt64();
        m_storageCapacityHasBeenSet = true;
    }

    if (value.HasMember("StorageUnit") && !value["StorageUnit"].IsNull())
    {
        if (!value["StorageUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmptyDirOption.StorageUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageUnit = string(value["StorageUnit"].GetString());
        m_storageUnitHasBeenSet = true;
    }

    if (value.HasMember("SizeLimit") && !value["SizeLimit"].IsNull())
    {
        if (!value["SizeLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmptyDirOption.SizeLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sizeLimit = string(value["SizeLimit"].GetString());
        m_sizeLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmptyDirOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMemory, allocator);
    }

    if (m_storageCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageCapacity, allocator);
    }

    if (m_storageUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sizeLimit.c_str(), allocator).Move(), allocator);
    }

}


bool EmptyDirOption::GetEnableMemory() const
{
    return m_enableMemory;
}

void EmptyDirOption::SetEnableMemory(const bool& _enableMemory)
{
    m_enableMemory = _enableMemory;
    m_enableMemoryHasBeenSet = true;
}

bool EmptyDirOption::EnableMemoryHasBeenSet() const
{
    return m_enableMemoryHasBeenSet;
}

int64_t EmptyDirOption::GetStorageCapacity() const
{
    return m_storageCapacity;
}

void EmptyDirOption::SetStorageCapacity(const int64_t& _storageCapacity)
{
    m_storageCapacity = _storageCapacity;
    m_storageCapacityHasBeenSet = true;
}

bool EmptyDirOption::StorageCapacityHasBeenSet() const
{
    return m_storageCapacityHasBeenSet;
}

string EmptyDirOption::GetStorageUnit() const
{
    return m_storageUnit;
}

void EmptyDirOption::SetStorageUnit(const string& _storageUnit)
{
    m_storageUnit = _storageUnit;
    m_storageUnitHasBeenSet = true;
}

bool EmptyDirOption::StorageUnitHasBeenSet() const
{
    return m_storageUnitHasBeenSet;
}

string EmptyDirOption::GetSizeLimit() const
{
    return m_sizeLimit;
}

void EmptyDirOption::SetSizeLimit(const string& _sizeLimit)
{
    m_sizeLimit = _sizeLimit;
    m_sizeLimitHasBeenSet = true;
}

bool EmptyDirOption::SizeLimitHasBeenSet() const
{
    return m_sizeLimitHasBeenSet;
}

