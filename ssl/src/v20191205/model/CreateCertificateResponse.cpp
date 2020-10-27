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

#include <tencentcloud/ssl/v20191205/model/CreateCertificateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace rapidjson;
using namespace std;

CreateCertificateResponse::CreateCertificateResponse() :
    m_certificateIdsHasBeenSet(false),
    m_dealIdsHasBeenSet(false)
{
}

CoreInternalOutcome CreateCertificateResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CertificateIds") && !rsp["CertificateIds"].IsNull())
    {
        if (!rsp["CertificateIds"].IsArray())
            return CoreInternalOutcome(Error("response `CertificateIds` is not array type"));

        const Value &tmpValue = rsp["CertificateIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_certificateIds.push_back((*itr).GetString());
        }
        m_certificateIdsHasBeenSet = true;
    }

    if (rsp.HasMember("DealIds") && !rsp["DealIds"].IsNull())
    {
        if (!rsp["DealIds"].IsArray())
            return CoreInternalOutcome(Error("response `DealIds` is not array type"));

        const Value &tmpValue = rsp["DealIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dealIds.push_back((*itr).GetString());
        }
        m_dealIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<string> CreateCertificateResponse::GetCertificateIds() const
{
    return m_certificateIds;
}

bool CreateCertificateResponse::CertificateIdsHasBeenSet() const
{
    return m_certificateIdsHasBeenSet;
}

vector<string> CreateCertificateResponse::GetDealIds() const
{
    return m_dealIds;
}

bool CreateCertificateResponse::DealIdsHasBeenSet() const
{
    return m_dealIdsHasBeenSet;
}


