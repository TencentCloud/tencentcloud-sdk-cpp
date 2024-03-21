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

#include <tencentcloud/cwp/v20180228/model/DescribeBanStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeBanStatusResponse::DescribeBanStatusResponse() :
    m_statusHasBeenSet(false),
    m_showTipsHasBeenSet(false),
    m_openSmartModeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBanStatusResponse::Deserialize(const string &payload)
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
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("ShowTips") && !rsp["ShowTips"].IsNull())
    {
        if (!rsp["ShowTips"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ShowTips` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_showTips = rsp["ShowTips"].GetBool();
        m_showTipsHasBeenSet = true;
    }

    if (rsp.HasMember("OpenSmartMode") && !rsp["OpenSmartMode"].IsNull())
    {
        if (!rsp["OpenSmartMode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OpenSmartMode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_openSmartMode = rsp["OpenSmartMode"].GetBool();
        m_openSmartModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBanStatusResponse::ToJsonString() const
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

    if (m_showTipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowTips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_showTips, allocator);
    }

    if (m_openSmartModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenSmartMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openSmartMode, allocator);
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


uint64_t DescribeBanStatusResponse::GetStatus() const
{
    return m_status;
}

bool DescribeBanStatusResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool DescribeBanStatusResponse::GetShowTips() const
{
    return m_showTips;
}

bool DescribeBanStatusResponse::ShowTipsHasBeenSet() const
{
    return m_showTipsHasBeenSet;
}

bool DescribeBanStatusResponse::GetOpenSmartMode() const
{
    return m_openSmartMode;
}

bool DescribeBanStatusResponse::OpenSmartModeHasBeenSet() const
{
    return m_openSmartModeHasBeenSet;
}


