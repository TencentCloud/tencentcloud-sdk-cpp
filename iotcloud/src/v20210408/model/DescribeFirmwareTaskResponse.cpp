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

#include <tencentcloud/iotcloud/v20210408/model/DescribeFirmwareTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

DescribeFirmwareTaskResponse::DescribeFirmwareTaskResponse() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_upgradeModeHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_originalVersionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFirmwareTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = rsp["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = rsp["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = rsp["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("ProductName") && !rsp["ProductName"].IsNull())
    {
        if (!rsp["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(rsp["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (rsp.HasMember("UpgradeMode") && !rsp["UpgradeMode"].IsNull())
    {
        if (!rsp["UpgradeMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upgradeMode = string(rsp["UpgradeMode"].GetString());
        m_upgradeModeHasBeenSet = true;
    }

    if (rsp.HasMember("ProductId") && !rsp["ProductId"].IsNull())
    {
        if (!rsp["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(rsp["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (rsp.HasMember("OriginalVersion") && !rsp["OriginalVersion"].IsNull())
    {
        if (!rsp["OriginalVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginalVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalVersion = string(rsp["OriginalVersion"].GetString());
        m_originalVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeFirmwareTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upgradeMode.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_originalVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalVersion.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeFirmwareTaskResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeFirmwareTaskResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t DescribeFirmwareTaskResponse::GetStatus() const
{
    return m_status;
}

bool DescribeFirmwareTaskResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeFirmwareTaskResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeFirmwareTaskResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DescribeFirmwareTaskResponse::GetType() const
{
    return m_type;
}

bool DescribeFirmwareTaskResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeFirmwareTaskResponse::GetProductName() const
{
    return m_productName;
}

bool DescribeFirmwareTaskResponse::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string DescribeFirmwareTaskResponse::GetUpgradeMode() const
{
    return m_upgradeMode;
}

bool DescribeFirmwareTaskResponse::UpgradeModeHasBeenSet() const
{
    return m_upgradeModeHasBeenSet;
}

string DescribeFirmwareTaskResponse::GetProductId() const
{
    return m_productId;
}

bool DescribeFirmwareTaskResponse::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeFirmwareTaskResponse::GetOriginalVersion() const
{
    return m_originalVersion;
}

bool DescribeFirmwareTaskResponse::OriginalVersionHasBeenSet() const
{
    return m_originalVersionHasBeenSet;
}


