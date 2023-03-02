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

#include <tencentcloud/mrs/v20200910/model/PartDesc.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

PartDesc::PartDesc() :
    m_mainDirHasBeenSet(false),
    m_partHasBeenSet(false),
    m_secondaryDirHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome PartDesc::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MainDir") && !value["MainDir"].IsNull())
    {
        if (!value["MainDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartDesc.MainDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainDir = string(value["MainDir"].GetString());
        m_mainDirHasBeenSet = true;
    }

    if (value.HasMember("Part") && !value["Part"].IsNull())
    {
        if (!value["Part"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartDesc.Part` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_part = string(value["Part"].GetString());
        m_partHasBeenSet = true;
    }

    if (value.HasMember("SecondaryDir") && !value["SecondaryDir"].IsNull())
    {
        if (!value["SecondaryDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartDesc.SecondaryDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryDir = string(value["SecondaryDir"].GetString());
        m_secondaryDirHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartDesc.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PartDesc::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mainDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainDir.c_str(), allocator).Move(), allocator);
    }

    if (m_partHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Part";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_part.c_str(), allocator).Move(), allocator);
    }

    if (m_secondaryDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondaryDir.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string PartDesc::GetMainDir() const
{
    return m_mainDir;
}

void PartDesc::SetMainDir(const string& _mainDir)
{
    m_mainDir = _mainDir;
    m_mainDirHasBeenSet = true;
}

bool PartDesc::MainDirHasBeenSet() const
{
    return m_mainDirHasBeenSet;
}

string PartDesc::GetPart() const
{
    return m_part;
}

void PartDesc::SetPart(const string& _part)
{
    m_part = _part;
    m_partHasBeenSet = true;
}

bool PartDesc::PartHasBeenSet() const
{
    return m_partHasBeenSet;
}

string PartDesc::GetSecondaryDir() const
{
    return m_secondaryDir;
}

void PartDesc::SetSecondaryDir(const string& _secondaryDir)
{
    m_secondaryDir = _secondaryDir;
    m_secondaryDirHasBeenSet = true;
}

bool PartDesc::SecondaryDirHasBeenSet() const
{
    return m_secondaryDirHasBeenSet;
}

string PartDesc::GetType() const
{
    return m_type;
}

void PartDesc::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PartDesc::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

