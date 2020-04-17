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

#include <tencentcloud/kms/v20190118/model/ListAlgorithmsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace rapidjson;
using namespace std;

ListAlgorithmsResponse::ListAlgorithmsResponse() :
    m_symmetricAlgorithmsHasBeenSet(false),
    m_asymmetricAlgorithmsHasBeenSet(false)
{
}

CoreInternalOutcome ListAlgorithmsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SymmetricAlgorithms") && !rsp["SymmetricAlgorithms"].IsNull())
    {
        if (!rsp["SymmetricAlgorithms"].IsArray())
            return CoreInternalOutcome(Error("response `SymmetricAlgorithms` is not array type"));

        const Value &tmpValue = rsp["SymmetricAlgorithms"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlgorithmInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_symmetricAlgorithms.push_back(item);
        }
        m_symmetricAlgorithmsHasBeenSet = true;
    }

    if (rsp.HasMember("AsymmetricAlgorithms") && !rsp["AsymmetricAlgorithms"].IsNull())
    {
        if (!rsp["AsymmetricAlgorithms"].IsArray())
            return CoreInternalOutcome(Error("response `AsymmetricAlgorithms` is not array type"));

        const Value &tmpValue = rsp["AsymmetricAlgorithms"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlgorithmInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_asymmetricAlgorithms.push_back(item);
        }
        m_asymmetricAlgorithmsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<AlgorithmInfo> ListAlgorithmsResponse::GetSymmetricAlgorithms() const
{
    return m_symmetricAlgorithms;
}

bool ListAlgorithmsResponse::SymmetricAlgorithmsHasBeenSet() const
{
    return m_symmetricAlgorithmsHasBeenSet;
}

vector<AlgorithmInfo> ListAlgorithmsResponse::GetAsymmetricAlgorithms() const
{
    return m_asymmetricAlgorithms;
}

bool ListAlgorithmsResponse::AsymmetricAlgorithmsHasBeenSet() const
{
    return m_asymmetricAlgorithmsHasBeenSet;
}


