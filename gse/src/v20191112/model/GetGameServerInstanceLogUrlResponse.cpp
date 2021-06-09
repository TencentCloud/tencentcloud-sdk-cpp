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

#include <tencentcloud/gse/v20191112/model/GetGameServerInstanceLogUrlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

GetGameServerInstanceLogUrlResponse::GetGameServerInstanceLogUrlResponse() :
    m_presignedUrlsHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_hasNextHasBeenSet(false)
{
}

CoreInternalOutcome GetGameServerInstanceLogUrlResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PresignedUrls") && !rsp["PresignedUrls"].IsNull())
    {
        if (!rsp["PresignedUrls"].IsArray())
            return CoreInternalOutcome(Error("response `PresignedUrls` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PresignedUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_presignedUrls.push_back((*itr).GetString());
        }
        m_presignedUrlsHasBeenSet = true;
    }

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("HasNext") && !rsp["HasNext"].IsNull())
    {
        if (!rsp["HasNext"].IsBool())
        {
            return CoreInternalOutcome(Error("response `HasNext` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasNext = rsp["HasNext"].GetBool();
        m_hasNextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<string> GetGameServerInstanceLogUrlResponse::GetPresignedUrls() const
{
    return m_presignedUrls;
}

bool GetGameServerInstanceLogUrlResponse::PresignedUrlsHasBeenSet() const
{
    return m_presignedUrlsHasBeenSet;
}

uint64_t GetGameServerInstanceLogUrlResponse::GetTotal() const
{
    return m_total;
}

bool GetGameServerInstanceLogUrlResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

bool GetGameServerInstanceLogUrlResponse::GetHasNext() const
{
    return m_hasNext;
}

bool GetGameServerInstanceLogUrlResponse::HasNextHasBeenSet() const
{
    return m_hasNextHasBeenSet;
}


