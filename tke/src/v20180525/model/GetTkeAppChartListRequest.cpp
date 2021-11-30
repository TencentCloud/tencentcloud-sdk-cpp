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

#include <tencentcloud/tke/v20180525/model/GetTkeAppChartListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

GetTkeAppChartListRequest::GetTkeAppChartListRequest() :
    m_kindHasBeenSet(false),
    m_archHasBeenSet(false),
    m_clusterTypeHasBeenSet(false)
{
}

string GetTkeAppChartListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_archHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_arch.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetTkeAppChartListRequest::GetKind() const
{
    return m_kind;
}

void GetTkeAppChartListRequest::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool GetTkeAppChartListRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string GetTkeAppChartListRequest::GetArch() const
{
    return m_arch;
}

void GetTkeAppChartListRequest::SetArch(const string& _arch)
{
    m_arch = _arch;
    m_archHasBeenSet = true;
}

bool GetTkeAppChartListRequest::ArchHasBeenSet() const
{
    return m_archHasBeenSet;
}

string GetTkeAppChartListRequest::GetClusterType() const
{
    return m_clusterType;
}

void GetTkeAppChartListRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool GetTkeAppChartListRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}


