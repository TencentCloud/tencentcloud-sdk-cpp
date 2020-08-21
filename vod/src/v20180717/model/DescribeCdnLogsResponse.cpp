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

#include <tencentcloud/vod/v20180717/model/DescribeCdnLogsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

DescribeCdnLogsResponse::DescribeCdnLogsResponse() :
    m_domesticCdnLogsHasBeenSet(false),
    m_overseaCdnLogsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCdnLogsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DomesticCdnLogs") && !rsp["DomesticCdnLogs"].IsNull())
    {
        if (!rsp["DomesticCdnLogs"].IsArray())
            return CoreInternalOutcome(Error("response `DomesticCdnLogs` is not array type"));

        const Value &tmpValue = rsp["DomesticCdnLogs"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CdnLogInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_domesticCdnLogs.push_back(item);
        }
        m_domesticCdnLogsHasBeenSet = true;
    }

    if (rsp.HasMember("OverseaCdnLogs") && !rsp["OverseaCdnLogs"].IsNull())
    {
        if (!rsp["OverseaCdnLogs"].IsArray())
            return CoreInternalOutcome(Error("response `OverseaCdnLogs` is not array type"));

        const Value &tmpValue = rsp["OverseaCdnLogs"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CdnLogInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_overseaCdnLogs.push_back(item);
        }
        m_overseaCdnLogsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<CdnLogInfo> DescribeCdnLogsResponse::GetDomesticCdnLogs() const
{
    return m_domesticCdnLogs;
}

bool DescribeCdnLogsResponse::DomesticCdnLogsHasBeenSet() const
{
    return m_domesticCdnLogsHasBeenSet;
}

vector<CdnLogInfo> DescribeCdnLogsResponse::GetOverseaCdnLogs() const
{
    return m_overseaCdnLogs;
}

bool DescribeCdnLogsResponse::OverseaCdnLogsHasBeenSet() const
{
    return m_overseaCdnLogsHasBeenSet;
}


