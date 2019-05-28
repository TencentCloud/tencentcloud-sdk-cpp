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

#include <tencentcloud/vod/v20180717/model/SimpleHlsClipResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

SimpleHlsClipResponse::SimpleHlsClipResponse() :
    m_urlHasBeenSet(false),
    m_metaDataHasBeenSet(false)
{
}

CoreInternalOutcome SimpleHlsClipResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Url") && !rsp["Url"].IsNull())
    {
        if (!rsp["Url"].IsString())
        {
            return CoreInternalOutcome(Error("response `Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(rsp["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (rsp.HasMember("MetaData") && !rsp["MetaData"].IsNull())
    {
        if (!rsp["MetaData"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MetaData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaData.Deserialize(rsp["MetaData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string SimpleHlsClipResponse::GetUrl() const
{
    return m_url;
}

bool SimpleHlsClipResponse::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

MediaMetaData SimpleHlsClipResponse::GetMetaData() const
{
    return m_metaData;
}

bool SimpleHlsClipResponse::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}


