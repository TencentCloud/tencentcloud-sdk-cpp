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

#include <tencentcloud/cr/v20180321/model/DownloadReportResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud;
using namespace TencentCloud::Cr::V20180321;
using namespace TencentCloud::Cr::V20180321::Model;
using namespace rapidjson;
using namespace std;

DownloadReportResponse::DownloadReportResponse() :
    m_dailyReportUrlHasBeenSet(false),
    m_resultReportUrlHasBeenSet(false),
    m_detailReportUrlHasBeenSet(false),
    m_callbackDailyReportUrlHasBeenSet(false),
    m_callbackResultReportUrlHasBeenSet(false),
    m_callbackDetailReportUrlHasBeenSet(false)
{
}

CoreInternalOutcome DownloadReportResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DailyReportUrl") && !rsp["DailyReportUrl"].IsNull())
    {
        if (!rsp["DailyReportUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `DailyReportUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dailyReportUrl = string(rsp["DailyReportUrl"].GetString());
        m_dailyReportUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ResultReportUrl") && !rsp["ResultReportUrl"].IsNull())
    {
        if (!rsp["ResultReportUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResultReportUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultReportUrl = string(rsp["ResultReportUrl"].GetString());
        m_resultReportUrlHasBeenSet = true;
    }

    if (rsp.HasMember("DetailReportUrl") && !rsp["DetailReportUrl"].IsNull())
    {
        if (!rsp["DetailReportUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetailReportUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detailReportUrl = string(rsp["DetailReportUrl"].GetString());
        m_detailReportUrlHasBeenSet = true;
    }

    if (rsp.HasMember("CallbackDailyReportUrl") && !rsp["CallbackDailyReportUrl"].IsNull())
    {
        if (!rsp["CallbackDailyReportUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `CallbackDailyReportUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackDailyReportUrl = string(rsp["CallbackDailyReportUrl"].GetString());
        m_callbackDailyReportUrlHasBeenSet = true;
    }

    if (rsp.HasMember("CallbackResultReportUrl") && !rsp["CallbackResultReportUrl"].IsNull())
    {
        if (!rsp["CallbackResultReportUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `CallbackResultReportUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackResultReportUrl = string(rsp["CallbackResultReportUrl"].GetString());
        m_callbackResultReportUrlHasBeenSet = true;
    }

    if (rsp.HasMember("CallbackDetailReportUrl") && !rsp["CallbackDetailReportUrl"].IsNull())
    {
        if (!rsp["CallbackDetailReportUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `CallbackDetailReportUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackDetailReportUrl = string(rsp["CallbackDetailReportUrl"].GetString());
        m_callbackDetailReportUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DownloadReportResponse::GetDailyReportUrl() const
{
    return m_dailyReportUrl;
}

bool DownloadReportResponse::DailyReportUrlHasBeenSet() const
{
    return m_dailyReportUrlHasBeenSet;
}

string DownloadReportResponse::GetResultReportUrl() const
{
    return m_resultReportUrl;
}

bool DownloadReportResponse::ResultReportUrlHasBeenSet() const
{
    return m_resultReportUrlHasBeenSet;
}

string DownloadReportResponse::GetDetailReportUrl() const
{
    return m_detailReportUrl;
}

bool DownloadReportResponse::DetailReportUrlHasBeenSet() const
{
    return m_detailReportUrlHasBeenSet;
}

string DownloadReportResponse::GetCallbackDailyReportUrl() const
{
    return m_callbackDailyReportUrl;
}

bool DownloadReportResponse::CallbackDailyReportUrlHasBeenSet() const
{
    return m_callbackDailyReportUrlHasBeenSet;
}

string DownloadReportResponse::GetCallbackResultReportUrl() const
{
    return m_callbackResultReportUrl;
}

bool DownloadReportResponse::CallbackResultReportUrlHasBeenSet() const
{
    return m_callbackResultReportUrlHasBeenSet;
}

string DownloadReportResponse::GetCallbackDetailReportUrl() const
{
    return m_callbackDetailReportUrl;
}

bool DownloadReportResponse::CallbackDetailReportUrlHasBeenSet() const
{
    return m_callbackDetailReportUrlHasBeenSet;
}


