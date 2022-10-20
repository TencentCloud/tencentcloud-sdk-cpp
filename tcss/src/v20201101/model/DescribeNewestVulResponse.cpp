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

#include <tencentcloud/tcss/v20201101/model/DescribeNewestVulResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeNewestVulResponse::DescribeNewestVulResponse() :
    m_pocIDHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cVEIDHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNewestVulResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PocID") && !rsp["PocID"].IsNull())
    {
        if (!rsp["PocID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PocID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pocID = string(rsp["PocID"].GetString());
        m_pocIDHasBeenSet = true;
    }

    if (rsp.HasMember("VulName") && !rsp["VulName"].IsNull())
    {
        if (!rsp["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(rsp["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (rsp.HasMember("SubmitTime") && !rsp["SubmitTime"].IsNull())
    {
        if (!rsp["SubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submitTime = string(rsp["SubmitTime"].GetString());
        m_submitTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CVEID") && !rsp["CVEID"].IsNull())
    {
        if (!rsp["CVEID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVEID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVEID = string(rsp["CVEID"].GetString());
        m_cVEIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNewestVulResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_pocIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PocID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pocID.c_str(), allocator).Move(), allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_submitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_cVEIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVEID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVEID.c_str(), allocator).Move(), allocator);
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


string DescribeNewestVulResponse::GetPocID() const
{
    return m_pocID;
}

bool DescribeNewestVulResponse::PocIDHasBeenSet() const
{
    return m_pocIDHasBeenSet;
}

string DescribeNewestVulResponse::GetVulName() const
{
    return m_vulName;
}

bool DescribeNewestVulResponse::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string DescribeNewestVulResponse::GetSubmitTime() const
{
    return m_submitTime;
}

bool DescribeNewestVulResponse::SubmitTimeHasBeenSet() const
{
    return m_submitTimeHasBeenSet;
}

string DescribeNewestVulResponse::GetStatus() const
{
    return m_status;
}

bool DescribeNewestVulResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeNewestVulResponse::GetCVEID() const
{
    return m_cVEID;
}

bool DescribeNewestVulResponse::CVEIDHasBeenSet() const
{
    return m_cVEIDHasBeenSet;
}


