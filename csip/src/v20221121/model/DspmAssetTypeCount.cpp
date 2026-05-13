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

#include <tencentcloud/csip/v20221121/model/DspmAssetTypeCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmAssetTypeCount::DspmAssetTypeCount() :
    m_assetTypeHasBeenSet(false),
    m_openCountHasBeenSet(false),
    m_openingCountHasBeenSet(false),
    m_closingCountHasBeenSet(false),
    m_closeCountHasBeenSet(false)
{
}

CoreInternalOutcome DspmAssetTypeCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetTypeCount.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("OpenCount") && !value["OpenCount"].IsNull())
    {
        if (!value["OpenCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetTypeCount.OpenCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_openCount = value["OpenCount"].GetInt64();
        m_openCountHasBeenSet = true;
    }

    if (value.HasMember("OpeningCount") && !value["OpeningCount"].IsNull())
    {
        if (!value["OpeningCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetTypeCount.OpeningCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_openingCount = value["OpeningCount"].GetInt64();
        m_openingCountHasBeenSet = true;
    }

    if (value.HasMember("ClosingCount") && !value["ClosingCount"].IsNull())
    {
        if (!value["ClosingCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetTypeCount.ClosingCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_closingCount = value["ClosingCount"].GetInt64();
        m_closingCountHasBeenSet = true;
    }

    if (value.HasMember("CloseCount") && !value["CloseCount"].IsNull())
    {
        if (!value["CloseCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetTypeCount.CloseCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_closeCount = value["CloseCount"].GetInt64();
        m_closeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmAssetTypeCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

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

}


string DspmAssetTypeCount::GetAssetType() const
{
    return m_assetType;
}

void DspmAssetTypeCount::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DspmAssetTypeCount::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

int64_t DspmAssetTypeCount::GetOpenCount() const
{
    return m_openCount;
}

void DspmAssetTypeCount::SetOpenCount(const int64_t& _openCount)
{
    m_openCount = _openCount;
    m_openCountHasBeenSet = true;
}

bool DspmAssetTypeCount::OpenCountHasBeenSet() const
{
    return m_openCountHasBeenSet;
}

int64_t DspmAssetTypeCount::GetOpeningCount() const
{
    return m_openingCount;
}

void DspmAssetTypeCount::SetOpeningCount(const int64_t& _openingCount)
{
    m_openingCount = _openingCount;
    m_openingCountHasBeenSet = true;
}

bool DspmAssetTypeCount::OpeningCountHasBeenSet() const
{
    return m_openingCountHasBeenSet;
}

int64_t DspmAssetTypeCount::GetClosingCount() const
{
    return m_closingCount;
}

void DspmAssetTypeCount::SetClosingCount(const int64_t& _closingCount)
{
    m_closingCount = _closingCount;
    m_closingCountHasBeenSet = true;
}

bool DspmAssetTypeCount::ClosingCountHasBeenSet() const
{
    return m_closingCountHasBeenSet;
}

int64_t DspmAssetTypeCount::GetCloseCount() const
{
    return m_closeCount;
}

void DspmAssetTypeCount::SetCloseCount(const int64_t& _closeCount)
{
    m_closeCount = _closeCount;
    m_closeCountHasBeenSet = true;
}

bool DspmAssetTypeCount::CloseCountHasBeenSet() const
{
    return m_closeCountHasBeenSet;
}

