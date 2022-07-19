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

#include <tencentcloud/iotvideo/v20211125/model/DescribeAccountResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

DescribeAccountResponse::DescribeAccountResponse() :
    m_uinHasBeenSet(false),
    m_billTypeHasBeenSet(false),
    m_billModeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAccountResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(rsp["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("BillType") && !rsp["BillType"].IsNull())
    {
        if (!rsp["BillType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BillType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_billType = rsp["BillType"].GetUint64();
        m_billTypeHasBeenSet = true;
    }

    if (rsp.HasMember("BillMode") && !rsp["BillMode"].IsNull())
    {
        if (!rsp["BillMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BillMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_billMode = rsp["BillMode"].GetUint64();
        m_billModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAccountResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_billTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billType, allocator);
    }

    if (m_billModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billMode, allocator);
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


string DescribeAccountResponse::GetUin() const
{
    return m_uin;
}

bool DescribeAccountResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t DescribeAccountResponse::GetBillType() const
{
    return m_billType;
}

bool DescribeAccountResponse::BillTypeHasBeenSet() const
{
    return m_billTypeHasBeenSet;
}

uint64_t DescribeAccountResponse::GetBillMode() const
{
    return m_billMode;
}

bool DescribeAccountResponse::BillModeHasBeenSet() const
{
    return m_billModeHasBeenSet;
}


