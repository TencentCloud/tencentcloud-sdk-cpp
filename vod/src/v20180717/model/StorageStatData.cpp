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

#include <tencentcloud/vod/v20180717/model/StorageStatData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

StorageStatData::StorageStatData() :
    m_areaHasBeenSet(false),
    m_totalStorageHasBeenSet(false),
    m_infrequentStorageHasBeenSet(false),
    m_standardStorageHasBeenSet(false)
{
}

CoreInternalOutcome StorageStatData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Error("response `StorageStatData.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("TotalStorage") && !value["TotalStorage"].IsNull())
    {
        if (!value["TotalStorage"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `StorageStatData.TotalStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalStorage = value["TotalStorage"].GetUint64();
        m_totalStorageHasBeenSet = true;
    }

    if (value.HasMember("InfrequentStorage") && !value["InfrequentStorage"].IsNull())
    {
        if (!value["InfrequentStorage"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `StorageStatData.InfrequentStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_infrequentStorage = value["InfrequentStorage"].GetUint64();
        m_infrequentStorageHasBeenSet = true;
    }

    if (value.HasMember("StandardStorage") && !value["StandardStorage"].IsNull())
    {
        if (!value["StandardStorage"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `StorageStatData.StandardStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_standardStorage = value["StandardStorage"].GetUint64();
        m_standardStorageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageStatData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_areaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_totalStorageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalStorage, allocator);
    }

    if (m_infrequentStorageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InfrequentStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_infrequentStorage, allocator);
    }

    if (m_standardStorageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StandardStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_standardStorage, allocator);
    }

}


string StorageStatData::GetArea() const
{
    return m_area;
}

void StorageStatData::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool StorageStatData::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

uint64_t StorageStatData::GetTotalStorage() const
{
    return m_totalStorage;
}

void StorageStatData::SetTotalStorage(const uint64_t& _totalStorage)
{
    m_totalStorage = _totalStorage;
    m_totalStorageHasBeenSet = true;
}

bool StorageStatData::TotalStorageHasBeenSet() const
{
    return m_totalStorageHasBeenSet;
}

uint64_t StorageStatData::GetInfrequentStorage() const
{
    return m_infrequentStorage;
}

void StorageStatData::SetInfrequentStorage(const uint64_t& _infrequentStorage)
{
    m_infrequentStorage = _infrequentStorage;
    m_infrequentStorageHasBeenSet = true;
}

bool StorageStatData::InfrequentStorageHasBeenSet() const
{
    return m_infrequentStorageHasBeenSet;
}

uint64_t StorageStatData::GetStandardStorage() const
{
    return m_standardStorage;
}

void StorageStatData::SetStandardStorage(const uint64_t& _standardStorage)
{
    m_standardStorage = _standardStorage;
    m_standardStorageHasBeenSet = true;
}

bool StorageStatData::StandardStorageHasBeenSet() const
{
    return m_standardStorageHasBeenSet;
}

