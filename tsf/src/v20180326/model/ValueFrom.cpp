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

#include <tencentcloud/tsf/v20180326/model/ValueFrom.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ValueFrom::ValueFrom() :
    m_fieldRefHasBeenSet(false),
    m_resourceFieldRefHasBeenSet(false),
    m_configMapKeyRefHasBeenSet(false),
    m_secretKeyRefHasBeenSet(false)
{
}

CoreInternalOutcome ValueFrom::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldRef") && !value["FieldRef"].IsNull())
    {
        if (!value["FieldRef"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValueFrom.FieldRef` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fieldRef.Deserialize(value["FieldRef"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fieldRefHasBeenSet = true;
    }

    if (value.HasMember("ResourceFieldRef") && !value["ResourceFieldRef"].IsNull())
    {
        if (!value["ResourceFieldRef"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValueFrom.ResourceFieldRef` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceFieldRef.Deserialize(value["ResourceFieldRef"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceFieldRefHasBeenSet = true;
    }

    if (value.HasMember("ConfigMapKeyRef") && !value["ConfigMapKeyRef"].IsNull())
    {
        if (!value["ConfigMapKeyRef"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValueFrom.ConfigMapKeyRef` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_configMapKeyRef.Deserialize(value["ConfigMapKeyRef"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configMapKeyRefHasBeenSet = true;
    }

    if (value.HasMember("SecretKeyRef") && !value["SecretKeyRef"].IsNull())
    {
        if (!value["SecretKeyRef"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValueFrom.SecretKeyRef` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_secretKeyRef.Deserialize(value["SecretKeyRef"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_secretKeyRefHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ValueFrom::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fieldRef.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resourceFieldRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceFieldRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceFieldRef.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_configMapKeyRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigMapKeyRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_configMapKeyRef.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_secretKeyRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKeyRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_secretKeyRef.ToJsonObject(value[key.c_str()], allocator);
    }

}


FieldRef ValueFrom::GetFieldRef() const
{
    return m_fieldRef;
}

void ValueFrom::SetFieldRef(const FieldRef& _fieldRef)
{
    m_fieldRef = _fieldRef;
    m_fieldRefHasBeenSet = true;
}

bool ValueFrom::FieldRefHasBeenSet() const
{
    return m_fieldRefHasBeenSet;
}

ResourceFieldRef ValueFrom::GetResourceFieldRef() const
{
    return m_resourceFieldRef;
}

void ValueFrom::SetResourceFieldRef(const ResourceFieldRef& _resourceFieldRef)
{
    m_resourceFieldRef = _resourceFieldRef;
    m_resourceFieldRefHasBeenSet = true;
}

bool ValueFrom::ResourceFieldRefHasBeenSet() const
{
    return m_resourceFieldRefHasBeenSet;
}

CommonRef ValueFrom::GetConfigMapKeyRef() const
{
    return m_configMapKeyRef;
}

void ValueFrom::SetConfigMapKeyRef(const CommonRef& _configMapKeyRef)
{
    m_configMapKeyRef = _configMapKeyRef;
    m_configMapKeyRefHasBeenSet = true;
}

bool ValueFrom::ConfigMapKeyRefHasBeenSet() const
{
    return m_configMapKeyRefHasBeenSet;
}

CommonRef ValueFrom::GetSecretKeyRef() const
{
    return m_secretKeyRef;
}

void ValueFrom::SetSecretKeyRef(const CommonRef& _secretKeyRef)
{
    m_secretKeyRef = _secretKeyRef;
    m_secretKeyRefHasBeenSet = true;
}

bool ValueFrom::SecretKeyRefHasBeenSet() const
{
    return m_secretKeyRefHasBeenSet;
}

