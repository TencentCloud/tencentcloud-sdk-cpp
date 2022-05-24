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

#include <tencentcloud/es/v20180416/model/EsConfigSetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

EsConfigSetInfo::EsConfigSetInfo() :
    m_typeHasBeenSet(false),
    m_esConfigHasBeenSet(false)
{
}

CoreInternalOutcome EsConfigSetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsConfigSetInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("EsConfig") && !value["EsConfig"].IsNull())
    {
        if (!value["EsConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsConfigSetInfo.EsConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esConfig = string(value["EsConfig"].GetString());
        m_esConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EsConfigSetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_esConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_esConfig.c_str(), allocator).Move(), allocator);
    }

}


string EsConfigSetInfo::GetType() const
{
    return m_type;
}

void EsConfigSetInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool EsConfigSetInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string EsConfigSetInfo::GetEsConfig() const
{
    return m_esConfig;
}

void EsConfigSetInfo::SetEsConfig(const string& _esConfig)
{
    m_esConfig = _esConfig;
    m_esConfigHasBeenSet = true;
}

bool EsConfigSetInfo::EsConfigHasBeenSet() const
{
    return m_esConfigHasBeenSet;
}

