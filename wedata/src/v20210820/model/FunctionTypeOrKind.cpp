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

#include <tencentcloud/wedata/v20210820/model/FunctionTypeOrKind.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

FunctionTypeOrKind::FunctionTypeOrKind() :
    m_nameHasBeenSet(false),
    m_zhNameHasBeenSet(false),
    m_enNameHasBeenSet(false)
{
}

CoreInternalOutcome FunctionTypeOrKind::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionTypeOrKind.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ZhName") && !value["ZhName"].IsNull())
    {
        if (!value["ZhName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionTypeOrKind.ZhName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zhName = string(value["ZhName"].GetString());
        m_zhNameHasBeenSet = true;
    }

    if (value.HasMember("EnName") && !value["EnName"].IsNull())
    {
        if (!value["EnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionTypeOrKind.EnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enName = string(value["EnName"].GetString());
        m_enNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FunctionTypeOrKind::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_zhNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZhName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zhName.c_str(), allocator).Move(), allocator);
    }

    if (m_enNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enName.c_str(), allocator).Move(), allocator);
    }

}


string FunctionTypeOrKind::GetName() const
{
    return m_name;
}

void FunctionTypeOrKind::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FunctionTypeOrKind::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string FunctionTypeOrKind::GetZhName() const
{
    return m_zhName;
}

void FunctionTypeOrKind::SetZhName(const string& _zhName)
{
    m_zhName = _zhName;
    m_zhNameHasBeenSet = true;
}

bool FunctionTypeOrKind::ZhNameHasBeenSet() const
{
    return m_zhNameHasBeenSet;
}

string FunctionTypeOrKind::GetEnName() const
{
    return m_enName;
}

void FunctionTypeOrKind::SetEnName(const string& _enName)
{
    m_enName = _enName;
    m_enNameHasBeenSet = true;
}

bool FunctionTypeOrKind::EnNameHasBeenSet() const
{
    return m_enNameHasBeenSet;
}

