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

#include <tencentcloud/wedata/v20210820/model/StrToStrMap.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

StrToStrMap::StrToStrMap() :
    m_kHasBeenSet(false),
    m_vHasBeenSet(false)
{
}

CoreInternalOutcome StrToStrMap::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("K") && !value["K"].IsNull())
    {
        if (!value["K"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrToStrMap.K` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_k = string(value["K"].GetString());
        m_kHasBeenSet = true;
    }

    if (value.HasMember("V") && !value["V"].IsNull())
    {
        if (!value["V"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrToStrMap.V` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_v = string(value["V"].GetString());
        m_vHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StrToStrMap::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_kHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_k.c_str(), allocator).Move(), allocator);
    }

    if (m_vHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "V";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_v.c_str(), allocator).Move(), allocator);
    }

}


string StrToStrMap::GetK() const
{
    return m_k;
}

void StrToStrMap::SetK(const string& _k)
{
    m_k = _k;
    m_kHasBeenSet = true;
}

bool StrToStrMap::KHasBeenSet() const
{
    return m_kHasBeenSet;
}

string StrToStrMap::GetV() const
{
    return m_v;
}

void StrToStrMap::SetV(const string& _v)
{
    m_v = _v;
    m_vHasBeenSet = true;
}

bool StrToStrMap::VHasBeenSet() const
{
    return m_vHasBeenSet;
}

