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

#include <tencentcloud/ccc/v20200210/model/ForwardingTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

ForwardingTarget::ForwardingTarget() :
    m_typeHasBeenSet(false),
    m_staffUserIdHasBeenSet(false),
    m_skillGroupIdHasBeenSet(false),
    m_extensionHasBeenSet(false)
{
}

CoreInternalOutcome ForwardingTarget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingTarget.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("StaffUserId") && !value["StaffUserId"].IsNull())
    {
        if (!value["StaffUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingTarget.StaffUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staffUserId = string(value["StaffUserId"].GetString());
        m_staffUserIdHasBeenSet = true;
    }

    if (value.HasMember("SkillGroupId") && !value["SkillGroupId"].IsNull())
    {
        if (!value["SkillGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingTarget.SkillGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_skillGroupId = value["SkillGroupId"].GetInt64();
        m_skillGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Extension") && !value["Extension"].IsNull())
    {
        if (!value["Extension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingTarget.Extension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extension = string(value["Extension"].GetString());
        m_extensionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ForwardingTarget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_staffUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staffUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_skillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skillGroupId, allocator);
    }

    if (m_extensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extension.c_str(), allocator).Move(), allocator);
    }

}


int64_t ForwardingTarget::GetType() const
{
    return m_type;
}

void ForwardingTarget::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ForwardingTarget::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ForwardingTarget::GetStaffUserId() const
{
    return m_staffUserId;
}

void ForwardingTarget::SetStaffUserId(const string& _staffUserId)
{
    m_staffUserId = _staffUserId;
    m_staffUserIdHasBeenSet = true;
}

bool ForwardingTarget::StaffUserIdHasBeenSet() const
{
    return m_staffUserIdHasBeenSet;
}

int64_t ForwardingTarget::GetSkillGroupId() const
{
    return m_skillGroupId;
}

void ForwardingTarget::SetSkillGroupId(const int64_t& _skillGroupId)
{
    m_skillGroupId = _skillGroupId;
    m_skillGroupIdHasBeenSet = true;
}

bool ForwardingTarget::SkillGroupIdHasBeenSet() const
{
    return m_skillGroupIdHasBeenSet;
}

string ForwardingTarget::GetExtension() const
{
    return m_extension;
}

void ForwardingTarget::SetExtension(const string& _extension)
{
    m_extension = _extension;
    m_extensionHasBeenSet = true;
}

bool ForwardingTarget::ExtensionHasBeenSet() const
{
    return m_extensionHasBeenSet;
}

