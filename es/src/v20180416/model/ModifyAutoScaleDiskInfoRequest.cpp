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

#include <tencentcloud/es/v20180416/model/ModifyAutoScaleDiskInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

ModifyAutoScaleDiskInfoRequest::ModifyAutoScaleDiskInfoRequest() :
    m_instanceIdHasBeenSet(false),
    m_autoScaleDiskInfoListHasBeenSet(false),
    m_deleteNodeTypeListHasBeenSet(false)
{
}

string ModifyAutoScaleDiskInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScaleDiskInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScaleDiskInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_autoScaleDiskInfoList.begin(); itr != m_autoScaleDiskInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deleteNodeTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteNodeTypeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deleteNodeTypeList.begin(); itr != m_deleteNodeTypeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAutoScaleDiskInfoRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyAutoScaleDiskInfoRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyAutoScaleDiskInfoRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<AutoScaleDiskInfo> ModifyAutoScaleDiskInfoRequest::GetAutoScaleDiskInfoList() const
{
    return m_autoScaleDiskInfoList;
}

void ModifyAutoScaleDiskInfoRequest::SetAutoScaleDiskInfoList(const vector<AutoScaleDiskInfo>& _autoScaleDiskInfoList)
{
    m_autoScaleDiskInfoList = _autoScaleDiskInfoList;
    m_autoScaleDiskInfoListHasBeenSet = true;
}

bool ModifyAutoScaleDiskInfoRequest::AutoScaleDiskInfoListHasBeenSet() const
{
    return m_autoScaleDiskInfoListHasBeenSet;
}

vector<string> ModifyAutoScaleDiskInfoRequest::GetDeleteNodeTypeList() const
{
    return m_deleteNodeTypeList;
}

void ModifyAutoScaleDiskInfoRequest::SetDeleteNodeTypeList(const vector<string>& _deleteNodeTypeList)
{
    m_deleteNodeTypeList = _deleteNodeTypeList;
    m_deleteNodeTypeListHasBeenSet = true;
}

bool ModifyAutoScaleDiskInfoRequest::DeleteNodeTypeListHasBeenSet() const
{
    return m_deleteNodeTypeListHasBeenSet;
}


