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

#include <tencentcloud/dlc/v20210125/model/DescribeAdvancedStoreLocationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeAdvancedStoreLocationResponse::DescribeAdvancedStoreLocationResponse() :
    m_enableHasBeenSet(false),
    m_storeLocationHasBeenSet(false),
    m_hasLakeFsHasBeenSet(false),
    m_lakeFsStatusHasBeenSet(false),
    m_bucketTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAdvancedStoreLocationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Enable") && !rsp["Enable"].IsNull())
    {
        if (!rsp["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = rsp["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }

    if (rsp.HasMember("StoreLocation") && !rsp["StoreLocation"].IsNull())
    {
        if (!rsp["StoreLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StoreLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storeLocation = string(rsp["StoreLocation"].GetString());
        m_storeLocationHasBeenSet = true;
    }

    if (rsp.HasMember("HasLakeFs") && !rsp["HasLakeFs"].IsNull())
    {
        if (!rsp["HasLakeFs"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HasLakeFs` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasLakeFs = rsp["HasLakeFs"].GetBool();
        m_hasLakeFsHasBeenSet = true;
    }

    if (rsp.HasMember("LakeFsStatus") && !rsp["LakeFsStatus"].IsNull())
    {
        if (!rsp["LakeFsStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LakeFsStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lakeFsStatus = string(rsp["LakeFsStatus"].GetString());
        m_lakeFsStatusHasBeenSet = true;
    }

    if (rsp.HasMember("BucketType") && !rsp["BucketType"].IsNull())
    {
        if (!rsp["BucketType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BucketType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketType = string(rsp["BucketType"].GetString());
        m_bucketTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAdvancedStoreLocationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_storeLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storeLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_hasLakeFsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasLakeFs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasLakeFs, allocator);
    }

    if (m_lakeFsStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LakeFsStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lakeFsStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketType.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeAdvancedStoreLocationResponse::GetEnable() const
{
    return m_enable;
}

bool DescribeAdvancedStoreLocationResponse::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string DescribeAdvancedStoreLocationResponse::GetStoreLocation() const
{
    return m_storeLocation;
}

bool DescribeAdvancedStoreLocationResponse::StoreLocationHasBeenSet() const
{
    return m_storeLocationHasBeenSet;
}

bool DescribeAdvancedStoreLocationResponse::GetHasLakeFs() const
{
    return m_hasLakeFs;
}

bool DescribeAdvancedStoreLocationResponse::HasLakeFsHasBeenSet() const
{
    return m_hasLakeFsHasBeenSet;
}

string DescribeAdvancedStoreLocationResponse::GetLakeFsStatus() const
{
    return m_lakeFsStatus;
}

bool DescribeAdvancedStoreLocationResponse::LakeFsStatusHasBeenSet() const
{
    return m_lakeFsStatusHasBeenSet;
}

string DescribeAdvancedStoreLocationResponse::GetBucketType() const
{
    return m_bucketType;
}

bool DescribeAdvancedStoreLocationResponse::BucketTypeHasBeenSet() const
{
    return m_bucketTypeHasBeenSet;
}


