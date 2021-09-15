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

#include <tencentcloud/essbasic/v20201222/model/Component.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

Component::Component() :
    m_componentIdHasBeenSet(false),
    m_componentTypeHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_componentRequiredHasBeenSet(false),
    m_fileIndexHasBeenSet(false),
    m_generateModeHasBeenSet(false),
    m_componentWidthHasBeenSet(false),
    m_componentHeightHasBeenSet(false),
    m_componentPageHasBeenSet(false),
    m_componentPosXHasBeenSet(false),
    m_componentPosYHasBeenSet(false),
    m_componentExtraHasBeenSet(false),
    m_componentValueHasBeenSet(false),
    m_sealOperateHasBeenSet(false),
    m_generateExtraHasBeenSet(false)
{
}

CoreInternalOutcome Component::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComponentId") && !value["ComponentId"].IsNull())
    {
        if (!value["ComponentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ComponentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentId = string(value["ComponentId"].GetString());
        m_componentIdHasBeenSet = true;
    }

    if (value.HasMember("ComponentType") && !value["ComponentType"].IsNull())
    {
        if (!value["ComponentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ComponentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentType = string(value["ComponentType"].GetString());
        m_componentTypeHasBeenSet = true;
    }

    if (value.HasMember("ComponentName") && !value["ComponentName"].IsNull())
    {
        if (!value["ComponentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ComponentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentName = string(value["ComponentName"].GetString());
        m_componentNameHasBeenSet = true;
    }

    if (value.HasMember("ComponentRequired") && !value["ComponentRequired"].IsNull())
    {
        if (!value["ComponentRequired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ComponentRequired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_componentRequired = value["ComponentRequired"].GetBool();
        m_componentRequiredHasBeenSet = true;
    }

    if (value.HasMember("FileIndex") && !value["FileIndex"].IsNull())
    {
        if (!value["FileIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Component.FileIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileIndex = value["FileIndex"].GetInt64();
        m_fileIndexHasBeenSet = true;
    }

    if (value.HasMember("GenerateMode") && !value["GenerateMode"].IsNull())
    {
        if (!value["GenerateMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Component.GenerateMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_generateMode = value["GenerateMode"].GetInt64();
        m_generateModeHasBeenSet = true;
    }

    if (value.HasMember("ComponentWidth") && !value["ComponentWidth"].IsNull())
    {
        if (!value["ComponentWidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ComponentWidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_componentWidth = value["ComponentWidth"].GetDouble();
        m_componentWidthHasBeenSet = true;
    }

    if (value.HasMember("ComponentHeight") && !value["ComponentHeight"].IsNull())
    {
        if (!value["ComponentHeight"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ComponentHeight` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_componentHeight = value["ComponentHeight"].GetDouble();
        m_componentHeightHasBeenSet = true;
    }

    if (value.HasMember("ComponentPage") && !value["ComponentPage"].IsNull())
    {
        if (!value["ComponentPage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ComponentPage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_componentPage = value["ComponentPage"].GetInt64();
        m_componentPageHasBeenSet = true;
    }

    if (value.HasMember("ComponentPosX") && !value["ComponentPosX"].IsNull())
    {
        if (!value["ComponentPosX"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ComponentPosX` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_componentPosX = value["ComponentPosX"].GetDouble();
        m_componentPosXHasBeenSet = true;
    }

    if (value.HasMember("ComponentPosY") && !value["ComponentPosY"].IsNull())
    {
        if (!value["ComponentPosY"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ComponentPosY` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_componentPosY = value["ComponentPosY"].GetDouble();
        m_componentPosYHasBeenSet = true;
    }

    if (value.HasMember("ComponentExtra") && !value["ComponentExtra"].IsNull())
    {
        if (!value["ComponentExtra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ComponentExtra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentExtra = string(value["ComponentExtra"].GetString());
        m_componentExtraHasBeenSet = true;
    }

    if (value.HasMember("ComponentValue") && !value["ComponentValue"].IsNull())
    {
        if (!value["ComponentValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ComponentValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentValue = string(value["ComponentValue"].GetString());
        m_componentValueHasBeenSet = true;
    }

    if (value.HasMember("SealOperate") && !value["SealOperate"].IsNull())
    {
        if (!value["SealOperate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Component.SealOperate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sealOperate = value["SealOperate"].GetInt64();
        m_sealOperateHasBeenSet = true;
    }

    if (value.HasMember("GenerateExtra") && !value["GenerateExtra"].IsNull())
    {
        if (!value["GenerateExtra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.GenerateExtra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_generateExtra = string(value["GenerateExtra"].GetString());
        m_generateExtraHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Component::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_componentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentId.c_str(), allocator).Move(), allocator);
    }

    if (m_componentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentType.c_str(), allocator).Move(), allocator);
    }

    if (m_componentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentName.c_str(), allocator).Move(), allocator);
    }

    if (m_componentRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentRequired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentRequired, allocator);
    }

    if (m_fileIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileIndex, allocator);
    }

    if (m_generateModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_generateMode, allocator);
    }

    if (m_componentWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentWidth, allocator);
    }

    if (m_componentHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentHeight, allocator);
    }

    if (m_componentPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentPage, allocator);
    }

    if (m_componentPosXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentPosX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentPosX, allocator);
    }

    if (m_componentPosYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentPosY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentPosY, allocator);
    }

    if (m_componentExtraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentExtra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentExtra.c_str(), allocator).Move(), allocator);
    }

    if (m_componentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentValue.c_str(), allocator).Move(), allocator);
    }

    if (m_sealOperateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealOperate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sealOperate, allocator);
    }

    if (m_generateExtraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateExtra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_generateExtra.c_str(), allocator).Move(), allocator);
    }

}


string Component::GetComponentId() const
{
    return m_componentId;
}

void Component::SetComponentId(const string& _componentId)
{
    m_componentId = _componentId;
    m_componentIdHasBeenSet = true;
}

bool Component::ComponentIdHasBeenSet() const
{
    return m_componentIdHasBeenSet;
}

string Component::GetComponentType() const
{
    return m_componentType;
}

void Component::SetComponentType(const string& _componentType)
{
    m_componentType = _componentType;
    m_componentTypeHasBeenSet = true;
}

bool Component::ComponentTypeHasBeenSet() const
{
    return m_componentTypeHasBeenSet;
}

string Component::GetComponentName() const
{
    return m_componentName;
}

void Component::SetComponentName(const string& _componentName)
{
    m_componentName = _componentName;
    m_componentNameHasBeenSet = true;
}

bool Component::ComponentNameHasBeenSet() const
{
    return m_componentNameHasBeenSet;
}

bool Component::GetComponentRequired() const
{
    return m_componentRequired;
}

void Component::SetComponentRequired(const bool& _componentRequired)
{
    m_componentRequired = _componentRequired;
    m_componentRequiredHasBeenSet = true;
}

bool Component::ComponentRequiredHasBeenSet() const
{
    return m_componentRequiredHasBeenSet;
}

int64_t Component::GetFileIndex() const
{
    return m_fileIndex;
}

void Component::SetFileIndex(const int64_t& _fileIndex)
{
    m_fileIndex = _fileIndex;
    m_fileIndexHasBeenSet = true;
}

bool Component::FileIndexHasBeenSet() const
{
    return m_fileIndexHasBeenSet;
}

int64_t Component::GetGenerateMode() const
{
    return m_generateMode;
}

void Component::SetGenerateMode(const int64_t& _generateMode)
{
    m_generateMode = _generateMode;
    m_generateModeHasBeenSet = true;
}

bool Component::GenerateModeHasBeenSet() const
{
    return m_generateModeHasBeenSet;
}

double Component::GetComponentWidth() const
{
    return m_componentWidth;
}

void Component::SetComponentWidth(const double& _componentWidth)
{
    m_componentWidth = _componentWidth;
    m_componentWidthHasBeenSet = true;
}

bool Component::ComponentWidthHasBeenSet() const
{
    return m_componentWidthHasBeenSet;
}

double Component::GetComponentHeight() const
{
    return m_componentHeight;
}

void Component::SetComponentHeight(const double& _componentHeight)
{
    m_componentHeight = _componentHeight;
    m_componentHeightHasBeenSet = true;
}

bool Component::ComponentHeightHasBeenSet() const
{
    return m_componentHeightHasBeenSet;
}

int64_t Component::GetComponentPage() const
{
    return m_componentPage;
}

void Component::SetComponentPage(const int64_t& _componentPage)
{
    m_componentPage = _componentPage;
    m_componentPageHasBeenSet = true;
}

bool Component::ComponentPageHasBeenSet() const
{
    return m_componentPageHasBeenSet;
}

double Component::GetComponentPosX() const
{
    return m_componentPosX;
}

void Component::SetComponentPosX(const double& _componentPosX)
{
    m_componentPosX = _componentPosX;
    m_componentPosXHasBeenSet = true;
}

bool Component::ComponentPosXHasBeenSet() const
{
    return m_componentPosXHasBeenSet;
}

double Component::GetComponentPosY() const
{
    return m_componentPosY;
}

void Component::SetComponentPosY(const double& _componentPosY)
{
    m_componentPosY = _componentPosY;
    m_componentPosYHasBeenSet = true;
}

bool Component::ComponentPosYHasBeenSet() const
{
    return m_componentPosYHasBeenSet;
}

string Component::GetComponentExtra() const
{
    return m_componentExtra;
}

void Component::SetComponentExtra(const string& _componentExtra)
{
    m_componentExtra = _componentExtra;
    m_componentExtraHasBeenSet = true;
}

bool Component::ComponentExtraHasBeenSet() const
{
    return m_componentExtraHasBeenSet;
}

string Component::GetComponentValue() const
{
    return m_componentValue;
}

void Component::SetComponentValue(const string& _componentValue)
{
    m_componentValue = _componentValue;
    m_componentValueHasBeenSet = true;
}

bool Component::ComponentValueHasBeenSet() const
{
    return m_componentValueHasBeenSet;
}

int64_t Component::GetSealOperate() const
{
    return m_sealOperate;
}

void Component::SetSealOperate(const int64_t& _sealOperate)
{
    m_sealOperate = _sealOperate;
    m_sealOperateHasBeenSet = true;
}

bool Component::SealOperateHasBeenSet() const
{
    return m_sealOperateHasBeenSet;
}

string Component::GetGenerateExtra() const
{
    return m_generateExtra;
}

void Component::SetGenerateExtra(const string& _generateExtra)
{
    m_generateExtra = _generateExtra;
    m_generateExtraHasBeenSet = true;
}

bool Component::GenerateExtraHasBeenSet() const
{
    return m_generateExtraHasBeenSet;
}

