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

#include <tencentcloud/cdn/v20180606/model/CreateVerifyRecordResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

CreateVerifyRecordResponse::CreateVerifyRecordResponse() :
    m_subDomainHasBeenSet(false),
    m_recordHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_fileVerifyUrlHasBeenSet(false),
    m_fileVerifyDomainsHasBeenSet(false),
    m_fileVerifyNameHasBeenSet(false)
{
}

CoreInternalOutcome CreateVerifyRecordResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SubDomain") && !rsp["SubDomain"].IsNull())
    {
        if (!rsp["SubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subDomain = string(rsp["SubDomain"].GetString());
        m_subDomainHasBeenSet = true;
    }

    if (rsp.HasMember("Record") && !rsp["Record"].IsNull())
    {
        if (!rsp["Record"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Record` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_record = string(rsp["Record"].GetString());
        m_recordHasBeenSet = true;
    }

    if (rsp.HasMember("RecordType") && !rsp["RecordType"].IsNull())
    {
        if (!rsp["RecordType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordType = string(rsp["RecordType"].GetString());
        m_recordTypeHasBeenSet = true;
    }

    if (rsp.HasMember("FileVerifyUrl") && !rsp["FileVerifyUrl"].IsNull())
    {
        if (!rsp["FileVerifyUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileVerifyUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileVerifyUrl = string(rsp["FileVerifyUrl"].GetString());
        m_fileVerifyUrlHasBeenSet = true;
    }

    if (rsp.HasMember("FileVerifyDomains") && !rsp["FileVerifyDomains"].IsNull())
    {
        if (!rsp["FileVerifyDomains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FileVerifyDomains` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FileVerifyDomains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileVerifyDomains.push_back((*itr).GetString());
        }
        m_fileVerifyDomainsHasBeenSet = true;
    }

    if (rsp.HasMember("FileVerifyName") && !rsp["FileVerifyName"].IsNull())
    {
        if (!rsp["FileVerifyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileVerifyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileVerifyName = string(rsp["FileVerifyName"].GetString());
        m_fileVerifyNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateVerifyRecordResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_subDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_recordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Record";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_record.c_str(), allocator).Move(), allocator);
    }

    if (m_recordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileVerifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileVerifyUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileVerifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileVerifyDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileVerifyDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileVerifyDomains.begin(); itr != m_fileVerifyDomains.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileVerifyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileVerifyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileVerifyName.c_str(), allocator).Move(), allocator);
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


string CreateVerifyRecordResponse::GetSubDomain() const
{
    return m_subDomain;
}

bool CreateVerifyRecordResponse::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

string CreateVerifyRecordResponse::GetRecord() const
{
    return m_record;
}

bool CreateVerifyRecordResponse::RecordHasBeenSet() const
{
    return m_recordHasBeenSet;
}

string CreateVerifyRecordResponse::GetRecordType() const
{
    return m_recordType;
}

bool CreateVerifyRecordResponse::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

string CreateVerifyRecordResponse::GetFileVerifyUrl() const
{
    return m_fileVerifyUrl;
}

bool CreateVerifyRecordResponse::FileVerifyUrlHasBeenSet() const
{
    return m_fileVerifyUrlHasBeenSet;
}

vector<string> CreateVerifyRecordResponse::GetFileVerifyDomains() const
{
    return m_fileVerifyDomains;
}

bool CreateVerifyRecordResponse::FileVerifyDomainsHasBeenSet() const
{
    return m_fileVerifyDomainsHasBeenSet;
}

string CreateVerifyRecordResponse::GetFileVerifyName() const
{
    return m_fileVerifyName;
}

bool CreateVerifyRecordResponse::FileVerifyNameHasBeenSet() const
{
    return m_fileVerifyNameHasBeenSet;
}


