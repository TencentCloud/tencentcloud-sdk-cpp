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

#include <tencentcloud/tbp/v20190627/model/ResponseMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbp::V20190627::Model;
using namespace rapidjson;
using namespace std;

ResponseMessage::ResponseMessage() :
    m_groupListHasBeenSet(false)
{
}

CoreInternalOutcome ResponseMessage::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupList") && !value["GroupList"].IsNull())
    {
        if (!value["GroupList"].IsArray())
            return CoreInternalOutcome(Error("response `ResponseMessage.GroupList` is not array type"));

        const Value &tmpValue = value["GroupList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Group item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupList.push_back(item);
        }
        m_groupListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResponseMessage::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_groupListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupList.begin(); itr != m_groupList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<Group> ResponseMessage::GetGroupList() const
{
    return m_groupList;
}

void ResponseMessage::SetGroupList(const vector<Group>& _groupList)
{
    m_groupList = _groupList;
    m_groupListHasBeenSet = true;
}

bool ResponseMessage::GroupListHasBeenSet() const
{
    return m_groupListHasBeenSet;
}

