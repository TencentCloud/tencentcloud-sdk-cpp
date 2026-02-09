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

#include <tencentcloud/tcb/v20180608/model/MySQLClusterDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

MySQLClusterDetail::MySQLClusterDetail() :
    m_dbClusterIdHasBeenSet(false),
    m_netInfoHasBeenSet(false),
    m_dbInfoHasBeenSet(false)
{
}

CoreInternalOutcome MySQLClusterDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbClusterId") && !value["DbClusterId"].IsNull())
    {
        if (!value["DbClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLClusterDetail.DbClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbClusterId = string(value["DbClusterId"].GetString());
        m_dbClusterIdHasBeenSet = true;
    }

    if (value.HasMember("NetInfo") && !value["NetInfo"].IsNull())
    {
        if (!value["NetInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLClusterDetail.NetInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_netInfo.Deserialize(value["NetInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_netInfoHasBeenSet = true;
    }

    if (value.HasMember("DbInfo") && !value["DbInfo"].IsNull())
    {
        if (!value["DbInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLClusterDetail.DbInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dbInfo.Deserialize(value["DbInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dbInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MySQLClusterDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_netInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_netInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dbInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dbInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MySQLClusterDetail::GetDbClusterId() const
{
    return m_dbClusterId;
}

void MySQLClusterDetail::SetDbClusterId(const string& _dbClusterId)
{
    m_dbClusterId = _dbClusterId;
    m_dbClusterIdHasBeenSet = true;
}

bool MySQLClusterDetail::DbClusterIdHasBeenSet() const
{
    return m_dbClusterIdHasBeenSet;
}

MySQLNetDetail MySQLClusterDetail::GetNetInfo() const
{
    return m_netInfo;
}

void MySQLClusterDetail::SetNetInfo(const MySQLNetDetail& _netInfo)
{
    m_netInfo = _netInfo;
    m_netInfoHasBeenSet = true;
}

bool MySQLClusterDetail::NetInfoHasBeenSet() const
{
    return m_netInfoHasBeenSet;
}

ClusterDetail MySQLClusterDetail::GetDbInfo() const
{
    return m_dbInfo;
}

void MySQLClusterDetail::SetDbInfo(const ClusterDetail& _dbInfo)
{
    m_dbInfo = _dbInfo;
    m_dbInfoHasBeenSet = true;
}

bool MySQLClusterDetail::DbInfoHasBeenSet() const
{
    return m_dbInfoHasBeenSet;
}

