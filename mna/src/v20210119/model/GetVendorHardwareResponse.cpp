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

#include <tencentcloud/mna/v20210119/model/GetVendorHardwareResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

GetVendorHardwareResponse::GetVendorHardwareResponse() :
    m_vendorHardwareHasBeenSet(false),
    m_lengthHasBeenSet(false),
    m_totalPageHasBeenSet(false)
{
}

CoreInternalOutcome GetVendorHardwareResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("VendorHardware") && !rsp["VendorHardware"].IsNull())
    {
        if (!rsp["VendorHardware"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VendorHardware` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VendorHardware"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VendorHardware item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vendorHardware.push_back(item);
        }
        m_vendorHardwareHasBeenSet = true;
    }

    if (rsp.HasMember("Length") && !rsp["Length"].IsNull())
    {
        if (!rsp["Length"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Length` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_length = rsp["Length"].GetInt64();
        m_lengthHasBeenSet = true;
    }

    if (rsp.HasMember("TotalPage") && !rsp["TotalPage"].IsNull())
    {
        if (!rsp["TotalPage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalPage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPage = rsp["TotalPage"].GetInt64();
        m_totalPageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetVendorHardwareResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_vendorHardwareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VendorHardware";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vendorHardware.begin(); itr != m_vendorHardware.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_length, allocator);
    }

    if (m_totalPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPage, allocator);
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


vector<VendorHardware> GetVendorHardwareResponse::GetVendorHardware() const
{
    return m_vendorHardware;
}

bool GetVendorHardwareResponse::VendorHardwareHasBeenSet() const
{
    return m_vendorHardwareHasBeenSet;
}

int64_t GetVendorHardwareResponse::GetLength() const
{
    return m_length;
}

bool GetVendorHardwareResponse::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

int64_t GetVendorHardwareResponse::GetTotalPage() const
{
    return m_totalPage;
}

bool GetVendorHardwareResponse::TotalPageHasBeenSet() const
{
    return m_totalPageHasBeenSet;
}


