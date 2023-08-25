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

#include <tencentcloud/dsgc/v20190723/model/DspaCOSDataAssetCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaCOSDataAssetCount::DspaCOSDataAssetCount() :
    m_dataAssetTypeHasBeenSet(false),
    m_totalBucketCntHasBeenSet(false),
    m_totalObjectCntHasBeenSet(false),
    m_sensitiveCategoryCntHasBeenSet(false),
    m_sensitiveDataCntHasBeenSet(false),
    m_sensitiveLevelHasBeenSet(false),
    m_sensitiveBucketCntHasBeenSet(false),
    m_sensitiveObjectCntHasBeenSet(false),
    m_categoryDistributedHasBeenSet(false)
{
}

CoreInternalOutcome DspaCOSDataAssetCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataAssetType") && !value["DataAssetType"].IsNull())
    {
        if (!value["DataAssetType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetCount.DataAssetType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataAssetType = value["DataAssetType"].GetInt64();
        m_dataAssetTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalBucketCnt") && !value["TotalBucketCnt"].IsNull())
    {
        if (!value["TotalBucketCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetCount.TotalBucketCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalBucketCnt = value["TotalBucketCnt"].GetInt64();
        m_totalBucketCntHasBeenSet = true;
    }

    if (value.HasMember("TotalObjectCnt") && !value["TotalObjectCnt"].IsNull())
    {
        if (!value["TotalObjectCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetCount.TotalObjectCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalObjectCnt = value["TotalObjectCnt"].GetInt64();
        m_totalObjectCntHasBeenSet = true;
    }

    if (value.HasMember("SensitiveCategoryCnt") && !value["SensitiveCategoryCnt"].IsNull())
    {
        if (!value["SensitiveCategoryCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetCount.SensitiveCategoryCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveCategoryCnt = value["SensitiveCategoryCnt"].GetInt64();
        m_sensitiveCategoryCntHasBeenSet = true;
    }

    if (value.HasMember("SensitiveDataCnt") && !value["SensitiveDataCnt"].IsNull())
    {
        if (!value["SensitiveDataCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetCount.SensitiveDataCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveDataCnt = value["SensitiveDataCnt"].GetInt64();
        m_sensitiveDataCntHasBeenSet = true;
    }

    if (value.HasMember("SensitiveLevel") && !value["SensitiveLevel"].IsNull())
    {
        if (!value["SensitiveLevel"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetCount.SensitiveLevel` is not array type"));

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

    if (value.HasMember("SensitiveBucketCnt") && !value["SensitiveBucketCnt"].IsNull())
    {
        if (!value["SensitiveBucketCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetCount.SensitiveBucketCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveBucketCnt = value["SensitiveBucketCnt"].GetInt64();
        m_sensitiveBucketCntHasBeenSet = true;
    }

    if (value.HasMember("SensitiveObjectCnt") && !value["SensitiveObjectCnt"].IsNull())
    {
        if (!value["SensitiveObjectCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetCount.SensitiveObjectCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveObjectCnt = value["SensitiveObjectCnt"].GetInt64();
        m_sensitiveObjectCntHasBeenSet = true;
    }

    if (value.HasMember("CategoryDistributed") && !value["CategoryDistributed"].IsNull())
    {
        if (!value["CategoryDistributed"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetCount.CategoryDistributed` is not array type"));

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

void DspaCOSDataAssetCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataAssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataAssetType, allocator);
    }

    if (m_totalBucketCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalBucketCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalBucketCnt, allocator);
    }

    if (m_totalObjectCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalObjectCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalObjectCnt, allocator);
    }

    if (m_sensitiveCategoryCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveCategoryCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveCategoryCnt, allocator);
    }

    if (m_sensitiveDataCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveDataCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveDataCnt, allocator);
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

    if (m_sensitiveBucketCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveBucketCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveBucketCnt, allocator);
    }

    if (m_sensitiveObjectCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveObjectCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveObjectCnt, allocator);
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


int64_t DspaCOSDataAssetCount::GetDataAssetType() const
{
    return m_dataAssetType;
}

void DspaCOSDataAssetCount::SetDataAssetType(const int64_t& _dataAssetType)
{
    m_dataAssetType = _dataAssetType;
    m_dataAssetTypeHasBeenSet = true;
}

bool DspaCOSDataAssetCount::DataAssetTypeHasBeenSet() const
{
    return m_dataAssetTypeHasBeenSet;
}

int64_t DspaCOSDataAssetCount::GetTotalBucketCnt() const
{
    return m_totalBucketCnt;
}

void DspaCOSDataAssetCount::SetTotalBucketCnt(const int64_t& _totalBucketCnt)
{
    m_totalBucketCnt = _totalBucketCnt;
    m_totalBucketCntHasBeenSet = true;
}

bool DspaCOSDataAssetCount::TotalBucketCntHasBeenSet() const
{
    return m_totalBucketCntHasBeenSet;
}

int64_t DspaCOSDataAssetCount::GetTotalObjectCnt() const
{
    return m_totalObjectCnt;
}

void DspaCOSDataAssetCount::SetTotalObjectCnt(const int64_t& _totalObjectCnt)
{
    m_totalObjectCnt = _totalObjectCnt;
    m_totalObjectCntHasBeenSet = true;
}

bool DspaCOSDataAssetCount::TotalObjectCntHasBeenSet() const
{
    return m_totalObjectCntHasBeenSet;
}

int64_t DspaCOSDataAssetCount::GetSensitiveCategoryCnt() const
{
    return m_sensitiveCategoryCnt;
}

void DspaCOSDataAssetCount::SetSensitiveCategoryCnt(const int64_t& _sensitiveCategoryCnt)
{
    m_sensitiveCategoryCnt = _sensitiveCategoryCnt;
    m_sensitiveCategoryCntHasBeenSet = true;
}

bool DspaCOSDataAssetCount::SensitiveCategoryCntHasBeenSet() const
{
    return m_sensitiveCategoryCntHasBeenSet;
}

int64_t DspaCOSDataAssetCount::GetSensitiveDataCnt() const
{
    return m_sensitiveDataCnt;
}

void DspaCOSDataAssetCount::SetSensitiveDataCnt(const int64_t& _sensitiveDataCnt)
{
    m_sensitiveDataCnt = _sensitiveDataCnt;
    m_sensitiveDataCntHasBeenSet = true;
}

bool DspaCOSDataAssetCount::SensitiveDataCntHasBeenSet() const
{
    return m_sensitiveDataCntHasBeenSet;
}

vector<SensitiveLevel> DspaCOSDataAssetCount::GetSensitiveLevel() const
{
    return m_sensitiveLevel;
}

void DspaCOSDataAssetCount::SetSensitiveLevel(const vector<SensitiveLevel>& _sensitiveLevel)
{
    m_sensitiveLevel = _sensitiveLevel;
    m_sensitiveLevelHasBeenSet = true;
}

bool DspaCOSDataAssetCount::SensitiveLevelHasBeenSet() const
{
    return m_sensitiveLevelHasBeenSet;
}

int64_t DspaCOSDataAssetCount::GetSensitiveBucketCnt() const
{
    return m_sensitiveBucketCnt;
}

void DspaCOSDataAssetCount::SetSensitiveBucketCnt(const int64_t& _sensitiveBucketCnt)
{
    m_sensitiveBucketCnt = _sensitiveBucketCnt;
    m_sensitiveBucketCntHasBeenSet = true;
}

bool DspaCOSDataAssetCount::SensitiveBucketCntHasBeenSet() const
{
    return m_sensitiveBucketCntHasBeenSet;
}

int64_t DspaCOSDataAssetCount::GetSensitiveObjectCnt() const
{
    return m_sensitiveObjectCnt;
}

void DspaCOSDataAssetCount::SetSensitiveObjectCnt(const int64_t& _sensitiveObjectCnt)
{
    m_sensitiveObjectCnt = _sensitiveObjectCnt;
    m_sensitiveObjectCntHasBeenSet = true;
}

bool DspaCOSDataAssetCount::SensitiveObjectCntHasBeenSet() const
{
    return m_sensitiveObjectCntHasBeenSet;
}

vector<DspaDataCategoryDistributed> DspaCOSDataAssetCount::GetCategoryDistributed() const
{
    return m_categoryDistributed;
}

void DspaCOSDataAssetCount::SetCategoryDistributed(const vector<DspaDataCategoryDistributed>& _categoryDistributed)
{
    m_categoryDistributed = _categoryDistributed;
    m_categoryDistributedHasBeenSet = true;
}

bool DspaCOSDataAssetCount::CategoryDistributedHasBeenSet() const
{
    return m_categoryDistributedHasBeenSet;
}

