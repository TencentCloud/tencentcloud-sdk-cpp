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

#include <tencentcloud/cfg/v20210820/model/ObjectType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

ObjectType::ObjectType() :
    m_objectTypeIdHasBeenSet(false),
    m_objectTypeTitleHasBeenSet(false),
    m_objectTypeLevelOneHasBeenSet(false),
    m_objectTypeParamsHasBeenSet(false),
    m_objectTypeJsonParseHasBeenSet(false),
    m_objectHasNewActionHasBeenSet(false),
    m_objectPlatformNameHasBeenSet(false),
    m_objectSupportTypeHasBeenSet(false),
    m_archLayerHasBeenSet(false),
    m_isArchSvgHasBeenSet(false)
{
}

CoreInternalOutcome ObjectType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ObjectTypeId") && !value["ObjectTypeId"].IsNull())
    {
        if (!value["ObjectTypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectType.ObjectTypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_objectTypeId = value["ObjectTypeId"].GetInt64();
        m_objectTypeIdHasBeenSet = true;
    }

    if (value.HasMember("ObjectTypeTitle") && !value["ObjectTypeTitle"].IsNull())
    {
        if (!value["ObjectTypeTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectType.ObjectTypeTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectTypeTitle = string(value["ObjectTypeTitle"].GetString());
        m_objectTypeTitleHasBeenSet = true;
    }

    if (value.HasMember("ObjectTypeLevelOne") && !value["ObjectTypeLevelOne"].IsNull())
    {
        if (!value["ObjectTypeLevelOne"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectType.ObjectTypeLevelOne` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectTypeLevelOne = string(value["ObjectTypeLevelOne"].GetString());
        m_objectTypeLevelOneHasBeenSet = true;
    }

    if (value.HasMember("ObjectTypeParams") && !value["ObjectTypeParams"].IsNull())
    {
        if (!value["ObjectTypeParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectType.ObjectTypeParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_objectTypeParams.Deserialize(value["ObjectTypeParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_objectTypeParamsHasBeenSet = true;
    }

    if (value.HasMember("ObjectTypeJsonParse") && !value["ObjectTypeJsonParse"].IsNull())
    {
        if (!value["ObjectTypeJsonParse"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectType.ObjectTypeJsonParse` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_objectTypeJsonParse.Deserialize(value["ObjectTypeJsonParse"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_objectTypeJsonParseHasBeenSet = true;
    }

    if (value.HasMember("ObjectHasNewAction") && !value["ObjectHasNewAction"].IsNull())
    {
        if (!value["ObjectHasNewAction"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectType.ObjectHasNewAction` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_objectHasNewAction = value["ObjectHasNewAction"].GetBool();
        m_objectHasNewActionHasBeenSet = true;
    }

    if (value.HasMember("ObjectPlatformName") && !value["ObjectPlatformName"].IsNull())
    {
        if (!value["ObjectPlatformName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectType.ObjectPlatformName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectPlatformName = string(value["ObjectPlatformName"].GetString());
        m_objectPlatformNameHasBeenSet = true;
    }

    if (value.HasMember("ObjectSupportType") && !value["ObjectSupportType"].IsNull())
    {
        if (!value["ObjectSupportType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectType.ObjectSupportType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_objectSupportType = value["ObjectSupportType"].GetInt64();
        m_objectSupportTypeHasBeenSet = true;
    }

    if (value.HasMember("ArchLayer") && !value["ArchLayer"].IsNull())
    {
        if (!value["ArchLayer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectType.ArchLayer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_archLayer = value["ArchLayer"].GetInt64();
        m_archLayerHasBeenSet = true;
    }

    if (value.HasMember("IsArchSvg") && !value["IsArchSvg"].IsNull())
    {
        if (!value["IsArchSvg"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectType.IsArchSvg` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isArchSvg = value["IsArchSvg"].GetBool();
        m_isArchSvgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ObjectType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_objectTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_objectTypeId, allocator);
    }

    if (m_objectTypeTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectTypeTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectTypeTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_objectTypeLevelOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectTypeLevelOne";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectTypeLevelOne.c_str(), allocator).Move(), allocator);
    }

    if (m_objectTypeParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectTypeParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_objectTypeParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_objectTypeJsonParseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectTypeJsonParse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_objectTypeJsonParse.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_objectHasNewActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectHasNewAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_objectHasNewAction, allocator);
    }

    if (m_objectPlatformNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectPlatformName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectPlatformName.c_str(), allocator).Move(), allocator);
    }

    if (m_objectSupportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectSupportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_objectSupportType, allocator);
    }

    if (m_archLayerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchLayer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_archLayer, allocator);
    }

    if (m_isArchSvgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsArchSvg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isArchSvg, allocator);
    }

}


int64_t ObjectType::GetObjectTypeId() const
{
    return m_objectTypeId;
}

void ObjectType::SetObjectTypeId(const int64_t& _objectTypeId)
{
    m_objectTypeId = _objectTypeId;
    m_objectTypeIdHasBeenSet = true;
}

bool ObjectType::ObjectTypeIdHasBeenSet() const
{
    return m_objectTypeIdHasBeenSet;
}

string ObjectType::GetObjectTypeTitle() const
{
    return m_objectTypeTitle;
}

void ObjectType::SetObjectTypeTitle(const string& _objectTypeTitle)
{
    m_objectTypeTitle = _objectTypeTitle;
    m_objectTypeTitleHasBeenSet = true;
}

bool ObjectType::ObjectTypeTitleHasBeenSet() const
{
    return m_objectTypeTitleHasBeenSet;
}

string ObjectType::GetObjectTypeLevelOne() const
{
    return m_objectTypeLevelOne;
}

void ObjectType::SetObjectTypeLevelOne(const string& _objectTypeLevelOne)
{
    m_objectTypeLevelOne = _objectTypeLevelOne;
    m_objectTypeLevelOneHasBeenSet = true;
}

bool ObjectType::ObjectTypeLevelOneHasBeenSet() const
{
    return m_objectTypeLevelOneHasBeenSet;
}

ObjectTypeConfig ObjectType::GetObjectTypeParams() const
{
    return m_objectTypeParams;
}

void ObjectType::SetObjectTypeParams(const ObjectTypeConfig& _objectTypeParams)
{
    m_objectTypeParams = _objectTypeParams;
    m_objectTypeParamsHasBeenSet = true;
}

bool ObjectType::ObjectTypeParamsHasBeenSet() const
{
    return m_objectTypeParamsHasBeenSet;
}

ObjectTypeJsonParse ObjectType::GetObjectTypeJsonParse() const
{
    return m_objectTypeJsonParse;
}

void ObjectType::SetObjectTypeJsonParse(const ObjectTypeJsonParse& _objectTypeJsonParse)
{
    m_objectTypeJsonParse = _objectTypeJsonParse;
    m_objectTypeJsonParseHasBeenSet = true;
}

bool ObjectType::ObjectTypeJsonParseHasBeenSet() const
{
    return m_objectTypeJsonParseHasBeenSet;
}

bool ObjectType::GetObjectHasNewAction() const
{
    return m_objectHasNewAction;
}

void ObjectType::SetObjectHasNewAction(const bool& _objectHasNewAction)
{
    m_objectHasNewAction = _objectHasNewAction;
    m_objectHasNewActionHasBeenSet = true;
}

bool ObjectType::ObjectHasNewActionHasBeenSet() const
{
    return m_objectHasNewActionHasBeenSet;
}

string ObjectType::GetObjectPlatformName() const
{
    return m_objectPlatformName;
}

void ObjectType::SetObjectPlatformName(const string& _objectPlatformName)
{
    m_objectPlatformName = _objectPlatformName;
    m_objectPlatformNameHasBeenSet = true;
}

bool ObjectType::ObjectPlatformNameHasBeenSet() const
{
    return m_objectPlatformNameHasBeenSet;
}

int64_t ObjectType::GetObjectSupportType() const
{
    return m_objectSupportType;
}

void ObjectType::SetObjectSupportType(const int64_t& _objectSupportType)
{
    m_objectSupportType = _objectSupportType;
    m_objectSupportTypeHasBeenSet = true;
}

bool ObjectType::ObjectSupportTypeHasBeenSet() const
{
    return m_objectSupportTypeHasBeenSet;
}

int64_t ObjectType::GetArchLayer() const
{
    return m_archLayer;
}

void ObjectType::SetArchLayer(const int64_t& _archLayer)
{
    m_archLayer = _archLayer;
    m_archLayerHasBeenSet = true;
}

bool ObjectType::ArchLayerHasBeenSet() const
{
    return m_archLayerHasBeenSet;
}

bool ObjectType::GetIsArchSvg() const
{
    return m_isArchSvg;
}

void ObjectType::SetIsArchSvg(const bool& _isArchSvg)
{
    m_isArchSvg = _isArchSvg;
    m_isArchSvgHasBeenSet = true;
}

bool ObjectType::IsArchSvgHasBeenSet() const
{
    return m_isArchSvgHasBeenSet;
}

