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
    m_objectHasNewActionHasBeenSet(false)
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

