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

#include <tencentcloud/ess/v20201111/model/OccupiedSeal.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

OccupiedSeal::OccupiedSeal() :
    m_sealIdHasBeenSet(false),
    m_sealNameHasBeenSet(false),
    m_createOnHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_sealPolicyIdHasBeenSet(false),
    m_sealStatusHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_sealTypeHasBeenSet(false),
    m_isAllTimeHasBeenSet(false),
    m_authorizedUsersHasBeenSet(false),
    m_extendSceneHasBeenSet(false)
{
}

CoreInternalOutcome OccupiedSeal::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SealId") && !value["SealId"].IsNull())
    {
        if (!value["SealId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OccupiedSeal.SealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealId = string(value["SealId"].GetString());
        m_sealIdHasBeenSet = true;
    }

    if (value.HasMember("SealName") && !value["SealName"].IsNull())
    {
        if (!value["SealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OccupiedSeal.SealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealName = string(value["SealName"].GetString());
        m_sealNameHasBeenSet = true;
    }

    if (value.HasMember("CreateOn") && !value["CreateOn"].IsNull())
    {
        if (!value["CreateOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OccupiedSeal.CreateOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createOn = value["CreateOn"].GetInt64();
        m_createOnHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OccupiedSeal.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("SealPolicyId") && !value["SealPolicyId"].IsNull())
    {
        if (!value["SealPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OccupiedSeal.SealPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealPolicyId = string(value["SealPolicyId"].GetString());
        m_sealPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("SealStatus") && !value["SealStatus"].IsNull())
    {
        if (!value["SealStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OccupiedSeal.SealStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealStatus = string(value["SealStatus"].GetString());
        m_sealStatusHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OccupiedSeal.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OccupiedSeal.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("SealType") && !value["SealType"].IsNull())
    {
        if (!value["SealType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OccupiedSeal.SealType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealType = string(value["SealType"].GetString());
        m_sealTypeHasBeenSet = true;
    }

    if (value.HasMember("IsAllTime") && !value["IsAllTime"].IsNull())
    {
        if (!value["IsAllTime"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OccupiedSeal.IsAllTime` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllTime = value["IsAllTime"].GetBool();
        m_isAllTimeHasBeenSet = true;
    }

    if (value.HasMember("AuthorizedUsers") && !value["AuthorizedUsers"].IsNull())
    {
        if (!value["AuthorizedUsers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OccupiedSeal.AuthorizedUsers` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthorizedUsers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AuthorizedUser item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_authorizedUsers.push_back(item);
        }
        m_authorizedUsersHasBeenSet = true;
    }

    if (value.HasMember("ExtendScene") && !value["ExtendScene"].IsNull())
    {
        if (!value["ExtendScene"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OccupiedSeal.ExtendScene` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extendScene.Deserialize(value["ExtendScene"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extendSceneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OccupiedSeal::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealId.c_str(), allocator).Move(), allocator);
    }

    if (m_sealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealName.c_str(), allocator).Move(), allocator);
    }

    if (m_createOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createOn, allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_sealPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_sealStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_sealTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealType.c_str(), allocator).Move(), allocator);
    }

    if (m_isAllTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllTime, allocator);
    }

    if (m_authorizedUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authorizedUsers.begin(); itr != m_authorizedUsers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_extendSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extendScene.ToJsonObject(value[key.c_str()], allocator);
    }

}


string OccupiedSeal::GetSealId() const
{
    return m_sealId;
}

void OccupiedSeal::SetSealId(const string& _sealId)
{
    m_sealId = _sealId;
    m_sealIdHasBeenSet = true;
}

bool OccupiedSeal::SealIdHasBeenSet() const
{
    return m_sealIdHasBeenSet;
}

string OccupiedSeal::GetSealName() const
{
    return m_sealName;
}

void OccupiedSeal::SetSealName(const string& _sealName)
{
    m_sealName = _sealName;
    m_sealNameHasBeenSet = true;
}

bool OccupiedSeal::SealNameHasBeenSet() const
{
    return m_sealNameHasBeenSet;
}

int64_t OccupiedSeal::GetCreateOn() const
{
    return m_createOn;
}

void OccupiedSeal::SetCreateOn(const int64_t& _createOn)
{
    m_createOn = _createOn;
    m_createOnHasBeenSet = true;
}

bool OccupiedSeal::CreateOnHasBeenSet() const
{
    return m_createOnHasBeenSet;
}

string OccupiedSeal::GetCreator() const
{
    return m_creator;
}

void OccupiedSeal::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool OccupiedSeal::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string OccupiedSeal::GetSealPolicyId() const
{
    return m_sealPolicyId;
}

void OccupiedSeal::SetSealPolicyId(const string& _sealPolicyId)
{
    m_sealPolicyId = _sealPolicyId;
    m_sealPolicyIdHasBeenSet = true;
}

bool OccupiedSeal::SealPolicyIdHasBeenSet() const
{
    return m_sealPolicyIdHasBeenSet;
}

string OccupiedSeal::GetSealStatus() const
{
    return m_sealStatus;
}

void OccupiedSeal::SetSealStatus(const string& _sealStatus)
{
    m_sealStatus = _sealStatus;
    m_sealStatusHasBeenSet = true;
}

bool OccupiedSeal::SealStatusHasBeenSet() const
{
    return m_sealStatusHasBeenSet;
}

string OccupiedSeal::GetFailReason() const
{
    return m_failReason;
}

void OccupiedSeal::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool OccupiedSeal::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string OccupiedSeal::GetUrl() const
{
    return m_url;
}

void OccupiedSeal::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool OccupiedSeal::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string OccupiedSeal::GetSealType() const
{
    return m_sealType;
}

void OccupiedSeal::SetSealType(const string& _sealType)
{
    m_sealType = _sealType;
    m_sealTypeHasBeenSet = true;
}

bool OccupiedSeal::SealTypeHasBeenSet() const
{
    return m_sealTypeHasBeenSet;
}

bool OccupiedSeal::GetIsAllTime() const
{
    return m_isAllTime;
}

void OccupiedSeal::SetIsAllTime(const bool& _isAllTime)
{
    m_isAllTime = _isAllTime;
    m_isAllTimeHasBeenSet = true;
}

bool OccupiedSeal::IsAllTimeHasBeenSet() const
{
    return m_isAllTimeHasBeenSet;
}

vector<AuthorizedUser> OccupiedSeal::GetAuthorizedUsers() const
{
    return m_authorizedUsers;
}

void OccupiedSeal::SetAuthorizedUsers(const vector<AuthorizedUser>& _authorizedUsers)
{
    m_authorizedUsers = _authorizedUsers;
    m_authorizedUsersHasBeenSet = true;
}

bool OccupiedSeal::AuthorizedUsersHasBeenSet() const
{
    return m_authorizedUsersHasBeenSet;
}

ExtendScene OccupiedSeal::GetExtendScene() const
{
    return m_extendScene;
}

void OccupiedSeal::SetExtendScene(const ExtendScene& _extendScene)
{
    m_extendScene = _extendScene;
    m_extendSceneHasBeenSet = true;
}

bool OccupiedSeal::ExtendSceneHasBeenSet() const
{
    return m_extendSceneHasBeenSet;
}

