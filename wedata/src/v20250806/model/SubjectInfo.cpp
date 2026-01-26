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

#include <tencentcloud/wedata/v20250806/model/SubjectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

SubjectInfo::SubjectInfo() :
    m_subjectTypeHasBeenSet(false),
    m_subjectTypeDisplayNameHasBeenSet(false),
    m_subjectValueHasBeenSet(false),
    m_subjectValueDisplayNameHasBeenSet(false)
{
}

CoreInternalOutcome SubjectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubjectType") && !value["SubjectType"].IsNull())
    {
        if (!value["SubjectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubjectInfo.SubjectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subjectType = string(value["SubjectType"].GetString());
        m_subjectTypeHasBeenSet = true;
    }

    if (value.HasMember("SubjectTypeDisplayName") && !value["SubjectTypeDisplayName"].IsNull())
    {
        if (!value["SubjectTypeDisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubjectInfo.SubjectTypeDisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subjectTypeDisplayName = string(value["SubjectTypeDisplayName"].GetString());
        m_subjectTypeDisplayNameHasBeenSet = true;
    }

    if (value.HasMember("SubjectValue") && !value["SubjectValue"].IsNull())
    {
        if (!value["SubjectValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubjectInfo.SubjectValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subjectValue = string(value["SubjectValue"].GetString());
        m_subjectValueHasBeenSet = true;
    }

    if (value.HasMember("SubjectValueDisplayName") && !value["SubjectValueDisplayName"].IsNull())
    {
        if (!value["SubjectValueDisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubjectInfo.SubjectValueDisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subjectValueDisplayName = string(value["SubjectValueDisplayName"].GetString());
        m_subjectValueDisplayNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubjectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subjectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subjectType.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectTypeDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectTypeDisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subjectTypeDisplayName.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subjectValue.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectValueDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectValueDisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subjectValueDisplayName.c_str(), allocator).Move(), allocator);
    }

}


string SubjectInfo::GetSubjectType() const
{
    return m_subjectType;
}

void SubjectInfo::SetSubjectType(const string& _subjectType)
{
    m_subjectType = _subjectType;
    m_subjectTypeHasBeenSet = true;
}

bool SubjectInfo::SubjectTypeHasBeenSet() const
{
    return m_subjectTypeHasBeenSet;
}

string SubjectInfo::GetSubjectTypeDisplayName() const
{
    return m_subjectTypeDisplayName;
}

void SubjectInfo::SetSubjectTypeDisplayName(const string& _subjectTypeDisplayName)
{
    m_subjectTypeDisplayName = _subjectTypeDisplayName;
    m_subjectTypeDisplayNameHasBeenSet = true;
}

bool SubjectInfo::SubjectTypeDisplayNameHasBeenSet() const
{
    return m_subjectTypeDisplayNameHasBeenSet;
}

string SubjectInfo::GetSubjectValue() const
{
    return m_subjectValue;
}

void SubjectInfo::SetSubjectValue(const string& _subjectValue)
{
    m_subjectValue = _subjectValue;
    m_subjectValueHasBeenSet = true;
}

bool SubjectInfo::SubjectValueHasBeenSet() const
{
    return m_subjectValueHasBeenSet;
}

string SubjectInfo::GetSubjectValueDisplayName() const
{
    return m_subjectValueDisplayName;
}

void SubjectInfo::SetSubjectValueDisplayName(const string& _subjectValueDisplayName)
{
    m_subjectValueDisplayName = _subjectValueDisplayName;
    m_subjectValueDisplayNameHasBeenSet = true;
}

bool SubjectInfo::SubjectValueDisplayNameHasBeenSet() const
{
    return m_subjectValueDisplayNameHasBeenSet;
}

