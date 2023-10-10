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

#include <tencentcloud/cwp/v20180228/model/AttackSourceEdge.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AttackSourceEdge::AttackSourceEdge() :
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false)
{
}

CoreInternalOutcome AttackSourceEdge::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("From") && !value["From"].IsNull())
    {
        if (!value["From"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackSourceEdge.From` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_from = string(value["From"].GetString());
        m_fromHasBeenSet = true;
    }

    if (value.HasMember("To") && !value["To"].IsNull())
    {
        if (!value["To"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackSourceEdge.To` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_to = string(value["To"].GetString());
        m_toHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttackSourceEdge::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_toHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "To";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_to.c_str(), allocator).Move(), allocator);
    }

}


string AttackSourceEdge::GetFrom() const
{
    return m_from;
}

void AttackSourceEdge::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool AttackSourceEdge::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string AttackSourceEdge::GetTo() const
{
    return m_to;
}

void AttackSourceEdge::SetTo(const string& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool AttackSourceEdge::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}

