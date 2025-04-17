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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeTWeSeeConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeTWeSeeConfigResponse::DescribeTWeSeeConfigResponse() :
    m_enableSummaryHasBeenSet(false),
    m_enableSearchHasBeenSet(false),
    m_configHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTWeSeeConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EnableSummary") && !rsp["EnableSummary"].IsNull())
    {
        if (!rsp["EnableSummary"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableSummary` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableSummary = rsp["EnableSummary"].GetBool();
        m_enableSummaryHasBeenSet = true;
    }

    if (rsp.HasMember("EnableSearch") && !rsp["EnableSearch"].IsNull())
    {
        if (!rsp["EnableSearch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableSearch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableSearch = rsp["EnableSearch"].GetBool();
        m_enableSearchHasBeenSet = true;
    }

    if (rsp.HasMember("Config") && !rsp["Config"].IsNull())
    {
        if (!rsp["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(rsp["Config"].GetString());
        m_configHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTWeSeeConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_enableSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSummary, allocator);
    }

    if (m_enableSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSearch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSearch, allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
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


bool DescribeTWeSeeConfigResponse::GetEnableSummary() const
{
    return m_enableSummary;
}

bool DescribeTWeSeeConfigResponse::EnableSummaryHasBeenSet() const
{
    return m_enableSummaryHasBeenSet;
}

bool DescribeTWeSeeConfigResponse::GetEnableSearch() const
{
    return m_enableSearch;
}

bool DescribeTWeSeeConfigResponse::EnableSearchHasBeenSet() const
{
    return m_enableSearchHasBeenSet;
}

string DescribeTWeSeeConfigResponse::GetConfig() const
{
    return m_config;
}

bool DescribeTWeSeeConfigResponse::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}


