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

#include <tencentcloud/apcas/v20201127/model/TaskDetailData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apcas::V20201127::Model;
using namespace std;

TaskDetailData::TaskDetailData() :
    m_tagIdHasBeenSet(false),
    m_tagDescHasBeenSet(false),
    m_labelDetailDataListHasBeenSet(false)
{
}

CoreInternalOutcome TaskDetailData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagId") && !value["TagId"].IsNull())
    {
        if (!value["TagId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDetailData.TagId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tagId = value["TagId"].GetUint64();
        m_tagIdHasBeenSet = true;
    }

    if (value.HasMember("TagDesc") && !value["TagDesc"].IsNull())
    {
        if (!value["TagDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDetailData.TagDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagDesc = string(value["TagDesc"].GetString());
        m_tagDescHasBeenSet = true;
    }

    if (value.HasMember("LabelDetailDataList") && !value["LabelDetailDataList"].IsNull())
    {
        if (!value["LabelDetailDataList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskDetailData.LabelDetailDataList` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelDetailDataList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LabelDetailData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labelDetailDataList.push_back(item);
        }
        m_labelDetailDataListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskDetailData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagId, allocator);
    }

    if (m_tagDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_labelDetailDataListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelDetailDataList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelDetailDataList.begin(); itr != m_labelDetailDataList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t TaskDetailData::GetTagId() const
{
    return m_tagId;
}

void TaskDetailData::SetTagId(const uint64_t& _tagId)
{
    m_tagId = _tagId;
    m_tagIdHasBeenSet = true;
}

bool TaskDetailData::TagIdHasBeenSet() const
{
    return m_tagIdHasBeenSet;
}

string TaskDetailData::GetTagDesc() const
{
    return m_tagDesc;
}

void TaskDetailData::SetTagDesc(const string& _tagDesc)
{
    m_tagDesc = _tagDesc;
    m_tagDescHasBeenSet = true;
}

bool TaskDetailData::TagDescHasBeenSet() const
{
    return m_tagDescHasBeenSet;
}

vector<LabelDetailData> TaskDetailData::GetLabelDetailDataList() const
{
    return m_labelDetailDataList;
}

void TaskDetailData::SetLabelDetailDataList(const vector<LabelDetailData>& _labelDetailDataList)
{
    m_labelDetailDataList = _labelDetailDataList;
    m_labelDetailDataListHasBeenSet = true;
}

bool TaskDetailData::LabelDetailDataListHasBeenSet() const
{
    return m_labelDetailDataListHasBeenSet;
}

