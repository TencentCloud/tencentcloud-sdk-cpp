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

#include <tencentcloud/adp/v20260520/model/LabelRef.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

LabelRef::LabelRef() :
    m_labelIdHasBeenSet(false),
    m_labelNameHasBeenSet(false),
    m_labelTermIdListHasBeenSet(false),
    m_labelTermListHasBeenSet(false)
{
}

CoreInternalOutcome LabelRef::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelId") && !value["LabelId"].IsNull())
    {
        if (!value["LabelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelRef.LabelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelId = string(value["LabelId"].GetString());
        m_labelIdHasBeenSet = true;
    }

    if (value.HasMember("LabelName") && !value["LabelName"].IsNull())
    {
        if (!value["LabelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelRef.LabelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelName = string(value["LabelName"].GetString());
        m_labelNameHasBeenSet = true;
    }

    if (value.HasMember("LabelTermIdList") && !value["LabelTermIdList"].IsNull())
    {
        if (!value["LabelTermIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LabelRef.LabelTermIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelTermIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelTermIdList.push_back((*itr).GetString());
        }
        m_labelTermIdListHasBeenSet = true;
    }

    if (value.HasMember("LabelTermList") && !value["LabelTermList"].IsNull())
    {
        if (!value["LabelTermList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LabelRef.LabelTermList` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelTermList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelTermList.push_back((*itr).GetString());
        }
        m_labelTermListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LabelRef::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelName.c_str(), allocator).Move(), allocator);
    }

    if (m_labelTermIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelTermIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelTermIdList.begin(); itr != m_labelTermIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_labelTermListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelTermList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelTermList.begin(); itr != m_labelTermList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string LabelRef::GetLabelId() const
{
    return m_labelId;
}

void LabelRef::SetLabelId(const string& _labelId)
{
    m_labelId = _labelId;
    m_labelIdHasBeenSet = true;
}

bool LabelRef::LabelIdHasBeenSet() const
{
    return m_labelIdHasBeenSet;
}

string LabelRef::GetLabelName() const
{
    return m_labelName;
}

void LabelRef::SetLabelName(const string& _labelName)
{
    m_labelName = _labelName;
    m_labelNameHasBeenSet = true;
}

bool LabelRef::LabelNameHasBeenSet() const
{
    return m_labelNameHasBeenSet;
}

vector<string> LabelRef::GetLabelTermIdList() const
{
    return m_labelTermIdList;
}

void LabelRef::SetLabelTermIdList(const vector<string>& _labelTermIdList)
{
    m_labelTermIdList = _labelTermIdList;
    m_labelTermIdListHasBeenSet = true;
}

bool LabelRef::LabelTermIdListHasBeenSet() const
{
    return m_labelTermIdListHasBeenSet;
}

vector<string> LabelRef::GetLabelTermList() const
{
    return m_labelTermList;
}

void LabelRef::SetLabelTermList(const vector<string>& _labelTermList)
{
    m_labelTermList = _labelTermList;
    m_labelTermListHasBeenSet = true;
}

bool LabelRef::LabelTermListHasBeenSet() const
{
    return m_labelTermListHasBeenSet;
}

