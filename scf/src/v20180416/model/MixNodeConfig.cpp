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

#include <tencentcloud/scf/v20180416/model/MixNodeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

MixNodeConfig::MixNodeConfig() :
    m_nodeSpecHasBeenSet(false),
    m_numHasBeenSet(false)
{
}

CoreInternalOutcome MixNodeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeSpec") && !value["NodeSpec"].IsNull())
    {
        if (!value["NodeSpec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MixNodeConfig.NodeSpec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSpec = string(value["NodeSpec"].GetString());
        m_nodeSpecHasBeenSet = true;
    }

    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MixNodeConfig.Num` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_num = value["Num"].GetUint64();
        m_numHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MixNodeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeSpec.c_str(), allocator).Move(), allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

}


string MixNodeConfig::GetNodeSpec() const
{
    return m_nodeSpec;
}

void MixNodeConfig::SetNodeSpec(const string& _nodeSpec)
{
    m_nodeSpec = _nodeSpec;
    m_nodeSpecHasBeenSet = true;
}

bool MixNodeConfig::NodeSpecHasBeenSet() const
{
    return m_nodeSpecHasBeenSet;
}

uint64_t MixNodeConfig::GetNum() const
{
    return m_num;
}

void MixNodeConfig::SetNum(const uint64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool MixNodeConfig::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

