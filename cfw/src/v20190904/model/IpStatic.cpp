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

#include <tencentcloud/cfw/v20190904/model/IpStatic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

IpStatic::IpStatic() :
    m_numHasBeenSet(false),
    m_statTimeHasBeenSet(false)
{
}

CoreInternalOutcome IpStatic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IpStatic.Num` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_num = value["Num"].GetInt64();
        m_numHasBeenSet = true;
    }

    if (value.HasMember("StatTime") && !value["StatTime"].IsNull())
    {
        if (!value["StatTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpStatic.StatTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statTime = string(value["StatTime"].GetString());
        m_statTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpStatic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

    if (m_statTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t IpStatic::GetNum() const
{
    return m_num;
}

void IpStatic::SetNum(const int64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool IpStatic::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

string IpStatic::GetStatTime() const
{
    return m_statTime;
}

void IpStatic::SetStatTime(const string& _statTime)
{
    m_statTime = _statTime;
    m_statTimeHasBeenSet = true;
}

bool IpStatic::StatTimeHasBeenSet() const
{
    return m_statTimeHasBeenSet;
}

