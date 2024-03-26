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

#include <tencentcloud/faceid/v20180301/model/GetFaceIdRiskInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetFaceIdRiskInfoResponse::GetFaceIdRiskInfoResponse() :
    m_deviceInfoTagHasBeenSet(false),
    m_deviceInfoLevelHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_cameraInfoLevelHasBeenSet(false),
    m_cameraInfoTagHasBeenSet(false),
    m_extraHasBeenSet(false)
{
}

CoreInternalOutcome GetFaceIdRiskInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DeviceInfoTag") && !rsp["DeviceInfoTag"].IsNull())
    {
        if (!rsp["DeviceInfoTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfoTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceInfoTag = string(rsp["DeviceInfoTag"].GetString());
        m_deviceInfoTagHasBeenSet = true;
    }

    if (rsp.HasMember("DeviceInfoLevel") && !rsp["DeviceInfoLevel"].IsNull())
    {
        if (!rsp["DeviceInfoLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfoLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceInfoLevel = rsp["DeviceInfoLevel"].GetInt64();
        m_deviceInfoLevelHasBeenSet = true;
    }

    if (rsp.HasMember("OpenId") && !rsp["OpenId"].IsNull())
    {
        if (!rsp["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(rsp["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (rsp.HasMember("CameraInfoLevel") && !rsp["CameraInfoLevel"].IsNull())
    {
        if (!rsp["CameraInfoLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraInfoLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cameraInfoLevel = rsp["CameraInfoLevel"].GetInt64();
        m_cameraInfoLevelHasBeenSet = true;
    }

    if (rsp.HasMember("CameraInfoTag") && !rsp["CameraInfoTag"].IsNull())
    {
        if (!rsp["CameraInfoTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CameraInfoTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cameraInfoTag = string(rsp["CameraInfoTag"].GetString());
        m_cameraInfoTagHasBeenSet = true;
    }

    if (rsp.HasMember("Extra") && !rsp["Extra"].IsNull())
    {
        if (!rsp["Extra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Extra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extra = string(rsp["Extra"].GetString());
        m_extraHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetFaceIdRiskInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_deviceInfoTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceInfoTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceInfoTag.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceInfoLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceInfoLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceInfoLevel, allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_cameraInfoLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraInfoLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cameraInfoLevel, allocator);
    }

    if (m_cameraInfoTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraInfoTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cameraInfoTag.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
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


string GetFaceIdRiskInfoResponse::GetDeviceInfoTag() const
{
    return m_deviceInfoTag;
}

bool GetFaceIdRiskInfoResponse::DeviceInfoTagHasBeenSet() const
{
    return m_deviceInfoTagHasBeenSet;
}

int64_t GetFaceIdRiskInfoResponse::GetDeviceInfoLevel() const
{
    return m_deviceInfoLevel;
}

bool GetFaceIdRiskInfoResponse::DeviceInfoLevelHasBeenSet() const
{
    return m_deviceInfoLevelHasBeenSet;
}

string GetFaceIdRiskInfoResponse::GetOpenId() const
{
    return m_openId;
}

bool GetFaceIdRiskInfoResponse::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

int64_t GetFaceIdRiskInfoResponse::GetCameraInfoLevel() const
{
    return m_cameraInfoLevel;
}

bool GetFaceIdRiskInfoResponse::CameraInfoLevelHasBeenSet() const
{
    return m_cameraInfoLevelHasBeenSet;
}

string GetFaceIdRiskInfoResponse::GetCameraInfoTag() const
{
    return m_cameraInfoTag;
}

bool GetFaceIdRiskInfoResponse::CameraInfoTagHasBeenSet() const
{
    return m_cameraInfoTagHasBeenSet;
}

string GetFaceIdRiskInfoResponse::GetExtra() const
{
    return m_extra;
}

bool GetFaceIdRiskInfoResponse::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}


