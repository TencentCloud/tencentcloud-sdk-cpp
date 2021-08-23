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

#include <tencentcloud/iotvideo/v20191126/model/Contents.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

Contents::Contents() :
    m_enHasBeenSet(false),
    m_cnHasBeenSet(false),
    m_tcHasBeenSet(false),
    m_defaultHasBeenSet(false)
{
}

CoreInternalOutcome Contents::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("En") && !value["En"].IsNull())
    {
        if (!value["En"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Contents.En` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_en = string(value["En"].GetString());
        m_enHasBeenSet = true;
    }

    if (value.HasMember("Cn") && !value["Cn"].IsNull())
    {
        if (!value["Cn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Contents.Cn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cn = string(value["Cn"].GetString());
        m_cnHasBeenSet = true;
    }

    if (value.HasMember("Tc") && !value["Tc"].IsNull())
    {
        if (!value["Tc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Contents.Tc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tc = string(value["Tc"].GetString());
        m_tcHasBeenSet = true;
    }

    if (value.HasMember("Default") && !value["Default"].IsNull())
    {
        if (!value["Default"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Contents.Default` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_default = string(value["Default"].GetString());
        m_defaultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Contents::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "En";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_en.c_str(), allocator).Move(), allocator);
    }

    if (m_cnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cn.c_str(), allocator).Move(), allocator);
    }

    if (m_tcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tc.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Default";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_default.c_str(), allocator).Move(), allocator);
    }

}


string Contents::GetEn() const
{
    return m_en;
}

void Contents::SetEn(const string& _en)
{
    m_en = _en;
    m_enHasBeenSet = true;
}

bool Contents::EnHasBeenSet() const
{
    return m_enHasBeenSet;
}

string Contents::GetCn() const
{
    return m_cn;
}

void Contents::SetCn(const string& _cn)
{
    m_cn = _cn;
    m_cnHasBeenSet = true;
}

bool Contents::CnHasBeenSet() const
{
    return m_cnHasBeenSet;
}

string Contents::GetTc() const
{
    return m_tc;
}

void Contents::SetTc(const string& _tc)
{
    m_tc = _tc;
    m_tcHasBeenSet = true;
}

bool Contents::TcHasBeenSet() const
{
    return m_tcHasBeenSet;
}

string Contents::GetDefault() const
{
    return m_default;
}

void Contents::SetDefault(const string& _default)
{
    m_default = _default;
    m_defaultHasBeenSet = true;
}

bool Contents::DefaultHasBeenSet() const
{
    return m_defaultHasBeenSet;
}

