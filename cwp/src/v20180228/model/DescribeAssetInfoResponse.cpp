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
    m_webLocationCountHasBeenSet(false),
    m_accountNewCountHasBeenSet(false),
    m_portNewCountHasBeenSet(false),
    m_processNewCountHasBeenSet(false),
    m_softwareNewCountHasBeenSet(false),
    m_databaseNewCountHasBeenSet(false),
    m_webAppNewCountHasBeenSet(false),
    m_webFrameNewCountHasBeenSet(false),
    m_webServiceNewCountHasBeenSet(false),
    m_webLocationNewCountHasBeenSet(false),
    m_machineNewCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MachineCount") && !rsp["MachineCount"].IsNull())
    {
        if (!rsp["MachineCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machineCount = rsp["MachineCount"].GetUint64();
        m_machineCountHasBeenSet = true;
    }

    if (rsp.HasMember("AccountCount") && !rsp["AccountCount"].IsNull())
    {
        if (!rsp["AccountCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accountCount = rsp["AccountCount"].GetUint64();
        m_accountCountHasBeenSet = true;
    }

    if (rsp.HasMember("PortCount") && !rsp["PortCount"].IsNull())
    {
        if (!rsp["PortCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PortCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_portCount = rsp["PortCount"].GetUint64();
        m_portCountHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessCount") && !rsp["ProcessCount"].IsNull())
    {
        if (!rsp["ProcessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_processCount = rsp["ProcessCount"].GetUint64();
        m_processCountHasBeenSet = true;
    }

    if (rsp.HasMember("SoftwareCount") && !rsp["SoftwareCount"].IsNull())
    {
        if (!rsp["SoftwareCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SoftwareCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_softwareCount = rsp["SoftwareCount"].GetUint64();
        m_softwareCountHasBeenSet = true;
    }

    if (rsp.HasMember("DatabaseCount") && !rsp["DatabaseCount"].IsNull())
    {
        if (!rsp["DatabaseCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_databaseCount = rsp["DatabaseCount"].GetUint64();
        m_databaseCountHasBeenSet = true;
    }

    if (rsp.HasMember("WebAppCount") && !rsp["WebAppCount"].IsNull())
    {
        if (!rsp["WebAppCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebAppCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webAppCount = rsp["WebAppCount"].GetUint64();
        m_webAppCountHasBeenSet = true;
    }

    if (rsp.HasMember("WebFrameCount") && !rsp["WebFrameCount"].IsNull())
    {
        if (!rsp["WebFrameCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebFrameCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webFrameCount = rsp["WebFrameCount"].GetUint64();
        m_webFrameCountHasBeenSet = true;
    }

    if (rsp.HasMember("WebServiceCount") && !rsp["WebServiceCount"].IsNull())
    {
        if (!rsp["WebServiceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebServiceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webServiceCount = rsp["WebServiceCount"].GetUint64();
        m_webServiceCountHasBeenSet = true;
    }

    if (rsp.HasMember("WebLocationCount") && !rsp["WebLocationCount"].IsNull())
    {
        if (!rsp["WebLocationCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebLocationCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webLocationCount = rsp["WebLocationCount"].GetUint64();
        m_webLocationCountHasBeenSet = true;
    }

    if (rsp.HasMember("AccountNewCount") && !rsp["AccountNewCount"].IsNull())
    {
        if (!rsp["AccountNewCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountNewCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountNewCount = rsp["AccountNewCount"].GetInt64();
        m_accountNewCountHasBeenSet = true;
    }

    if (rsp.HasMember("PortNewCount") && !rsp["PortNewCount"].IsNull())
    {
        if (!rsp["PortNewCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PortNewCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_portNewCount = rsp["PortNewCount"].GetInt64();
        m_portNewCountHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessNewCount") && !rsp["ProcessNewCount"].IsNull())
    {
        if (!rsp["ProcessNewCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessNewCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processNewCount = rsp["ProcessNewCount"].GetInt64();
        m_processNewCountHasBeenSet = true;
    }

    if (rsp.HasMember("SoftwareNewCount") && !rsp["SoftwareNewCount"].IsNull())
    {
        if (!rsp["SoftwareNewCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SoftwareNewCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_softwareNewCount = rsp["SoftwareNewCount"].GetInt64();
        m_softwareNewCountHasBeenSet = true;
    }

    if (rsp.HasMember("DatabaseNewCount") && !rsp["DatabaseNewCount"].IsNull())
    {
        if (!rsp["DatabaseNewCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseNewCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_databaseNewCount = rsp["DatabaseNewCount"].GetInt64();
        m_databaseNewCountHasBeenSet = true;
    }

    if (rsp.HasMember("WebAppNewCount") && !rsp["WebAppNewCount"].IsNull())
    {
        if (!rsp["WebAppNewCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebAppNewCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_webAppNewCount = rsp["WebAppNewCount"].GetInt64();
        m_webAppNewCountHasBeenSet = true;
    }

    if (rsp.HasMember("WebFrameNewCount") && !rsp["WebFrameNewCount"].IsNull())
    {
        if (!rsp["WebFrameNewCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebFrameNewCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_webFrameNewCount = rsp["WebFrameNewCount"].GetInt64();
        m_webFrameNewCountHasBeenSet = true;
    }

    if (rsp.HasMember("WebServiceNewCount") && !rsp["WebServiceNewCount"].IsNull())
    {
        if (!rsp["WebServiceNewCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebServiceNewCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_webServiceNewCount = rsp["WebServiceNewCount"].GetInt64();
        m_webServiceNewCountHasBeenSet = true;
    }

    if (rsp.HasMember("WebLocationNewCount") && !rsp["WebLocationNewCount"].IsNull())
    {
        if (!rsp["WebLocationNewCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebLocationNewCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_webLocationNewCount = rsp["WebLocationNewCount"].GetInt64();
        m_webLocationNewCountHasBeenSet = true;
    }

    if (rsp.HasMember("MachineNewCount") && !rsp["MachineNewCount"].IsNull())
    {
        if (!rsp["MachineNewCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineNewCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_machineNewCount = rsp["MachineNewCount"].GetInt64();
        m_machineNewCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAssetInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_machineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineCount, allocator);
    }

    if (m_accountCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountCount, allocator);
    }

    if (m_portCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portCount, allocator);
    }

    if (m_processCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processCount, allocator);
    }

    if (m_softwareCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftwareCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_softwareCount, allocator);
    }

    if (m_databaseCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_databaseCount, allocator);
    }

    if (m_webAppCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebAppCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webAppCount, allocator);
    }

    if (m_webFrameCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebFrameCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webFrameCount, allocator);
    }

    if (m_webServiceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webServiceCount, allocator);
    }

    if (m_webLocationCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebLocationCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webLocationCount, allocator);
    }

    if (m_accountNewCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountNewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountNewCount, allocator);
    }

    if (m_portNewCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortNewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portNewCount, allocator);
    }

    if (m_processNewCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessNewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processNewCount, allocator);
    }

    if (m_softwareNewCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftwareNewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_softwareNewCount, allocator);
    }

    if (m_databaseNewCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseNewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_databaseNewCount, allocator);
    }

    if (m_webAppNewCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebAppNewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webAppNewCount, allocator);
    }

    if (m_webFrameNewCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebFrameNewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webFrameNewCount, allocator);
    }

    if (m_webServiceNewCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebServiceNewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webServiceNewCount, allocator);
    }

    if (m_webLocationNewCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebLocationNewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webLocationNewCount, allocator);
    }

    if (m_machineNewCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineNewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineNewCount, allocator);
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

int64_t DescribeAssetInfoResponse::GetAccountNewCount() const
{
    return m_accountNewCount;
}

bool DescribeAssetInfoResponse::AccountNewCountHasBeenSet() const
{
    return m_accountNewCountHasBeenSet;
}

int64_t DescribeAssetInfoResponse::GetPortNewCount() const
{
    return m_portNewCount;
}

bool DescribeAssetInfoResponse::PortNewCountHasBeenSet() const
{
    return m_portNewCountHasBeenSet;
}

int64_t DescribeAssetInfoResponse::GetProcessNewCount() const
{
    return m_processNewCount;
}

bool DescribeAssetInfoResponse::ProcessNewCountHasBeenSet() const
{
    return m_processNewCountHasBeenSet;
}

int64_t DescribeAssetInfoResponse::GetSoftwareNewCount() const
{
    return m_softwareNewCount;
}

bool DescribeAssetInfoResponse::SoftwareNewCountHasBeenSet() const
{
    return m_softwareNewCountHasBeenSet;
}

int64_t DescribeAssetInfoResponse::GetDatabaseNewCount() const
{
    return m_databaseNewCount;
}

bool DescribeAssetInfoResponse::DatabaseNewCountHasBeenSet() const
{
    return m_databaseNewCountHasBeenSet;
}

int64_t DescribeAssetInfoResponse::GetWebAppNewCount() const
{
    return m_webAppNewCount;
}

bool DescribeAssetInfoResponse::WebAppNewCountHasBeenSet() const
{
    return m_webAppNewCountHasBeenSet;
}

int64_t DescribeAssetInfoResponse::GetWebFrameNewCount() const
{
    return m_webFrameNewCount;
}

bool DescribeAssetInfoResponse::WebFrameNewCountHasBeenSet() const
{
    return m_webFrameNewCountHasBeenSet;
}

int64_t DescribeAssetInfoResponse::GetWebServiceNewCount() const
{
    return m_webServiceNewCount;
}

bool DescribeAssetInfoResponse::WebServiceNewCountHasBeenSet() const
{
    return m_webServiceNewCountHasBeenSet;
}

int64_t DescribeAssetInfoResponse::GetWebLocationNewCount() const
{
    return m_webLocationNewCount;
}

bool DescribeAssetInfoResponse::WebLocationNewCountHasBeenSet() const
{
    return m_webLocationNewCountHasBeenSet;
}

int64_t DescribeAssetInfoResponse::GetMachineNewCount() const
{
    return m_machineNewCount;
}

bool DescribeAssetInfoResponse::MachineNewCountHasBeenSet() const
{
    return m_machineNewCountHasBeenSet;
}


