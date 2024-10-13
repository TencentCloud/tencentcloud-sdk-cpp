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

#include <tencentcloud/cynosdb/v20190107/model/DescribeSupportProxyVersionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeSupportProxyVersionResponse::DescribeSupportProxyVersionResponse() :
    m_supportProxyVersionsHasBeenSet(false),
    m_currentProxyVersionHasBeenSet(false),
    m_supportProxyVersionDetailHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSupportProxyVersionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SupportProxyVersions") && !rsp["SupportProxyVersions"].IsNull())
    {
        if (!rsp["SupportProxyVersions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SupportProxyVersions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SupportProxyVersions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportProxyVersions.push_back((*itr).GetString());
        }
        m_supportProxyVersionsHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentProxyVersion") && !rsp["CurrentProxyVersion"].IsNull())
    {
        if (!rsp["CurrentProxyVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentProxyVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentProxyVersion = string(rsp["CurrentProxyVersion"].GetString());
        m_currentProxyVersionHasBeenSet = true;
    }

    if (rsp.HasMember("SupportProxyVersionDetail") && !rsp["SupportProxyVersionDetail"].IsNull())
    {
        if (!rsp["SupportProxyVersionDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SupportProxyVersionDetail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SupportProxyVersionDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyVersionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_supportProxyVersionDetail.push_back(item);
        }
        m_supportProxyVersionDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSupportProxyVersionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_supportProxyVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportProxyVersions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportProxyVersions.begin(); itr != m_supportProxyVersions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_currentProxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentProxyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_supportProxyVersionDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportProxyVersionDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_supportProxyVersionDetail.begin(); itr != m_supportProxyVersionDetail.end(); ++itr, ++i)
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


vector<string> DescribeSupportProxyVersionResponse::GetSupportProxyVersions() const
{
    return m_supportProxyVersions;
}

bool DescribeSupportProxyVersionResponse::SupportProxyVersionsHasBeenSet() const
{
    return m_supportProxyVersionsHasBeenSet;
}

string DescribeSupportProxyVersionResponse::GetCurrentProxyVersion() const
{
    return m_currentProxyVersion;
}

bool DescribeSupportProxyVersionResponse::CurrentProxyVersionHasBeenSet() const
{
    return m_currentProxyVersionHasBeenSet;
}

vector<ProxyVersionInfo> DescribeSupportProxyVersionResponse::GetSupportProxyVersionDetail() const
{
    return m_supportProxyVersionDetail;
}

bool DescribeSupportProxyVersionResponse::SupportProxyVersionDetailHasBeenSet() const
{
    return m_supportProxyVersionDetailHasBeenSet;
}


