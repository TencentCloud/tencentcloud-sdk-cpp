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

#include <tencentcloud/ssl/v20191205/model/ModifyCertificateProjectResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace rapidjson;
using namespace std;

ModifyCertificateProjectResponse::ModifyCertificateProjectResponse() :
    m_successCertificatesHasBeenSet(false),
    m_failCertificatesHasBeenSet(false)
{
}

CoreInternalOutcome ModifyCertificateProjectResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SuccessCertificates") && !rsp["SuccessCertificates"].IsNull())
    {
        if (!rsp["SuccessCertificates"].IsArray())
            return CoreInternalOutcome(Error("response `SuccessCertificates` is not array type"));

        const Value &tmpValue = rsp["SuccessCertificates"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_successCertificates.push_back((*itr).GetString());
        }
        m_successCertificatesHasBeenSet = true;
    }

    if (rsp.HasMember("FailCertificates") && !rsp["FailCertificates"].IsNull())
    {
        if (!rsp["FailCertificates"].IsArray())
            return CoreInternalOutcome(Error("response `FailCertificates` is not array type"));

        const Value &tmpValue = rsp["FailCertificates"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failCertificates.push_back((*itr).GetString());
        }
        m_failCertificatesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<string> ModifyCertificateProjectResponse::GetSuccessCertificates() const
{
    return m_successCertificates;
}

bool ModifyCertificateProjectResponse::SuccessCertificatesHasBeenSet() const
{
    return m_successCertificatesHasBeenSet;
}

vector<string> ModifyCertificateProjectResponse::GetFailCertificates() const
{
    return m_failCertificates;
}

bool ModifyCertificateProjectResponse::FailCertificatesHasBeenSet() const
{
    return m_failCertificatesHasBeenSet;
}


