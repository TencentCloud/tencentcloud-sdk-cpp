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

#include <tencentcloud/organization/v20210331/model/ManagerShareUnit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ManagerShareUnit::ManagerShareUnit() :
    m_unitIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_shareResourceNumHasBeenSet(false),
    m_shareMemberNumHasBeenSet(false),
    m_shareScopeHasBeenSet(false)
{
}

CoreInternalOutcome ManagerShareUnit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UnitId") && !value["UnitId"].IsNull())
    {
        if (!value["UnitId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerShareUnit.UnitId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitId = string(value["UnitId"].GetString());
        m_unitIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerShareUnit.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerShareUnit.Uin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetInt64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerShareUnit.OwnerUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = value["OwnerUin"].GetInt64();
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerShareUnit.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerShareUnit.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerShareUnit.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ShareResourceNum") && !value["ShareResourceNum"].IsNull())
    {
        if (!value["ShareResourceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerShareUnit.ShareResourceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shareResourceNum = value["ShareResourceNum"].GetInt64();
        m_shareResourceNumHasBeenSet = true;
    }

    if (value.HasMember("ShareMemberNum") && !value["ShareMemberNum"].IsNull())
    {
        if (!value["ShareMemberNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerShareUnit.ShareMemberNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shareMemberNum = value["ShareMemberNum"].GetInt64();
        m_shareMemberNumHasBeenSet = true;
    }

    if (value.HasMember("ShareScope") && !value["ShareScope"].IsNull())
    {
        if (!value["ShareScope"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerShareUnit.ShareScope` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shareScope = value["ShareScope"].GetUint64();
        m_shareScopeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManagerShareUnit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_unitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerUin, allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_shareResourceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareResourceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareResourceNum, allocator);
    }

    if (m_shareMemberNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareMemberNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareMemberNum, allocator);
    }

    if (m_shareScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareScope, allocator);
    }

}


string ManagerShareUnit::GetUnitId() const
{
    return m_unitId;
}

void ManagerShareUnit::SetUnitId(const string& _unitId)
{
    m_unitId = _unitId;
    m_unitIdHasBeenSet = true;
}

bool ManagerShareUnit::UnitIdHasBeenSet() const
{
    return m_unitIdHasBeenSet;
}

string ManagerShareUnit::GetName() const
{
    return m_name;
}

void ManagerShareUnit::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ManagerShareUnit::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ManagerShareUnit::GetUin() const
{
    return m_uin;
}

void ManagerShareUnit::SetUin(const int64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool ManagerShareUnit::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t ManagerShareUnit::GetOwnerUin() const
{
    return m_ownerUin;
}

void ManagerShareUnit::SetOwnerUin(const int64_t& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ManagerShareUnit::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string ManagerShareUnit::GetArea() const
{
    return m_area;
}

void ManagerShareUnit::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool ManagerShareUnit::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string ManagerShareUnit::GetDescription() const
{
    return m_description;
}

void ManagerShareUnit::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ManagerShareUnit::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ManagerShareUnit::GetCreateTime() const
{
    return m_createTime;
}

void ManagerShareUnit::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ManagerShareUnit::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t ManagerShareUnit::GetShareResourceNum() const
{
    return m_shareResourceNum;
}

void ManagerShareUnit::SetShareResourceNum(const int64_t& _shareResourceNum)
{
    m_shareResourceNum = _shareResourceNum;
    m_shareResourceNumHasBeenSet = true;
}

bool ManagerShareUnit::ShareResourceNumHasBeenSet() const
{
    return m_shareResourceNumHasBeenSet;
}

int64_t ManagerShareUnit::GetShareMemberNum() const
{
    return m_shareMemberNum;
}

void ManagerShareUnit::SetShareMemberNum(const int64_t& _shareMemberNum)
{
    m_shareMemberNum = _shareMemberNum;
    m_shareMemberNumHasBeenSet = true;
}

bool ManagerShareUnit::ShareMemberNumHasBeenSet() const
{
    return m_shareMemberNumHasBeenSet;
}

uint64_t ManagerShareUnit::GetShareScope() const
{
    return m_shareScope;
}

void ManagerShareUnit::SetShareScope(const uint64_t& _shareScope)
{
    m_shareScope = _shareScope;
    m_shareScopeHasBeenSet = true;
}

bool ManagerShareUnit::ShareScopeHasBeenSet() const
{
    return m_shareScopeHasBeenSet;
}

