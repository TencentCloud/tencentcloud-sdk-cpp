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

#include <tencentcloud/cls/v20201016/model/DlcInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DlcInfo::DlcInfo() :
    m_tableInfoHasBeenSet(false),
    m_fieldInfosHasBeenSet(false),
    m_partitionInfosHasBeenSet(false),
    m_partitionExtraHasBeenSet(false)
{
}

CoreInternalOutcome DlcInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableInfo") && !value["TableInfo"].IsNull())
    {
        if (!value["TableInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DlcInfo.TableInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tableInfo.Deserialize(value["TableInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tableInfoHasBeenSet = true;
    }

    if (value.HasMember("FieldInfos") && !value["FieldInfos"].IsNull())
    {
        if (!value["FieldInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DlcInfo.FieldInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["FieldInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DlcFiledInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fieldInfos.push_back(item);
        }
        m_fieldInfosHasBeenSet = true;
    }

    if (value.HasMember("PartitionInfos") && !value["PartitionInfos"].IsNull())
    {
        if (!value["PartitionInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DlcInfo.PartitionInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["PartitionInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DlcPartitionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partitionInfos.push_back(item);
        }
        m_partitionInfosHasBeenSet = true;
    }

    if (value.HasMember("PartitionExtra") && !value["PartitionExtra"].IsNull())
    {
        if (!value["PartitionExtra"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DlcInfo.PartitionExtra` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_partitionExtra.Deserialize(value["PartitionExtra"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_partitionExtraHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DlcInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tableInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fieldInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fieldInfos.begin(); itr != m_fieldInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_partitionInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitionInfos.begin(); itr != m_partitionInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_partitionExtraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionExtra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_partitionExtra.ToJsonObject(value[key.c_str()], allocator);
    }

}


DlcTableInfo DlcInfo::GetTableInfo() const
{
    return m_tableInfo;
}

void DlcInfo::SetTableInfo(const DlcTableInfo& _tableInfo)
{
    m_tableInfo = _tableInfo;
    m_tableInfoHasBeenSet = true;
}

bool DlcInfo::TableInfoHasBeenSet() const
{
    return m_tableInfoHasBeenSet;
}

vector<DlcFiledInfo> DlcInfo::GetFieldInfos() const
{
    return m_fieldInfos;
}

void DlcInfo::SetFieldInfos(const vector<DlcFiledInfo>& _fieldInfos)
{
    m_fieldInfos = _fieldInfos;
    m_fieldInfosHasBeenSet = true;
}

bool DlcInfo::FieldInfosHasBeenSet() const
{
    return m_fieldInfosHasBeenSet;
}

vector<DlcPartitionInfo> DlcInfo::GetPartitionInfos() const
{
    return m_partitionInfos;
}

void DlcInfo::SetPartitionInfos(const vector<DlcPartitionInfo>& _partitionInfos)
{
    m_partitionInfos = _partitionInfos;
    m_partitionInfosHasBeenSet = true;
}

bool DlcInfo::PartitionInfosHasBeenSet() const
{
    return m_partitionInfosHasBeenSet;
}

DlcPartitionExtra DlcInfo::GetPartitionExtra() const
{
    return m_partitionExtra;
}

void DlcInfo::SetPartitionExtra(const DlcPartitionExtra& _partitionExtra)
{
    m_partitionExtra = _partitionExtra;
    m_partitionExtraHasBeenSet = true;
}

bool DlcInfo::PartitionExtraHasBeenSet() const
{
    return m_partitionExtraHasBeenSet;
}

