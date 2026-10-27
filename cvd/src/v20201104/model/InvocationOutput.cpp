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

#include <tencentcloud/cvd/v20201104/model/InvocationOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

InvocationOutput::InvocationOutput() :
    m_linesHasBeenSet(false),
    m_linesOffsetHasBeenSet(false),
    m_linesNumHasBeenSet(false),
    m_encodingHasBeenSet(false),
    m_allLinesOffsetHasBeenSet(false),
    m_allLinesNumHasBeenSet(false)
{
}

CoreInternalOutcome InvocationOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Lines") && !value["Lines"].IsNull())
    {
        if (!value["Lines"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvocationOutput.Lines` is not array type"));

        const rapidjson::Value &tmpValue = value["Lines"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lines.push_back((*itr).GetString());
        }
        m_linesHasBeenSet = true;
    }

    if (value.HasMember("LinesOffset") && !value["LinesOffset"].IsNull())
    {
        if (!value["LinesOffset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationOutput.LinesOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_linesOffset = value["LinesOffset"].GetUint64();
        m_linesOffsetHasBeenSet = true;
    }

    if (value.HasMember("LinesNum") && !value["LinesNum"].IsNull())
    {
        if (!value["LinesNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationOutput.LinesNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_linesNum = value["LinesNum"].GetUint64();
        m_linesNumHasBeenSet = true;
    }

    if (value.HasMember("Encoding") && !value["Encoding"].IsNull())
    {
        if (!value["Encoding"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationOutput.Encoding` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encoding = string(value["Encoding"].GetString());
        m_encodingHasBeenSet = true;
    }

    if (value.HasMember("AllLinesOffset") && !value["AllLinesOffset"].IsNull())
    {
        if (!value["AllLinesOffset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationOutput.AllLinesOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_allLinesOffset = value["AllLinesOffset"].GetUint64();
        m_allLinesOffsetHasBeenSet = true;
    }

    if (value.HasMember("AllLinesNum") && !value["AllLinesNum"].IsNull())
    {
        if (!value["AllLinesNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationOutput.AllLinesNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_allLinesNum = value["AllLinesNum"].GetUint64();
        m_allLinesNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvocationOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_linesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lines";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lines.begin(); itr != m_lines.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_linesOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinesOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_linesOffset, allocator);
    }

    if (m_linesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_linesNum, allocator);
    }

    if (m_encodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encoding";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encoding.c_str(), allocator).Move(), allocator);
    }

    if (m_allLinesOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllLinesOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allLinesOffset, allocator);
    }

    if (m_allLinesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllLinesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allLinesNum, allocator);
    }

}


vector<string> InvocationOutput::GetLines() const
{
    return m_lines;
}

void InvocationOutput::SetLines(const vector<string>& _lines)
{
    m_lines = _lines;
    m_linesHasBeenSet = true;
}

bool InvocationOutput::LinesHasBeenSet() const
{
    return m_linesHasBeenSet;
}

uint64_t InvocationOutput::GetLinesOffset() const
{
    return m_linesOffset;
}

void InvocationOutput::SetLinesOffset(const uint64_t& _linesOffset)
{
    m_linesOffset = _linesOffset;
    m_linesOffsetHasBeenSet = true;
}

bool InvocationOutput::LinesOffsetHasBeenSet() const
{
    return m_linesOffsetHasBeenSet;
}

uint64_t InvocationOutput::GetLinesNum() const
{
    return m_linesNum;
}

void InvocationOutput::SetLinesNum(const uint64_t& _linesNum)
{
    m_linesNum = _linesNum;
    m_linesNumHasBeenSet = true;
}

bool InvocationOutput::LinesNumHasBeenSet() const
{
    return m_linesNumHasBeenSet;
}

string InvocationOutput::GetEncoding() const
{
    return m_encoding;
}

void InvocationOutput::SetEncoding(const string& _encoding)
{
    m_encoding = _encoding;
    m_encodingHasBeenSet = true;
}

bool InvocationOutput::EncodingHasBeenSet() const
{
    return m_encodingHasBeenSet;
}

uint64_t InvocationOutput::GetAllLinesOffset() const
{
    return m_allLinesOffset;
}

void InvocationOutput::SetAllLinesOffset(const uint64_t& _allLinesOffset)
{
    m_allLinesOffset = _allLinesOffset;
    m_allLinesOffsetHasBeenSet = true;
}

bool InvocationOutput::AllLinesOffsetHasBeenSet() const
{
    return m_allLinesOffsetHasBeenSet;
}

uint64_t InvocationOutput::GetAllLinesNum() const
{
    return m_allLinesNum;
}

void InvocationOutput::SetAllLinesNum(const uint64_t& _allLinesNum)
{
    m_allLinesNum = _allLinesNum;
    m_allLinesNumHasBeenSet = true;
}

bool InvocationOutput::AllLinesNumHasBeenSet() const
{
    return m_allLinesNumHasBeenSet;
}

