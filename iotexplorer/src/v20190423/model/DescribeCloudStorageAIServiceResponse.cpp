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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageAIServiceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeCloudStorageAIServiceResponse::DescribeCloudStorageAIServiceResponse() :
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_configHasBeenSet(false),
    m_rOIHasBeenSet(false),
    m_packageIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudStorageAIServiceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = rsp["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = rsp["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UserId") && !rsp["UserId"].IsNull())
    {
        if (!rsp["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(rsp["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (rsp.HasMember("Enabled") && !rsp["Enabled"].IsNull())
    {
        if (!rsp["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = rsp["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (rsp.HasMember("Config") && !rsp["Config"].IsNull())
    {
        if (!rsp["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(rsp["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (rsp.HasMember("ROI") && !rsp["ROI"].IsNull())
    {
        if (!rsp["ROI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ROI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rOI = string(rsp["ROI"].GetString());
        m_rOIHasBeenSet = true;
    }

    if (rsp.HasMember("PackageId") && !rsp["PackageId"].IsNull())
    {
        if (!rsp["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(rsp["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCloudStorageAIServiceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_rOIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ROI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rOI.c_str(), allocator).Move(), allocator);
    }

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeCloudStorageAIServiceResponse::GetType() const
{
    return m_type;
}

bool DescribeCloudStorageAIServiceResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t DescribeCloudStorageAIServiceResponse::GetStatus() const
{
    return m_status;
}

bool DescribeCloudStorageAIServiceResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeCloudStorageAIServiceResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool DescribeCloudStorageAIServiceResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeCloudStorageAIServiceResponse::GetUserId() const
{
    return m_userId;
}

bool DescribeCloudStorageAIServiceResponse::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

bool DescribeCloudStorageAIServiceResponse::GetEnabled() const
{
    return m_enabled;
}

bool DescribeCloudStorageAIServiceResponse::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string DescribeCloudStorageAIServiceResponse::GetConfig() const
{
    return m_config;
}

bool DescribeCloudStorageAIServiceResponse::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string DescribeCloudStorageAIServiceResponse::GetROI() const
{
    return m_rOI;
}

bool DescribeCloudStorageAIServiceResponse::ROIHasBeenSet() const
{
    return m_rOIHasBeenSet;
}

string DescribeCloudStorageAIServiceResponse::GetPackageId() const
{
    return m_packageId;
}

bool DescribeCloudStorageAIServiceResponse::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}


