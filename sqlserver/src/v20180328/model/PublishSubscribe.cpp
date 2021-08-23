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

#include <tencentcloud/sqlserver/v20180328/model/PublishSubscribe.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

PublishSubscribe::PublishSubscribe() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_publishInstanceIdHasBeenSet(false),
    m_publishInstanceNameHasBeenSet(false),
    m_publishInstanceIpHasBeenSet(false),
    m_subscribeInstanceIdHasBeenSet(false),
    m_subscribeInstanceNameHasBeenSet(false),
    m_subscribeInstanceIpHasBeenSet(false),
    m_databaseTupleSetHasBeenSet(false)
{
}

CoreInternalOutcome PublishSubscribe::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PublishSubscribe.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublishSubscribe.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PublishInstanceId") && !value["PublishInstanceId"].IsNull())
    {
        if (!value["PublishInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublishSubscribe.PublishInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishInstanceId = string(value["PublishInstanceId"].GetString());
        m_publishInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("PublishInstanceName") && !value["PublishInstanceName"].IsNull())
    {
        if (!value["PublishInstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublishSubscribe.PublishInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishInstanceName = string(value["PublishInstanceName"].GetString());
        m_publishInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("PublishInstanceIp") && !value["PublishInstanceIp"].IsNull())
    {
        if (!value["PublishInstanceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublishSubscribe.PublishInstanceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishInstanceIp = string(value["PublishInstanceIp"].GetString());
        m_publishInstanceIpHasBeenSet = true;
    }

    if (value.HasMember("SubscribeInstanceId") && !value["SubscribeInstanceId"].IsNull())
    {
        if (!value["SubscribeInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublishSubscribe.SubscribeInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscribeInstanceId = string(value["SubscribeInstanceId"].GetString());
        m_subscribeInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("SubscribeInstanceName") && !value["SubscribeInstanceName"].IsNull())
    {
        if (!value["SubscribeInstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublishSubscribe.SubscribeInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscribeInstanceName = string(value["SubscribeInstanceName"].GetString());
        m_subscribeInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("SubscribeInstanceIp") && !value["SubscribeInstanceIp"].IsNull())
    {
        if (!value["SubscribeInstanceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublishSubscribe.SubscribeInstanceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscribeInstanceIp = string(value["SubscribeInstanceIp"].GetString());
        m_subscribeInstanceIpHasBeenSet = true;
    }

    if (value.HasMember("DatabaseTupleSet") && !value["DatabaseTupleSet"].IsNull())
    {
        if (!value["DatabaseTupleSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PublishSubscribe.DatabaseTupleSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DatabaseTupleSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DatabaseTupleStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_databaseTupleSet.push_back(item);
        }
        m_databaseTupleSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PublishSubscribe::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_publishInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_publishInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_publishInstanceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishInstanceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishInstanceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subscribeInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subscribeInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeInstanceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeInstanceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subscribeInstanceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseTupleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseTupleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_databaseTupleSet.begin(); itr != m_databaseTupleSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t PublishSubscribe::GetId() const
{
    return m_id;
}

void PublishSubscribe::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PublishSubscribe::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string PublishSubscribe::GetName() const
{
    return m_name;
}

void PublishSubscribe::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PublishSubscribe::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PublishSubscribe::GetPublishInstanceId() const
{
    return m_publishInstanceId;
}

void PublishSubscribe::SetPublishInstanceId(const string& _publishInstanceId)
{
    m_publishInstanceId = _publishInstanceId;
    m_publishInstanceIdHasBeenSet = true;
}

bool PublishSubscribe::PublishInstanceIdHasBeenSet() const
{
    return m_publishInstanceIdHasBeenSet;
}

string PublishSubscribe::GetPublishInstanceName() const
{
    return m_publishInstanceName;
}

void PublishSubscribe::SetPublishInstanceName(const string& _publishInstanceName)
{
    m_publishInstanceName = _publishInstanceName;
    m_publishInstanceNameHasBeenSet = true;
}

bool PublishSubscribe::PublishInstanceNameHasBeenSet() const
{
    return m_publishInstanceNameHasBeenSet;
}

string PublishSubscribe::GetPublishInstanceIp() const
{
    return m_publishInstanceIp;
}

void PublishSubscribe::SetPublishInstanceIp(const string& _publishInstanceIp)
{
    m_publishInstanceIp = _publishInstanceIp;
    m_publishInstanceIpHasBeenSet = true;
}

bool PublishSubscribe::PublishInstanceIpHasBeenSet() const
{
    return m_publishInstanceIpHasBeenSet;
}

string PublishSubscribe::GetSubscribeInstanceId() const
{
    return m_subscribeInstanceId;
}

void PublishSubscribe::SetSubscribeInstanceId(const string& _subscribeInstanceId)
{
    m_subscribeInstanceId = _subscribeInstanceId;
    m_subscribeInstanceIdHasBeenSet = true;
}

bool PublishSubscribe::SubscribeInstanceIdHasBeenSet() const
{
    return m_subscribeInstanceIdHasBeenSet;
}

string PublishSubscribe::GetSubscribeInstanceName() const
{
    return m_subscribeInstanceName;
}

void PublishSubscribe::SetSubscribeInstanceName(const string& _subscribeInstanceName)
{
    m_subscribeInstanceName = _subscribeInstanceName;
    m_subscribeInstanceNameHasBeenSet = true;
}

bool PublishSubscribe::SubscribeInstanceNameHasBeenSet() const
{
    return m_subscribeInstanceNameHasBeenSet;
}

string PublishSubscribe::GetSubscribeInstanceIp() const
{
    return m_subscribeInstanceIp;
}

void PublishSubscribe::SetSubscribeInstanceIp(const string& _subscribeInstanceIp)
{
    m_subscribeInstanceIp = _subscribeInstanceIp;
    m_subscribeInstanceIpHasBeenSet = true;
}

bool PublishSubscribe::SubscribeInstanceIpHasBeenSet() const
{
    return m_subscribeInstanceIpHasBeenSet;
}

vector<DatabaseTupleStatus> PublishSubscribe::GetDatabaseTupleSet() const
{
    return m_databaseTupleSet;
}

void PublishSubscribe::SetDatabaseTupleSet(const vector<DatabaseTupleStatus>& _databaseTupleSet)
{
    m_databaseTupleSet = _databaseTupleSet;
    m_databaseTupleSetHasBeenSet = true;
}

bool PublishSubscribe::DatabaseTupleSetHasBeenSet() const
{
    return m_databaseTupleSetHasBeenSet;
}

