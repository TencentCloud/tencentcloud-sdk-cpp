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

#include <tencentcloud/dsgc/v20190723/model/DspaRDBDataAssetCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaRDBDataAssetCount::DspaRDBDataAssetCount() :
    m_dataAssetTypeHasBeenSet(false),
    m_totalDbCntHasBeenSet(false),
    m_totalTableCntHasBeenSet(false),
    m_sensitiveCategoryCntHasBeenSet(false),
    m_sensitiveFieldCntHasBeenSet(false),
    m_sensitiveLevelHasBeenSet(false),
    m_sensitiveDbCntHasBeenSet(false),
    m_sensitiveTableCntHasBeenSet(false),
    m_totalFieldCntHasBeenSet(false),
    m_categoryDistributedHasBeenSet(false)
{
}

CoreInternalOutcome DspaRDBDataAssetCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataAssetType") && !value["DataAssetType"].IsNull())
    {
        if (!value["DataAssetType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetCount.DataAssetType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataAssetType = value["DataAssetType"].GetInt64();
        m_dataAssetTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalDbCnt") && !value["TotalDbCnt"].IsNull())
    {
        if (!value["TotalDbCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetCount.TotalDbCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalDbCnt = value["TotalDbCnt"].GetInt64();
        m_totalDbCntHasBeenSet = true;
    }

    if (value.HasMember("TotalTableCnt") && !value["TotalTableCnt"].IsNull())
    {
        if (!value["TotalTableCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetCount.TotalTableCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTableCnt = value["TotalTableCnt"].GetInt64();
        m_totalTableCntHasBeenSet = true;
    }

    if (value.HasMember("SensitiveCategoryCnt") && !value["SensitiveCategoryCnt"].IsNull())
    {
        if (!value["SensitiveCategoryCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetCount.SensitiveCategoryCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveCategoryCnt = value["SensitiveCategoryCnt"].GetInt64();
        m_sensitiveCategoryCntHasBeenSet = true;
    }

    if (value.HasMember("SensitiveFieldCnt") && !value["SensitiveFieldCnt"].IsNull())
    {
        if (!value["SensitiveFieldCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetCount.SensitiveFieldCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveFieldCnt = value["SensitiveFieldCnt"].GetInt64();
        m_sensitiveFieldCntHasBeenSet = true;
    }

    if (value.HasMember("SensitiveLevel") && !value["SensitiveLevel"].IsNull())
    {
        if (!value["SensitiveLevel"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetCount.SensitiveLevel` is not array type"));

        const rapidjson::Value &tmpValue = value["SensitiveLevel"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SensitiveLevel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sensitiveLevel.push_back(item);
        }
        m_sensitiveLevelHasBeenSet = true;
    }

    if (value.HasMember("SensitiveDbCnt") && !value["SensitiveDbCnt"].IsNull())
    {
        if (!value["SensitiveDbCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetCount.SensitiveDbCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveDbCnt = value["SensitiveDbCnt"].GetInt64();
        m_sensitiveDbCntHasBeenSet = true;
    }

    if (value.HasMember("SensitiveTableCnt") && !value["SensitiveTableCnt"].IsNull())
    {
        if (!value["SensitiveTableCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetCount.SensitiveTableCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveTableCnt = value["SensitiveTableCnt"].GetInt64();
        m_sensitiveTableCntHasBeenSet = true;
    }

    if (value.HasMember("TotalFieldCnt") && !value["TotalFieldCnt"].IsNull())
    {
        if (!value["TotalFieldCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetCount.TotalFieldCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalFieldCnt = value["TotalFieldCnt"].GetInt64();
        m_totalFieldCntHasBeenSet = true;
    }

    if (value.HasMember("CategoryDistributed") && !value["CategoryDistributed"].IsNull())
    {
        if (!value["CategoryDistributed"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetCount.CategoryDistributed` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryDistributed"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspaDataCategoryDistributed item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_categoryDistributed.push_back(item);
        }
        m_categoryDistributedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaRDBDataAssetCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataAssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataAssetType, allocator);
    }

    if (m_totalDbCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalDbCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalDbCnt, allocator);
    }

    if (m_totalTableCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTableCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTableCnt, allocator);
    }

    if (m_sensitiveCategoryCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveCategoryCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveCategoryCnt, allocator);
    }

    if (m_sensitiveFieldCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveFieldCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveFieldCnt, allocator);
    }

    if (m_sensitiveLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sensitiveLevel.begin(); itr != m_sensitiveLevel.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sensitiveDbCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveDbCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveDbCnt, allocator);
    }

    if (m_sensitiveTableCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveTableCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveTableCnt, allocator);
    }

    if (m_totalFieldCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalFieldCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalFieldCnt, allocator);
    }

    if (m_categoryDistributedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryDistributed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categoryDistributed.begin(); itr != m_categoryDistributed.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t DspaRDBDataAssetCount::GetDataAssetType() const
{
    return m_dataAssetType;
}

void DspaRDBDataAssetCount::SetDataAssetType(const int64_t& _dataAssetType)
{
    m_dataAssetType = _dataAssetType;
    m_dataAssetTypeHasBeenSet = true;
}

bool DspaRDBDataAssetCount::DataAssetTypeHasBeenSet() const
{
    return m_dataAssetTypeHasBeenSet;
}

int64_t DspaRDBDataAssetCount::GetTotalDbCnt() const
{
    return m_totalDbCnt;
}

void DspaRDBDataAssetCount::SetTotalDbCnt(const int64_t& _totalDbCnt)
{
    m_totalDbCnt = _totalDbCnt;
    m_totalDbCntHasBeenSet = true;
}

bool DspaRDBDataAssetCount::TotalDbCntHasBeenSet() const
{
    return m_totalDbCntHasBeenSet;
}

int64_t DspaRDBDataAssetCount::GetTotalTableCnt() const
{
    return m_totalTableCnt;
}

void DspaRDBDataAssetCount::SetTotalTableCnt(const int64_t& _totalTableCnt)
{
    m_totalTableCnt = _totalTableCnt;
    m_totalTableCntHasBeenSet = true;
}

bool DspaRDBDataAssetCount::TotalTableCntHasBeenSet() const
{
    return m_totalTableCntHasBeenSet;
}

int64_t DspaRDBDataAssetCount::GetSensitiveCategoryCnt() const
{
    return m_sensitiveCategoryCnt;
}

void DspaRDBDataAssetCount::SetSensitiveCategoryCnt(const int64_t& _sensitiveCategoryCnt)
{
    m_sensitiveCategoryCnt = _sensitiveCategoryCnt;
    m_sensitiveCategoryCntHasBeenSet = true;
}

bool DspaRDBDataAssetCount::SensitiveCategoryCntHasBeenSet() const
{
    return m_sensitiveCategoryCntHasBeenSet;
}

int64_t DspaRDBDataAssetCount::GetSensitiveFieldCnt() const
{
    return m_sensitiveFieldCnt;
}

void DspaRDBDataAssetCount::SetSensitiveFieldCnt(const int64_t& _sensitiveFieldCnt)
{
    m_sensitiveFieldCnt = _sensitiveFieldCnt;
    m_sensitiveFieldCntHasBeenSet = true;
}

bool DspaRDBDataAssetCount::SensitiveFieldCntHasBeenSet() const
{
    return m_sensitiveFieldCntHasBeenSet;
}

vector<SensitiveLevel> DspaRDBDataAssetCount::GetSensitiveLevel() const
{
    return m_sensitiveLevel;
}

void DspaRDBDataAssetCount::SetSensitiveLevel(const vector<SensitiveLevel>& _sensitiveLevel)
{
    m_sensitiveLevel = _sensitiveLevel;
    m_sensitiveLevelHasBeenSet = true;
}

bool DspaRDBDataAssetCount::SensitiveLevelHasBeenSet() const
{
    return m_sensitiveLevelHasBeenSet;
}

int64_t DspaRDBDataAssetCount::GetSensitiveDbCnt() const
{
    return m_sensitiveDbCnt;
}

void DspaRDBDataAssetCount::SetSensitiveDbCnt(const int64_t& _sensitiveDbCnt)
{
    m_sensitiveDbCnt = _sensitiveDbCnt;
    m_sensitiveDbCntHasBeenSet = true;
}

bool DspaRDBDataAssetCount::SensitiveDbCntHasBeenSet() const
{
    return m_sensitiveDbCntHasBeenSet;
}

int64_t DspaRDBDataAssetCount::GetSensitiveTableCnt() const
{
    return m_sensitiveTableCnt;
}

void DspaRDBDataAssetCount::SetSensitiveTableCnt(const int64_t& _sensitiveTableCnt)
{
    m_sensitiveTableCnt = _sensitiveTableCnt;
    m_sensitiveTableCntHasBeenSet = true;
}

bool DspaRDBDataAssetCount::SensitiveTableCntHasBeenSet() const
{
    return m_sensitiveTableCntHasBeenSet;
}

int64_t DspaRDBDataAssetCount::GetTotalFieldCnt() const
{
    return m_totalFieldCnt;
}

void DspaRDBDataAssetCount::SetTotalFieldCnt(const int64_t& _totalFieldCnt)
{
    m_totalFieldCnt = _totalFieldCnt;
    m_totalFieldCntHasBeenSet = true;
}

bool DspaRDBDataAssetCount::TotalFieldCntHasBeenSet() const
{
    return m_totalFieldCntHasBeenSet;
}

vector<DspaDataCategoryDistributed> DspaRDBDataAssetCount::GetCategoryDistributed() const
{
    return m_categoryDistributed;
}

void DspaRDBDataAssetCount::SetCategoryDistributed(const vector<DspaDataCategoryDistributed>& _categoryDistributed)
{
    m_categoryDistributed = _categoryDistributed;
    m_categoryDistributedHasBeenSet = true;
}

bool DspaRDBDataAssetCount::CategoryDistributedHasBeenSet() const
{
    return m_categoryDistributedHasBeenSet;
}

