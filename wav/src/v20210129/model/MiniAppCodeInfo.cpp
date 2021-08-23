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

#include <tencentcloud/wav/v20210129/model/MiniAppCodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

MiniAppCodeInfo::MiniAppCodeInfo() :
    m_idHasBeenSet(false),
    m_miniAppNameHasBeenSet(false),
    m_miniAppLogoHasBeenSet(false),
    m_miniAdminUrlHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome MiniAppCodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MiniAppCodeInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("MiniAppName") && !value["MiniAppName"].IsNull())
    {
        if (!value["MiniAppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MiniAppCodeInfo.MiniAppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniAppName = string(value["MiniAppName"].GetString());
        m_miniAppNameHasBeenSet = true;
    }

    if (value.HasMember("MiniAppLogo") && !value["MiniAppLogo"].IsNull())
    {
        if (!value["MiniAppLogo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MiniAppCodeInfo.MiniAppLogo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniAppLogo = string(value["MiniAppLogo"].GetString());
        m_miniAppLogoHasBeenSet = true;
    }

    if (value.HasMember("MiniAdminUrl") && !value["MiniAdminUrl"].IsNull())
    {
        if (!value["MiniAdminUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MiniAppCodeInfo.MiniAdminUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniAdminUrl = string(value["MiniAdminUrl"].GetString());
        m_miniAdminUrlHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MiniAppCodeInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MiniAppCodeInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MiniAppCodeInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MiniAppCodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_miniAppNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniAppName.c_str(), allocator).Move(), allocator);
    }

    if (m_miniAppLogoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppLogo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniAppLogo.c_str(), allocator).Move(), allocator);
    }

    if (m_miniAdminUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAdminUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniAdminUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


uint64_t MiniAppCodeInfo::GetId() const
{
    return m_id;
}

void MiniAppCodeInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool MiniAppCodeInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string MiniAppCodeInfo::GetMiniAppName() const
{
    return m_miniAppName;
}

void MiniAppCodeInfo::SetMiniAppName(const string& _miniAppName)
{
    m_miniAppName = _miniAppName;
    m_miniAppNameHasBeenSet = true;
}

bool MiniAppCodeInfo::MiniAppNameHasBeenSet() const
{
    return m_miniAppNameHasBeenSet;
}

string MiniAppCodeInfo::GetMiniAppLogo() const
{
    return m_miniAppLogo;
}

void MiniAppCodeInfo::SetMiniAppLogo(const string& _miniAppLogo)
{
    m_miniAppLogo = _miniAppLogo;
    m_miniAppLogoHasBeenSet = true;
}

bool MiniAppCodeInfo::MiniAppLogoHasBeenSet() const
{
    return m_miniAppLogoHasBeenSet;
}

string MiniAppCodeInfo::GetMiniAdminUrl() const
{
    return m_miniAdminUrl;
}

void MiniAppCodeInfo::SetMiniAdminUrl(const string& _miniAdminUrl)
{
    m_miniAdminUrl = _miniAdminUrl;
    m_miniAdminUrlHasBeenSet = true;
}

bool MiniAppCodeInfo::MiniAdminUrlHasBeenSet() const
{
    return m_miniAdminUrlHasBeenSet;
}

int64_t MiniAppCodeInfo::GetState() const
{
    return m_state;
}

void MiniAppCodeInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool MiniAppCodeInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t MiniAppCodeInfo::GetCreateTime() const
{
    return m_createTime;
}

void MiniAppCodeInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MiniAppCodeInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t MiniAppCodeInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void MiniAppCodeInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool MiniAppCodeInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

