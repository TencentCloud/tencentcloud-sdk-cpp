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

#include <tencentcloud/cwp/v20180228/model/DescribeVersionStatisticsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeVersionStatisticsResponse::DescribeVersionStatisticsResponse() :
    m_basicVersionNumHasBeenSet(false),
    m_proVersionNumHasBeenSet(false),
    m_ultimateVersionNumHasBeenSet(false),
    m_generalVersionNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVersionStatisticsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BasicVersionNum") && !rsp["BasicVersionNum"].IsNull())
    {
        if (!rsp["BasicVersionNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BasicVersionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_basicVersionNum = rsp["BasicVersionNum"].GetUint64();
        m_basicVersionNumHasBeenSet = true;
    }

    if (rsp.HasMember("ProVersionNum") && !rsp["ProVersionNum"].IsNull())
    {
        if (!rsp["ProVersionNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProVersionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_proVersionNum = rsp["ProVersionNum"].GetUint64();
        m_proVersionNumHasBeenSet = true;
    }

    if (rsp.HasMember("UltimateVersionNum") && !rsp["UltimateVersionNum"].IsNull())
    {
        if (!rsp["UltimateVersionNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UltimateVersionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ultimateVersionNum = rsp["UltimateVersionNum"].GetUint64();
        m_ultimateVersionNumHasBeenSet = true;
    }

    if (rsp.HasMember("GeneralVersionNum") && !rsp["GeneralVersionNum"].IsNull())
    {
        if (!rsp["GeneralVersionNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralVersionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_generalVersionNum = rsp["GeneralVersionNum"].GetUint64();
        m_generalVersionNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVersionStatisticsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_basicVersionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicVersionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_basicVersionNum, allocator);
    }

    if (m_proVersionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProVersionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proVersionNum, allocator);
    }

    if (m_ultimateVersionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UltimateVersionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ultimateVersionNum, allocator);
    }

    if (m_generalVersionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeneralVersionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_generalVersionNum, allocator);
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


uint64_t DescribeVersionStatisticsResponse::GetBasicVersionNum() const
{
    return m_basicVersionNum;
}

bool DescribeVersionStatisticsResponse::BasicVersionNumHasBeenSet() const
{
    return m_basicVersionNumHasBeenSet;
}

uint64_t DescribeVersionStatisticsResponse::GetProVersionNum() const
{
    return m_proVersionNum;
}

bool DescribeVersionStatisticsResponse::ProVersionNumHasBeenSet() const
{
    return m_proVersionNumHasBeenSet;
}

uint64_t DescribeVersionStatisticsResponse::GetUltimateVersionNum() const
{
    return m_ultimateVersionNum;
}

bool DescribeVersionStatisticsResponse::UltimateVersionNumHasBeenSet() const
{
    return m_ultimateVersionNumHasBeenSet;
}

uint64_t DescribeVersionStatisticsResponse::GetGeneralVersionNum() const
{
    return m_generalVersionNum;
}

bool DescribeVersionStatisticsResponse::GeneralVersionNumHasBeenSet() const
{
    return m_generalVersionNumHasBeenSet;
}


