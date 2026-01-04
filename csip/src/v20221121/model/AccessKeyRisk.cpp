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

#include <tencentcloud/csip/v20221121/model/AccessKeyRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AccessKeyRisk::AccessKeyRisk() :
    m_nameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_riskRuleIDHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_accessKeyHasBeenSet(false),
    m_accessKeyIDHasBeenSet(false),
    m_accessKeyRemarkHasBeenSet(false),
    m_riskTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_evidenceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_subNicknameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_checkStatusHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_queryParamHasBeenSet(false),
    m_cloudTypeHasBeenSet(false),
    m_relatedAKHasBeenSet(false)
{
}

CoreInternalOutcome AccessKeyRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("RiskRuleID") && !value["RiskRuleID"].IsNull())
    {
        if (!value["RiskRuleID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.RiskRuleID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskRuleID = value["RiskRuleID"].GetInt64();
        m_riskRuleIDHasBeenSet = true;
    }

    if (value.HasMember("RiskType") && !value["RiskType"].IsNull())
    {
        if (!value["RiskType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.RiskType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskType = value["RiskType"].GetInt64();
        m_riskTypeHasBeenSet = true;
    }

    if (value.HasMember("AccessKey") && !value["AccessKey"].IsNull())
    {
        if (!value["AccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.AccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKey = string(value["AccessKey"].GetString());
        m_accessKeyHasBeenSet = true;
    }

    if (value.HasMember("AccessKeyID") && !value["AccessKeyID"].IsNull())
    {
        if (!value["AccessKeyID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.AccessKeyID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accessKeyID = value["AccessKeyID"].GetUint64();
        m_accessKeyIDHasBeenSet = true;
    }

    if (value.HasMember("AccessKeyRemark") && !value["AccessKeyRemark"].IsNull())
    {
        if (!value["AccessKeyRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.AccessKeyRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKeyRemark = string(value["AccessKeyRemark"].GetString());
        m_accessKeyRemarkHasBeenSet = true;
    }

    if (value.HasMember("RiskTime") && !value["RiskTime"].IsNull())
    {
        if (!value["RiskTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.RiskTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskTime = string(value["RiskTime"].GetString());
        m_riskTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.Tag` is not array type"));

        const rapidjson::Value &tmpValue = value["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tag.push_back((*itr).GetString());
        }
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("Evidence") && !value["Evidence"].IsNull())
    {
        if (!value["Evidence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.Evidence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evidence = string(value["Evidence"].GetString());
        m_evidenceHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("SubNickname") && !value["SubNickname"].IsNull())
    {
        if (!value["SubNickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.SubNickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subNickname = string(value["SubNickname"].GetString());
        m_subNicknameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CheckStatus") && !value["CheckStatus"].IsNull())
    {
        if (!value["CheckStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.CheckStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkStatus = value["CheckStatus"].GetInt64();
        m_checkStatusHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("QueryParam") && !value["QueryParam"].IsNull())
    {
        if (!value["QueryParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.QueryParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryParam = string(value["QueryParam"].GetString());
        m_queryParamHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.CloudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = value["CloudType"].GetInt64();
        m_cloudTypeHasBeenSet = true;
    }

    if (value.HasMember("RelatedAK") && !value["RelatedAK"].IsNull())
    {
        if (!value["RelatedAK"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessKeyRisk.RelatedAK` is not array type"));

        const rapidjson::Value &tmpValue = value["RelatedAK"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AKInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_relatedAK.push_back(item);
        }
        m_relatedAKHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessKeyRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_riskRuleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskRuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskRuleID, allocator);
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskType, allocator);
    }

    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessKeyID, allocator);
    }

    if (m_accessKeyRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKeyRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_riskTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_evidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Evidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evidence.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUin.c_str(), allocator).Move(), allocator);
    }

    if (m_subNicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubNickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subNickname.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_checkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkStatus, allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_queryParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryParam.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudType, allocator);
    }

    if (m_relatedAKHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedAK";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_relatedAK.begin(); itr != m_relatedAK.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AccessKeyRisk::GetName() const
{
    return m_name;
}

void AccessKeyRisk::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AccessKeyRisk::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t AccessKeyRisk::GetLevel() const
{
    return m_level;
}

void AccessKeyRisk::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool AccessKeyRisk::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t AccessKeyRisk::GetID() const
{
    return m_iD;
}

void AccessKeyRisk::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AccessKeyRisk::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

int64_t AccessKeyRisk::GetRiskRuleID() const
{
    return m_riskRuleID;
}

void AccessKeyRisk::SetRiskRuleID(const int64_t& _riskRuleID)
{
    m_riskRuleID = _riskRuleID;
    m_riskRuleIDHasBeenSet = true;
}

bool AccessKeyRisk::RiskRuleIDHasBeenSet() const
{
    return m_riskRuleIDHasBeenSet;
}

int64_t AccessKeyRisk::GetRiskType() const
{
    return m_riskType;
}

void AccessKeyRisk::SetRiskType(const int64_t& _riskType)
{
    m_riskType = _riskType;
    m_riskTypeHasBeenSet = true;
}

bool AccessKeyRisk::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

string AccessKeyRisk::GetAccessKey() const
{
    return m_accessKey;
}

void AccessKeyRisk::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool AccessKeyRisk::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

uint64_t AccessKeyRisk::GetAccessKeyID() const
{
    return m_accessKeyID;
}

void AccessKeyRisk::SetAccessKeyID(const uint64_t& _accessKeyID)
{
    m_accessKeyID = _accessKeyID;
    m_accessKeyIDHasBeenSet = true;
}

bool AccessKeyRisk::AccessKeyIDHasBeenSet() const
{
    return m_accessKeyIDHasBeenSet;
}

string AccessKeyRisk::GetAccessKeyRemark() const
{
    return m_accessKeyRemark;
}

void AccessKeyRisk::SetAccessKeyRemark(const string& _accessKeyRemark)
{
    m_accessKeyRemark = _accessKeyRemark;
    m_accessKeyRemarkHasBeenSet = true;
}

bool AccessKeyRisk::AccessKeyRemarkHasBeenSet() const
{
    return m_accessKeyRemarkHasBeenSet;
}

string AccessKeyRisk::GetRiskTime() const
{
    return m_riskTime;
}

void AccessKeyRisk::SetRiskTime(const string& _riskTime)
{
    m_riskTime = _riskTime;
    m_riskTimeHasBeenSet = true;
}

bool AccessKeyRisk::RiskTimeHasBeenSet() const
{
    return m_riskTimeHasBeenSet;
}

int64_t AccessKeyRisk::GetStatus() const
{
    return m_status;
}

void AccessKeyRisk::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AccessKeyRisk::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> AccessKeyRisk::GetTag() const
{
    return m_tag;
}

void AccessKeyRisk::SetTag(const vector<string>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AccessKeyRisk::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string AccessKeyRisk::GetEvidence() const
{
    return m_evidence;
}

void AccessKeyRisk::SetEvidence(const string& _evidence)
{
    m_evidence = _evidence;
    m_evidenceHasBeenSet = true;
}

bool AccessKeyRisk::EvidenceHasBeenSet() const
{
    return m_evidenceHasBeenSet;
}

string AccessKeyRisk::GetDescription() const
{
    return m_description;
}

void AccessKeyRisk::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AccessKeyRisk::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AccessKeyRisk::GetUin() const
{
    return m_uin;
}

void AccessKeyRisk::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AccessKeyRisk::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AccessKeyRisk::GetNickname() const
{
    return m_nickname;
}

void AccessKeyRisk::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool AccessKeyRisk::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string AccessKeyRisk::GetSubUin() const
{
    return m_subUin;
}

void AccessKeyRisk::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool AccessKeyRisk::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string AccessKeyRisk::GetSubNickname() const
{
    return m_subNickname;
}

void AccessKeyRisk::SetSubNickname(const string& _subNickname)
{
    m_subNickname = _subNickname;
    m_subNicknameHasBeenSet = true;
}

bool AccessKeyRisk::SubNicknameHasBeenSet() const
{
    return m_subNicknameHasBeenSet;
}

int64_t AccessKeyRisk::GetType() const
{
    return m_type;
}

void AccessKeyRisk::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AccessKeyRisk::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t AccessKeyRisk::GetCheckStatus() const
{
    return m_checkStatus;
}

void AccessKeyRisk::SetCheckStatus(const int64_t& _checkStatus)
{
    m_checkStatus = _checkStatus;
    m_checkStatusHasBeenSet = true;
}

bool AccessKeyRisk::CheckStatusHasBeenSet() const
{
    return m_checkStatusHasBeenSet;
}

int64_t AccessKeyRisk::GetAppID() const
{
    return m_appID;
}

void AccessKeyRisk::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool AccessKeyRisk::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string AccessKeyRisk::GetQueryParam() const
{
    return m_queryParam;
}

void AccessKeyRisk::SetQueryParam(const string& _queryParam)
{
    m_queryParam = _queryParam;
    m_queryParamHasBeenSet = true;
}

bool AccessKeyRisk::QueryParamHasBeenSet() const
{
    return m_queryParamHasBeenSet;
}

int64_t AccessKeyRisk::GetCloudType() const
{
    return m_cloudType;
}

void AccessKeyRisk::SetCloudType(const int64_t& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool AccessKeyRisk::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

vector<AKInfo> AccessKeyRisk::GetRelatedAK() const
{
    return m_relatedAK;
}

void AccessKeyRisk::SetRelatedAK(const vector<AKInfo>& _relatedAK)
{
    m_relatedAK = _relatedAK;
    m_relatedAKHasBeenSet = true;
}

bool AccessKeyRisk::RelatedAKHasBeenSet() const
{
    return m_relatedAKHasBeenSet;
}

