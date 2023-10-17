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
    m_envAddressInfosHasBeenSet(false),
    m_consoleInternetAddressHasBeenSet(false),
    m_consoleIntranetAddressHasBeenSet(false),
    m_internetBandWidthHasBeenSet(false),
    m_consoleInternetBandWidthHasBeenSet(false),
    m_limiterAddressInfosHasBeenSet(false),
    m_cLBMultiRegionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSREInstanceAccessAddressResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IntranetAddress") && !rsp["IntranetAddress"].IsNull())
    {
        if (!rsp["IntranetAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntranetAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intranetAddress = string(rsp["IntranetAddress"].GetString());
        m_intranetAddressHasBeenSet = true;
    }

    if (rsp.HasMember("InternetAddress") && !rsp["InternetAddress"].IsNull())
    {
        if (!rsp["InternetAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetAddress = string(rsp["InternetAddress"].GetString());
        m_internetAddressHasBeenSet = true;
    }

    if (rsp.HasMember("EnvAddressInfos") && !rsp["EnvAddressInfos"].IsNull())
    {
        if (!rsp["EnvAddressInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EnvAddressInfos` is not array type"));

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

    if (rsp.HasMember("ConsoleInternetAddress") && !rsp["ConsoleInternetAddress"].IsNull())
    {
        if (!rsp["ConsoleInternetAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleInternetAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consoleInternetAddress = string(rsp["ConsoleInternetAddress"].GetString());
        m_consoleInternetAddressHasBeenSet = true;
    }

    if (rsp.HasMember("ConsoleIntranetAddress") && !rsp["ConsoleIntranetAddress"].IsNull())
    {
        if (!rsp["ConsoleIntranetAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleIntranetAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consoleIntranetAddress = string(rsp["ConsoleIntranetAddress"].GetString());
        m_consoleIntranetAddressHasBeenSet = true;
    }

    if (rsp.HasMember("InternetBandWidth") && !rsp["InternetBandWidth"].IsNull())
    {
        if (!rsp["InternetBandWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InternetBandWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_internetBandWidth = rsp["InternetBandWidth"].GetInt64();
        m_internetBandWidthHasBeenSet = true;
    }

    if (rsp.HasMember("ConsoleInternetBandWidth") && !rsp["ConsoleInternetBandWidth"].IsNull())
    {
        if (!rsp["ConsoleInternetBandWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleInternetBandWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consoleInternetBandWidth = rsp["ConsoleInternetBandWidth"].GetInt64();
        m_consoleInternetBandWidthHasBeenSet = true;
    }

    if (rsp.HasMember("LimiterAddressInfos") && !rsp["LimiterAddressInfos"].IsNull())
    {
        if (!rsp["LimiterAddressInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LimiterAddressInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LimiterAddressInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PolarisLimiterAddress item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_limiterAddressInfos.push_back(item);
        }
        m_limiterAddressInfosHasBeenSet = true;
    }

    if (rsp.HasMember("CLBMultiRegion") && !rsp["CLBMultiRegion"].IsNull())
    {
        if (!rsp["CLBMultiRegion"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CLBMultiRegion` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cLBMultiRegion.Deserialize(rsp["CLBMultiRegion"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cLBMultiRegionHasBeenSet = true;
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

    if (m_consoleInternetAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsoleInternetAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consoleInternetAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_consoleIntranetAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsoleIntranetAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consoleIntranetAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_internetBandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetBandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetBandWidth, allocator);
    }

    if (m_consoleInternetBandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsoleInternetBandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consoleInternetBandWidth, allocator);
    }

    if (m_limiterAddressInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimiterAddressInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_limiterAddressInfos.begin(); itr != m_limiterAddressInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cLBMultiRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLBMultiRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cLBMultiRegion.ToJsonObject(value[key.c_str()], allocator);
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

string DescribeSREInstanceAccessAddressResponse::GetConsoleInternetAddress() const
{
    return m_consoleInternetAddress;
}

bool DescribeSREInstanceAccessAddressResponse::ConsoleInternetAddressHasBeenSet() const
{
    return m_consoleInternetAddressHasBeenSet;
}

string DescribeSREInstanceAccessAddressResponse::GetConsoleIntranetAddress() const
{
    return m_consoleIntranetAddress;
}

bool DescribeSREInstanceAccessAddressResponse::ConsoleIntranetAddressHasBeenSet() const
{
    return m_consoleIntranetAddressHasBeenSet;
}

int64_t DescribeSREInstanceAccessAddressResponse::GetInternetBandWidth() const
{
    return m_internetBandWidth;
}

bool DescribeSREInstanceAccessAddressResponse::InternetBandWidthHasBeenSet() const
{
    return m_internetBandWidthHasBeenSet;
}

int64_t DescribeSREInstanceAccessAddressResponse::GetConsoleInternetBandWidth() const
{
    return m_consoleInternetBandWidth;
}

bool DescribeSREInstanceAccessAddressResponse::ConsoleInternetBandWidthHasBeenSet() const
{
    return m_consoleInternetBandWidthHasBeenSet;
}

vector<PolarisLimiterAddress> DescribeSREInstanceAccessAddressResponse::GetLimiterAddressInfos() const
{
    return m_limiterAddressInfos;
}

bool DescribeSREInstanceAccessAddressResponse::LimiterAddressInfosHasBeenSet() const
{
    return m_limiterAddressInfosHasBeenSet;
}

CLBMultiRegion DescribeSREInstanceAccessAddressResponse::GetCLBMultiRegion() const
{
    return m_cLBMultiRegion;
}

bool DescribeSREInstanceAccessAddressResponse::CLBMultiRegionHasBeenSet() const
{
    return m_cLBMultiRegionHasBeenSet;
}


