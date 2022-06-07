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

#include <tencentcloud/tione/v20211111/model/TrainingModelDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

TrainingModelDTO::TrainingModelDTO() :
    m_trainingModelIdHasBeenSet(false),
    m_trainingModelNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome TrainingModelDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TrainingModelId") && !value["TrainingModelId"].IsNull())
    {
        if (!value["TrainingModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelDTO.TrainingModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingModelId = string(value["TrainingModelId"].GetString());
        m_trainingModelIdHasBeenSet = true;
    }

    if (value.HasMember("TrainingModelName") && !value["TrainingModelName"].IsNull())
    {
        if (!value["TrainingModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelDTO.TrainingModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingModelName = string(value["TrainingModelName"].GetString());
        m_trainingModelNameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingModelDTO.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelDTO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrainingModelDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_trainingModelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingModelId.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingModelName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string TrainingModelDTO::GetTrainingModelId() const
{
    return m_trainingModelId;
}

void TrainingModelDTO::SetTrainingModelId(const string& _trainingModelId)
{
    m_trainingModelId = _trainingModelId;
    m_trainingModelIdHasBeenSet = true;
}

bool TrainingModelDTO::TrainingModelIdHasBeenSet() const
{
    return m_trainingModelIdHasBeenSet;
}

string TrainingModelDTO::GetTrainingModelName() const
{
    return m_trainingModelName;
}

void TrainingModelDTO::SetTrainingModelName(const string& _trainingModelName)
{
    m_trainingModelName = _trainingModelName;
    m_trainingModelNameHasBeenSet = true;
}

bool TrainingModelDTO::TrainingModelNameHasBeenSet() const
{
    return m_trainingModelNameHasBeenSet;
}

vector<Tag> TrainingModelDTO::GetTags() const
{
    return m_tags;
}

void TrainingModelDTO::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TrainingModelDTO::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string TrainingModelDTO::GetCreateTime() const
{
    return m_createTime;
}

void TrainingModelDTO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TrainingModelDTO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

