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

#include <tencentcloud/csip/v20221121/model/DspmSecurityAnalyseStatusCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmSecurityAnalyseStatusCount::DspmSecurityAnalyseStatusCount() :
    m_openCountHasBeenSet(false),
    m_openingCountHasBeenSet(false),
    m_closingCountHasBeenSet(false),
    m_closeCountHasBeenSet(false),
    m_assetTypeCountSetHasBeenSet(false)
{
}

CoreInternalOutcome DspmSecurityAnalyseStatusCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OpenCount") && !value["OpenCount"].IsNull())
    {
        if (!value["OpenCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmSecurityAnalyseStatusCount.OpenCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_openCount = value["OpenCount"].GetInt64();
        m_openCountHasBeenSet = true;
    }

    if (value.HasMember("OpeningCount") && !value["OpeningCount"].IsNull())
    {
        if (!value["OpeningCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmSecurityAnalyseStatusCount.OpeningCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_openingCount = value["OpeningCount"].GetInt64();
        m_openingCountHasBeenSet = true;
    }

    if (value.HasMember("ClosingCount") && !value["ClosingCount"].IsNull())
    {
        if (!value["ClosingCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmSecurityAnalyseStatusCount.ClosingCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_closingCount = value["ClosingCount"].GetInt64();
        m_closingCountHasBeenSet = true;
    }

    if (value.HasMember("CloseCount") && !value["CloseCount"].IsNull())
    {
        if (!value["CloseCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmSecurityAnalyseStatusCount.CloseCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_closeCount = value["CloseCount"].GetInt64();
        m_closeCountHasBeenSet = true;
    }

    if (value.HasMember("AssetTypeCountSet") && !value["AssetTypeCountSet"].IsNull())
    {
        if (!value["AssetTypeCountSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmSecurityAnalyseStatusCount.AssetTypeCountSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AssetTypeCountSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmAssetTypeCount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assetTypeCountSet.push_back(item);
        }
        m_assetTypeCountSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmSecurityAnalyseStatusCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_openCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openCount, allocator);
    }

    if (m_openingCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpeningCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openingCount, allocator);
    }

    if (m_closingCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClosingCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_closingCount, allocator);
    }

    if (m_closeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloseCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_closeCount, allocator);
    }

    if (m_assetTypeCountSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeCountSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assetTypeCountSet.begin(); itr != m_assetTypeCountSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t DspmSecurityAnalyseStatusCount::GetOpenCount() const
{
    return m_openCount;
}

void DspmSecurityAnalyseStatusCount::SetOpenCount(const int64_t& _openCount)
{
    m_openCount = _openCount;
    m_openCountHasBeenSet = true;
}

bool DspmSecurityAnalyseStatusCount::OpenCountHasBeenSet() const
{
    return m_openCountHasBeenSet;
}

int64_t DspmSecurityAnalyseStatusCount::GetOpeningCount() const
{
    return m_openingCount;
}

void DspmSecurityAnalyseStatusCount::SetOpeningCount(const int64_t& _openingCount)
{
    m_openingCount = _openingCount;
    m_openingCountHasBeenSet = true;
}

bool DspmSecurityAnalyseStatusCount::OpeningCountHasBeenSet() const
{
    return m_openingCountHasBeenSet;
}

int64_t DspmSecurityAnalyseStatusCount::GetClosingCount() const
{
    return m_closingCount;
}

void DspmSecurityAnalyseStatusCount::SetClosingCount(const int64_t& _closingCount)
{
    m_closingCount = _closingCount;
    m_closingCountHasBeenSet = true;
}

bool DspmSecurityAnalyseStatusCount::ClosingCountHasBeenSet() const
{
    return m_closingCountHasBeenSet;
}

int64_t DspmSecurityAnalyseStatusCount::GetCloseCount() const
{
    return m_closeCount;
}

void DspmSecurityAnalyseStatusCount::SetCloseCount(const int64_t& _closeCount)
{
    m_closeCount = _closeCount;
    m_closeCountHasBeenSet = true;
}

bool DspmSecurityAnalyseStatusCount::CloseCountHasBeenSet() const
{
    return m_closeCountHasBeenSet;
}

vector<DspmAssetTypeCount> DspmSecurityAnalyseStatusCount::GetAssetTypeCountSet() const
{
    return m_assetTypeCountSet;
}

void DspmSecurityAnalyseStatusCount::SetAssetTypeCountSet(const vector<DspmAssetTypeCount>& _assetTypeCountSet)
{
    m_assetTypeCountSet = _assetTypeCountSet;
    m_assetTypeCountSetHasBeenSet = true;
}

bool DspmSecurityAnalyseStatusCount::AssetTypeCountSetHasBeenSet() const
{
    return m_assetTypeCountSetHasBeenSet;
}

