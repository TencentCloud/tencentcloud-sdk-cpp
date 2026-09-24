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

#include <tencentcloud/dlc/v20210125/model/NameIdentifier.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

NameIdentifier::NameIdentifier() :
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

CoreInternalOutcome NameIdentifier::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NameIdentifier.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NameIdentifier.Namespace` is not array type"));

        const rapidjson::Value &tmpValue = value["Namespace"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_namespace.push_back((*itr).GetString());
        }
        m_namespaceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NameIdentifier::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_namespace.begin(); itr != m_namespace.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string NameIdentifier::GetName() const
{
    return m_name;
}

void NameIdentifier::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NameIdentifier::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> NameIdentifier::GetNamespace() const
{
    return m_namespace;
}

void NameIdentifier::SetNamespace(const vector<string>& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool NameIdentifier::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

