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

#include <tencentcloud/cam/v20190116/model/GroupIdOfUidInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

GroupIdOfUidInfo::GroupIdOfUidInfo() :
    m_groupIdHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_uinHasBeenSet(false)
{
}

CoreInternalOutcome GroupIdOfUidInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupIdOfUidInfo.GroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetUint64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupIdOfUidInfo.Uid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uid = value["Uid"].GetUint64();
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupIdOfUidInfo.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupIdOfUidInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uid, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

}


uint64_t GroupIdOfUidInfo::GetGroupId() const
{
    return m_groupId;
}

void GroupIdOfUidInfo::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool GroupIdOfUidInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

uint64_t GroupIdOfUidInfo::GetUid() const
{
    return m_uid;
}

void GroupIdOfUidInfo::SetUid(const uint64_t& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool GroupIdOfUidInfo::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

uint64_t GroupIdOfUidInfo::GetUin() const
{
    return m_uin;
}

void GroupIdOfUidInfo::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool GroupIdOfUidInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

