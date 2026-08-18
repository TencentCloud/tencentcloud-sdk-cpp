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

#include <tencentcloud/adp/v20260520/model/CallSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CallSource::CallSource() :
    m_subjectIdHasBeenSet(false),
    m_subjectNameHasBeenSet(false),
    m_subjectTypeHasBeenSet(false)
{
}

CoreInternalOutcome CallSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubjectId") && !value["SubjectId"].IsNull())
    {
        if (!value["SubjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallSource.SubjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subjectId = string(value["SubjectId"].GetString());
        m_subjectIdHasBeenSet = true;
    }

    if (value.HasMember("SubjectName") && !value["SubjectName"].IsNull())
    {
        if (!value["SubjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallSource.SubjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subjectName = string(value["SubjectName"].GetString());
        m_subjectNameHasBeenSet = true;
    }

    if (value.HasMember("SubjectType") && !value["SubjectType"].IsNull())
    {
        if (!value["SubjectType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallSource.SubjectType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subjectType = value["SubjectType"].GetInt64();
        m_subjectTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subjectType, allocator);
    }

}


string CallSource::GetSubjectId() const
{
    return m_subjectId;
}

void CallSource::SetSubjectId(const string& _subjectId)
{
    m_subjectId = _subjectId;
    m_subjectIdHasBeenSet = true;
}

bool CallSource::SubjectIdHasBeenSet() const
{
    return m_subjectIdHasBeenSet;
}

string CallSource::GetSubjectName() const
{
    return m_subjectName;
}

void CallSource::SetSubjectName(const string& _subjectName)
{
    m_subjectName = _subjectName;
    m_subjectNameHasBeenSet = true;
}

bool CallSource::SubjectNameHasBeenSet() const
{
    return m_subjectNameHasBeenSet;
}

int64_t CallSource::GetSubjectType() const
{
    return m_subjectType;
}

void CallSource::SetSubjectType(const int64_t& _subjectType)
{
    m_subjectType = _subjectType;
    m_subjectTypeHasBeenSet = true;
}

bool CallSource::SubjectTypeHasBeenSet() const
{
    return m_subjectTypeHasBeenSet;
}

