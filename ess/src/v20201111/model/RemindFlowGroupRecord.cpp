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

#include <tencentcloud/ess/v20201111/model/RemindFlowGroupRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

RemindFlowGroupRecord::RemindFlowGroupRecord() :
    m_flowIdsHasBeenSet(false),
    m_flowNamesHasBeenSet(false),
    m_approverNameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_remindMessageListHasBeenSet(false)
{
}

CoreInternalOutcome RemindFlowGroupRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowIds") && !value["FlowIds"].IsNull())
    {
        if (!value["FlowIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RemindFlowGroupRecord.FlowIds` is not array type"));

        const rapidjson::Value &tmpValue = value["FlowIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_flowIds.push_back((*itr).GetString());
        }
        m_flowIdsHasBeenSet = true;
    }

    if (value.HasMember("FlowNames") && !value["FlowNames"].IsNull())
    {
        if (!value["FlowNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RemindFlowGroupRecord.FlowNames` is not array type"));

        const rapidjson::Value &tmpValue = value["FlowNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_flowNames.push_back((*itr).GetString());
        }
        m_flowNamesHasBeenSet = true;
    }

    if (value.HasMember("ApproverName") && !value["ApproverName"].IsNull())
    {
        if (!value["ApproverName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemindFlowGroupRecord.ApproverName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverName = string(value["ApproverName"].GetString());
        m_approverNameHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemindFlowGroupRecord.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("RemindMessageList") && !value["RemindMessageList"].IsNull())
    {
        if (!value["RemindMessageList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RemindFlowGroupRecord.RemindMessageList` is not array type"));

        const rapidjson::Value &tmpValue = value["RemindMessageList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RemindFlowGroupDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_remindMessageList.push_back(item);
        }
        m_remindMessageListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RemindFlowGroupRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_flowIds.begin(); itr != m_flowIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_flowNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_flowNames.begin(); itr != m_flowNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_approverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverName.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_remindMessageListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemindMessageList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_remindMessageList.begin(); itr != m_remindMessageList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> RemindFlowGroupRecord::GetFlowIds() const
{
    return m_flowIds;
}

void RemindFlowGroupRecord::SetFlowIds(const vector<string>& _flowIds)
{
    m_flowIds = _flowIds;
    m_flowIdsHasBeenSet = true;
}

bool RemindFlowGroupRecord::FlowIdsHasBeenSet() const
{
    return m_flowIdsHasBeenSet;
}

vector<string> RemindFlowGroupRecord::GetFlowNames() const
{
    return m_flowNames;
}

void RemindFlowGroupRecord::SetFlowNames(const vector<string>& _flowNames)
{
    m_flowNames = _flowNames;
    m_flowNamesHasBeenSet = true;
}

bool RemindFlowGroupRecord::FlowNamesHasBeenSet() const
{
    return m_flowNamesHasBeenSet;
}

string RemindFlowGroupRecord::GetApproverName() const
{
    return m_approverName;
}

void RemindFlowGroupRecord::SetApproverName(const string& _approverName)
{
    m_approverName = _approverName;
    m_approverNameHasBeenSet = true;
}

bool RemindFlowGroupRecord::ApproverNameHasBeenSet() const
{
    return m_approverNameHasBeenSet;
}

string RemindFlowGroupRecord::GetMobile() const
{
    return m_mobile;
}

void RemindFlowGroupRecord::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool RemindFlowGroupRecord::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

vector<RemindFlowGroupDetail> RemindFlowGroupRecord::GetRemindMessageList() const
{
    return m_remindMessageList;
}

void RemindFlowGroupRecord::SetRemindMessageList(const vector<RemindFlowGroupDetail>& _remindMessageList)
{
    m_remindMessageList = _remindMessageList;
    m_remindMessageListHasBeenSet = true;
}

bool RemindFlowGroupRecord::RemindMessageListHasBeenSet() const
{
    return m_remindMessageListHasBeenSet;
}

