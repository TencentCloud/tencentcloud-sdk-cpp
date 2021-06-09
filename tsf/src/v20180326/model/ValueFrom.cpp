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
    m_resourceFieldRefHasBeenSet(false)
{
}

CoreInternalOutcome ValueFrom::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldRef") && !value["FieldRef"].IsNull())
    {
        if (!value["FieldRef"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ValueFrom.FieldRef` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `ValueFrom.ResourceFieldRef` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceFieldRef.Deserialize(value["ResourceFieldRef"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceFieldRefHasBeenSet = true;
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

