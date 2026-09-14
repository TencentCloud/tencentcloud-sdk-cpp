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

#include <tencentcloud/adp/v20260520/model/MetaValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

MetaValue::MetaValue() :
    m_nameHasBeenSet(false),
    m_refAllHasBeenSet(false),
    m_refValueIdHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_valueTypeHasBeenSet(false)
{
}

CoreInternalOutcome MetaValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetaValue.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RefAll") && !value["RefAll"].IsNull())
    {
        if (!value["RefAll"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MetaValue.RefAll` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_refAll = value["RefAll"].GetBool();
        m_refAllHasBeenSet = true;
    }

    if (value.HasMember("RefValueId") && !value["RefValueId"].IsNull())
    {
        if (!value["RefValueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetaValue.RefValueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refValueId = string(value["RefValueId"].GetString());
        m_refValueIdHasBeenSet = true;
    }

    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MetaValue.Scene` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scene = value["Scene"].GetInt64();
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("ValueType") && !value["ValueType"].IsNull())
    {
        if (!value["ValueType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MetaValue.ValueType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_valueType = value["ValueType"].GetInt64();
        m_valueTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetaValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_refAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refAll, allocator);
    }

    if (m_refValueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefValueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refValueId.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scene, allocator);
    }

    if (m_valueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_valueType, allocator);
    }

}


string MetaValue::GetName() const
{
    return m_name;
}

void MetaValue::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MetaValue::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool MetaValue::GetRefAll() const
{
    return m_refAll;
}

void MetaValue::SetRefAll(const bool& _refAll)
{
    m_refAll = _refAll;
    m_refAllHasBeenSet = true;
}

bool MetaValue::RefAllHasBeenSet() const
{
    return m_refAllHasBeenSet;
}

string MetaValue::GetRefValueId() const
{
    return m_refValueId;
}

void MetaValue::SetRefValueId(const string& _refValueId)
{
    m_refValueId = _refValueId;
    m_refValueIdHasBeenSet = true;
}

bool MetaValue::RefValueIdHasBeenSet() const
{
    return m_refValueIdHasBeenSet;
}

int64_t MetaValue::GetScene() const
{
    return m_scene;
}

void MetaValue::SetScene(const int64_t& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool MetaValue::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

int64_t MetaValue::GetValueType() const
{
    return m_valueType;
}

void MetaValue::SetValueType(const int64_t& _valueType)
{
    m_valueType = _valueType;
    m_valueTypeHasBeenSet = true;
}

bool MetaValue::ValueTypeHasBeenSet() const
{
    return m_valueTypeHasBeenSet;
}

