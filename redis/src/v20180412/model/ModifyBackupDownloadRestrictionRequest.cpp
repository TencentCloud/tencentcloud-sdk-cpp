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

#include <tencentcloud/redis/v20180412/model/ModifyBackupDownloadRestrictionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

ModifyBackupDownloadRestrictionRequest::ModifyBackupDownloadRestrictionRequest() :
    m_limitTypeHasBeenSet(false),
    m_vpcComparisonSymbolHasBeenSet(false),
    m_ipComparisonSymbolHasBeenSet(false),
    m_limitVpcHasBeenSet(false),
    m_limitIpHasBeenSet(false)
{
}

string ModifyBackupDownloadRestrictionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_limitType.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcComparisonSymbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcComparisonSymbol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcComparisonSymbol.c_str(), allocator).Move(), allocator);
    }

    if (m_ipComparisonSymbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpComparisonSymbol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipComparisonSymbol.c_str(), allocator).Move(), allocator);
    }

    if (m_limitVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitVpc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_limitVpc.begin(); itr != m_limitVpc.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_limitIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_limitIp.begin(); itr != m_limitIp.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBackupDownloadRestrictionRequest::GetLimitType() const
{
    return m_limitType;
}

void ModifyBackupDownloadRestrictionRequest::SetLimitType(const string& _limitType)
{
    m_limitType = _limitType;
    m_limitTypeHasBeenSet = true;
}

bool ModifyBackupDownloadRestrictionRequest::LimitTypeHasBeenSet() const
{
    return m_limitTypeHasBeenSet;
}

string ModifyBackupDownloadRestrictionRequest::GetVpcComparisonSymbol() const
{
    return m_vpcComparisonSymbol;
}

void ModifyBackupDownloadRestrictionRequest::SetVpcComparisonSymbol(const string& _vpcComparisonSymbol)
{
    m_vpcComparisonSymbol = _vpcComparisonSymbol;
    m_vpcComparisonSymbolHasBeenSet = true;
}

bool ModifyBackupDownloadRestrictionRequest::VpcComparisonSymbolHasBeenSet() const
{
    return m_vpcComparisonSymbolHasBeenSet;
}

string ModifyBackupDownloadRestrictionRequest::GetIpComparisonSymbol() const
{
    return m_ipComparisonSymbol;
}

void ModifyBackupDownloadRestrictionRequest::SetIpComparisonSymbol(const string& _ipComparisonSymbol)
{
    m_ipComparisonSymbol = _ipComparisonSymbol;
    m_ipComparisonSymbolHasBeenSet = true;
}

bool ModifyBackupDownloadRestrictionRequest::IpComparisonSymbolHasBeenSet() const
{
    return m_ipComparisonSymbolHasBeenSet;
}

vector<BackupLimitVpcItem> ModifyBackupDownloadRestrictionRequest::GetLimitVpc() const
{
    return m_limitVpc;
}

void ModifyBackupDownloadRestrictionRequest::SetLimitVpc(const vector<BackupLimitVpcItem>& _limitVpc)
{
    m_limitVpc = _limitVpc;
    m_limitVpcHasBeenSet = true;
}

bool ModifyBackupDownloadRestrictionRequest::LimitVpcHasBeenSet() const
{
    return m_limitVpcHasBeenSet;
}

vector<string> ModifyBackupDownloadRestrictionRequest::GetLimitIp() const
{
    return m_limitIp;
}

void ModifyBackupDownloadRestrictionRequest::SetLimitIp(const vector<string>& _limitIp)
{
    m_limitIp = _limitIp;
    m_limitIpHasBeenSet = true;
}

bool ModifyBackupDownloadRestrictionRequest::LimitIpHasBeenSet() const
{
    return m_limitIpHasBeenSet;
}


