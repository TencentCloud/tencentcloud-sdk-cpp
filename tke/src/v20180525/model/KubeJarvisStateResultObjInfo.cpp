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

#include <tencentcloud/tke/v20180525/model/KubeJarvisStateResultObjInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

KubeJarvisStateResultObjInfo::KubeJarvisStateResultObjInfo() :
    m_propertyNameHasBeenSet(false),
    m_propertyValueHasBeenSet(false)
{
}

CoreInternalOutcome KubeJarvisStateResultObjInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PropertyName") && !value["PropertyName"].IsNull())
    {
        if (!value["PropertyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateResultObjInfo.PropertyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_propertyName = string(value["PropertyName"].GetString());
        m_propertyNameHasBeenSet = true;
    }

    if (value.HasMember("PropertyValue") && !value["PropertyValue"].IsNull())
    {
        if (!value["PropertyValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateResultObjInfo.PropertyValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_propertyValue = string(value["PropertyValue"].GetString());
        m_propertyValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KubeJarvisStateResultObjInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_propertyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_propertyName.c_str(), allocator).Move(), allocator);
    }

    if (m_propertyValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertyValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_propertyValue.c_str(), allocator).Move(), allocator);
    }

}


string KubeJarvisStateResultObjInfo::GetPropertyName() const
{
    return m_propertyName;
}

void KubeJarvisStateResultObjInfo::SetPropertyName(const string& _propertyName)
{
    m_propertyName = _propertyName;
    m_propertyNameHasBeenSet = true;
}

bool KubeJarvisStateResultObjInfo::PropertyNameHasBeenSet() const
{
    return m_propertyNameHasBeenSet;
}

string KubeJarvisStateResultObjInfo::GetPropertyValue() const
{
    return m_propertyValue;
}

void KubeJarvisStateResultObjInfo::SetPropertyValue(const string& _propertyValue)
{
    m_propertyValue = _propertyValue;
    m_propertyValueHasBeenSet = true;
}

bool KubeJarvisStateResultObjInfo::PropertyValueHasBeenSet() const
{
    return m_propertyValueHasBeenSet;
}

