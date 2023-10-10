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

#include <tencentcloud/cwp/v20180228/model/DescribeNetAttackSettingResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeNetAttackSettingResponse::DescribeNetAttackSettingResponse() :
    m_netAttackEnableHasBeenSet(false),
    m_netAttackAlarmStatusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNetAttackSettingResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NetAttackEnable") && !rsp["NetAttackEnable"].IsNull())
    {
        if (!rsp["NetAttackEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_netAttackEnable = rsp["NetAttackEnable"].GetUint64();
        m_netAttackEnableHasBeenSet = true;
    }

    if (rsp.HasMember("NetAttackAlarmStatus") && !rsp["NetAttackAlarmStatus"].IsNull())
    {
        if (!rsp["NetAttackAlarmStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackAlarmStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_netAttackAlarmStatus = rsp["NetAttackAlarmStatus"].GetUint64();
        m_netAttackAlarmStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNetAttackSettingResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_netAttackEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetAttackEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netAttackEnable, allocator);
    }

    if (m_netAttackAlarmStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetAttackAlarmStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netAttackAlarmStatus, allocator);
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


uint64_t DescribeNetAttackSettingResponse::GetNetAttackEnable() const
{
    return m_netAttackEnable;
}

bool DescribeNetAttackSettingResponse::NetAttackEnableHasBeenSet() const
{
    return m_netAttackEnableHasBeenSet;
}

uint64_t DescribeNetAttackSettingResponse::GetNetAttackAlarmStatus() const
{
    return m_netAttackAlarmStatus;
}

bool DescribeNetAttackSettingResponse::NetAttackAlarmStatusHasBeenSet() const
{
    return m_netAttackAlarmStatusHasBeenSet;
}


