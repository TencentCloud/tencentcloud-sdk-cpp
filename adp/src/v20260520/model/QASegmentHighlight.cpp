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

#include <tencentcloud/adp/v20260520/model/QASegmentHighlight.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

QASegmentHighlight::QASegmentHighlight() :
    m_endPosHasBeenSet(false),
    m_startPosHasBeenSet(false)
{
}

CoreInternalOutcome QASegmentHighlight::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndPos") && !value["EndPos"].IsNull())
    {
        if (!value["EndPos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QASegmentHighlight.EndPos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPos = string(value["EndPos"].GetString());
        m_endPosHasBeenSet = true;
    }

    if (value.HasMember("StartPos") && !value["StartPos"].IsNull())
    {
        if (!value["StartPos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QASegmentHighlight.StartPos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startPos = string(value["StartPos"].GetString());
        m_startPosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QASegmentHighlight::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPos.c_str(), allocator).Move(), allocator);
    }

    if (m_startPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startPos.c_str(), allocator).Move(), allocator);
    }

}


string QASegmentHighlight::GetEndPos() const
{
    return m_endPos;
}

void QASegmentHighlight::SetEndPos(const string& _endPos)
{
    m_endPos = _endPos;
    m_endPosHasBeenSet = true;
}

bool QASegmentHighlight::EndPosHasBeenSet() const
{
    return m_endPosHasBeenSet;
}

string QASegmentHighlight::GetStartPos() const
{
    return m_startPos;
}

void QASegmentHighlight::SetStartPos(const string& _startPos)
{
    m_startPos = _startPos;
    m_startPosHasBeenSet = true;
}

bool QASegmentHighlight::StartPosHasBeenSet() const
{
    return m_startPosHasBeenSet;
}

