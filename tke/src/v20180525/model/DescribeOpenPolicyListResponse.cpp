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

#include <tencentcloud/tke/v20180525/model/DescribeOpenPolicyListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribeOpenPolicyListResponse::DescribeOpenPolicyListResponse() :
    m_openPolicyInfoListHasBeenSet(false),
    m_gatekeeperStatusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOpenPolicyListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OpenPolicyInfoList") && !rsp["OpenPolicyInfoList"].IsNull())
    {
        if (!rsp["OpenPolicyInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OpenPolicyInfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OpenPolicyInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OpenPolicyInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_openPolicyInfoList.push_back(item);
        }
        m_openPolicyInfoListHasBeenSet = true;
    }

    if (rsp.HasMember("GatekeeperStatus") && !rsp["GatekeeperStatus"].IsNull())
    {
        if (!rsp["GatekeeperStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GatekeeperStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gatekeeperStatus = rsp["GatekeeperStatus"].GetInt64();
        m_gatekeeperStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeOpenPolicyListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_openPolicyInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenPolicyInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_openPolicyInfoList.begin(); itr != m_openPolicyInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_gatekeeperStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatekeeperStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gatekeeperStatus, allocator);
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


vector<OpenPolicyInfo> DescribeOpenPolicyListResponse::GetOpenPolicyInfoList() const
{
    return m_openPolicyInfoList;
}

bool DescribeOpenPolicyListResponse::OpenPolicyInfoListHasBeenSet() const
{
    return m_openPolicyInfoListHasBeenSet;
}

int64_t DescribeOpenPolicyListResponse::GetGatekeeperStatus() const
{
    return m_gatekeeperStatus;
}

bool DescribeOpenPolicyListResponse::GatekeeperStatusHasBeenSet() const
{
    return m_gatekeeperStatusHasBeenSet;
}


