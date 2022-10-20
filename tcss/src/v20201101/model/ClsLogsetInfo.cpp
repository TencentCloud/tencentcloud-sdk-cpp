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

#include <tencentcloud/tcss/v20201101/model/ClsLogsetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ClsLogsetInfo::ClsLogsetInfo() :
    m_logsetIDHasBeenSet(false),
    m_logsetNameHasBeenSet(false),
    m_topicListHasBeenSet(false)
{
}

CoreInternalOutcome ClsLogsetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogsetID") && !value["LogsetID"].IsNull())
    {
        if (!value["LogsetID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogsetInfo.LogsetID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetID = string(value["LogsetID"].GetString());
        m_logsetIDHasBeenSet = true;
    }

    if (value.HasMember("LogsetName") && !value["LogsetName"].IsNull())
    {
        if (!value["LogsetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogsetInfo.LogsetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetName = string(value["LogsetName"].GetString());
        m_logsetNameHasBeenSet = true;
    }

    if (value.HasMember("TopicList") && !value["TopicList"].IsNull())
    {
        if (!value["TopicList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClsLogsetInfo.TopicList` is not array type"));

        const rapidjson::Value &tmpValue = value["TopicList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClsTopicInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topicList.push_back(item);
        }
        m_topicListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClsLogsetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logsetIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetID.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topicList.begin(); itr != m_topicList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ClsLogsetInfo::GetLogsetID() const
{
    return m_logsetID;
}

void ClsLogsetInfo::SetLogsetID(const string& _logsetID)
{
    m_logsetID = _logsetID;
    m_logsetIDHasBeenSet = true;
}

bool ClsLogsetInfo::LogsetIDHasBeenSet() const
{
    return m_logsetIDHasBeenSet;
}

string ClsLogsetInfo::GetLogsetName() const
{
    return m_logsetName;
}

void ClsLogsetInfo::SetLogsetName(const string& _logsetName)
{
    m_logsetName = _logsetName;
    m_logsetNameHasBeenSet = true;
}

bool ClsLogsetInfo::LogsetNameHasBeenSet() const
{
    return m_logsetNameHasBeenSet;
}

vector<ClsTopicInfo> ClsLogsetInfo::GetTopicList() const
{
    return m_topicList;
}

void ClsLogsetInfo::SetTopicList(const vector<ClsTopicInfo>& _topicList)
{
    m_topicList = _topicList;
    m_topicListHasBeenSet = true;
}

bool ClsLogsetInfo::TopicListHasBeenSet() const
{
    return m_topicListHasBeenSet;
}

