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

#include <tencentcloud/mps/v20190612/model/CreateProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateProjectRequest::CreateProjectRequest() :
    m_projectNameHasBeenSet(false),
    m_termBaseHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_speakersHasBeenSet(false)
{
}

string CreateProjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_termBaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TermBase";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_termBase.begin(); itr != m_termBase.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_speakersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Speakers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_speakers.begin(); itr != m_speakers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateProjectRequest::GetProjectName() const
{
    return m_projectName;
}

void CreateProjectRequest::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool CreateProjectRequest::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

vector<TermBase> CreateProjectRequest::GetTermBase() const
{
    return m_termBase;
}

void CreateProjectRequest::SetTermBase(const vector<TermBase>& _termBase)
{
    m_termBase = _termBase;
    m_termBaseHasBeenSet = true;
}

bool CreateProjectRequest::TermBaseHasBeenSet() const
{
    return m_termBaseHasBeenSet;
}

string CreateProjectRequest::GetDescription() const
{
    return m_description;
}

void CreateProjectRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateProjectRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<Speakers> CreateProjectRequest::GetSpeakers() const
{
    return m_speakers;
}

void CreateProjectRequest::SetSpeakers(const vector<Speakers>& _speakers)
{
    m_speakers = _speakers;
    m_speakersHasBeenSet = true;
}

bool CreateProjectRequest::SpeakersHasBeenSet() const
{
    return m_speakersHasBeenSet;
}


