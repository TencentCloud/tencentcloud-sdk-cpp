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

#include <tencentcloud/dlc/v20210125/model/MixedTablePartitions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

MixedTablePartitions::MixedTablePartitions() :
    m_tableFormatHasBeenSet(false),
    m_totalSizeHasBeenSet(false),
    m_nextCursorHasBeenSet(false),
    m_icebergPartitionsHasBeenSet(false),
    m_hivePartitionsHasBeenSet(false)
{
}

CoreInternalOutcome MixedTablePartitions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableFormat") && !value["TableFormat"].IsNull())
    {
        if (!value["TableFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MixedTablePartitions.TableFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableFormat = string(value["TableFormat"].GetString());
        m_tableFormatHasBeenSet = true;
    }

    if (value.HasMember("TotalSize") && !value["TotalSize"].IsNull())
    {
        if (!value["TotalSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MixedTablePartitions.TotalSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSize = value["TotalSize"].GetInt64();
        m_totalSizeHasBeenSet = true;
    }

    if (value.HasMember("NextCursor") && !value["NextCursor"].IsNull())
    {
        if (!value["NextCursor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MixedTablePartitions.NextCursor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextCursor = string(value["NextCursor"].GetString());
        m_nextCursorHasBeenSet = true;
    }

    if (value.HasMember("IcebergPartitions") && !value["IcebergPartitions"].IsNull())
    {
        if (!value["IcebergPartitions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MixedTablePartitions.IcebergPartitions` is not array type"));

        const rapidjson::Value &tmpValue = value["IcebergPartitions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IcebergTablePartition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_icebergPartitions.push_back(item);
        }
        m_icebergPartitionsHasBeenSet = true;
    }

    if (value.HasMember("HivePartitions") && !value["HivePartitions"].IsNull())
    {
        if (!value["HivePartitions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MixedTablePartitions.HivePartitions` is not array type"));

        const rapidjson::Value &tmpValue = value["HivePartitions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HiveTablePartition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hivePartitions.push_back(item);
        }
        m_hivePartitionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MixedTablePartitions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_totalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSize, allocator);
    }

    if (m_nextCursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextCursor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextCursor.c_str(), allocator).Move(), allocator);
    }

    if (m_icebergPartitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IcebergPartitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_icebergPartitions.begin(); itr != m_icebergPartitions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hivePartitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HivePartitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hivePartitions.begin(); itr != m_hivePartitions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MixedTablePartitions::GetTableFormat() const
{
    return m_tableFormat;
}

void MixedTablePartitions::SetTableFormat(const string& _tableFormat)
{
    m_tableFormat = _tableFormat;
    m_tableFormatHasBeenSet = true;
}

bool MixedTablePartitions::TableFormatHasBeenSet() const
{
    return m_tableFormatHasBeenSet;
}

int64_t MixedTablePartitions::GetTotalSize() const
{
    return m_totalSize;
}

void MixedTablePartitions::SetTotalSize(const int64_t& _totalSize)
{
    m_totalSize = _totalSize;
    m_totalSizeHasBeenSet = true;
}

bool MixedTablePartitions::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}

string MixedTablePartitions::GetNextCursor() const
{
    return m_nextCursor;
}

void MixedTablePartitions::SetNextCursor(const string& _nextCursor)
{
    m_nextCursor = _nextCursor;
    m_nextCursorHasBeenSet = true;
}

bool MixedTablePartitions::NextCursorHasBeenSet() const
{
    return m_nextCursorHasBeenSet;
}

vector<IcebergTablePartition> MixedTablePartitions::GetIcebergPartitions() const
{
    return m_icebergPartitions;
}

void MixedTablePartitions::SetIcebergPartitions(const vector<IcebergTablePartition>& _icebergPartitions)
{
    m_icebergPartitions = _icebergPartitions;
    m_icebergPartitionsHasBeenSet = true;
}

bool MixedTablePartitions::IcebergPartitionsHasBeenSet() const
{
    return m_icebergPartitionsHasBeenSet;
}

vector<HiveTablePartition> MixedTablePartitions::GetHivePartitions() const
{
    return m_hivePartitions;
}

void MixedTablePartitions::SetHivePartitions(const vector<HiveTablePartition>& _hivePartitions)
{
    m_hivePartitions = _hivePartitions;
    m_hivePartitionsHasBeenSet = true;
}

bool MixedTablePartitions::HivePartitionsHasBeenSet() const
{
    return m_hivePartitionsHasBeenSet;
}

