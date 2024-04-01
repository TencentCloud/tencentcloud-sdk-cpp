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

#include <tencentcloud/tse/v20201207/model/KongTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

KongTarget::KongTarget() :
    m_hostHasBeenSet(false),
    m_portHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_healthHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_cvmInstanceIdHasBeenSet(false),
    m_cvmInstanceNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome KongTarget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongTarget.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KongTarget.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KongTarget.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("Health") && !value["Health"].IsNull())
    {
        if (!value["Health"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongTarget.Health` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_health = string(value["Health"].GetString());
        m_healthHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongTarget.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongTarget.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("CvmInstanceId") && !value["CvmInstanceId"].IsNull())
    {
        if (!value["CvmInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongTarget.CvmInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvmInstanceId = string(value["CvmInstanceId"].GetString());
        m_cvmInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("CvmInstanceName") && !value["CvmInstanceName"].IsNull())
    {
        if (!value["CvmInstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongTarget.CvmInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvmInstanceName = string(value["CvmInstanceName"].GetString());
        m_cvmInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KongTarget.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KongTarget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_healthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Health";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_health.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cvmInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cvmInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string KongTarget::GetHost() const
{
    return m_host;
}

void KongTarget::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool KongTarget::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

int64_t KongTarget::GetPort() const
{
    return m_port;
}

void KongTarget::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool KongTarget::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t KongTarget::GetWeight() const
{
    return m_weight;
}

void KongTarget::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool KongTarget::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string KongTarget::GetHealth() const
{
    return m_health;
}

void KongTarget::SetHealth(const string& _health)
{
    m_health = _health;
    m_healthHasBeenSet = true;
}

bool KongTarget::HealthHasBeenSet() const
{
    return m_healthHasBeenSet;
}

string KongTarget::GetCreatedTime() const
{
    return m_createdTime;
}

void KongTarget::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool KongTarget::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string KongTarget::GetSource() const
{
    return m_source;
}

void KongTarget::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool KongTarget::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string KongTarget::GetCvmInstanceId() const
{
    return m_cvmInstanceId;
}

void KongTarget::SetCvmInstanceId(const string& _cvmInstanceId)
{
    m_cvmInstanceId = _cvmInstanceId;
    m_cvmInstanceIdHasBeenSet = true;
}

bool KongTarget::CvmInstanceIdHasBeenSet() const
{
    return m_cvmInstanceIdHasBeenSet;
}

string KongTarget::GetCvmInstanceName() const
{
    return m_cvmInstanceName;
}

void KongTarget::SetCvmInstanceName(const string& _cvmInstanceName)
{
    m_cvmInstanceName = _cvmInstanceName;
    m_cvmInstanceNameHasBeenSet = true;
}

bool KongTarget::CvmInstanceNameHasBeenSet() const
{
    return m_cvmInstanceNameHasBeenSet;
}

vector<string> KongTarget::GetTags() const
{
    return m_tags;
}

void KongTarget::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool KongTarget::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

