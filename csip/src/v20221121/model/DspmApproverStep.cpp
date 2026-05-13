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

#include <tencentcloud/csip/v20221121/model/DspmApproverStep.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmApproverStep::DspmApproverStep() :
    m_approverUinSetHasBeenSet(false),
    m_approverUinHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_approveTimeHasBeenSet(false)
{
}

CoreInternalOutcome DspmApproverStep::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApproverUinSet") && !value["ApproverUinSet"].IsNull())
    {
        if (!value["ApproverUinSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmApproverStep.ApproverUinSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ApproverUinSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmUinUser item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_approverUinSet.push_back(item);
        }
        m_approverUinSetHasBeenSet = true;
    }

    if (value.HasMember("ApproverUin") && !value["ApproverUin"].IsNull())
    {
        if (!value["ApproverUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApproverStep.ApproverUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverUin = string(value["ApproverUin"].GetString());
        m_approverUinHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApproverStep.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApproverStep.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("ApproveTime") && !value["ApproveTime"].IsNull())
    {
        if (!value["ApproveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApproverStep.ApproveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveTime = string(value["ApproveTime"].GetString());
        m_approveTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmApproverStep::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_approverUinSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverUinSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_approverUinSet.begin(); itr != m_approverUinSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_approverUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverUin.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_approveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveTime.c_str(), allocator).Move(), allocator);
    }

}


vector<DspmUinUser> DspmApproverStep::GetApproverUinSet() const
{
    return m_approverUinSet;
}

void DspmApproverStep::SetApproverUinSet(const vector<DspmUinUser>& _approverUinSet)
{
    m_approverUinSet = _approverUinSet;
    m_approverUinSetHasBeenSet = true;
}

bool DspmApproverStep::ApproverUinSetHasBeenSet() const
{
    return m_approverUinSetHasBeenSet;
}

string DspmApproverStep::GetApproverUin() const
{
    return m_approverUin;
}

void DspmApproverStep::SetApproverUin(const string& _approverUin)
{
    m_approverUin = _approverUin;
    m_approverUinHasBeenSet = true;
}

bool DspmApproverStep::ApproverUinHasBeenSet() const
{
    return m_approverUinHasBeenSet;
}

int64_t DspmApproverStep::GetStatus() const
{
    return m_status;
}

void DspmApproverStep::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DspmApproverStep::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DspmApproverStep::GetComment() const
{
    return m_comment;
}

void DspmApproverStep::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool DspmApproverStep::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string DspmApproverStep::GetApproveTime() const
{
    return m_approveTime;
}

void DspmApproverStep::SetApproveTime(const string& _approveTime)
{
    m_approveTime = _approveTime;
    m_approveTimeHasBeenSet = true;
}

bool DspmApproverStep::ApproveTimeHasBeenSet() const
{
    return m_approveTimeHasBeenSet;
}

