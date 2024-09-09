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

#include <tencentcloud/cvm/v20170312/model/ConvertOperatingSystemsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ConvertOperatingSystemsRequest::ConvertOperatingSystemsRequest() :
    m_instanceIdsHasBeenSet(false),
    m_minimalConversionHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_targetOSTypeHasBeenSet(false)
{
}

string ConvertOperatingSystemsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_minimalConversionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinimalConversion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minimalConversion, allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_targetOSTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetOSType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetOSType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ConvertOperatingSystemsRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void ConvertOperatingSystemsRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool ConvertOperatingSystemsRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

bool ConvertOperatingSystemsRequest::GetMinimalConversion() const
{
    return m_minimalConversion;
}

void ConvertOperatingSystemsRequest::SetMinimalConversion(const bool& _minimalConversion)
{
    m_minimalConversion = _minimalConversion;
    m_minimalConversionHasBeenSet = true;
}

bool ConvertOperatingSystemsRequest::MinimalConversionHasBeenSet() const
{
    return m_minimalConversionHasBeenSet;
}

bool ConvertOperatingSystemsRequest::GetDryRun() const
{
    return m_dryRun;
}

void ConvertOperatingSystemsRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool ConvertOperatingSystemsRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

string ConvertOperatingSystemsRequest::GetTargetOSType() const
{
    return m_targetOSType;
}

void ConvertOperatingSystemsRequest::SetTargetOSType(const string& _targetOSType)
{
    m_targetOSType = _targetOSType;
    m_targetOSTypeHasBeenSet = true;
}

bool ConvertOperatingSystemsRequest::TargetOSTypeHasBeenSet() const
{
    return m_targetOSTypeHasBeenSet;
}


