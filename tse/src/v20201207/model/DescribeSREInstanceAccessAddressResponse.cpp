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

#include <tencentcloud/tse/v20201207/model/DescribeSREInstanceAccessAddressResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeSREInstanceAccessAddressResponse::DescribeSREInstanceAccessAddressResponse() :
    m_intranetAddressHasBeenSet(false),
    m_internetAddressHasBeenSet(false),
    m_envAddressInfosHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSREInstanceAccessAddressResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IntranetAddress") && !rsp["IntranetAddress"].IsNull())
    {
        if (!rsp["IntranetAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `IntranetAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intranetAddress = string(rsp["IntranetAddress"].GetString());
        m_intranetAddressHasBeenSet = true;
    }

    if (rsp.HasMember("InternetAddress") && !rsp["InternetAddress"].IsNull())
    {
        if (!rsp["InternetAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `InternetAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetAddress = string(rsp["InternetAddress"].GetString());
        m_internetAddressHasBeenSet = true;
    }

    if (rsp.HasMember("EnvAddressInfos") && !rsp["EnvAddressInfos"].IsNull())
    {
        if (!rsp["EnvAddressInfos"].IsArray())
            return CoreInternalOutcome(Error("response `EnvAddressInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EnvAddressInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EnvAddressInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envAddressInfos.push_back(item);
        }
        m_envAddressInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSREInstanceAccessAddressResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_intranetAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intranetAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_internetAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_envAddressInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvAddressInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envAddressInfos.begin(); itr != m_envAddressInfos.end(); ++itr, ++i)
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


string DescribeSREInstanceAccessAddressResponse::GetIntranetAddress() const
{
    return m_intranetAddress;
}

bool DescribeSREInstanceAccessAddressResponse::IntranetAddressHasBeenSet() const
{
    return m_intranetAddressHasBeenSet;
}

string DescribeSREInstanceAccessAddressResponse::GetInternetAddress() const
{
    return m_internetAddress;
}

bool DescribeSREInstanceAccessAddressResponse::InternetAddressHasBeenSet() const
{
    return m_internetAddressHasBeenSet;
}

vector<EnvAddressInfo> DescribeSREInstanceAccessAddressResponse::GetEnvAddressInfos() const
{
    return m_envAddressInfos;
}

bool DescribeSREInstanceAccessAddressResponse::EnvAddressInfosHasBeenSet() const
{
    return m_envAddressInfosHasBeenSet;
}


