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

#include <tencentcloud/adp/v20260520/model/ConsumptionClassification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConsumptionClassification::ConsumptionClassification() :
    m_consumptionSceneHasBeenSet(false),
    m_consumptionTargetHasBeenSet(false),
    m_consumptionTypeHasBeenSet(false),
    m_packageNameHasBeenSet(false)
{
}

CoreInternalOutcome ConsumptionClassification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConsumptionScene") && !value["ConsumptionScene"].IsNull())
    {
        if (!value["ConsumptionScene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionClassification.ConsumptionScene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumptionScene = string(value["ConsumptionScene"].GetString());
        m_consumptionSceneHasBeenSet = true;
    }

    if (value.HasMember("ConsumptionTarget") && !value["ConsumptionTarget"].IsNull())
    {
        if (!value["ConsumptionTarget"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionClassification.ConsumptionTarget` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumptionTarget = string(value["ConsumptionTarget"].GetString());
        m_consumptionTargetHasBeenSet = true;
    }

    if (value.HasMember("ConsumptionType") && !value["ConsumptionType"].IsNull())
    {
        if (!value["ConsumptionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionClassification.ConsumptionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumptionType = string(value["ConsumptionType"].GetString());
        m_consumptionTypeHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionClassification.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumptionClassification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_consumptionSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumptionScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumptionScene.c_str(), allocator).Move(), allocator);
    }

    if (m_consumptionTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumptionTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumptionTarget.c_str(), allocator).Move(), allocator);
    }

    if (m_consumptionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumptionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumptionType.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

}


string ConsumptionClassification::GetConsumptionScene() const
{
    return m_consumptionScene;
}

void ConsumptionClassification::SetConsumptionScene(const string& _consumptionScene)
{
    m_consumptionScene = _consumptionScene;
    m_consumptionSceneHasBeenSet = true;
}

bool ConsumptionClassification::ConsumptionSceneHasBeenSet() const
{
    return m_consumptionSceneHasBeenSet;
}

string ConsumptionClassification::GetConsumptionTarget() const
{
    return m_consumptionTarget;
}

void ConsumptionClassification::SetConsumptionTarget(const string& _consumptionTarget)
{
    m_consumptionTarget = _consumptionTarget;
    m_consumptionTargetHasBeenSet = true;
}

bool ConsumptionClassification::ConsumptionTargetHasBeenSet() const
{
    return m_consumptionTargetHasBeenSet;
}

string ConsumptionClassification::GetConsumptionType() const
{
    return m_consumptionType;
}

void ConsumptionClassification::SetConsumptionType(const string& _consumptionType)
{
    m_consumptionType = _consumptionType;
    m_consumptionTypeHasBeenSet = true;
}

bool ConsumptionClassification::ConsumptionTypeHasBeenSet() const
{
    return m_consumptionTypeHasBeenSet;
}

string ConsumptionClassification::GetPackageName() const
{
    return m_packageName;
}

void ConsumptionClassification::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool ConsumptionClassification::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

