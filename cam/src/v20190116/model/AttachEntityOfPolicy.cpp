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

#include <tencentcloud/cam/v20190116/model/AttachEntityOfPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

AttachEntityOfPolicy::AttachEntityOfPolicy() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_relatedTypeHasBeenSet(false),
    m_attachmentTimeHasBeenSet(false)
{
}

CoreInternalOutcome AttachEntityOfPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachEntityOfPolicy.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachEntityOfPolicy.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AttachEntityOfPolicy.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("RelatedType") && !value["RelatedType"].IsNull())
    {
        if (!value["RelatedType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AttachEntityOfPolicy.RelatedType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_relatedType = value["RelatedType"].GetUint64();
        m_relatedTypeHasBeenSet = true;
    }

    if (value.HasMember("AttachmentTime") && !value["AttachmentTime"].IsNull())
    {
        if (!value["AttachmentTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachEntityOfPolicy.AttachmentTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachmentTime = string(value["AttachmentTime"].GetString());
        m_attachmentTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttachEntityOfPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
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

    if (m_relatedTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relatedType, allocator);
    }

    if (m_attachmentTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachmentTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachmentTime.c_str(), allocator).Move(), allocator);
    }

}


string AttachEntityOfPolicy::GetId() const
{
    return m_id;
}

void AttachEntityOfPolicy::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AttachEntityOfPolicy::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AttachEntityOfPolicy::GetName() const
{
    return m_name;
}

void AttachEntityOfPolicy::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AttachEntityOfPolicy::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t AttachEntityOfPolicy::GetUin() const
{
    return m_uin;
}

void AttachEntityOfPolicy::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AttachEntityOfPolicy::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t AttachEntityOfPolicy::GetRelatedType() const
{
    return m_relatedType;
}

void AttachEntityOfPolicy::SetRelatedType(const uint64_t& _relatedType)
{
    m_relatedType = _relatedType;
    m_relatedTypeHasBeenSet = true;
}

bool AttachEntityOfPolicy::RelatedTypeHasBeenSet() const
{
    return m_relatedTypeHasBeenSet;
}

string AttachEntityOfPolicy::GetAttachmentTime() const
{
    return m_attachmentTime;
}

void AttachEntityOfPolicy::SetAttachmentTime(const string& _attachmentTime)
{
    m_attachmentTime = _attachmentTime;
    m_attachmentTimeHasBeenSet = true;
}

bool AttachEntityOfPolicy::AttachmentTimeHasBeenSet() const
{
    return m_attachmentTimeHasBeenSet;
}

