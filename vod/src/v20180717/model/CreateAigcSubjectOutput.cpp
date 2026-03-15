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

#include <tencentcloud/vod/v20180717/model/CreateAigcSubjectOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateAigcSubjectOutput::CreateAigcSubjectOutput() :
    m_subjectIdHasBeenSet(false),
    m_subjectInfoHasBeenSet(false)
{
}

CoreInternalOutcome CreateAigcSubjectOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubjectId") && !value["SubjectId"].IsNull())
    {
        if (!value["SubjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcSubjectOutput.SubjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subjectId = string(value["SubjectId"].GetString());
        m_subjectIdHasBeenSet = true;
    }

    if (value.HasMember("SubjectInfo") && !value["SubjectInfo"].IsNull())
    {
        if (!value["SubjectInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcSubjectOutput.SubjectInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subjectInfo = string(value["SubjectInfo"].GetString());
        m_subjectInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateAigcSubjectOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subjectInfo.c_str(), allocator).Move(), allocator);
    }

}


string CreateAigcSubjectOutput::GetSubjectId() const
{
    return m_subjectId;
}

void CreateAigcSubjectOutput::SetSubjectId(const string& _subjectId)
{
    m_subjectId = _subjectId;
    m_subjectIdHasBeenSet = true;
}

bool CreateAigcSubjectOutput::SubjectIdHasBeenSet() const
{
    return m_subjectIdHasBeenSet;
}

string CreateAigcSubjectOutput::GetSubjectInfo() const
{
    return m_subjectInfo;
}

void CreateAigcSubjectOutput::SetSubjectInfo(const string& _subjectInfo)
{
    m_subjectInfo = _subjectInfo;
    m_subjectInfoHasBeenSet = true;
}

bool CreateAigcSubjectOutput::SubjectInfoHasBeenSet() const
{
    return m_subjectInfoHasBeenSet;
}

