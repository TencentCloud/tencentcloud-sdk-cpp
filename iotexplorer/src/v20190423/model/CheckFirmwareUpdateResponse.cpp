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

#include <tencentcloud/iotexplorer/v20190423/model/CheckFirmwareUpdateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CheckFirmwareUpdateResponse::CheckFirmwareUpdateResponse() :
    m_currentVersionHasBeenSet(false),
    m_dstVersionHasBeenSet(false)
{
}

CoreInternalOutcome CheckFirmwareUpdateResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CurrentVersion") && !rsp["CurrentVersion"].IsNull())
    {
        if (!rsp["CurrentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentVersion = string(rsp["CurrentVersion"].GetString());
        m_currentVersionHasBeenSet = true;
    }

    if (rsp.HasMember("DstVersion") && !rsp["DstVersion"].IsNull())
    {
        if (!rsp["DstVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DstVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstVersion = string(rsp["DstVersion"].GetString());
        m_dstVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CheckFirmwareUpdateResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_currentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dstVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstVersion.c_str(), allocator).Move(), allocator);
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


string CheckFirmwareUpdateResponse::GetCurrentVersion() const
{
    return m_currentVersion;
}

bool CheckFirmwareUpdateResponse::CurrentVersionHasBeenSet() const
{
    return m_currentVersionHasBeenSet;
}

string CheckFirmwareUpdateResponse::GetDstVersion() const
{
    return m_dstVersion;
}

bool CheckFirmwareUpdateResponse::DstVersionHasBeenSet() const
{
    return m_dstVersionHasBeenSet;
}


