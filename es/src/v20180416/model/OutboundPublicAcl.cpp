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

#include <tencentcloud/es/v20180416/model/OutboundPublicAcl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

OutboundPublicAcl::OutboundPublicAcl() :
    m_nodeTypeHasBeenSet(false),
    m_whiteHostListHasBeenSet(false)
{
}

CoreInternalOutcome OutboundPublicAcl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutboundPublicAcl.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("WhiteHostList") && !value["WhiteHostList"].IsNull())
    {
        if (!value["WhiteHostList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutboundPublicAcl.WhiteHostList` is not array type"));

        const rapidjson::Value &tmpValue = value["WhiteHostList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_whiteHostList.push_back((*itr).GetString());
        }
        m_whiteHostListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutboundPublicAcl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteHostListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteHostList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_whiteHostList.begin(); itr != m_whiteHostList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string OutboundPublicAcl::GetNodeType() const
{
    return m_nodeType;
}

void OutboundPublicAcl::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool OutboundPublicAcl::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

vector<string> OutboundPublicAcl::GetWhiteHostList() const
{
    return m_whiteHostList;
}

void OutboundPublicAcl::SetWhiteHostList(const vector<string>& _whiteHostList)
{
    m_whiteHostList = _whiteHostList;
    m_whiteHostListHasBeenSet = true;
}

bool OutboundPublicAcl::WhiteHostListHasBeenSet() const
{
    return m_whiteHostListHasBeenSet;
}

