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

#include <tencentcloud/iotcloud/v20180614/model/DescribeFirmwareResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

DescribeFirmwareResponse::DescribeFirmwareResponse() :
    m_versionHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_md5sumHasBeenSet(false),
    m_createtimeHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_fwTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFirmwareResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("Version") && !rsp["Version"].IsNull())
    {
        if (!rsp["Version"].IsString())
        {
            return CoreInternalOutcome(Error("response `Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(rsp["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (rsp.HasMember("ProductId") && !rsp["ProductId"].IsNull())
    {
        if (!rsp["ProductId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(rsp["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("Md5sum") && !rsp["Md5sum"].IsNull())
    {
        if (!rsp["Md5sum"].IsString())
        {
            return CoreInternalOutcome(Error("response `Md5sum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5sum = string(rsp["Md5sum"].GetString());
        m_md5sumHasBeenSet = true;
    }

    if (rsp.HasMember("Createtime") && !rsp["Createtime"].IsNull())
    {
        if (!rsp["Createtime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Createtime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createtime = rsp["Createtime"].GetUint64();
        m_createtimeHasBeenSet = true;
    }

    if (rsp.HasMember("ProductName") && !rsp["ProductName"].IsNull())
    {
        if (!rsp["ProductName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(rsp["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (rsp.HasMember("FwType") && !rsp["FwType"].IsNull())
    {
        if (!rsp["FwType"].IsString())
        {
            return CoreInternalOutcome(Error("response `FwType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwType = string(rsp["FwType"].GetString());
        m_fwTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeFirmwareResponse::GetVersion() const
{
    return m_version;
}

bool DescribeFirmwareResponse::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string DescribeFirmwareResponse::GetProductId() const
{
    return m_productId;
}

bool DescribeFirmwareResponse::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeFirmwareResponse::GetName() const
{
    return m_name;
}

bool DescribeFirmwareResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeFirmwareResponse::GetDescription() const
{
    return m_description;
}

bool DescribeFirmwareResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeFirmwareResponse::GetMd5sum() const
{
    return m_md5sum;
}

bool DescribeFirmwareResponse::Md5sumHasBeenSet() const
{
    return m_md5sumHasBeenSet;
}

uint64_t DescribeFirmwareResponse::GetCreatetime() const
{
    return m_createtime;
}

bool DescribeFirmwareResponse::CreatetimeHasBeenSet() const
{
    return m_createtimeHasBeenSet;
}

string DescribeFirmwareResponse::GetProductName() const
{
    return m_productName;
}

bool DescribeFirmwareResponse::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string DescribeFirmwareResponse::GetFwType() const
{
    return m_fwType;
}

bool DescribeFirmwareResponse::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
}


