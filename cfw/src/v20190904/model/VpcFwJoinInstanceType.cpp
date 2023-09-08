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

#include <tencentcloud/cfw/v20190904/model/VpcFwJoinInstanceType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

VpcFwJoinInstanceType::VpcFwJoinInstanceType() :
    m_joinTypeHasBeenSet(false),
    m_numHasBeenSet(false)
{
}

CoreInternalOutcome VpcFwJoinInstanceType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JoinType") && !value["JoinType"].IsNull())
    {
        if (!value["JoinType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwJoinInstanceType.JoinType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_joinType = string(value["JoinType"].GetString());
        m_joinTypeHasBeenSet = true;
    }

    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwJoinInstanceType.Num` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_num = value["Num"].GetInt64();
        m_numHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcFwJoinInstanceType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_joinTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_joinType.c_str(), allocator).Move(), allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

}


string VpcFwJoinInstanceType::GetJoinType() const
{
    return m_joinType;
}

void VpcFwJoinInstanceType::SetJoinType(const string& _joinType)
{
    m_joinType = _joinType;
    m_joinTypeHasBeenSet = true;
}

bool VpcFwJoinInstanceType::JoinTypeHasBeenSet() const
{
    return m_joinTypeHasBeenSet;
}

int64_t VpcFwJoinInstanceType::GetNum() const
{
    return m_num;
}

void VpcFwJoinInstanceType::SetNum(const int64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool VpcFwJoinInstanceType::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

