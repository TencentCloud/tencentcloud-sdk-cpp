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

#include <tencentcloud/ssl/v20191205/model/CheckCertificateChainResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace rapidjson;
using namespace std;

CheckCertificateChainResponse::CheckCertificateChainResponse() :
    m_isValidHasBeenSet(false),
    m_isTrustedCAHasBeenSet(false),
    m_chainsHasBeenSet(false)
{
}

CoreInternalOutcome CheckCertificateChainResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IsValid") && !rsp["IsValid"].IsNull())
    {
        if (!rsp["IsValid"].IsBool())
        {
            return CoreInternalOutcome(Error("response `IsValid` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isValid = rsp["IsValid"].GetBool();
        m_isValidHasBeenSet = true;
    }

    if (rsp.HasMember("IsTrustedCA") && !rsp["IsTrustedCA"].IsNull())
    {
        if (!rsp["IsTrustedCA"].IsBool())
        {
            return CoreInternalOutcome(Error("response `IsTrustedCA` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isTrustedCA = rsp["IsTrustedCA"].GetBool();
        m_isTrustedCAHasBeenSet = true;
    }

    if (rsp.HasMember("Chains") && !rsp["Chains"].IsNull())
    {
        if (!rsp["Chains"].IsArray())
            return CoreInternalOutcome(Error("response `Chains` is not array type"));

        const Value &tmpValue = rsp["Chains"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_chains.push_back((*itr).GetString());
        }
        m_chainsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


bool CheckCertificateChainResponse::GetIsValid() const
{
    return m_isValid;
}

bool CheckCertificateChainResponse::IsValidHasBeenSet() const
{
    return m_isValidHasBeenSet;
}

bool CheckCertificateChainResponse::GetIsTrustedCA() const
{
    return m_isTrustedCA;
}

bool CheckCertificateChainResponse::IsTrustedCAHasBeenSet() const
{
    return m_isTrustedCAHasBeenSet;
}

vector<string> CheckCertificateChainResponse::GetChains() const
{
    return m_chains;
}

bool CheckCertificateChainResponse::ChainsHasBeenSet() const
{
    return m_chainsHasBeenSet;
}


