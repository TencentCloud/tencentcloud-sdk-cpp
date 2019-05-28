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

#include <tencentcloud/ms/v20180408/model/CreateScanInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ms::V20180408::Model;
using namespace rapidjson;
using namespace std;

CreateScanInstancesRequest::CreateScanInstancesRequest() :
    m_appInfosHasBeenSet(false),
    m_scanInfoHasBeenSet(false)
{
}

string CreateScanInstancesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appInfosHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_appInfos.begin(); itr != m_appInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_scanInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScanInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_scanInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<AppInfo> CreateScanInstancesRequest::GetAppInfos() const
{
    return m_appInfos;
}

void CreateScanInstancesRequest::SetAppInfos(const vector<AppInfo>& _appInfos)
{
    m_appInfos = _appInfos;
    m_appInfosHasBeenSet = true;
}

bool CreateScanInstancesRequest::AppInfosHasBeenSet() const
{
    return m_appInfosHasBeenSet;
}

ScanInfo CreateScanInstancesRequest::GetScanInfo() const
{
    return m_scanInfo;
}

void CreateScanInstancesRequest::SetScanInfo(const ScanInfo& _scanInfo)
{
    m_scanInfo = _scanInfo;
    m_scanInfoHasBeenSet = true;
}

bool CreateScanInstancesRequest::ScanInfoHasBeenSet() const
{
    return m_scanInfoHasBeenSet;
}


