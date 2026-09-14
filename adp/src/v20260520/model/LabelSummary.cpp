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

#include <tencentcloud/adp/v20260520/model/LabelSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

LabelSummary::LabelSummary() :
    m_labelIdHasBeenSet(false),
    m_metaValueHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_refCountHasBeenSet(false),
    m_termListHasBeenSet(false),
    m_termTotalCountHasBeenSet(false)
{
}

CoreInternalOutcome LabelSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelId") && !value["LabelId"].IsNull())
    {
        if (!value["LabelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelSummary.LabelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelId = string(value["LabelId"].GetString());
        m_labelIdHasBeenSet = true;
    }

    if (value.HasMember("MetaValue") && !value["MetaValue"].IsNull())
    {
        if (!value["MetaValue"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LabelSummary.MetaValue` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaValue.Deserialize(value["MetaValue"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaValueHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelSummary.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RefCount") && !value["RefCount"].IsNull())
    {
        if (!value["RefCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LabelSummary.RefCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_refCount = value["RefCount"].GetUint64();
        m_refCountHasBeenSet = true;
    }

    if (value.HasMember("TermList") && !value["TermList"].IsNull())
    {
        if (!value["TermList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LabelSummary.TermList` is not array type"));

        const rapidjson::Value &tmpValue = value["TermList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LabelTerm item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_termList.push_back(item);
        }
        m_termListHasBeenSet = true;
    }

    if (value.HasMember("TermTotalCount") && !value["TermTotalCount"].IsNull())
    {
        if (!value["TermTotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LabelSummary.TermTotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_termTotalCount = value["TermTotalCount"].GetUint64();
        m_termTotalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LabelSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelId.c_str(), allocator).Move(), allocator);
    }

    if (m_metaValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaValue.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_refCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refCount, allocator);
    }

    if (m_termListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TermList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_termList.begin(); itr != m_termList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_termTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TermTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_termTotalCount, allocator);
    }

}


string LabelSummary::GetLabelId() const
{
    return m_labelId;
}

void LabelSummary::SetLabelId(const string& _labelId)
{
    m_labelId = _labelId;
    m_labelIdHasBeenSet = true;
}

bool LabelSummary::LabelIdHasBeenSet() const
{
    return m_labelIdHasBeenSet;
}

MetaValue LabelSummary::GetMetaValue() const
{
    return m_metaValue;
}

void LabelSummary::SetMetaValue(const MetaValue& _metaValue)
{
    m_metaValue = _metaValue;
    m_metaValueHasBeenSet = true;
}

bool LabelSummary::MetaValueHasBeenSet() const
{
    return m_metaValueHasBeenSet;
}

string LabelSummary::GetName() const
{
    return m_name;
}

void LabelSummary::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LabelSummary::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t LabelSummary::GetRefCount() const
{
    return m_refCount;
}

void LabelSummary::SetRefCount(const uint64_t& _refCount)
{
    m_refCount = _refCount;
    m_refCountHasBeenSet = true;
}

bool LabelSummary::RefCountHasBeenSet() const
{
    return m_refCountHasBeenSet;
}

vector<LabelTerm> LabelSummary::GetTermList() const
{
    return m_termList;
}

void LabelSummary::SetTermList(const vector<LabelTerm>& _termList)
{
    m_termList = _termList;
    m_termListHasBeenSet = true;
}

bool LabelSummary::TermListHasBeenSet() const
{
    return m_termListHasBeenSet;
}

uint64_t LabelSummary::GetTermTotalCount() const
{
    return m_termTotalCount;
}

void LabelSummary::SetTermTotalCount(const uint64_t& _termTotalCount)
{
    m_termTotalCount = _termTotalCount;
    m_termTotalCountHasBeenSet = true;
}

bool LabelSummary::TermTotalCountHasBeenSet() const
{
    return m_termTotalCountHasBeenSet;
}

