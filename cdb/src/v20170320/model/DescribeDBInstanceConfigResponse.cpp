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

#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

DescribeDBInstanceConfigResponse::DescribeDBInstanceConfigResponse() :
    m_protectModeHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_slaveConfigHasBeenSet(false),
    m_backupConfigHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBInstanceConfigResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ProtectMode") && !rsp["ProtectMode"].IsNull())
    {
        if (!rsp["ProtectMode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProtectMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectMode = rsp["ProtectMode"].GetInt64();
        m_protectModeHasBeenSet = true;
    }

    if (rsp.HasMember("DeployMode") && !rsp["DeployMode"].IsNull())
    {
        if (!rsp["DeployMode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DeployMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deployMode = rsp["DeployMode"].GetInt64();
        m_deployModeHasBeenSet = true;
    }

    if (rsp.HasMember("Zone") && !rsp["Zone"].IsNull())
    {
        if (!rsp["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(rsp["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (rsp.HasMember("SlaveConfig") && !rsp["SlaveConfig"].IsNull())
    {
        if (!rsp["SlaveConfig"].IsObject())
        {
            return CoreInternalOutcome(Error("response `SlaveConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `BackupConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupConfig.Deserialize(rsp["BackupConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


