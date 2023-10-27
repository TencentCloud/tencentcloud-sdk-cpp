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

#include <tencentcloud/wedata/v20210820/model/TaskTag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskTag::TaskTag() :
    m_tagNameHasBeenSet(false),
    m_tagValuesHasBeenSet(false)
{
}

CoreInternalOutcome TaskTag::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagName") && !value["TagName"].IsNull())
    {
        if (!value["TagName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTag.TagName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagName = string(value["TagName"].GetString());
        m_tagNameHasBeenSet = true;
    }

    if (value.HasMember("TagValues") && !value["TagValues"].IsNull())
    {
        if (!value["TagValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskTag.TagValues` is not array type"));

        const rapidjson::Value &tmpValue = value["TagValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagValues.push_back((*itr).GetString());
        }
        m_tagValuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskTag::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagValues.begin(); itr != m_tagValues.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TaskTag::GetTagName() const
{
    return m_tagName;
}

void TaskTag::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool TaskTag::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}

vector<string> TaskTag::GetTagValues() const
{
    return m_tagValues;
}

void TaskTag::SetTagValues(const vector<string>& _tagValues)
{
    m_tagValues = _tagValues;
    m_tagValuesHasBeenSet = true;
}

bool TaskTag::TagValuesHasBeenSet() const
{
    return m_tagValuesHasBeenSet;
}

