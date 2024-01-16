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

#include <tencentcloud/organization/v20210331/model/ShareUnitMember.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ShareUnitMember::ShareUnitMember() :
    m_shareMemberUinHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome ShareUnitMember::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShareMemberUin") && !value["ShareMemberUin"].IsNull())
    {
        if (!value["ShareMemberUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShareUnitMember.ShareMemberUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shareMemberUin = value["ShareMemberUin"].GetInt64();
        m_shareMemberUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareUnitMember.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShareUnitMember::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_shareMemberUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareMemberUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareMemberUin, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t ShareUnitMember::GetShareMemberUin() const
{
    return m_shareMemberUin;
}

void ShareUnitMember::SetShareMemberUin(const int64_t& _shareMemberUin)
{
    m_shareMemberUin = _shareMemberUin;
    m_shareMemberUinHasBeenSet = true;
}

bool ShareUnitMember::ShareMemberUinHasBeenSet() const
{
    return m_shareMemberUinHasBeenSet;
}

string ShareUnitMember::GetCreateTime() const
{
    return m_createTime;
}

void ShareUnitMember::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ShareUnitMember::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

