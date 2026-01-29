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

#include <tencentcloud/tcb/v20180608/model/DescribeUserListResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeUserListResp::DescribeUserListResp() :
    m_totalHasBeenSet(false),
    m_userListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUserListResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeUserListResp.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("UserList") && !value["UserList"].IsNull())
    {
        if (!value["UserList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeUserListResp.UserList` is not array type"));

        const rapidjson::Value &tmpValue = value["UserList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            User item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userList.push_back(item);
        }
        m_userListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeUserListResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_userListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userList.begin(); itr != m_userList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t DescribeUserListResp::GetTotal() const
{
    return m_total;
}

void DescribeUserListResp::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool DescribeUserListResp::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<User> DescribeUserListResp::GetUserList() const
{
    return m_userList;
}

void DescribeUserListResp::SetUserList(const vector<User>& _userList)
{
    m_userList = _userList;
    m_userListHasBeenSet = true;
}

bool DescribeUserListResp::UserListHasBeenSet() const
{
    return m_userListHasBeenSet;
}

