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

#include <tencentcloud/oceanus/v20190422/model/StopJobsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace rapidjson;
using namespace std;

StopJobsRequest::StopJobsRequest() :
    m_stopJobDescriptionsHasBeenSet(false)
{
}

string StopJobsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_stopJobDescriptionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StopJobDescriptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_stopJobDescriptions.begin(); itr != m_stopJobDescriptions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<StopJobDescription> StopJobsRequest::GetStopJobDescriptions() const
{
    return m_stopJobDescriptions;
}

void StopJobsRequest::SetStopJobDescriptions(const vector<StopJobDescription>& _stopJobDescriptions)
{
    m_stopJobDescriptions = _stopJobDescriptions;
    m_stopJobDescriptionsHasBeenSet = true;
}

bool StopJobsRequest::StopJobDescriptionsHasBeenSet() const
{
    return m_stopJobDescriptionsHasBeenSet;
}


