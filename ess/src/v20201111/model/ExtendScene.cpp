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

#include <tencentcloud/ess/v20201111/model/ExtendScene.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ExtendScene::ExtendScene() :
    m_generateTypeHasBeenSet(false),
    m_generateTypeDescHasBeenSet(false),
    m_generateTypeLogoHasBeenSet(false)
{
}

CoreInternalOutcome ExtendScene::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GenerateType") && !value["GenerateType"].IsNull())
    {
        if (!value["GenerateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtendScene.GenerateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_generateType = string(value["GenerateType"].GetString());
        m_generateTypeHasBeenSet = true;
    }

    if (value.HasMember("GenerateTypeDesc") && !value["GenerateTypeDesc"].IsNull())
    {
        if (!value["GenerateTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtendScene.GenerateTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_generateTypeDesc = string(value["GenerateTypeDesc"].GetString());
        m_generateTypeDescHasBeenSet = true;
    }

    if (value.HasMember("GenerateTypeLogo") && !value["GenerateTypeLogo"].IsNull())
    {
        if (!value["GenerateTypeLogo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtendScene.GenerateTypeLogo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_generateTypeLogo = string(value["GenerateTypeLogo"].GetString());
        m_generateTypeLogoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtendScene::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_generateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_generateType.c_str(), allocator).Move(), allocator);
    }

    if (m_generateTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_generateTypeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_generateTypeLogoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateTypeLogo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_generateTypeLogo.c_str(), allocator).Move(), allocator);
    }

}


string ExtendScene::GetGenerateType() const
{
    return m_generateType;
}

void ExtendScene::SetGenerateType(const string& _generateType)
{
    m_generateType = _generateType;
    m_generateTypeHasBeenSet = true;
}

bool ExtendScene::GenerateTypeHasBeenSet() const
{
    return m_generateTypeHasBeenSet;
}

string ExtendScene::GetGenerateTypeDesc() const
{
    return m_generateTypeDesc;
}

void ExtendScene::SetGenerateTypeDesc(const string& _generateTypeDesc)
{
    m_generateTypeDesc = _generateTypeDesc;
    m_generateTypeDescHasBeenSet = true;
}

bool ExtendScene::GenerateTypeDescHasBeenSet() const
{
    return m_generateTypeDescHasBeenSet;
}

string ExtendScene::GetGenerateTypeLogo() const
{
    return m_generateTypeLogo;
}

void ExtendScene::SetGenerateTypeLogo(const string& _generateTypeLogo)
{
    m_generateTypeLogo = _generateTypeLogo;
    m_generateTypeLogoHasBeenSet = true;
}

bool ExtendScene::GenerateTypeLogoHasBeenSet() const
{
    return m_generateTypeLogoHasBeenSet;
}

