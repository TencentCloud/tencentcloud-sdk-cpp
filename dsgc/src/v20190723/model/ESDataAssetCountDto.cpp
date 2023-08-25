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

#include <tencentcloud/dsgc/v20190723/model/ESDataAssetCountDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ESDataAssetCountDto::ESDataAssetCountDto() :
    m_dataAssetTypeHasBeenSet(false),
    m_sensitiveIndexCntHasBeenSet(false),
    m_totalIndexCntHasBeenSet(false),
    m_sensitiveFieldCntHasBeenSet(false),
    m_totalFieldCntHasBeenSet(false),
    m_sensitiveCategoryCntHasBeenSet(false),
    m_sensitiveLevelHasBeenSet(false),
    m_categoryDistributedHasBeenSet(false)
{
}

CoreInternalOutcome ESDataAssetCountDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataAssetType") && !value["DataAssetType"].IsNull())
    {
        if (!value["DataAssetType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetCountDto.DataAssetType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataAssetType = value["DataAssetType"].GetInt64();
        m_dataAssetTypeHasBeenSet = true;
    }

    if (value.HasMember("SensitiveIndexCnt") && !value["SensitiveIndexCnt"].IsNull())
    {
        if (!value["SensitiveIndexCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetCountDto.SensitiveIndexCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveIndexCnt = value["SensitiveIndexCnt"].GetInt64();
        m_sensitiveIndexCntHasBeenSet = true;
    }

    if (value.HasMember("TotalIndexCnt") && !value["TotalIndexCnt"].IsNull())
    {
        if (!value["TotalIndexCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetCountDto.TotalIndexCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalIndexCnt = value["TotalIndexCnt"].GetInt64();
        m_totalIndexCntHasBeenSet = true;
    }

    if (value.HasMember("SensitiveFieldCnt") && !value["SensitiveFieldCnt"].IsNull())
    {
        if (!value["SensitiveFieldCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetCountDto.SensitiveFieldCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveFieldCnt = value["SensitiveFieldCnt"].GetInt64();
        m_sensitiveFieldCntHasBeenSet = true;
    }

    if (value.HasMember("TotalFieldCnt") && !value["TotalFieldCnt"].IsNull())
    {
        if (!value["TotalFieldCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetCountDto.TotalFieldCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalFieldCnt = value["TotalFieldCnt"].GetInt64();
        m_totalFieldCntHasBeenSet = true;
    }

    if (value.HasMember("SensitiveCategoryCnt") && !value["SensitiveCategoryCnt"].IsNull())
    {
        if (!value["SensitiveCategoryCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetCountDto.SensitiveCategoryCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveCategoryCnt = value["SensitiveCategoryCnt"].GetInt64();
        m_sensitiveCategoryCntHasBeenSet = true;
    }

    if (value.HasMember("SensitiveLevel") && !value["SensitiveLevel"].IsNull())
    {
        if (!value["SensitiveLevel"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ESDataAssetCountDto.SensitiveLevel` is not array type"));

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

    if (value.HasMember("CategoryDistributed") && !value["CategoryDistributed"].IsNull())
    {
        if (!value["CategoryDistributed"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ESDataAssetCountDto.CategoryDistributed` is not array type"));

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

void ESDataAssetCountDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataAssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataAssetType, allocator);
    }

    if (m_sensitiveIndexCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveIndexCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveIndexCnt, allocator);
    }

    if (m_totalIndexCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalIndexCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalIndexCnt, allocator);
    }

    if (m_sensitiveFieldCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveFieldCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveFieldCnt, allocator);
    }

    if (m_totalFieldCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalFieldCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalFieldCnt, allocator);
    }

    if (m_sensitiveCategoryCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveCategoryCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveCategoryCnt, allocator);
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


int64_t ESDataAssetCountDto::GetDataAssetType() const
{
    return m_dataAssetType;
}

void ESDataAssetCountDto::SetDataAssetType(const int64_t& _dataAssetType)
{
    m_dataAssetType = _dataAssetType;
    m_dataAssetTypeHasBeenSet = true;
}

bool ESDataAssetCountDto::DataAssetTypeHasBeenSet() const
{
    return m_dataAssetTypeHasBeenSet;
}

int64_t ESDataAssetCountDto::GetSensitiveIndexCnt() const
{
    return m_sensitiveIndexCnt;
}

void ESDataAssetCountDto::SetSensitiveIndexCnt(const int64_t& _sensitiveIndexCnt)
{
    m_sensitiveIndexCnt = _sensitiveIndexCnt;
    m_sensitiveIndexCntHasBeenSet = true;
}

bool ESDataAssetCountDto::SensitiveIndexCntHasBeenSet() const
{
    return m_sensitiveIndexCntHasBeenSet;
}

int64_t ESDataAssetCountDto::GetTotalIndexCnt() const
{
    return m_totalIndexCnt;
}

void ESDataAssetCountDto::SetTotalIndexCnt(const int64_t& _totalIndexCnt)
{
    m_totalIndexCnt = _totalIndexCnt;
    m_totalIndexCntHasBeenSet = true;
}

bool ESDataAssetCountDto::TotalIndexCntHasBeenSet() const
{
    return m_totalIndexCntHasBeenSet;
}

int64_t ESDataAssetCountDto::GetSensitiveFieldCnt() const
{
    return m_sensitiveFieldCnt;
}

void ESDataAssetCountDto::SetSensitiveFieldCnt(const int64_t& _sensitiveFieldCnt)
{
    m_sensitiveFieldCnt = _sensitiveFieldCnt;
    m_sensitiveFieldCntHasBeenSet = true;
}

bool ESDataAssetCountDto::SensitiveFieldCntHasBeenSet() const
{
    return m_sensitiveFieldCntHasBeenSet;
}

int64_t ESDataAssetCountDto::GetTotalFieldCnt() const
{
    return m_totalFieldCnt;
}

void ESDataAssetCountDto::SetTotalFieldCnt(const int64_t& _totalFieldCnt)
{
    m_totalFieldCnt = _totalFieldCnt;
    m_totalFieldCntHasBeenSet = true;
}

bool ESDataAssetCountDto::TotalFieldCntHasBeenSet() const
{
    return m_totalFieldCntHasBeenSet;
}

int64_t ESDataAssetCountDto::GetSensitiveCategoryCnt() const
{
    return m_sensitiveCategoryCnt;
}

void ESDataAssetCountDto::SetSensitiveCategoryCnt(const int64_t& _sensitiveCategoryCnt)
{
    m_sensitiveCategoryCnt = _sensitiveCategoryCnt;
    m_sensitiveCategoryCntHasBeenSet = true;
}

bool ESDataAssetCountDto::SensitiveCategoryCntHasBeenSet() const
{
    return m_sensitiveCategoryCntHasBeenSet;
}

vector<SensitiveLevel> ESDataAssetCountDto::GetSensitiveLevel() const
{
    return m_sensitiveLevel;
}

void ESDataAssetCountDto::SetSensitiveLevel(const vector<SensitiveLevel>& _sensitiveLevel)
{
    m_sensitiveLevel = _sensitiveLevel;
    m_sensitiveLevelHasBeenSet = true;
}

bool ESDataAssetCountDto::SensitiveLevelHasBeenSet() const
{
    return m_sensitiveLevelHasBeenSet;
}

vector<DspaDataCategoryDistributed> ESDataAssetCountDto::GetCategoryDistributed() const
{
    return m_categoryDistributed;
}

void ESDataAssetCountDto::SetCategoryDistributed(const vector<DspaDataCategoryDistributed>& _categoryDistributed)
{
    m_categoryDistributed = _categoryDistributed;
    m_categoryDistributedHasBeenSet = true;
}

bool ESDataAssetCountDto::CategoryDistributedHasBeenSet() const
{
    return m_categoryDistributedHasBeenSet;
}

