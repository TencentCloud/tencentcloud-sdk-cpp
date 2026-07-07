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

#include <tencentcloud/csip/v20221121/model/DspmAssetIdentifyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmAssetIdentifyInfo::DspmAssetIdentifyInfo() :
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_detectedDbCountHasBeenSet(false),
    m_detectedTableCountHasBeenSet(false),
    m_ruleIdsHasBeenSet(false),
    m_ruleNamesHasBeenSet(false),
    m_categoryIdsHasBeenSet(false),
    m_categoryNamesHasBeenSet(false),
    m_levelIdHasBeenSet(false),
    m_levelNameHasBeenSet(false),
    m_levelScoreHasBeenSet(false),
    m_detectedTimeHasBeenSet(false),
    m_categoryDetailsHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_uinHasBeenSet(false)
{
}

CoreInternalOutcome DspmAssetIdentifyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetIdentifyInfo.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetIdentifyInfo.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetIdentifyInfo.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("DetectedDbCount") && !value["DetectedDbCount"].IsNull())
    {
        if (!value["DetectedDbCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetIdentifyInfo.DetectedDbCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_detectedDbCount = value["DetectedDbCount"].GetUint64();
        m_detectedDbCountHasBeenSet = true;
    }

    if (value.HasMember("DetectedTableCount") && !value["DetectedTableCount"].IsNull())
    {
        if (!value["DetectedTableCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetIdentifyInfo.DetectedTableCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_detectedTableCount = value["DetectedTableCount"].GetUint64();
        m_detectedTableCountHasBeenSet = true;
    }

    if (value.HasMember("RuleIds") && !value["RuleIds"].IsNull())
    {
        if (!value["RuleIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmAssetIdentifyInfo.RuleIds` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleIds.push_back((*itr).GetUint64());
        }
        m_ruleIdsHasBeenSet = true;
    }

    if (value.HasMember("RuleNames") && !value["RuleNames"].IsNull())
    {
        if (!value["RuleNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmAssetIdentifyInfo.RuleNames` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleNames.push_back((*itr).GetString());
        }
        m_ruleNamesHasBeenSet = true;
    }

    if (value.HasMember("CategoryIds") && !value["CategoryIds"].IsNull())
    {
        if (!value["CategoryIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmAssetIdentifyInfo.CategoryIds` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_categoryIds.push_back((*itr).GetUint64());
        }
        m_categoryIdsHasBeenSet = true;
    }

    if (value.HasMember("CategoryNames") && !value["CategoryNames"].IsNull())
    {
        if (!value["CategoryNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmAssetIdentifyInfo.CategoryNames` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_categoryNames.push_back((*itr).GetString());
        }
        m_categoryNamesHasBeenSet = true;
    }

    if (value.HasMember("LevelId") && !value["LevelId"].IsNull())
    {
        if (!value["LevelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetIdentifyInfo.LevelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_levelId = value["LevelId"].GetUint64();
        m_levelIdHasBeenSet = true;
    }

    if (value.HasMember("LevelName") && !value["LevelName"].IsNull())
    {
        if (!value["LevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetIdentifyInfo.LevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelName = string(value["LevelName"].GetString());
        m_levelNameHasBeenSet = true;
    }

    if (value.HasMember("LevelScore") && !value["LevelScore"].IsNull())
    {
        if (!value["LevelScore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetIdentifyInfo.LevelScore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_levelScore = value["LevelScore"].GetUint64();
        m_levelScoreHasBeenSet = true;
    }

    if (value.HasMember("DetectedTime") && !value["DetectedTime"].IsNull())
    {
        if (!value["DetectedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetIdentifyInfo.DetectedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectedTime = string(value["DetectedTime"].GetString());
        m_detectedTimeHasBeenSet = true;
    }

    if (value.HasMember("CategoryDetails") && !value["CategoryDetails"].IsNull())
    {
        if (!value["CategoryDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmAssetIdentifyInfo.CategoryDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmIdentifyCategoryDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_categoryDetails.push_back(item);
        }
        m_categoryDetailsHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetIdentifyInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetIdentifyInfo.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetIdentifyInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmAssetIdentifyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_detectedDbCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectedDbCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectedDbCount, allocator);
    }

    if (m_detectedTableCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectedTableCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectedTableCount, allocator);
    }

    if (m_ruleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleIds.begin(); itr != m_ruleIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_ruleNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleNames.begin(); itr != m_ruleNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_categoryIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryIds.begin(); itr != m_categoryIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_categoryNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryNames.begin(); itr != m_categoryNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_levelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelId, allocator);
    }

    if (m_levelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelScore, allocator);
    }

    if (m_detectedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categoryDetails.begin(); itr != m_categoryDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

}


string DspmAssetIdentifyInfo::GetAssetId() const
{
    return m_assetId;
}

void DspmAssetIdentifyInfo::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DspmAssetIdentifyInfo::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DspmAssetIdentifyInfo::GetAssetName() const
{
    return m_assetName;
}

void DspmAssetIdentifyInfo::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool DspmAssetIdentifyInfo::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string DspmAssetIdentifyInfo::GetAssetType() const
{
    return m_assetType;
}

void DspmAssetIdentifyInfo::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DspmAssetIdentifyInfo::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

uint64_t DspmAssetIdentifyInfo::GetDetectedDbCount() const
{
    return m_detectedDbCount;
}

void DspmAssetIdentifyInfo::SetDetectedDbCount(const uint64_t& _detectedDbCount)
{
    m_detectedDbCount = _detectedDbCount;
    m_detectedDbCountHasBeenSet = true;
}

bool DspmAssetIdentifyInfo::DetectedDbCountHasBeenSet() const
{
    return m_detectedDbCountHasBeenSet;
}

uint64_t DspmAssetIdentifyInfo::GetDetectedTableCount() const
{
    return m_detectedTableCount;
}

void DspmAssetIdentifyInfo::SetDetectedTableCount(const uint64_t& _detectedTableCount)
{
    m_detectedTableCount = _detectedTableCount;
    m_detectedTableCountHasBeenSet = true;
}

bool DspmAssetIdentifyInfo::DetectedTableCountHasBeenSet() const
{
    return m_detectedTableCountHasBeenSet;
}

vector<uint64_t> DspmAssetIdentifyInfo::GetRuleIds() const
{
    return m_ruleIds;
}

void DspmAssetIdentifyInfo::SetRuleIds(const vector<uint64_t>& _ruleIds)
{
    m_ruleIds = _ruleIds;
    m_ruleIdsHasBeenSet = true;
}

bool DspmAssetIdentifyInfo::RuleIdsHasBeenSet() const
{
    return m_ruleIdsHasBeenSet;
}

vector<string> DspmAssetIdentifyInfo::GetRuleNames() const
{
    return m_ruleNames;
}

void DspmAssetIdentifyInfo::SetRuleNames(const vector<string>& _ruleNames)
{
    m_ruleNames = _ruleNames;
    m_ruleNamesHasBeenSet = true;
}

bool DspmAssetIdentifyInfo::RuleNamesHasBeenSet() const
{
    return m_ruleNamesHasBeenSet;
}

vector<uint64_t> DspmAssetIdentifyInfo::GetCategoryIds() const
{
    return m_categoryIds;
}

void DspmAssetIdentifyInfo::SetCategoryIds(const vector<uint64_t>& _categoryIds)
{
    m_categoryIds = _categoryIds;
    m_categoryIdsHasBeenSet = true;
}

bool DspmAssetIdentifyInfo::CategoryIdsHasBeenSet() const
{
    return m_categoryIdsHasBeenSet;
}

vector<string> DspmAssetIdentifyInfo::GetCategoryNames() const
{
    return m_categoryNames;
}

void DspmAssetIdentifyInfo::SetCategoryNames(const vector<string>& _categoryNames)
{
    m_categoryNames = _categoryNames;
    m_categoryNamesHasBeenSet = true;
}

bool DspmAssetIdentifyInfo::CategoryNamesHasBeenSet() const
{
    return m_categoryNamesHasBeenSet;
}

uint64_t DspmAssetIdentifyInfo::GetLevelId() const
{
    return m_levelId;
}

void DspmAssetIdentifyInfo::SetLevelId(const uint64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool DspmAssetIdentifyInfo::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

string DspmAssetIdentifyInfo::GetLevelName() const
{
    return m_levelName;
}

void DspmAssetIdentifyInfo::SetLevelName(const string& _levelName)
{
    m_levelName = _levelName;
    m_levelNameHasBeenSet = true;
}

bool DspmAssetIdentifyInfo::LevelNameHasBeenSet() const
{
    return m_levelNameHasBeenSet;
}

uint64_t DspmAssetIdentifyInfo::GetLevelScore() const
{
    return m_levelScore;
}

void DspmAssetIdentifyInfo::SetLevelScore(const uint64_t& _levelScore)
{
    m_levelScore = _levelScore;
    m_levelScoreHasBeenSet = true;
}

bool DspmAssetIdentifyInfo::LevelScoreHasBeenSet() const
{
    return m_levelScoreHasBeenSet;
}

string DspmAssetIdentifyInfo::GetDetectedTime() const
{
    return m_detectedTime;
}

void DspmAssetIdentifyInfo::SetDetectedTime(const string& _detectedTime)
{
    m_detectedTime = _detectedTime;
    m_detectedTimeHasBeenSet = true;
}

bool DspmAssetIdentifyInfo::DetectedTimeHasBeenSet() const
{
    return m_detectedTimeHasBeenSet;
}

vector<DspmIdentifyCategoryDetail> DspmAssetIdentifyInfo::GetCategoryDetails() const
{
    return m_categoryDetails;
}

void DspmAssetIdentifyInfo::SetCategoryDetails(const vector<DspmIdentifyCategoryDetail>& _categoryDetails)
{
    m_categoryDetails = _categoryDetails;
    m_categoryDetailsHasBeenSet = true;
}

bool DspmAssetIdentifyInfo::CategoryDetailsHasBeenSet() const
{
    return m_categoryDetailsHasBeenSet;
}

uint64_t DspmAssetIdentifyInfo::GetAppId() const
{
    return m_appId;
}

void DspmAssetIdentifyInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DspmAssetIdentifyInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DspmAssetIdentifyInfo::GetNickName() const
{
    return m_nickName;
}

void DspmAssetIdentifyInfo::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool DspmAssetIdentifyInfo::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string DspmAssetIdentifyInfo::GetUin() const
{
    return m_uin;
}

void DspmAssetIdentifyInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DspmAssetIdentifyInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

