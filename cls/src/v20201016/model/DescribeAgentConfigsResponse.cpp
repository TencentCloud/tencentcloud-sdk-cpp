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

#include <tencentcloud/cls/v20201016/model/DescribeAgentConfigsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DescribeAgentConfigsResponse::DescribeAgentConfigsResponse() :
    m_logConfigsHasBeenSet(false),
    m_serviceLogConfigsHasBeenSet(false),
    m_lastVersionHasBeenSet(false),
    m_needUpdateHasBeenSet(false),
    m_uRLHasBeenSet(false),
    m_fileMd5HasBeenSet(false)
{
}

CoreInternalOutcome DescribeAgentConfigsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LogConfigs") && !rsp["LogConfigs"].IsNull())
    {
        if (!rsp["LogConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogConfigs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LogConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LogConfigInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_logConfigs.push_back(item);
        }
        m_logConfigsHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceLogConfigs") && !rsp["ServiceLogConfigs"].IsNull())
    {
        if (!rsp["ServiceLogConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceLogConfigs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ServiceLogConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceLogConfigInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceLogConfigs.push_back(item);
        }
        m_serviceLogConfigsHasBeenSet = true;
    }

    if (rsp.HasMember("LastVersion") && !rsp["LastVersion"].IsNull())
    {
        if (!rsp["LastVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastVersion = string(rsp["LastVersion"].GetString());
        m_lastVersionHasBeenSet = true;
    }

    if (rsp.HasMember("NeedUpdate") && !rsp["NeedUpdate"].IsNull())
    {
        if (!rsp["NeedUpdate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NeedUpdate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needUpdate = rsp["NeedUpdate"].GetBool();
        m_needUpdateHasBeenSet = true;
    }

    if (rsp.HasMember("URL") && !rsp["URL"].IsNull())
    {
        if (!rsp["URL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `URL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRL = string(rsp["URL"].GetString());
        m_uRLHasBeenSet = true;
    }

    if (rsp.HasMember("FileMd5") && !rsp["FileMd5"].IsNull())
    {
        if (!rsp["FileMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMd5 = string(rsp["FileMd5"].GetString());
        m_fileMd5HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAgentConfigsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_logConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_logConfigs.begin(); itr != m_logConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_serviceLogConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceLogConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceLogConfigs.begin(); itr != m_serviceLogConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lastVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_needUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needUpdate, allocator);
    }

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMd5.c_str(), allocator).Move(), allocator);
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


vector<LogConfigInfo> DescribeAgentConfigsResponse::GetLogConfigs() const
{
    return m_logConfigs;
}

bool DescribeAgentConfigsResponse::LogConfigsHasBeenSet() const
{
    return m_logConfigsHasBeenSet;
}

vector<ServiceLogConfigInfo> DescribeAgentConfigsResponse::GetServiceLogConfigs() const
{
    return m_serviceLogConfigs;
}

bool DescribeAgentConfigsResponse::ServiceLogConfigsHasBeenSet() const
{
    return m_serviceLogConfigsHasBeenSet;
}

string DescribeAgentConfigsResponse::GetLastVersion() const
{
    return m_lastVersion;
}

bool DescribeAgentConfigsResponse::LastVersionHasBeenSet() const
{
    return m_lastVersionHasBeenSet;
}

bool DescribeAgentConfigsResponse::GetNeedUpdate() const
{
    return m_needUpdate;
}

bool DescribeAgentConfigsResponse::NeedUpdateHasBeenSet() const
{
    return m_needUpdateHasBeenSet;
}

string DescribeAgentConfigsResponse::GetURL() const
{
    return m_uRL;
}

bool DescribeAgentConfigsResponse::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

string DescribeAgentConfigsResponse::GetFileMd5() const
{
    return m_fileMd5;
}

bool DescribeAgentConfigsResponse::FileMd5HasBeenSet() const
{
    return m_fileMd5HasBeenSet;
}


