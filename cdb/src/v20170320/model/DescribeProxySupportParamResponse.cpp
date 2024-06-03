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

#include <tencentcloud/cdb/v20170320/model/DescribeProxySupportParamResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeProxySupportParamResponse::DescribeProxySupportParamResponse() :
    m_proxyVersionHasBeenSet(false),
    m_supportPoolHasBeenSet(false),
    m_poolMinHasBeenSet(false),
    m_poolMaxHasBeenSet(false),
    m_supportTransSplitHasBeenSet(false),
    m_supportPoolMinVersionHasBeenSet(false),
    m_supportTransSplitMinVersionHasBeenSet(false),
    m_supportReadOnlyHasBeenSet(false),
    m_supportAutoLoadBalanceHasBeenSet(false),
    m_supportAccessModeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeProxySupportParamResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ProxyVersion") && !rsp["ProxyVersion"].IsNull())
    {
        if (!rsp["ProxyVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyVersion = string(rsp["ProxyVersion"].GetString());
        m_proxyVersionHasBeenSet = true;
    }

    if (rsp.HasMember("SupportPool") && !rsp["SupportPool"].IsNull())
    {
        if (!rsp["SupportPool"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SupportPool` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportPool = rsp["SupportPool"].GetBool();
        m_supportPoolHasBeenSet = true;
    }

    if (rsp.HasMember("PoolMin") && !rsp["PoolMin"].IsNull())
    {
        if (!rsp["PoolMin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PoolMin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_poolMin = rsp["PoolMin"].GetUint64();
        m_poolMinHasBeenSet = true;
    }

    if (rsp.HasMember("PoolMax") && !rsp["PoolMax"].IsNull())
    {
        if (!rsp["PoolMax"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PoolMax` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_poolMax = rsp["PoolMax"].GetUint64();
        m_poolMaxHasBeenSet = true;
    }

    if (rsp.HasMember("SupportTransSplit") && !rsp["SupportTransSplit"].IsNull())
    {
        if (!rsp["SupportTransSplit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SupportTransSplit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportTransSplit = rsp["SupportTransSplit"].GetBool();
        m_supportTransSplitHasBeenSet = true;
    }

    if (rsp.HasMember("SupportPoolMinVersion") && !rsp["SupportPoolMinVersion"].IsNull())
    {
        if (!rsp["SupportPoolMinVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportPoolMinVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_supportPoolMinVersion = string(rsp["SupportPoolMinVersion"].GetString());
        m_supportPoolMinVersionHasBeenSet = true;
    }

    if (rsp.HasMember("SupportTransSplitMinVersion") && !rsp["SupportTransSplitMinVersion"].IsNull())
    {
        if (!rsp["SupportTransSplitMinVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportTransSplitMinVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_supportTransSplitMinVersion = string(rsp["SupportTransSplitMinVersion"].GetString());
        m_supportTransSplitMinVersionHasBeenSet = true;
    }

    if (rsp.HasMember("SupportReadOnly") && !rsp["SupportReadOnly"].IsNull())
    {
        if (!rsp["SupportReadOnly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SupportReadOnly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportReadOnly = rsp["SupportReadOnly"].GetBool();
        m_supportReadOnlyHasBeenSet = true;
    }

    if (rsp.HasMember("SupportAutoLoadBalance") && !rsp["SupportAutoLoadBalance"].IsNull())
    {
        if (!rsp["SupportAutoLoadBalance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SupportAutoLoadBalance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportAutoLoadBalance = rsp["SupportAutoLoadBalance"].GetBool();
        m_supportAutoLoadBalanceHasBeenSet = true;
    }

    if (rsp.HasMember("SupportAccessMode") && !rsp["SupportAccessMode"].IsNull())
    {
        if (!rsp["SupportAccessMode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SupportAccessMode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportAccessMode = rsp["SupportAccessMode"].GetBool();
        m_supportAccessModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeProxySupportParamResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_proxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_supportPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportPool";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportPool, allocator);
    }

    if (m_poolMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_poolMin, allocator);
    }

    if (m_poolMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_poolMax, allocator);
    }

    if (m_supportTransSplitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportTransSplit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportTransSplit, allocator);
    }

    if (m_supportPoolMinVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportPoolMinVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_supportPoolMinVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_supportTransSplitMinVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportTransSplitMinVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_supportTransSplitMinVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_supportReadOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportReadOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportReadOnly, allocator);
    }

    if (m_supportAutoLoadBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportAutoLoadBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportAutoLoadBalance, allocator);
    }

    if (m_supportAccessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportAccessMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportAccessMode, allocator);
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


string DescribeProxySupportParamResponse::GetProxyVersion() const
{
    return m_proxyVersion;
}

bool DescribeProxySupportParamResponse::ProxyVersionHasBeenSet() const
{
    return m_proxyVersionHasBeenSet;
}

bool DescribeProxySupportParamResponse::GetSupportPool() const
{
    return m_supportPool;
}

bool DescribeProxySupportParamResponse::SupportPoolHasBeenSet() const
{
    return m_supportPoolHasBeenSet;
}

uint64_t DescribeProxySupportParamResponse::GetPoolMin() const
{
    return m_poolMin;
}

bool DescribeProxySupportParamResponse::PoolMinHasBeenSet() const
{
    return m_poolMinHasBeenSet;
}

uint64_t DescribeProxySupportParamResponse::GetPoolMax() const
{
    return m_poolMax;
}

bool DescribeProxySupportParamResponse::PoolMaxHasBeenSet() const
{
    return m_poolMaxHasBeenSet;
}

bool DescribeProxySupportParamResponse::GetSupportTransSplit() const
{
    return m_supportTransSplit;
}

bool DescribeProxySupportParamResponse::SupportTransSplitHasBeenSet() const
{
    return m_supportTransSplitHasBeenSet;
}

string DescribeProxySupportParamResponse::GetSupportPoolMinVersion() const
{
    return m_supportPoolMinVersion;
}

bool DescribeProxySupportParamResponse::SupportPoolMinVersionHasBeenSet() const
{
    return m_supportPoolMinVersionHasBeenSet;
}

string DescribeProxySupportParamResponse::GetSupportTransSplitMinVersion() const
{
    return m_supportTransSplitMinVersion;
}

bool DescribeProxySupportParamResponse::SupportTransSplitMinVersionHasBeenSet() const
{
    return m_supportTransSplitMinVersionHasBeenSet;
}

bool DescribeProxySupportParamResponse::GetSupportReadOnly() const
{
    return m_supportReadOnly;
}

bool DescribeProxySupportParamResponse::SupportReadOnlyHasBeenSet() const
{
    return m_supportReadOnlyHasBeenSet;
}

bool DescribeProxySupportParamResponse::GetSupportAutoLoadBalance() const
{
    return m_supportAutoLoadBalance;
}

bool DescribeProxySupportParamResponse::SupportAutoLoadBalanceHasBeenSet() const
{
    return m_supportAutoLoadBalanceHasBeenSet;
}

bool DescribeProxySupportParamResponse::GetSupportAccessMode() const
{
    return m_supportAccessMode;
}

bool DescribeProxySupportParamResponse::SupportAccessModeHasBeenSet() const
{
    return m_supportAccessModeHasBeenSet;
}


