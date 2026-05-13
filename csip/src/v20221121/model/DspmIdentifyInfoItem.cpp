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

#include <tencentcloud/csip/v20221121/model/DspmIdentifyInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmIdentifyInfoItem::DspmIdentifyInfoItem() :
    m_identifyIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_identifyTypeHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_assetCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_personHasBeenSet(false),
    m_assetStatisticHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_safetyAdviceHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_uinHasBeenSet(false)
{
}

CoreInternalOutcome DspmIdentifyInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdentifyId") && !value["IdentifyId"].IsNull())
    {
        if (!value["IdentifyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyInfoItem.IdentifyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifyId = string(value["IdentifyId"].GetString());
        m_identifyIdHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyInfoItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("IdentifyType") && !value["IdentifyType"].IsNull())
    {
        if (!value["IdentifyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyInfoItem.IdentifyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identifyType = value["IdentifyType"].GetInt64();
        m_identifyTypeHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyInfoItem.OwnerUin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ownerUin.Deserialize(value["OwnerUin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyInfoItem.CreatorUin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_creatorUin.Deserialize(value["CreatorUin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("AssetCount") && !value["AssetCount"].IsNull())
    {
        if (!value["AssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyInfoItem.AssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetCount = value["AssetCount"].GetInt64();
        m_assetCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyInfoItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyInfoItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Person") && !value["Person"].IsNull())
    {
        if (!value["Person"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyInfoItem.Person` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_person.Deserialize(value["Person"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_personHasBeenSet = true;
    }

    if (value.HasMember("AssetStatistic") && !value["AssetStatistic"].IsNull())
    {
        if (!value["AssetStatistic"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyInfoItem.AssetStatistic` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_assetStatistic.Deserialize(value["AssetStatistic"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_assetStatisticHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyInfoItem.RiskCount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_riskCount.Deserialize(value["RiskCount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("SafetyAdvice") && !value["SafetyAdvice"].IsNull())
    {
        if (!value["SafetyAdvice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyInfoItem.SafetyAdvice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_safetyAdvice = string(value["SafetyAdvice"].GetString());
        m_safetyAdviceHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyInfoItem.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyInfoItem.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyInfoItem.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmIdentifyInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_identifyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifyId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_identifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identifyType, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ownerUin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_creatorUin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_assetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetCount, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_personHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Person";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_person.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_assetStatisticHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetStatistic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_assetStatistic.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_riskCount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_safetyAdviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SafetyAdvice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_safetyAdvice.c_str(), allocator).Move(), allocator);
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


string DspmIdentifyInfoItem::GetIdentifyId() const
{
    return m_identifyId;
}

void DspmIdentifyInfoItem::SetIdentifyId(const string& _identifyId)
{
    m_identifyId = _identifyId;
    m_identifyIdHasBeenSet = true;
}

bool DspmIdentifyInfoItem::IdentifyIdHasBeenSet() const
{
    return m_identifyIdHasBeenSet;
}

string DspmIdentifyInfoItem::GetRemark() const
{
    return m_remark;
}

void DspmIdentifyInfoItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DspmIdentifyInfoItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t DspmIdentifyInfoItem::GetIdentifyType() const
{
    return m_identifyType;
}

void DspmIdentifyInfoItem::SetIdentifyType(const int64_t& _identifyType)
{
    m_identifyType = _identifyType;
    m_identifyTypeHasBeenSet = true;
}

bool DspmIdentifyInfoItem::IdentifyTypeHasBeenSet() const
{
    return m_identifyTypeHasBeenSet;
}

DspmUinUser DspmIdentifyInfoItem::GetOwnerUin() const
{
    return m_ownerUin;
}

void DspmIdentifyInfoItem::SetOwnerUin(const DspmUinUser& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool DspmIdentifyInfoItem::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

DspmUinUser DspmIdentifyInfoItem::GetCreatorUin() const
{
    return m_creatorUin;
}

void DspmIdentifyInfoItem::SetCreatorUin(const DspmUinUser& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool DspmIdentifyInfoItem::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

int64_t DspmIdentifyInfoItem::GetAssetCount() const
{
    return m_assetCount;
}

void DspmIdentifyInfoItem::SetAssetCount(const int64_t& _assetCount)
{
    m_assetCount = _assetCount;
    m_assetCountHasBeenSet = true;
}

bool DspmIdentifyInfoItem::AssetCountHasBeenSet() const
{
    return m_assetCountHasBeenSet;
}

string DspmIdentifyInfoItem::GetCreateTime() const
{
    return m_createTime;
}

void DspmIdentifyInfoItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DspmIdentifyInfoItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DspmIdentifyInfoItem::GetStatus() const
{
    return m_status;
}

void DspmIdentifyInfoItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DspmIdentifyInfoItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

DspmPersonUser DspmIdentifyInfoItem::GetPerson() const
{
    return m_person;
}

void DspmIdentifyInfoItem::SetPerson(const DspmPersonUser& _person)
{
    m_person = _person;
    m_personHasBeenSet = true;
}

bool DspmIdentifyInfoItem::PersonHasBeenSet() const
{
    return m_personHasBeenSet;
}

DspmIdentifyAssetStatistic DspmIdentifyInfoItem::GetAssetStatistic() const
{
    return m_assetStatistic;
}

void DspmIdentifyInfoItem::SetAssetStatistic(const DspmIdentifyAssetStatistic& _assetStatistic)
{
    m_assetStatistic = _assetStatistic;
    m_assetStatisticHasBeenSet = true;
}

bool DspmIdentifyInfoItem::AssetStatisticHasBeenSet() const
{
    return m_assetStatisticHasBeenSet;
}

DspmRiskCount DspmIdentifyInfoItem::GetRiskCount() const
{
    return m_riskCount;
}

void DspmIdentifyInfoItem::SetRiskCount(const DspmRiskCount& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool DspmIdentifyInfoItem::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

string DspmIdentifyInfoItem::GetSafetyAdvice() const
{
    return m_safetyAdvice;
}

void DspmIdentifyInfoItem::SetSafetyAdvice(const string& _safetyAdvice)
{
    m_safetyAdvice = _safetyAdvice;
    m_safetyAdviceHasBeenSet = true;
}

bool DspmIdentifyInfoItem::SafetyAdviceHasBeenSet() const
{
    return m_safetyAdviceHasBeenSet;
}

uint64_t DspmIdentifyInfoItem::GetAppId() const
{
    return m_appId;
}

void DspmIdentifyInfoItem::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DspmIdentifyInfoItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DspmIdentifyInfoItem::GetNickName() const
{
    return m_nickName;
}

void DspmIdentifyInfoItem::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool DspmIdentifyInfoItem::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string DspmIdentifyInfoItem::GetUin() const
{
    return m_uin;
}

void DspmIdentifyInfoItem::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DspmIdentifyInfoItem::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

