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

#include <tencentcloud/cls/v20201016/model/CustomMetricSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CustomMetricSpec::CustomMetricSpec() :
    m_portHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_namespacesHasBeenSet(false),
    m_podLabelHasBeenSet(false)
{
}

CoreInternalOutcome CustomMetricSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomMetricSpec.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomMetricSpec.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Namespaces") && !value["Namespaces"].IsNull())
    {
        if (!value["Namespaces"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomMetricSpec.Namespaces` is not array type"));

        const rapidjson::Value &tmpValue = value["Namespaces"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_namespaces.push_back((*itr).GetString());
        }
        m_namespacesHasBeenSet = true;
    }

    if (value.HasMember("PodLabel") && !value["PodLabel"].IsNull())
    {
        if (!value["PodLabel"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomMetricSpec.PodLabel` is not array type"));

        const rapidjson::Value &tmpValue = value["PodLabel"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Label item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_podLabel.push_back(item);
        }
        m_podLabelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomMetricSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_namespacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespaces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_namespaces.begin(); itr != m_namespaces.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_podLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_podLabel.begin(); itr != m_podLabel.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CustomMetricSpec::GetPort() const
{
    return m_port;
}

void CustomMetricSpec::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CustomMetricSpec::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string CustomMetricSpec::GetPath() const
{
    return m_path;
}

void CustomMetricSpec::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CustomMetricSpec::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

vector<string> CustomMetricSpec::GetNamespaces() const
{
    return m_namespaces;
}

void CustomMetricSpec::SetNamespaces(const vector<string>& _namespaces)
{
    m_namespaces = _namespaces;
    m_namespacesHasBeenSet = true;
}

bool CustomMetricSpec::NamespacesHasBeenSet() const
{
    return m_namespacesHasBeenSet;
}

vector<Label> CustomMetricSpec::GetPodLabel() const
{
    return m_podLabel;
}

void CustomMetricSpec::SetPodLabel(const vector<Label>& _podLabel)
{
    m_podLabel = _podLabel;
    m_podLabelHasBeenSet = true;
}

bool CustomMetricSpec::PodLabelHasBeenSet() const
{
    return m_podLabelHasBeenSet;
}

