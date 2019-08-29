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

#include <tencentcloud/gaap/v20180529/model/GroupStatisticsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

GroupStatisticsInfo::GroupStatisticsInfo() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_proxySetHasBeenSet(false)
{
}

CoreInternalOutcome GroupStatisticsInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `GroupStatisticsInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `GroupStatisticsInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ProxySet") && !value["ProxySet"].IsNull())
    {
        if (!value["ProxySet"].IsArray())
            return CoreInternalOutcome(Error("response `GroupStatisticsInfo.ProxySet` is not array type"));

        const Value &tmpValue = value["ProxySet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxySimpleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_proxySet.push_back(item);
        }
        m_proxySetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupStatisticsInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_proxySetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProxySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxySet.begin(); itr != m_proxySet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string GroupStatisticsInfo::GetGroupId() const
{
    return m_groupId;
}

void GroupStatisticsInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool GroupStatisticsInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string GroupStatisticsInfo::GetGroupName() const
{
    return m_groupName;
}

void GroupStatisticsInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool GroupStatisticsInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

vector<ProxySimpleInfo> GroupStatisticsInfo::GetProxySet() const
{
    return m_proxySet;
}

void GroupStatisticsInfo::SetProxySet(const vector<ProxySimpleInfo>& _proxySet)
{
    m_proxySet = _proxySet;
    m_proxySetHasBeenSet = true;
}

bool GroupStatisticsInfo::ProxySetHasBeenSet() const
{
    return m_proxySetHasBeenSet;
}

