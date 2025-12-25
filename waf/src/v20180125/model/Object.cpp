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

#include <tencentcloud/waf/v20180125/model/Object.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

Object::Object() :
    m_objectIdHasBeenSet(false),
    m_memberAppIdHasBeenSet(false),
    m_memberUinHasBeenSet(false),
    m_memberNickNameHasBeenSet(false)
{
}

CoreInternalOutcome Object::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ObjectId") && !value["ObjectId"].IsNull())
    {
        if (!value["ObjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Object.ObjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectId = string(value["ObjectId"].GetString());
        m_objectIdHasBeenSet = true;
    }

    if (value.HasMember("MemberAppId") && !value["MemberAppId"].IsNull())
    {
        if (!value["MemberAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Object.MemberAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memberAppId = value["MemberAppId"].GetUint64();
        m_memberAppIdHasBeenSet = true;
    }

    if (value.HasMember("MemberUin") && !value["MemberUin"].IsNull())
    {
        if (!value["MemberUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Object.MemberUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberUin = string(value["MemberUin"].GetString());
        m_memberUinHasBeenSet = true;
    }

    if (value.HasMember("MemberNickName") && !value["MemberNickName"].IsNull())
    {
        if (!value["MemberNickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Object.MemberNickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberNickName = string(value["MemberNickName"].GetString());
        m_memberNickNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Object::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_objectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectId.c_str(), allocator).Move(), allocator);
    }

    if (m_memberAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberAppId, allocator);
    }

    if (m_memberUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberUin.c_str(), allocator).Move(), allocator);
    }

    if (m_memberNickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberNickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberNickName.c_str(), allocator).Move(), allocator);
    }

}


string Object::GetObjectId() const
{
    return m_objectId;
}

void Object::SetObjectId(const string& _objectId)
{
    m_objectId = _objectId;
    m_objectIdHasBeenSet = true;
}

bool Object::ObjectIdHasBeenSet() const
{
    return m_objectIdHasBeenSet;
}

uint64_t Object::GetMemberAppId() const
{
    return m_memberAppId;
}

void Object::SetMemberAppId(const uint64_t& _memberAppId)
{
    m_memberAppId = _memberAppId;
    m_memberAppIdHasBeenSet = true;
}

bool Object::MemberAppIdHasBeenSet() const
{
    return m_memberAppIdHasBeenSet;
}

string Object::GetMemberUin() const
{
    return m_memberUin;
}

void Object::SetMemberUin(const string& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool Object::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

string Object::GetMemberNickName() const
{
    return m_memberNickName;
}

void Object::SetMemberNickName(const string& _memberNickName)
{
    m_memberNickName = _memberNickName;
    m_memberNickNameHasBeenSet = true;
}

bool Object::MemberNickNameHasBeenSet() const
{
    return m_memberNickNameHasBeenSet;
}

