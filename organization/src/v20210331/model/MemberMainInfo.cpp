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

#include <tencentcloud/organization/v20210331/model/MemberMainInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

MemberMainInfo::MemberMainInfo() :
    m_memberUinHasBeenSet(false),
    m_memberNameHasBeenSet(false)
{
}

CoreInternalOutcome MemberMainInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MemberUin") && !value["MemberUin"].IsNull())
    {
        if (!value["MemberUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MemberMainInfo.MemberUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memberUin = value["MemberUin"].GetInt64();
        m_memberUinHasBeenSet = true;
    }

    if (value.HasMember("MemberName") && !value["MemberName"].IsNull())
    {
        if (!value["MemberName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberMainInfo.MemberName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberName = string(value["MemberName"].GetString());
        m_memberNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MemberMainInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_memberUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberUin, allocator);
    }

    if (m_memberNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberName.c_str(), allocator).Move(), allocator);
    }

}


int64_t MemberMainInfo::GetMemberUin() const
{
    return m_memberUin;
}

void MemberMainInfo::SetMemberUin(const int64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool MemberMainInfo::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

string MemberMainInfo::GetMemberName() const
{
    return m_memberName;
}

void MemberMainInfo::SetMemberName(const string& _memberName)
{
    m_memberName = _memberName;
    m_memberNameHasBeenSet = true;
}

bool MemberMainInfo::MemberNameHasBeenSet() const
{
    return m_memberNameHasBeenSet;
}

