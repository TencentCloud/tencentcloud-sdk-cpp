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

#include <tencentcloud/ess/v20201111/model/SubTaskFeedback.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

SubTaskFeedback::SubTaskFeedback() :
    m_subTaskIdHasBeenSet(false),
    m_feedbackListHasBeenSet(false)
{
}

CoreInternalOutcome SubTaskFeedback::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubTaskId") && !value["SubTaskId"].IsNull())
    {
        if (!value["SubTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubTaskFeedback.SubTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subTaskId = string(value["SubTaskId"].GetString());
        m_subTaskIdHasBeenSet = true;
    }

    if (value.HasMember("FeedbackList") && !value["FeedbackList"].IsNull())
    {
        if (!value["FeedbackList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubTaskFeedback.FeedbackList` is not array type"));

        const rapidjson::Value &tmpValue = value["FeedbackList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FeedbackList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_feedbackList.push_back(item);
        }
        m_feedbackListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubTaskFeedback::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_feedbackListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeedbackList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_feedbackList.begin(); itr != m_feedbackList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SubTaskFeedback::GetSubTaskId() const
{
    return m_subTaskId;
}

void SubTaskFeedback::SetSubTaskId(const string& _subTaskId)
{
    m_subTaskId = _subTaskId;
    m_subTaskIdHasBeenSet = true;
}

bool SubTaskFeedback::SubTaskIdHasBeenSet() const
{
    return m_subTaskIdHasBeenSet;
}

vector<FeedbackList> SubTaskFeedback::GetFeedbackList() const
{
    return m_feedbackList;
}

void SubTaskFeedback::SetFeedbackList(const vector<FeedbackList>& _feedbackList)
{
    m_feedbackList = _feedbackList;
    m_feedbackListHasBeenSet = true;
}

bool SubTaskFeedback::FeedbackListHasBeenSet() const
{
    return m_feedbackListHasBeenSet;
}

