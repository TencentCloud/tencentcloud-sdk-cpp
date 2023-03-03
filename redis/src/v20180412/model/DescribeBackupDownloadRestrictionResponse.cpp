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

#include <tencentcloud/redis/v20180412/model/DescribeBackupDownloadRestrictionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

DescribeBackupDownloadRestrictionResponse::DescribeBackupDownloadRestrictionResponse() :
    m_limitTypeHasBeenSet(false),
    m_vpcComparisonSymbolHasBeenSet(false),
    m_ipComparisonSymbolHasBeenSet(false),
    m_limitVpcHasBeenSet(false),
    m_limitIpHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupDownloadRestrictionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LimitType") && !rsp["LimitType"].IsNull())
    {
        if (!rsp["LimitType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LimitType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_limitType = string(rsp["LimitType"].GetString());
        m_limitTypeHasBeenSet = true;
    }

    if (rsp.HasMember("VpcComparisonSymbol") && !rsp["VpcComparisonSymbol"].IsNull())
    {
        if (!rsp["VpcComparisonSymbol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcComparisonSymbol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcComparisonSymbol = string(rsp["VpcComparisonSymbol"].GetString());
        m_vpcComparisonSymbolHasBeenSet = true;
    }

    if (rsp.HasMember("IpComparisonSymbol") && !rsp["IpComparisonSymbol"].IsNull())
    {
        if (!rsp["IpComparisonSymbol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpComparisonSymbol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipComparisonSymbol = string(rsp["IpComparisonSymbol"].GetString());
        m_ipComparisonSymbolHasBeenSet = true;
    }

    if (rsp.HasMember("LimitVpc") && !rsp["LimitVpc"].IsNull())
    {
        if (!rsp["LimitVpc"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LimitVpc` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LimitVpc"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BackupLimitVpcItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_limitVpc.push_back(item);
        }
        m_limitVpcHasBeenSet = true;
    }

    if (rsp.HasMember("LimitIp") && !rsp["LimitIp"].IsNull())
    {
        if (!rsp["LimitIp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LimitIp` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LimitIp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_limitIp.push_back((*itr).GetString());
        }
        m_limitIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupDownloadRestrictionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_limitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_limitType.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcComparisonSymbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcComparisonSymbol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcComparisonSymbol.c_str(), allocator).Move(), allocator);
    }

    if (m_ipComparisonSymbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpComparisonSymbol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipComparisonSymbol.c_str(), allocator).Move(), allocator);
    }

    if (m_limitVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitVpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_limitVpc.begin(); itr != m_limitVpc.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_limitIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_limitIp.begin(); itr != m_limitIp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


string DescribeBackupDownloadRestrictionResponse::GetLimitType() const
{
    return m_limitType;
}

bool DescribeBackupDownloadRestrictionResponse::LimitTypeHasBeenSet() const
{
    return m_limitTypeHasBeenSet;
}

string DescribeBackupDownloadRestrictionResponse::GetVpcComparisonSymbol() const
{
    return m_vpcComparisonSymbol;
}

bool DescribeBackupDownloadRestrictionResponse::VpcComparisonSymbolHasBeenSet() const
{
    return m_vpcComparisonSymbolHasBeenSet;
}

string DescribeBackupDownloadRestrictionResponse::GetIpComparisonSymbol() const
{
    return m_ipComparisonSymbol;
}

bool DescribeBackupDownloadRestrictionResponse::IpComparisonSymbolHasBeenSet() const
{
    return m_ipComparisonSymbolHasBeenSet;
}

vector<BackupLimitVpcItem> DescribeBackupDownloadRestrictionResponse::GetLimitVpc() const
{
    return m_limitVpc;
}

bool DescribeBackupDownloadRestrictionResponse::LimitVpcHasBeenSet() const
{
    return m_limitVpcHasBeenSet;
}

vector<string> DescribeBackupDownloadRestrictionResponse::GetLimitIp() const
{
    return m_limitIp;
}

bool DescribeBackupDownloadRestrictionResponse::LimitIpHasBeenSet() const
{
    return m_limitIpHasBeenSet;
}


