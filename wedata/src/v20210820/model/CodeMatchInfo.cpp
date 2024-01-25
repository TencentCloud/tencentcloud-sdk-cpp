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

#include <tencentcloud/wedata/v20210820/model/CodeMatchInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CodeMatchInfo::CodeMatchInfo() :
    m_numberHasBeenSet(false),
    m_lineHasBeenSet(false),
    m_nodeTypeHasBeenSet(false)
{
}

CoreInternalOutcome CodeMatchInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeMatchInfo.Number` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_number = value["Number"].GetUint64();
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Line") && !value["Line"].IsNull())
    {
        if (!value["Line"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeMatchInfo.Line` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_line = string(value["Line"].GetString());
        m_lineHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeMatchInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeMatchInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_number, allocator);
    }

    if (m_lineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Line";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_line.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CodeMatchInfo::GetNumber() const
{
    return m_number;
}

void CodeMatchInfo::SetNumber(const uint64_t& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool CodeMatchInfo::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string CodeMatchInfo::GetLine() const
{
    return m_line;
}

void CodeMatchInfo::SetLine(const string& _line)
{
    m_line = _line;
    m_lineHasBeenSet = true;
}

bool CodeMatchInfo::LineHasBeenSet() const
{
    return m_lineHasBeenSet;
}

string CodeMatchInfo::GetNodeType() const
{
    return m_nodeType;
}

void CodeMatchInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool CodeMatchInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

