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

#include <tencentcloud/ame/v20190916/model/DescribeKTVMusicDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace rapidjson;
using namespace std;

DescribeKTVMusicDetailResponse::DescribeKTVMusicDetailResponse() :
    m_kTVMusicBaseInfoHasBeenSet(false),
    m_playTokenHasBeenSet(false)
{
}

CoreInternalOutcome DescribeKTVMusicDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("KTVMusicBaseInfo") && !rsp["KTVMusicBaseInfo"].IsNull())
    {
        if (!rsp["KTVMusicBaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `KTVMusicBaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kTVMusicBaseInfo.Deserialize(rsp["KTVMusicBaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kTVMusicBaseInfoHasBeenSet = true;
    }

    if (rsp.HasMember("PlayToken") && !rsp["PlayToken"].IsNull())
    {
        if (!rsp["PlayToken"].IsString())
        {
            return CoreInternalOutcome(Error("response `PlayToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playToken = string(rsp["PlayToken"].GetString());
        m_playTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


KTVMusicBaseInfo DescribeKTVMusicDetailResponse::GetKTVMusicBaseInfo() const
{
    return m_kTVMusicBaseInfo;
}

bool DescribeKTVMusicDetailResponse::KTVMusicBaseInfoHasBeenSet() const
{
    return m_kTVMusicBaseInfoHasBeenSet;
}

string DescribeKTVMusicDetailResponse::GetPlayToken() const
{
    return m_playToken;
}

bool DescribeKTVMusicDetailResponse::PlayTokenHasBeenSet() const
{
    return m_playTokenHasBeenSet;
}


