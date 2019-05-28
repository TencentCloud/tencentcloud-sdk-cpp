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

#include <tencentcloud/yunjing/v20180228/model/DescribeAlarmAttributeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace rapidjson;
using namespace std;

DescribeAlarmAttributeResponse::DescribeAlarmAttributeResponse() :
    m_offlineHasBeenSet(false),
    m_malwareHasBeenSet(false),
    m_nonlocalLoginHasBeenSet(false),
    m_crackSuccessHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAlarmAttributeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Offline") && !rsp["Offline"].IsNull())
    {
        if (!rsp["Offline"].IsString())
        {
            return CoreInternalOutcome(Error("response `Offline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offline = string(rsp["Offline"].GetString());
        m_offlineHasBeenSet = true;
    }

    if (rsp.HasMember("Malware") && !rsp["Malware"].IsNull())
    {
        if (!rsp["Malware"].IsString())
        {
            return CoreInternalOutcome(Error("response `Malware` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_malware = string(rsp["Malware"].GetString());
        m_malwareHasBeenSet = true;
    }

    if (rsp.HasMember("NonlocalLogin") && !rsp["NonlocalLogin"].IsNull())
    {
        if (!rsp["NonlocalLogin"].IsString())
        {
            return CoreInternalOutcome(Error("response `NonlocalLogin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nonlocalLogin = string(rsp["NonlocalLogin"].GetString());
        m_nonlocalLoginHasBeenSet = true;
    }

    if (rsp.HasMember("CrackSuccess") && !rsp["CrackSuccess"].IsNull())
    {
        if (!rsp["CrackSuccess"].IsString())
        {
            return CoreInternalOutcome(Error("response `CrackSuccess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crackSuccess = string(rsp["CrackSuccess"].GetString());
        m_crackSuccessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeAlarmAttributeResponse::GetOffline() const
{
    return m_offline;
}

bool DescribeAlarmAttributeResponse::OfflineHasBeenSet() const
{
    return m_offlineHasBeenSet;
}

string DescribeAlarmAttributeResponse::GetMalware() const
{
    return m_malware;
}

bool DescribeAlarmAttributeResponse::MalwareHasBeenSet() const
{
    return m_malwareHasBeenSet;
}

string DescribeAlarmAttributeResponse::GetNonlocalLogin() const
{
    return m_nonlocalLogin;
}

bool DescribeAlarmAttributeResponse::NonlocalLoginHasBeenSet() const
{
    return m_nonlocalLoginHasBeenSet;
}

string DescribeAlarmAttributeResponse::GetCrackSuccess() const
{
    return m_crackSuccess;
}

bool DescribeAlarmAttributeResponse::CrackSuccessHasBeenSet() const
{
    return m_crackSuccessHasBeenSet;
}


