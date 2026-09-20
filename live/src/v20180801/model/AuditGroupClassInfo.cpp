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

#include <tencentcloud/live/v20180801/model/AuditGroupClassInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

AuditGroupClassInfo::AuditGroupClassInfo() :
    m_groupClassNameHasBeenSet(false),
    m_groupClassEnameHasBeenSet(false),
    m_labelGroupListHasBeenSet(false)
{
}

CoreInternalOutcome AuditGroupClassInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupClassName") && !value["GroupClassName"].IsNull())
    {
        if (!value["GroupClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditGroupClassInfo.GroupClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupClassName = string(value["GroupClassName"].GetString());
        m_groupClassNameHasBeenSet = true;
    }

    if (value.HasMember("GroupClassEname") && !value["GroupClassEname"].IsNull())
    {
        if (!value["GroupClassEname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditGroupClassInfo.GroupClassEname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupClassEname = string(value["GroupClassEname"].GetString());
        m_groupClassEnameHasBeenSet = true;
    }

    if (value.HasMember("LabelGroupList") && !value["LabelGroupList"].IsNull())
    {
        if (!value["LabelGroupList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditGroupClassInfo.LabelGroupList` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelGroupList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AuditLabelGroupInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labelGroupList.push_back(item);
        }
        m_labelGroupListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditGroupClassInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupClassEnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupClassEname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupClassEname.c_str(), allocator).Move(), allocator);
    }

    if (m_labelGroupListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelGroupList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelGroupList.begin(); itr != m_labelGroupList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AuditGroupClassInfo::GetGroupClassName() const
{
    return m_groupClassName;
}

void AuditGroupClassInfo::SetGroupClassName(const string& _groupClassName)
{
    m_groupClassName = _groupClassName;
    m_groupClassNameHasBeenSet = true;
}

bool AuditGroupClassInfo::GroupClassNameHasBeenSet() const
{
    return m_groupClassNameHasBeenSet;
}

string AuditGroupClassInfo::GetGroupClassEname() const
{
    return m_groupClassEname;
}

void AuditGroupClassInfo::SetGroupClassEname(const string& _groupClassEname)
{
    m_groupClassEname = _groupClassEname;
    m_groupClassEnameHasBeenSet = true;
}

bool AuditGroupClassInfo::GroupClassEnameHasBeenSet() const
{
    return m_groupClassEnameHasBeenSet;
}

vector<AuditLabelGroupInfo> AuditGroupClassInfo::GetLabelGroupList() const
{
    return m_labelGroupList;
}

void AuditGroupClassInfo::SetLabelGroupList(const vector<AuditLabelGroupInfo>& _labelGroupList)
{
    m_labelGroupList = _labelGroupList;
    m_labelGroupListHasBeenSet = true;
}

bool AuditGroupClassInfo::LabelGroupListHasBeenSet() const
{
    return m_labelGroupListHasBeenSet;
}

