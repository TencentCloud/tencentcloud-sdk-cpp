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

#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryAssetStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeAssetImageRegistryAssetStatusResponse::DescribeAssetImageRegistryAssetStatusResponse() :
    m_statusHasBeenSet(false),
    m_errHasBeenSet(false),
    m_latestSyncSuccessTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetImageRegistryAssetStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Err") && !rsp["Err"].IsNull())
    {
        if (!rsp["Err"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Err` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_err = string(rsp["Err"].GetString());
        m_errHasBeenSet = true;
    }

    if (rsp.HasMember("LatestSyncSuccessTime") && !rsp["LatestSyncSuccessTime"].IsNull())
    {
        if (!rsp["LatestSyncSuccessTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestSyncSuccessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestSyncSuccessTime = string(rsp["LatestSyncSuccessTime"].GetString());
        m_latestSyncSuccessTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAssetImageRegistryAssetStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Err";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_err.c_str(), allocator).Move(), allocator);
    }

    if (m_latestSyncSuccessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestSyncSuccessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestSyncSuccessTime.c_str(), allocator).Move(), allocator);
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


string DescribeAssetImageRegistryAssetStatusResponse::GetStatus() const
{
    return m_status;
}

bool DescribeAssetImageRegistryAssetStatusResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeAssetImageRegistryAssetStatusResponse::GetErr() const
{
    return m_err;
}

bool DescribeAssetImageRegistryAssetStatusResponse::ErrHasBeenSet() const
{
    return m_errHasBeenSet;
}

string DescribeAssetImageRegistryAssetStatusResponse::GetLatestSyncSuccessTime() const
{
    return m_latestSyncSuccessTime;
}

bool DescribeAssetImageRegistryAssetStatusResponse::LatestSyncSuccessTimeHasBeenSet() const
{
    return m_latestSyncSuccessTimeHasBeenSet;
}


