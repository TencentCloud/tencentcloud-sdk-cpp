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

#include <tencentcloud/dlc/v20210125/model/GooseFSConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

GooseFSConfig::GooseFSConfig() :
    m_clusterIdHasBeenSet(false),
    m_gooseFSPathHasBeenSet(false),
    m_masterAddressesHasBeenSet(false)
{
}

CoreInternalOutcome GooseFSConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSConfig.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("GooseFSPath") && !value["GooseFSPath"].IsNull())
    {
        if (!value["GooseFSPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSConfig.GooseFSPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gooseFSPath = string(value["GooseFSPath"].GetString());
        m_gooseFSPathHasBeenSet = true;
    }

    if (value.HasMember("MasterAddresses") && !value["MasterAddresses"].IsNull())
    {
        if (!value["MasterAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GooseFSConfig.MasterAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["MasterAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_masterAddresses.push_back((*itr).GetString());
        }
        m_masterAddressesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GooseFSConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_gooseFSPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GooseFSPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gooseFSPath.c_str(), allocator).Move(), allocator);
    }

    if (m_masterAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_masterAddresses.begin(); itr != m_masterAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string GooseFSConfig::GetClusterId() const
{
    return m_clusterId;
}

void GooseFSConfig::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool GooseFSConfig::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string GooseFSConfig::GetGooseFSPath() const
{
    return m_gooseFSPath;
}

void GooseFSConfig::SetGooseFSPath(const string& _gooseFSPath)
{
    m_gooseFSPath = _gooseFSPath;
    m_gooseFSPathHasBeenSet = true;
}

bool GooseFSConfig::GooseFSPathHasBeenSet() const
{
    return m_gooseFSPathHasBeenSet;
}

vector<string> GooseFSConfig::GetMasterAddresses() const
{
    return m_masterAddresses;
}

void GooseFSConfig::SetMasterAddresses(const vector<string>& _masterAddresses)
{
    m_masterAddresses = _masterAddresses;
    m_masterAddressesHasBeenSet = true;
}

bool GooseFSConfig::MasterAddressesHasBeenSet() const
{
    return m_masterAddressesHasBeenSet;
}

