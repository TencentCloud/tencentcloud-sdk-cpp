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

#include <tencentcloud/tcss/v20201101/model/NetworkClusterNamespaceLabelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

NetworkClusterNamespaceLabelInfo::NetworkClusterNamespaceLabelInfo() :
    m_labelsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome NetworkClusterNamespaceLabelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkClusterNamespaceLabelInfo.Labels` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labels = string(value["Labels"].GetString());
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkClusterNamespaceLabelInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkClusterNamespaceLabelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labels.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


string NetworkClusterNamespaceLabelInfo::GetLabels() const
{
    return m_labels;
}

void NetworkClusterNamespaceLabelInfo::SetLabels(const string& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool NetworkClusterNamespaceLabelInfo::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

string NetworkClusterNamespaceLabelInfo::GetName() const
{
    return m_name;
}

void NetworkClusterNamespaceLabelInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NetworkClusterNamespaceLabelInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

