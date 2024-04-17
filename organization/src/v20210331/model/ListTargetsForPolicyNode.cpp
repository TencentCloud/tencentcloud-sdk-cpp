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

#include <tencentcloud/organization/v20210331/model/ListTargetsForPolicyNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ListTargetsForPolicyNode::ListTargetsForPolicyNode() :
    m_uinHasBeenSet(false),
    m_relatedTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_addTimeHasBeenSet(false)
{
}

CoreInternalOutcome ListTargetsForPolicyNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListTargetsForPolicyNode.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("RelatedType") && !value["RelatedType"].IsNull())
    {
        if (!value["RelatedType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListTargetsForPolicyNode.RelatedType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_relatedType = value["RelatedType"].GetUint64();
        m_relatedTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListTargetsForPolicyNode.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListTargetsForPolicyNode.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListTargetsForPolicyNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ListTargetsForPolicyNode::GetUin() const
{
    return m_uin;
}

void ListTargetsForPolicyNode::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool ListTargetsForPolicyNode::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t ListTargetsForPolicyNode::GetRelatedType() const
{
    return m_relatedType;
}

void ListTargetsForPolicyNode::SetRelatedType(const uint64_t& _relatedType)
{
    m_relatedType = _relatedType;
    m_relatedTypeHasBeenSet = true;
}

bool ListTargetsForPolicyNode::RelatedTypeHasBeenSet() const
{
    return m_relatedTypeHasBeenSet;
}

string ListTargetsForPolicyNode::GetName() const
{
    return m_name;
}

void ListTargetsForPolicyNode::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ListTargetsForPolicyNode::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ListTargetsForPolicyNode::GetAddTime() const
{
    return m_addTime;
}

void ListTargetsForPolicyNode::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool ListTargetsForPolicyNode::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

