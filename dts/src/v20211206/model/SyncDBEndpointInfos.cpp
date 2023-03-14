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

#include <tencentcloud/dts/v20211206/model/SyncDBEndpointInfos.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

SyncDBEndpointInfos::SyncDBEndpointInfos() :
    m_regionHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_databaseTypeHasBeenSet(false),
    m_infoHasBeenSet(false)
{
}

CoreInternalOutcome SyncDBEndpointInfos::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncDBEndpointInfos.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncDBEndpointInfos.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("DatabaseType") && !value["DatabaseType"].IsNull())
    {
        if (!value["DatabaseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncDBEndpointInfos.DatabaseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseType = string(value["DatabaseType"].GetString());
        m_databaseTypeHasBeenSet = true;
    }

    if (value.HasMember("Info") && !value["Info"].IsNull())
    {
        if (!value["Info"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SyncDBEndpointInfos.Info` is not array type"));

        const rapidjson::Value &tmpValue = value["Info"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Endpoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_info.push_back(item);
        }
        m_infoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SyncDBEndpointInfos::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_info.begin(); itr != m_info.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SyncDBEndpointInfos::GetRegion() const
{
    return m_region;
}

void SyncDBEndpointInfos::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SyncDBEndpointInfos::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string SyncDBEndpointInfos::GetAccessType() const
{
    return m_accessType;
}

void SyncDBEndpointInfos::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool SyncDBEndpointInfos::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string SyncDBEndpointInfos::GetDatabaseType() const
{
    return m_databaseType;
}

void SyncDBEndpointInfos::SetDatabaseType(const string& _databaseType)
{
    m_databaseType = _databaseType;
    m_databaseTypeHasBeenSet = true;
}

bool SyncDBEndpointInfos::DatabaseTypeHasBeenSet() const
{
    return m_databaseTypeHasBeenSet;
}

vector<Endpoint> SyncDBEndpointInfos::GetInfo() const
{
    return m_info;
}

void SyncDBEndpointInfos::SetInfo(const vector<Endpoint>& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool SyncDBEndpointInfos::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

