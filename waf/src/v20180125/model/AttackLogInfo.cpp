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

#include <tencentcloud/waf/v20180125/model/AttackLogInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

AttackLogInfo::AttackLogInfo() :
    m_contentHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_timeStampHasBeenSet(false)
{
}

CoreInternalOutcome AttackLogInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackLogInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackLogInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackLogInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("TimeStamp") && !value["TimeStamp"].IsNull())
    {
        if (!value["TimeStamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackLogInfo.TimeStamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeStamp = string(value["TimeStamp"].GetString());
        m_timeStampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttackLogInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_timeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeStamp.c_str(), allocator).Move(), allocator);
    }

}


string AttackLogInfo::GetContent() const
{
    return m_content;
}

void AttackLogInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool AttackLogInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string AttackLogInfo::GetFileName() const
{
    return m_fileName;
}

void AttackLogInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool AttackLogInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string AttackLogInfo::GetSource() const
{
    return m_source;
}

void AttackLogInfo::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool AttackLogInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string AttackLogInfo::GetTimeStamp() const
{
    return m_timeStamp;
}

void AttackLogInfo::SetTimeStamp(const string& _timeStamp)
{
    m_timeStamp = _timeStamp;
    m_timeStampHasBeenSet = true;
}

bool AttackLogInfo::TimeStampHasBeenSet() const
{
    return m_timeStampHasBeenSet;
}

