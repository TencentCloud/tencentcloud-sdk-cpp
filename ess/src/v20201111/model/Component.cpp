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

#include <tencentcloud/ess/v20201111/model/Component.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

Component::Component() :
    m_componentTypeHasBeenSet(false),
    m_componentHeightHasBeenSet(false),
    m_componentWidthHasBeenSet(false),
    m_componentPageHasBeenSet(false),
    m_componentPosXHasBeenSet(false),
    m_componentPosYHasBeenSet(false),
    m_fileIndexHasBeenSet(false),
    m_generateModeHasBeenSet(false),
    m_componentIdHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_componentRequiredHasBeenSet(false),
    m_componentRecipientIdHasBeenSet(false),
    m_componentExtraHasBeenSet(false),
    m_isFormTypeHasBeenSet(false),
    m_componentValueHasBeenSet(false),
    m_offsetXHasBeenSet(false),
    m_offsetYHasBeenSet(false),
    m_keywordOrderHasBeenSet(false),
    m_keywordPageHasBeenSet(false),
    m_relativeLocationHasBeenSet(false),
    m_keywordIndexesHasBeenSet(false),
    m_lockComponentValueHasBeenSet(false),
    m_forbidMoveAndDeleteHasBeenSet(false),
    m_componentDateFontSizeHasBeenSet(false),
    m_channelComponentIdHasBeenSet(false),
    m_channelComponentSourceHasBeenSet(false)
{
}

CoreInternalOutcome Component::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComponentType") && !value["ComponentType"].IsNull())
    {
        if (!value["ComponentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ComponentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentType = string(value["ComponentType"].GetString());
        m_componentTypeHasBeenSet = true;
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

    if (value.HasMember("ComponentWidth") && !value["ComponentWidth"].IsNull())
    {
        if (!value["ComponentWidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ComponentWidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_componentWidth = value["ComponentWidth"].GetDouble();
        m_componentWidthHasBeenSet = true;
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
        if (!value["GenerateMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.GenerateMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_generateMode = string(value["GenerateMode"].GetString());
        m_generateModeHasBeenSet = true;
    }

    if (value.HasMember("ComponentId") && !value["ComponentId"].IsNull())
    {
        if (!value["ComponentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ComponentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentId = string(value["ComponentId"].GetString());
        m_componentIdHasBeenSet = true;
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

    if (value.HasMember("ComponentRecipientId") && !value["ComponentRecipientId"].IsNull())
    {
        if (!value["ComponentRecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ComponentRecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentRecipientId = string(value["ComponentRecipientId"].GetString());
        m_componentRecipientIdHasBeenSet = true;
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

    if (value.HasMember("IsFormType") && !value["IsFormType"].IsNull())
    {
        if (!value["IsFormType"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Component.IsFormType` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFormType = value["IsFormType"].GetBool();
        m_isFormTypeHasBeenSet = true;
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

    if (value.HasMember("OffsetX") && !value["OffsetX"].IsNull())
    {
        if (!value["OffsetX"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Component.OffsetX` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_offsetX = value["OffsetX"].GetDouble();
        m_offsetXHasBeenSet = true;
    }

    if (value.HasMember("OffsetY") && !value["OffsetY"].IsNull())
    {
        if (!value["OffsetY"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Component.OffsetY` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_offsetY = value["OffsetY"].GetDouble();
        m_offsetYHasBeenSet = true;
    }

    if (value.HasMember("KeywordOrder") && !value["KeywordOrder"].IsNull())
    {
        if (!value["KeywordOrder"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.KeywordOrder` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keywordOrder = string(value["KeywordOrder"].GetString());
        m_keywordOrderHasBeenSet = true;
    }

    if (value.HasMember("KeywordPage") && !value["KeywordPage"].IsNull())
    {
        if (!value["KeywordPage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Component.KeywordPage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keywordPage = value["KeywordPage"].GetInt64();
        m_keywordPageHasBeenSet = true;
    }

    if (value.HasMember("RelativeLocation") && !value["RelativeLocation"].IsNull())
    {
        if (!value["RelativeLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.RelativeLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relativeLocation = string(value["RelativeLocation"].GetString());
        m_relativeLocationHasBeenSet = true;
    }

    if (value.HasMember("KeywordIndexes") && !value["KeywordIndexes"].IsNull())
    {
        if (!value["KeywordIndexes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Component.KeywordIndexes` is not array type"));

        const rapidjson::Value &tmpValue = value["KeywordIndexes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywordIndexes.push_back((*itr).GetInt64());
        }
        m_keywordIndexesHasBeenSet = true;
    }

    if (value.HasMember("LockComponentValue") && !value["LockComponentValue"].IsNull())
    {
        if (!value["LockComponentValue"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Component.LockComponentValue` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_lockComponentValue = value["LockComponentValue"].GetBool();
        m_lockComponentValueHasBeenSet = true;
    }

    if (value.HasMember("ForbidMoveAndDelete") && !value["ForbidMoveAndDelete"].IsNull())
    {
        if (!value["ForbidMoveAndDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ForbidMoveAndDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_forbidMoveAndDelete = value["ForbidMoveAndDelete"].GetBool();
        m_forbidMoveAndDeleteHasBeenSet = true;
    }

    if (value.HasMember("ComponentDateFontSize") && !value["ComponentDateFontSize"].IsNull())
    {
        if (!value["ComponentDateFontSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ComponentDateFontSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_componentDateFontSize = value["ComponentDateFontSize"].GetInt64();
        m_componentDateFontSizeHasBeenSet = true;
    }

    if (value.HasMember("ChannelComponentId") && !value["ChannelComponentId"].IsNull())
    {
        if (!value["ChannelComponentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ChannelComponentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelComponentId = string(value["ChannelComponentId"].GetString());
        m_channelComponentIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelComponentSource") && !value["ChannelComponentSource"].IsNull())
    {
        if (!value["ChannelComponentSource"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ChannelComponentSource` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_channelComponentSource = value["ChannelComponentSource"].GetUint64();
        m_channelComponentSourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Component::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_componentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentType.c_str(), allocator).Move(), allocator);
    }

    if (m_componentHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentHeight, allocator);
    }

    if (m_componentWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentWidth, allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_generateMode.c_str(), allocator).Move(), allocator);
    }

    if (m_componentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentId.c_str(), allocator).Move(), allocator);
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

    if (m_componentRecipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentRecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentRecipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_componentExtraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentExtra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentExtra.c_str(), allocator).Move(), allocator);
    }

    if (m_isFormTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFormType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFormType, allocator);
    }

    if (m_componentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentValue.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsetX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offsetX, allocator);
    }

    if (m_offsetYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsetY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offsetY, allocator);
    }

    if (m_keywordOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeywordOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keywordOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeywordPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keywordPage, allocator);
    }

    if (m_relativeLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelativeLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relativeLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordIndexesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeywordIndexes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keywordIndexes.begin(); itr != m_keywordIndexes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_lockComponentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockComponentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockComponentValue, allocator);
    }

    if (m_forbidMoveAndDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForbidMoveAndDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forbidMoveAndDelete, allocator);
    }

    if (m_componentDateFontSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentDateFontSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentDateFontSize, allocator);
    }

    if (m_channelComponentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelComponentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelComponentId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelComponentSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelComponentSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelComponentSource, allocator);
    }

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

string Component::GetGenerateMode() const
{
    return m_generateMode;
}

void Component::SetGenerateMode(const string& _generateMode)
{
    m_generateMode = _generateMode;
    m_generateModeHasBeenSet = true;
}

bool Component::GenerateModeHasBeenSet() const
{
    return m_generateModeHasBeenSet;
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

string Component::GetComponentRecipientId() const
{
    return m_componentRecipientId;
}

void Component::SetComponentRecipientId(const string& _componentRecipientId)
{
    m_componentRecipientId = _componentRecipientId;
    m_componentRecipientIdHasBeenSet = true;
}

bool Component::ComponentRecipientIdHasBeenSet() const
{
    return m_componentRecipientIdHasBeenSet;
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

bool Component::GetIsFormType() const
{
    return m_isFormType;
}

void Component::SetIsFormType(const bool& _isFormType)
{
    m_isFormType = _isFormType;
    m_isFormTypeHasBeenSet = true;
}

bool Component::IsFormTypeHasBeenSet() const
{
    return m_isFormTypeHasBeenSet;
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

double Component::GetOffsetX() const
{
    return m_offsetX;
}

void Component::SetOffsetX(const double& _offsetX)
{
    m_offsetX = _offsetX;
    m_offsetXHasBeenSet = true;
}

bool Component::OffsetXHasBeenSet() const
{
    return m_offsetXHasBeenSet;
}

double Component::GetOffsetY() const
{
    return m_offsetY;
}

void Component::SetOffsetY(const double& _offsetY)
{
    m_offsetY = _offsetY;
    m_offsetYHasBeenSet = true;
}

bool Component::OffsetYHasBeenSet() const
{
    return m_offsetYHasBeenSet;
}

string Component::GetKeywordOrder() const
{
    return m_keywordOrder;
}

void Component::SetKeywordOrder(const string& _keywordOrder)
{
    m_keywordOrder = _keywordOrder;
    m_keywordOrderHasBeenSet = true;
}

bool Component::KeywordOrderHasBeenSet() const
{
    return m_keywordOrderHasBeenSet;
}

int64_t Component::GetKeywordPage() const
{
    return m_keywordPage;
}

void Component::SetKeywordPage(const int64_t& _keywordPage)
{
    m_keywordPage = _keywordPage;
    m_keywordPageHasBeenSet = true;
}

bool Component::KeywordPageHasBeenSet() const
{
    return m_keywordPageHasBeenSet;
}

string Component::GetRelativeLocation() const
{
    return m_relativeLocation;
}

void Component::SetRelativeLocation(const string& _relativeLocation)
{
    m_relativeLocation = _relativeLocation;
    m_relativeLocationHasBeenSet = true;
}

bool Component::RelativeLocationHasBeenSet() const
{
    return m_relativeLocationHasBeenSet;
}

vector<int64_t> Component::GetKeywordIndexes() const
{
    return m_keywordIndexes;
}

void Component::SetKeywordIndexes(const vector<int64_t>& _keywordIndexes)
{
    m_keywordIndexes = _keywordIndexes;
    m_keywordIndexesHasBeenSet = true;
}

bool Component::KeywordIndexesHasBeenSet() const
{
    return m_keywordIndexesHasBeenSet;
}

bool Component::GetLockComponentValue() const
{
    return m_lockComponentValue;
}

void Component::SetLockComponentValue(const bool& _lockComponentValue)
{
    m_lockComponentValue = _lockComponentValue;
    m_lockComponentValueHasBeenSet = true;
}

bool Component::LockComponentValueHasBeenSet() const
{
    return m_lockComponentValueHasBeenSet;
}

bool Component::GetForbidMoveAndDelete() const
{
    return m_forbidMoveAndDelete;
}

void Component::SetForbidMoveAndDelete(const bool& _forbidMoveAndDelete)
{
    m_forbidMoveAndDelete = _forbidMoveAndDelete;
    m_forbidMoveAndDeleteHasBeenSet = true;
}

bool Component::ForbidMoveAndDeleteHasBeenSet() const
{
    return m_forbidMoveAndDeleteHasBeenSet;
}

int64_t Component::GetComponentDateFontSize() const
{
    return m_componentDateFontSize;
}

void Component::SetComponentDateFontSize(const int64_t& _componentDateFontSize)
{
    m_componentDateFontSize = _componentDateFontSize;
    m_componentDateFontSizeHasBeenSet = true;
}

bool Component::ComponentDateFontSizeHasBeenSet() const
{
    return m_componentDateFontSizeHasBeenSet;
}

string Component::GetChannelComponentId() const
{
    return m_channelComponentId;
}

void Component::SetChannelComponentId(const string& _channelComponentId)
{
    m_channelComponentId = _channelComponentId;
    m_channelComponentIdHasBeenSet = true;
}

bool Component::ChannelComponentIdHasBeenSet() const
{
    return m_channelComponentIdHasBeenSet;
}

uint64_t Component::GetChannelComponentSource() const
{
    return m_channelComponentSource;
}

void Component::SetChannelComponentSource(const uint64_t& _channelComponentSource)
{
    m_channelComponentSource = _channelComponentSource;
    m_channelComponentSourceHasBeenSet = true;
}

bool Component::ChannelComponentSourceHasBeenSet() const
{
    return m_channelComponentSourceHasBeenSet;
}

