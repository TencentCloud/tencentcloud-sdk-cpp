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

#include <tencentcloud/irp/v20220805/model/ReportGoodsBehaviorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Irp::V20220805::Model;
using namespace std;

ReportGoodsBehaviorRequest::ReportGoodsBehaviorRequest() :
    m_instanceIdHasBeenSet(false),
    m_goodsBehaviorListHasBeenSet(false)
{
}

string ReportGoodsBehaviorRequest::ToJsonString() const
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

    if (m_goodsBehaviorListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsBehaviorList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_goodsBehaviorList.begin(); itr != m_goodsBehaviorList.end(); ++itr, ++i)
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


string ReportGoodsBehaviorRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ReportGoodsBehaviorRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ReportGoodsBehaviorRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<GoodsBehaviorInfo> ReportGoodsBehaviorRequest::GetGoodsBehaviorList() const
{
    return m_goodsBehaviorList;
}

void ReportGoodsBehaviorRequest::SetGoodsBehaviorList(const vector<GoodsBehaviorInfo>& _goodsBehaviorList)
{
    m_goodsBehaviorList = _goodsBehaviorList;
    m_goodsBehaviorListHasBeenSet = true;
}

bool ReportGoodsBehaviorRequest::GoodsBehaviorListHasBeenSet() const
{
    return m_goodsBehaviorListHasBeenSet;
}


