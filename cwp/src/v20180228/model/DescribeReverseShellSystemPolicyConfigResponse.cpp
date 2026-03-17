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

#include <tencentcloud/cwp/v20180228/model/DescribeReverseShellSystemPolicyConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeReverseShellSystemPolicyConfigResponse::DescribeReverseShellSystemPolicyConfigResponse() :
    m_innerNetAlarmShowHasBeenSet(false),
    m_innerIPShowHasBeenSet(false)
{
}

CoreInternalOutcome DescribeReverseShellSystemPolicyConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InnerNetAlarmShow") && !rsp["InnerNetAlarmShow"].IsNull())
    {
        if (!rsp["InnerNetAlarmShow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InnerNetAlarmShow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_innerNetAlarmShow = rsp["InnerNetAlarmShow"].GetBool();
        m_innerNetAlarmShowHasBeenSet = true;
    }

    if (rsp.HasMember("InnerIPShow") && !rsp["InnerIPShow"].IsNull())
    {
        if (!rsp["InnerIPShow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InnerIPShow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_innerIPShow = rsp["InnerIPShow"].GetBool();
        m_innerIPShowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeReverseShellSystemPolicyConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_innerNetAlarmShowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerNetAlarmShow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_innerNetAlarmShow, allocator);
    }

    if (m_innerIPShowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerIPShow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_innerIPShow, allocator);
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


bool DescribeReverseShellSystemPolicyConfigResponse::GetInnerNetAlarmShow() const
{
    return m_innerNetAlarmShow;
}

bool DescribeReverseShellSystemPolicyConfigResponse::InnerNetAlarmShowHasBeenSet() const
{
    return m_innerNetAlarmShowHasBeenSet;
}

bool DescribeReverseShellSystemPolicyConfigResponse::GetInnerIPShow() const
{
    return m_innerIPShow;
}

bool DescribeReverseShellSystemPolicyConfigResponse::InnerIPShowHasBeenSet() const
{
    return m_innerIPShowHasBeenSet;
}


