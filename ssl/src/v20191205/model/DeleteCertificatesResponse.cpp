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

#include <tencentcloud/ssl/v20191205/model/DeleteCertificatesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DeleteCertificatesResponse::DeleteCertificatesResponse() :
    m_successHasBeenSet(false),
    m_failHasBeenSet(false),
    m_certTaskIdsHasBeenSet(false)
{
}

CoreInternalOutcome DeleteCertificatesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Success") && !rsp["Success"].IsNull())
    {
        if (!rsp["Success"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Success` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Success"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_success.push_back((*itr).GetString());
        }
        m_successHasBeenSet = true;
    }

    if (rsp.HasMember("Fail") && !rsp["Fail"].IsNull())
    {
        if (!rsp["Fail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Fail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Fail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BatchDeleteFail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fail.push_back(item);
        }
        m_failHasBeenSet = true;
    }

    if (rsp.HasMember("CertTaskIds") && !rsp["CertTaskIds"].IsNull())
    {
        if (!rsp["CertTaskIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CertTaskIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CertTaskIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CertTaskId item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_certTaskIds.push_back(item);
        }
        m_certTaskIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DeleteCertificatesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_successHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Success";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_success.begin(); itr != m_success.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_failHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fail.begin(); itr != m_fail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_certTaskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertTaskIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_certTaskIds.begin(); itr != m_certTaskIds.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


vector<string> DeleteCertificatesResponse::GetSuccess() const
{
    return m_success;
}

bool DeleteCertificatesResponse::SuccessHasBeenSet() const
{
    return m_successHasBeenSet;
}

vector<BatchDeleteFail> DeleteCertificatesResponse::GetFail() const
{
    return m_fail;
}

bool DeleteCertificatesResponse::FailHasBeenSet() const
{
    return m_failHasBeenSet;
}

vector<CertTaskId> DeleteCertificatesResponse::GetCertTaskIds() const
{
    return m_certTaskIds;
}

bool DeleteCertificatesResponse::CertTaskIdsHasBeenSet() const
{
    return m_certTaskIdsHasBeenSet;
}


