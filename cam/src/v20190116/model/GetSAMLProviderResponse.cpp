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

#include <tencentcloud/cam/v20190116/model/GetSAMLProviderResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

GetSAMLProviderResponse::GetSAMLProviderResponse() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_sAMLMetadataHasBeenSet(false)
{
}

CoreInternalOutcome GetSAMLProviderResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ModifyTime") && !rsp["ModifyTime"].IsNull())
    {
        if (!rsp["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(rsp["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (rsp.HasMember("SAMLMetadata") && !rsp["SAMLMetadata"].IsNull())
    {
        if (!rsp["SAMLMetadata"].IsString())
        {
            return CoreInternalOutcome(Error("response `SAMLMetadata` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sAMLMetadata = string(rsp["SAMLMetadata"].GetString());
        m_sAMLMetadataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string GetSAMLProviderResponse::GetName() const
{
    return m_name;
}

bool GetSAMLProviderResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GetSAMLProviderResponse::GetDescription() const
{
    return m_description;
}

bool GetSAMLProviderResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GetSAMLProviderResponse::GetCreateTime() const
{
    return m_createTime;
}

bool GetSAMLProviderResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string GetSAMLProviderResponse::GetModifyTime() const
{
    return m_modifyTime;
}

bool GetSAMLProviderResponse::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string GetSAMLProviderResponse::GetSAMLMetadata() const
{
    return m_sAMLMetadata;
}

bool GetSAMLProviderResponse::SAMLMetadataHasBeenSet() const
{
    return m_sAMLMetadataHasBeenSet;
}


