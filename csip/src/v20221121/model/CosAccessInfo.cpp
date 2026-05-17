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

#include <tencentcloud/csip/v20221121/model/CosAccessInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosAccessInfo::CosAccessInfo() :
    m_accessUinHasBeenSet(false),
    m_accessUidHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_identityHasBeenSet(false),
    m_mainNickNameHasBeenSet(false),
    m_akListHasBeenSet(false),
    m_camPolicyCountHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome CosAccessInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessUin") && !value["AccessUin"].IsNull())
    {
        if (!value["AccessUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAccessInfo.AccessUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessUin = string(value["AccessUin"].GetString());
        m_accessUinHasBeenSet = true;
    }

    if (value.HasMember("AccessUid") && !value["AccessUid"].IsNull())
    {
        if (!value["AccessUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAccessInfo.AccessUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessUid = string(value["AccessUid"].GetString());
        m_accessUidHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAccessInfo.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("Identity") && !value["Identity"].IsNull())
    {
        if (!value["Identity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAccessInfo.Identity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identity = value["Identity"].GetInt64();
        m_identityHasBeenSet = true;
    }

    if (value.HasMember("MainNickName") && !value["MainNickName"].IsNull())
    {
        if (!value["MainNickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAccessInfo.MainNickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainNickName = string(value["MainNickName"].GetString());
        m_mainNickNameHasBeenSet = true;
    }

    if (value.HasMember("AkList") && !value["AkList"].IsNull())
    {
        if (!value["AkList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosAccessInfo.AkList` is not array type"));

        const rapidjson::Value &tmpValue = value["AkList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_akList.push_back((*itr).GetString());
        }
        m_akListHasBeenSet = true;
    }

    if (value.HasMember("CamPolicyCount") && !value["CamPolicyCount"].IsNull())
    {
        if (!value["CamPolicyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAccessInfo.CamPolicyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_camPolicyCount = value["CamPolicyCount"].GetInt64();
        m_camPolicyCountHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAccessInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosAccessInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessUin.c_str(), allocator).Move(), allocator);
    }

    if (m_accessUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessUid.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_identityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Identity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identity, allocator);
    }

    if (m_mainNickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainNickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainNickName.c_str(), allocator).Move(), allocator);
    }

    if (m_akListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AkList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_akList.begin(); itr != m_akList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_camPolicyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamPolicyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_camPolicyCount, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string CosAccessInfo::GetAccessUin() const
{
    return m_accessUin;
}

void CosAccessInfo::SetAccessUin(const string& _accessUin)
{
    m_accessUin = _accessUin;
    m_accessUinHasBeenSet = true;
}

bool CosAccessInfo::AccessUinHasBeenSet() const
{
    return m_accessUinHasBeenSet;
}

string CosAccessInfo::GetAccessUid() const
{
    return m_accessUid;
}

void CosAccessInfo::SetAccessUid(const string& _accessUid)
{
    m_accessUid = _accessUid;
    m_accessUidHasBeenSet = true;
}

bool CosAccessInfo::AccessUidHasBeenSet() const
{
    return m_accessUidHasBeenSet;
}

string CosAccessInfo::GetNickName() const
{
    return m_nickName;
}

void CosAccessInfo::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool CosAccessInfo::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

int64_t CosAccessInfo::GetIdentity() const
{
    return m_identity;
}

void CosAccessInfo::SetIdentity(const int64_t& _identity)
{
    m_identity = _identity;
    m_identityHasBeenSet = true;
}

bool CosAccessInfo::IdentityHasBeenSet() const
{
    return m_identityHasBeenSet;
}

string CosAccessInfo::GetMainNickName() const
{
    return m_mainNickName;
}

void CosAccessInfo::SetMainNickName(const string& _mainNickName)
{
    m_mainNickName = _mainNickName;
    m_mainNickNameHasBeenSet = true;
}

bool CosAccessInfo::MainNickNameHasBeenSet() const
{
    return m_mainNickNameHasBeenSet;
}

vector<string> CosAccessInfo::GetAkList() const
{
    return m_akList;
}

void CosAccessInfo::SetAkList(const vector<string>& _akList)
{
    m_akList = _akList;
    m_akListHasBeenSet = true;
}

bool CosAccessInfo::AkListHasBeenSet() const
{
    return m_akListHasBeenSet;
}

int64_t CosAccessInfo::GetCamPolicyCount() const
{
    return m_camPolicyCount;
}

void CosAccessInfo::SetCamPolicyCount(const int64_t& _camPolicyCount)
{
    m_camPolicyCount = _camPolicyCount;
    m_camPolicyCountHasBeenSet = true;
}

bool CosAccessInfo::CamPolicyCountHasBeenSet() const
{
    return m_camPolicyCountHasBeenSet;
}

int64_t CosAccessInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void CosAccessInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CosAccessInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

