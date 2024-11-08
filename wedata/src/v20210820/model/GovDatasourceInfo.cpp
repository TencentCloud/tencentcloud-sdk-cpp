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

#include <tencentcloud/wedata/v20210820/model/GovDatasourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

GovDatasourceInfo::GovDatasourceInfo() :
    m_datasourceIdHasBeenSet(false),
    m_datasourceNameHasBeenSet(false),
    m_datasourceClusterIdHasBeenSet(false),
    m_datasourceUrnHasBeenSet(false),
    m_datasourceEnvHasBeenSet(false)
{
}

CoreInternalOutcome GovDatasourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovDatasourceInfo.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceName") && !value["DatasourceName"].IsNull())
    {
        if (!value["DatasourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovDatasourceInfo.DatasourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceName = string(value["DatasourceName"].GetString());
        m_datasourceNameHasBeenSet = true;
    }

    if (value.HasMember("DatasourceClusterId") && !value["DatasourceClusterId"].IsNull())
    {
        if (!value["DatasourceClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovDatasourceInfo.DatasourceClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceClusterId = string(value["DatasourceClusterId"].GetString());
        m_datasourceClusterIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceUrn") && !value["DatasourceUrn"].IsNull())
    {
        if (!value["DatasourceUrn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovDatasourceInfo.DatasourceUrn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceUrn = string(value["DatasourceUrn"].GetString());
        m_datasourceUrnHasBeenSet = true;
    }

    if (value.HasMember("DatasourceEnv") && !value["DatasourceEnv"].IsNull())
    {
        if (!value["DatasourceEnv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovDatasourceInfo.DatasourceEnv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceEnv = string(value["DatasourceEnv"].GetString());
        m_datasourceEnvHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GovDatasourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceUrnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceUrn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceUrn.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceEnv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceEnv.c_str(), allocator).Move(), allocator);
    }

}


string GovDatasourceInfo::GetDatasourceId() const
{
    return m_datasourceId;
}

void GovDatasourceInfo::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool GovDatasourceInfo::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string GovDatasourceInfo::GetDatasourceName() const
{
    return m_datasourceName;
}

void GovDatasourceInfo::SetDatasourceName(const string& _datasourceName)
{
    m_datasourceName = _datasourceName;
    m_datasourceNameHasBeenSet = true;
}

bool GovDatasourceInfo::DatasourceNameHasBeenSet() const
{
    return m_datasourceNameHasBeenSet;
}

string GovDatasourceInfo::GetDatasourceClusterId() const
{
    return m_datasourceClusterId;
}

void GovDatasourceInfo::SetDatasourceClusterId(const string& _datasourceClusterId)
{
    m_datasourceClusterId = _datasourceClusterId;
    m_datasourceClusterIdHasBeenSet = true;
}

bool GovDatasourceInfo::DatasourceClusterIdHasBeenSet() const
{
    return m_datasourceClusterIdHasBeenSet;
}

string GovDatasourceInfo::GetDatasourceUrn() const
{
    return m_datasourceUrn;
}

void GovDatasourceInfo::SetDatasourceUrn(const string& _datasourceUrn)
{
    m_datasourceUrn = _datasourceUrn;
    m_datasourceUrnHasBeenSet = true;
}

bool GovDatasourceInfo::DatasourceUrnHasBeenSet() const
{
    return m_datasourceUrnHasBeenSet;
}

string GovDatasourceInfo::GetDatasourceEnv() const
{
    return m_datasourceEnv;
}

void GovDatasourceInfo::SetDatasourceEnv(const string& _datasourceEnv)
{
    m_datasourceEnv = _datasourceEnv;
    m_datasourceEnvHasBeenSet = true;
}

bool GovDatasourceInfo::DatasourceEnvHasBeenSet() const
{
    return m_datasourceEnvHasBeenSet;
}

