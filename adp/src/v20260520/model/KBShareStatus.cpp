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

#include <tencentcloud/adp/v20260520/model/KBShareStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

KBShareStatus::KBShareStatus() :
    m_approvalIdHasBeenSet(false),
    m_subStatusListHasBeenSet(false)
{
}

CoreInternalOutcome KBShareStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApprovalId") && !value["ApprovalId"].IsNull())
    {
        if (!value["ApprovalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBShareStatus.ApprovalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalId = string(value["ApprovalId"].GetString());
        m_approvalIdHasBeenSet = true;
    }

    if (value.HasMember("SubStatusList") && !value["SubStatusList"].IsNull())
    {
        if (!value["SubStatusList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KBShareStatus.SubStatusList` is not array type"));

        const rapidjson::Value &tmpValue = value["SubStatusList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subStatusList.push_back((*itr).GetInt64());
        }
        m_subStatusListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KBShareStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_approvalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvalId.c_str(), allocator).Move(), allocator);
    }

    if (m_subStatusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubStatusList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subStatusList.begin(); itr != m_subStatusList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string KBShareStatus::GetApprovalId() const
{
    return m_approvalId;
}

void KBShareStatus::SetApprovalId(const string& _approvalId)
{
    m_approvalId = _approvalId;
    m_approvalIdHasBeenSet = true;
}

bool KBShareStatus::ApprovalIdHasBeenSet() const
{
    return m_approvalIdHasBeenSet;
}

vector<int64_t> KBShareStatus::GetSubStatusList() const
{
    return m_subStatusList;
}

void KBShareStatus::SetSubStatusList(const vector<int64_t>& _subStatusList)
{
    m_subStatusList = _subStatusList;
    m_subStatusListHasBeenSet = true;
}

bool KBShareStatus::SubStatusListHasBeenSet() const
{
    return m_subStatusListHasBeenSet;
}

