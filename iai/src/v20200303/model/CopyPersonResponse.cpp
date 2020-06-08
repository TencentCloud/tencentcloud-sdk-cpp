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

#include <tencentcloud/iai/v20200303/model/CopyPersonResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace rapidjson;
using namespace std;

CopyPersonResponse::CopyPersonResponse() :
    m_sucGroupNumHasBeenSet(false),
    m_sucGroupIdsHasBeenSet(false)
{
}

CoreInternalOutcome CopyPersonResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SucGroupNum") && !rsp["SucGroupNum"].IsNull())
    {
        if (!rsp["SucGroupNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SucGroupNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sucGroupNum = rsp["SucGroupNum"].GetUint64();
        m_sucGroupNumHasBeenSet = true;
    }

    if (rsp.HasMember("SucGroupIds") && !rsp["SucGroupIds"].IsNull())
    {
        if (!rsp["SucGroupIds"].IsArray())
            return CoreInternalOutcome(Error("response `SucGroupIds` is not array type"));

        const Value &tmpValue = rsp["SucGroupIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sucGroupIds.push_back((*itr).GetString());
        }
        m_sucGroupIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t CopyPersonResponse::GetSucGroupNum() const
{
    return m_sucGroupNum;
}

bool CopyPersonResponse::SucGroupNumHasBeenSet() const
{
    return m_sucGroupNumHasBeenSet;
}

vector<string> CopyPersonResponse::GetSucGroupIds() const
{
    return m_sucGroupIds;
}

bool CopyPersonResponse::SucGroupIdsHasBeenSet() const
{
    return m_sucGroupIdsHasBeenSet;
}

