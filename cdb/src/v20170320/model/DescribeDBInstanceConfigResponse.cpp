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

#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeDBInstanceConfigResponse::DescribeDBInstanceConfigResponse() :
    m_protectModeHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_slaveConfigHasBeenSet(false),
    m_backupConfigHasBeenSet(false),
    m_switchedHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBInstanceConfigResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ProtectMode") && !rsp["ProtectMode"].IsNull())
    {
        if (!rsp["ProtectMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectMode = rsp["ProtectMode"].GetInt64();
        m_protectModeHasBeenSet = true;
    }

    if (rsp.HasMember("DeployMode") && !rsp["DeployMode"].IsNull())
    {
        if (!rsp["DeployMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deployMode = rsp["DeployMode"].GetInt64();
        m_deployModeHasBeenSet = true;
    }

    if (rsp.HasMember("Zone") && !rsp["Zone"].IsNull())
    {
        if (!rsp["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(rsp["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (rsp.HasMember("SlaveConfig") && !rsp["SlaveConfig"].IsNull())
    {
        if (!rsp["SlaveConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SlaveConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_slaveConfig.Deserialize(rsp["SlaveConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_slaveConfigHasBeenSet = true;
    }

    if (rsp.HasMember("BackupConfig") && !rsp["BackupConfig"].IsNull())
    {
        if (!rsp["BackupConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackupConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupConfig.Deserialize(rsp["BackupConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupConfigHasBeenSet = true;
    }

    if (rsp.HasMember("Switched") && !rsp["Switched"].IsNull())
    {
        if (!rsp["Switched"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Switched` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_switched = rsp["Switched"].GetBool();
        m_switchedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBInstanceConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_protectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectMode, allocator);
    }

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deployMode, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_slaveConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backupConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_switchedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switched";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switched, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDBInstanceConfigResponse::GetProtectMode() const
{
    return m_protectMode;
}

bool DescribeDBInstanceConfigResponse::ProtectModeHasBeenSet() const
{
    return m_protectModeHasBeenSet;
}

int64_t DescribeDBInstanceConfigResponse::GetDeployMode() const
{
    return m_deployMode;
}

bool DescribeDBInstanceConfigResponse::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

string DescribeDBInstanceConfigResponse::GetZone() const
{
    return m_zone;
}

bool DescribeDBInstanceConfigResponse::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

SlaveConfig DescribeDBInstanceConfigResponse::GetSlaveConfig() const
{
    return m_slaveConfig;
}

bool DescribeDBInstanceConfigResponse::SlaveConfigHasBeenSet() const
{
    return m_slaveConfigHasBeenSet;
}

BackupConfig DescribeDBInstanceConfigResponse::GetBackupConfig() const
{
    return m_backupConfig;
}

bool DescribeDBInstanceConfigResponse::BackupConfigHasBeenSet() const
{
    return m_backupConfigHasBeenSet;
}

bool DescribeDBInstanceConfigResponse::GetSwitched() const
{
    return m_switched;
}

bool DescribeDBInstanceConfigResponse::SwitchedHasBeenSet() const
{
    return m_switchedHasBeenSet;
}


