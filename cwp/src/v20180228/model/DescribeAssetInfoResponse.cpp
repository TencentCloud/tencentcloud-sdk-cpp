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

#include <tencentcloud/cwp/v20180228/model/DescribeAssetInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeAssetInfoResponse::DescribeAssetInfoResponse() :
    m_machineCountHasBeenSet(false),
    m_accountCountHasBeenSet(false),
    m_portCountHasBeenSet(false),
    m_processCountHasBeenSet(false),
    m_softwareCountHasBeenSet(false),
    m_databaseCountHasBeenSet(false),
    m_webAppCountHasBeenSet(false),
    m_webFrameCountHasBeenSet(false),
    m_webServiceCountHasBeenSet(false),
    m_webLocationCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetInfoResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("MachineCount") && !rsp["MachineCount"].IsNull())
    {
        if (!rsp["MachineCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `MachineCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machineCount = rsp["MachineCount"].GetUint64();
        m_machineCountHasBeenSet = true;
    }

    if (rsp.HasMember("AccountCount") && !rsp["AccountCount"].IsNull())
    {
        if (!rsp["AccountCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AccountCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accountCount = rsp["AccountCount"].GetUint64();
        m_accountCountHasBeenSet = true;
    }

    if (rsp.HasMember("PortCount") && !rsp["PortCount"].IsNull())
    {
        if (!rsp["PortCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PortCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_portCount = rsp["PortCount"].GetUint64();
        m_portCountHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessCount") && !rsp["ProcessCount"].IsNull())
    {
        if (!rsp["ProcessCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ProcessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_processCount = rsp["ProcessCount"].GetUint64();
        m_processCountHasBeenSet = true;
    }

    if (rsp.HasMember("SoftwareCount") && !rsp["SoftwareCount"].IsNull())
    {
        if (!rsp["SoftwareCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SoftwareCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_softwareCount = rsp["SoftwareCount"].GetUint64();
        m_softwareCountHasBeenSet = true;
    }

    if (rsp.HasMember("DatabaseCount") && !rsp["DatabaseCount"].IsNull())
    {
        if (!rsp["DatabaseCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DatabaseCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_databaseCount = rsp["DatabaseCount"].GetUint64();
        m_databaseCountHasBeenSet = true;
    }

    if (rsp.HasMember("WebAppCount") && !rsp["WebAppCount"].IsNull())
    {
        if (!rsp["WebAppCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `WebAppCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webAppCount = rsp["WebAppCount"].GetUint64();
        m_webAppCountHasBeenSet = true;
    }

    if (rsp.HasMember("WebFrameCount") && !rsp["WebFrameCount"].IsNull())
    {
        if (!rsp["WebFrameCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `WebFrameCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webFrameCount = rsp["WebFrameCount"].GetUint64();
        m_webFrameCountHasBeenSet = true;
    }

    if (rsp.HasMember("WebServiceCount") && !rsp["WebServiceCount"].IsNull())
    {
        if (!rsp["WebServiceCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `WebServiceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webServiceCount = rsp["WebServiceCount"].GetUint64();
        m_webServiceCountHasBeenSet = true;
    }

    if (rsp.HasMember("WebLocationCount") && !rsp["WebLocationCount"].IsNull())
    {
        if (!rsp["WebLocationCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `WebLocationCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webLocationCount = rsp["WebLocationCount"].GetUint64();
        m_webLocationCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeAssetInfoResponse::GetMachineCount() const
{
    return m_machineCount;
}

bool DescribeAssetInfoResponse::MachineCountHasBeenSet() const
{
    return m_machineCountHasBeenSet;
}

uint64_t DescribeAssetInfoResponse::GetAccountCount() const
{
    return m_accountCount;
}

bool DescribeAssetInfoResponse::AccountCountHasBeenSet() const
{
    return m_accountCountHasBeenSet;
}

uint64_t DescribeAssetInfoResponse::GetPortCount() const
{
    return m_portCount;
}

bool DescribeAssetInfoResponse::PortCountHasBeenSet() const
{
    return m_portCountHasBeenSet;
}

uint64_t DescribeAssetInfoResponse::GetProcessCount() const
{
    return m_processCount;
}

bool DescribeAssetInfoResponse::ProcessCountHasBeenSet() const
{
    return m_processCountHasBeenSet;
}

uint64_t DescribeAssetInfoResponse::GetSoftwareCount() const
{
    return m_softwareCount;
}

bool DescribeAssetInfoResponse::SoftwareCountHasBeenSet() const
{
    return m_softwareCountHasBeenSet;
}

uint64_t DescribeAssetInfoResponse::GetDatabaseCount() const
{
    return m_databaseCount;
}

bool DescribeAssetInfoResponse::DatabaseCountHasBeenSet() const
{
    return m_databaseCountHasBeenSet;
}

uint64_t DescribeAssetInfoResponse::GetWebAppCount() const
{
    return m_webAppCount;
}

bool DescribeAssetInfoResponse::WebAppCountHasBeenSet() const
{
    return m_webAppCountHasBeenSet;
}

uint64_t DescribeAssetInfoResponse::GetWebFrameCount() const
{
    return m_webFrameCount;
}

bool DescribeAssetInfoResponse::WebFrameCountHasBeenSet() const
{
    return m_webFrameCountHasBeenSet;
}

uint64_t DescribeAssetInfoResponse::GetWebServiceCount() const
{
    return m_webServiceCount;
}

bool DescribeAssetInfoResponse::WebServiceCountHasBeenSet() const
{
    return m_webServiceCountHasBeenSet;
}

uint64_t DescribeAssetInfoResponse::GetWebLocationCount() const
{
    return m_webLocationCount;
}

bool DescribeAssetInfoResponse::WebLocationCountHasBeenSet() const
{
    return m_webLocationCountHasBeenSet;
}


