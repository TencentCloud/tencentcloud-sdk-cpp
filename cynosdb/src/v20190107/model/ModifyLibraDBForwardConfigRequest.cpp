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

#include <tencentcloud/cynosdb/v20190107/model/ModifyLibraDBForwardConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyLibraDBForwardConfigRequest::ModifyLibraDBForwardConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_forwardModeHasBeenSet(false),
    m_forwardListHasBeenSet(false)
{
}

string ModifyLibraDBForwardConfigRequest::ToJsonString() const
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

    if (m_forwardModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forwardMode.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_forwardList.begin(); itr != m_forwardList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLibraDBForwardConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyLibraDBForwardConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyLibraDBForwardConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyLibraDBForwardConfigRequest::GetForwardMode() const
{
    return m_forwardMode;
}

void ModifyLibraDBForwardConfigRequest::SetForwardMode(const string& _forwardMode)
{
    m_forwardMode = _forwardMode;
    m_forwardModeHasBeenSet = true;
}

bool ModifyLibraDBForwardConfigRequest::ForwardModeHasBeenSet() const
{
    return m_forwardModeHasBeenSet;
}

vector<ForwardInstanceInfo> ModifyLibraDBForwardConfigRequest::GetForwardList() const
{
    return m_forwardList;
}

void ModifyLibraDBForwardConfigRequest::SetForwardList(const vector<ForwardInstanceInfo>& _forwardList)
{
    m_forwardList = _forwardList;
    m_forwardListHasBeenSet = true;
}

bool ModifyLibraDBForwardConfigRequest::ForwardListHasBeenSet() const
{
    return m_forwardListHasBeenSet;
}


