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

#include <tencentcloud/bi/v20220105/model/RowColumnConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

RowColumnConfig::RowColumnConfig() :
    m_rulerInfoHasBeenSet(false),
    m_tagValueListHasBeenSet(false)
{
}

CoreInternalOutcome RowColumnConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RulerInfo") && !value["RulerInfo"].IsNull())
    {
        if (!value["RulerInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RowColumnConfig.RulerInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rulerInfo = string(value["RulerInfo"].GetString());
        m_rulerInfoHasBeenSet = true;
    }

    if (value.HasMember("TagValueList") && !value["TagValueList"].IsNull())
    {
        if (!value["TagValueList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RowColumnConfig.TagValueList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagValueList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RowColumnTagValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagValueList.push_back(item);
        }
        m_tagValueListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RowColumnConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rulerInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RulerInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rulerInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_tagValueListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValueList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagValueList.begin(); itr != m_tagValueList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RowColumnConfig::GetRulerInfo() const
{
    return m_rulerInfo;
}

void RowColumnConfig::SetRulerInfo(const string& _rulerInfo)
{
    m_rulerInfo = _rulerInfo;
    m_rulerInfoHasBeenSet = true;
}

bool RowColumnConfig::RulerInfoHasBeenSet() const
{
    return m_rulerInfoHasBeenSet;
}

vector<RowColumnTagValue> RowColumnConfig::GetTagValueList() const
{
    return m_tagValueList;
}

void RowColumnConfig::SetTagValueList(const vector<RowColumnTagValue>& _tagValueList)
{
    m_tagValueList = _tagValueList;
    m_tagValueListHasBeenSet = true;
}

bool RowColumnConfig::TagValueListHasBeenSet() const
{
    return m_tagValueListHasBeenSet;
}

