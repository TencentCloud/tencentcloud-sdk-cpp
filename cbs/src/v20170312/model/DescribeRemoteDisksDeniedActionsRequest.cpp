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

#include <tencentcloud/cbs/v20170312/model/DescribeRemoteDisksDeniedActionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

DescribeRemoteDisksDeniedActionsRequest::DescribeRemoteDisksDeniedActionsRequest() :
    m_remoteDiskIdsHasBeenSet(false)
{
}

string DescribeRemoteDisksDeniedActionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_remoteDiskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteDiskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_remoteDiskIds.begin(); itr != m_remoteDiskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeRemoteDisksDeniedActionsRequest::GetRemoteDiskIds() const
{
    return m_remoteDiskIds;
}

void DescribeRemoteDisksDeniedActionsRequest::SetRemoteDiskIds(const vector<string>& _remoteDiskIds)
{
    m_remoteDiskIds = _remoteDiskIds;
    m_remoteDiskIdsHasBeenSet = true;
}

bool DescribeRemoteDisksDeniedActionsRequest::RemoteDiskIdsHasBeenSet() const
{
    return m_remoteDiskIdsHasBeenSet;
}


