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

#include <tencentcloud/monitor/v20180724/model/NoticeBindPolicys.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

NoticeBindPolicys::NoticeBindPolicys() :
    m_noticeIdHasBeenSet(false),
    m_policyIdsHasBeenSet(false)
{
}

CoreInternalOutcome NoticeBindPolicys::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NoticeId") && !value["NoticeId"].IsNull())
    {
        if (!value["NoticeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeBindPolicys.NoticeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noticeId = string(value["NoticeId"].GetString());
        m_noticeIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyIds") && !value["PolicyIds"].IsNull())
    {
        if (!value["PolicyIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NoticeBindPolicys.PolicyIds` is not array type"));

        const rapidjson::Value &tmpValue = value["PolicyIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_policyIds.push_back((*itr).GetString());
        }
        m_policyIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NoticeBindPolicys::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_noticeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noticeId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_policyIds.begin(); itr != m_policyIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string NoticeBindPolicys::GetNoticeId() const
{
    return m_noticeId;
}

void NoticeBindPolicys::SetNoticeId(const string& _noticeId)
{
    m_noticeId = _noticeId;
    m_noticeIdHasBeenSet = true;
}

bool NoticeBindPolicys::NoticeIdHasBeenSet() const
{
    return m_noticeIdHasBeenSet;
}

vector<string> NoticeBindPolicys::GetPolicyIds() const
{
    return m_policyIds;
}

void NoticeBindPolicys::SetPolicyIds(const vector<string>& _policyIds)
{
    m_policyIds = _policyIds;
    m_policyIdsHasBeenSet = true;
}

bool NoticeBindPolicys::PolicyIdsHasBeenSet() const
{
    return m_policyIdsHasBeenSet;
}

