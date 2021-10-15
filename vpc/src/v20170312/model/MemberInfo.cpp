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

#include <tencentcloud/vpc/v20170312/model/MemberInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

MemberInfo::MemberInfo() :
    m_memberHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome MemberInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Member") && !value["Member"].IsNull())
    {
        if (!value["Member"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberInfo.Member` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_member = string(value["Member"].GetString());
        m_memberHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MemberInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_memberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Member";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_member.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string MemberInfo::GetMember() const
{
    return m_member;
}

void MemberInfo::SetMember(const string& _member)
{
    m_member = _member;
    m_memberHasBeenSet = true;
}

bool MemberInfo::MemberHasBeenSet() const
{
    return m_memberHasBeenSet;
}

string MemberInfo::GetDescription() const
{
    return m_description;
}

void MemberInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool MemberInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

