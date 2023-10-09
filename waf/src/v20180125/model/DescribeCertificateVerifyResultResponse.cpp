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

#include <tencentcloud/waf/v20180125/model/DescribeCertificateVerifyResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeCertificateVerifyResultResponse::DescribeCertificateVerifyResultResponse() :
    m_statusHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_changedHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCertificateVerifyResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Detail") && !rsp["Detail"].IsNull())
    {
        if (!rsp["Detail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Detail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Detail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_detail.push_back((*itr).GetString());
        }
        m_detailHasBeenSet = true;
    }

    if (rsp.HasMember("NotAfter") && !rsp["NotAfter"].IsNull())
    {
        if (!rsp["NotAfter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotAfter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notAfter = string(rsp["NotAfter"].GetString());
        m_notAfterHasBeenSet = true;
    }

    if (rsp.HasMember("Changed") && !rsp["Changed"].IsNull())
    {
        if (!rsp["Changed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Changed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_changed = rsp["Changed"].GetInt64();
        m_changedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCertificateVerifyResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_detail.begin(); itr != m_detail.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_notAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notAfter.c_str(), allocator).Move(), allocator);
    }

    if (m_changedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Changed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_changed, allocator);
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


int64_t DescribeCertificateVerifyResultResponse::GetStatus() const
{
    return m_status;
}

bool DescribeCertificateVerifyResultResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeCertificateVerifyResultResponse::GetDetail() const
{
    return m_detail;
}

bool DescribeCertificateVerifyResultResponse::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string DescribeCertificateVerifyResultResponse::GetNotAfter() const
{
    return m_notAfter;
}

bool DescribeCertificateVerifyResultResponse::NotAfterHasBeenSet() const
{
    return m_notAfterHasBeenSet;
}

int64_t DescribeCertificateVerifyResultResponse::GetChanged() const
{
    return m_changed;
}

bool DescribeCertificateVerifyResultResponse::ChangedHasBeenSet() const
{
    return m_changedHasBeenSet;
}


