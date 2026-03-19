/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/live/v20180801/model/DescribeLiveAvatarScriptsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeLiveAvatarScriptsResponse::DescribeLiveAvatarScriptsResponse() :
    m_infoListHasBeenSet(false),
    m_limitCreateNumHasBeenSet(false),
    m_totalNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLiveAvatarScriptsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InfoList") && !rsp["InfoList"].IsNull())
    {
        if (!rsp["InfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AvatarScriptInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_infoList.push_back(item);
        }
        m_infoListHasBeenSet = true;
    }

    if (rsp.HasMember("LimitCreateNum") && !rsp["LimitCreateNum"].IsNull())
    {
        if (!rsp["LimitCreateNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LimitCreateNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limitCreateNum = rsp["LimitCreateNum"].GetInt64();
        m_limitCreateNumHasBeenSet = true;
    }

    if (rsp.HasMember("TotalNum") && !rsp["TotalNum"].IsNull())
    {
        if (!rsp["TotalNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = rsp["TotalNum"].GetInt64();
        m_totalNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLiveAvatarScriptsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_infoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_infoList.begin(); itr != m_infoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_limitCreateNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitCreateNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitCreateNum, allocator);
    }

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNum, allocator);
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


vector<AvatarScriptInfo> DescribeLiveAvatarScriptsResponse::GetInfoList() const
{
    return m_infoList;
}

bool DescribeLiveAvatarScriptsResponse::InfoListHasBeenSet() const
{
    return m_infoListHasBeenSet;
}

int64_t DescribeLiveAvatarScriptsResponse::GetLimitCreateNum() const
{
    return m_limitCreateNum;
}

bool DescribeLiveAvatarScriptsResponse::LimitCreateNumHasBeenSet() const
{
    return m_limitCreateNumHasBeenSet;
}

int64_t DescribeLiveAvatarScriptsResponse::GetTotalNum() const
{
    return m_totalNum;
}

bool DescribeLiveAvatarScriptsResponse::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}


