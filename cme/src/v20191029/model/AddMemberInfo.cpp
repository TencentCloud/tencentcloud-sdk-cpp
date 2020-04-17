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

#include <tencentcloud/cme/v20191029/model/AddMemberInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

AddMemberInfo::AddMemberInfo() :
    m_memberIdHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome AddMemberInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("MemberId") && !value["MemberId"].IsNull())
    {
        if (!value["MemberId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AddMemberInfo.MemberId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberId = string(value["MemberId"].GetString());
        m_memberIdHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Error("response `AddMemberInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddMemberInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_memberIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_memberId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string AddMemberInfo::GetMemberId() const
{
    return m_memberId;
}

void AddMemberInfo::SetMemberId(const string& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool AddMemberInfo::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string AddMemberInfo::GetRemark() const
{
    return m_remark;
}

void AddMemberInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AddMemberInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

