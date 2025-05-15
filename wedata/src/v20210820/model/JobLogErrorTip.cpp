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

#include <tencentcloud/wedata/v20210820/model/JobLogErrorTip.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

JobLogErrorTip::JobLogErrorTip() :
    m_contentHasBeenSet(false),
    m_lineNumHasBeenSet(false),
    m_columnNumHasBeenSet(false)
{
}

CoreInternalOutcome JobLogErrorTip::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobLogErrorTip.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("LineNum") && !value["LineNum"].IsNull())
    {
        if (!value["LineNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobLogErrorTip.LineNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lineNum = value["LineNum"].GetUint64();
        m_lineNumHasBeenSet = true;
    }

    if (value.HasMember("ColumnNum") && !value["ColumnNum"].IsNull())
    {
        if (!value["ColumnNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobLogErrorTip.ColumnNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_columnNum = value["ColumnNum"].GetUint64();
        m_columnNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobLogErrorTip::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_lineNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lineNum, allocator);
    }

    if (m_columnNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_columnNum, allocator);
    }

}


string JobLogErrorTip::GetContent() const
{
    return m_content;
}

void JobLogErrorTip::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool JobLogErrorTip::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

uint64_t JobLogErrorTip::GetLineNum() const
{
    return m_lineNum;
}

void JobLogErrorTip::SetLineNum(const uint64_t& _lineNum)
{
    m_lineNum = _lineNum;
    m_lineNumHasBeenSet = true;
}

bool JobLogErrorTip::LineNumHasBeenSet() const
{
    return m_lineNumHasBeenSet;
}

uint64_t JobLogErrorTip::GetColumnNum() const
{
    return m_columnNum;
}

void JobLogErrorTip::SetColumnNum(const uint64_t& _columnNum)
{
    m_columnNum = _columnNum;
    m_columnNumHasBeenSet = true;
}

bool JobLogErrorTip::ColumnNumHasBeenSet() const
{
    return m_columnNumHasBeenSet;
}

