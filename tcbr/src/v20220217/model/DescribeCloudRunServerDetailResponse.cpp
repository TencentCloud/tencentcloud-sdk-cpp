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

#include <tencentcloud/tcbr/v20220217/model/DescribeCloudRunServerDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

DescribeCloudRunServerDetailResponse::DescribeCloudRunServerDetailResponse() :
    m_baseInfoHasBeenSet(false),
    m_serverConfigHasBeenSet(false),
    m_onlineVersionInfosHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudRunServerDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BaseInfo") && !rsp["BaseInfo"].IsNull())
    {
        if (!rsp["BaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baseInfo.Deserialize(rsp["BaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baseInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ServerConfig") && !rsp["ServerConfig"].IsNull())
    {
        if (!rsp["ServerConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServerConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serverConfig.Deserialize(rsp["ServerConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serverConfigHasBeenSet = true;
    }

    if (rsp.HasMember("OnlineVersionInfos") && !rsp["OnlineVersionInfos"].IsNull())
    {
        if (!rsp["OnlineVersionInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OnlineVersionInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OnlineVersionInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OnlineVersionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_onlineVersionInfos.push_back(item);
        }
        m_onlineVersionInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCloudRunServerDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_baseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_serverConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serverConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_onlineVersionInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineVersionInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_onlineVersionInfos.begin(); itr != m_onlineVersionInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


ServerBaseInfo DescribeCloudRunServerDetailResponse::GetBaseInfo() const
{
    return m_baseInfo;
}

bool DescribeCloudRunServerDetailResponse::BaseInfoHasBeenSet() const
{
    return m_baseInfoHasBeenSet;
}

ServerBaseConfig DescribeCloudRunServerDetailResponse::GetServerConfig() const
{
    return m_serverConfig;
}

bool DescribeCloudRunServerDetailResponse::ServerConfigHasBeenSet() const
{
    return m_serverConfigHasBeenSet;
}

vector<OnlineVersionInfo> DescribeCloudRunServerDetailResponse::GetOnlineVersionInfos() const
{
    return m_onlineVersionInfos;
}

bool DescribeCloudRunServerDetailResponse::OnlineVersionInfosHasBeenSet() const
{
    return m_onlineVersionInfosHasBeenSet;
}


