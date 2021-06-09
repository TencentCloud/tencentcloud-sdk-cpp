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

#include <tencentcloud/ame/v20190916/model/TakeMusicOffShelvesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

TakeMusicOffShelvesRequest::TakeMusicOffShelvesRequest() :
    m_takeMusicOffShelvesHasBeenSet(false)
{
}

string TakeMusicOffShelvesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_takeMusicOffShelvesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TakeMusicOffShelves";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_takeMusicOffShelves.begin(); itr != m_takeMusicOffShelves.end(); ++itr, ++i)
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


vector<TakeMusicOffShelves> TakeMusicOffShelvesRequest::GetTakeMusicOffShelves() const
{
    return m_takeMusicOffShelves;
}

void TakeMusicOffShelvesRequest::SetTakeMusicOffShelves(const vector<TakeMusicOffShelves>& _takeMusicOffShelves)
{
    m_takeMusicOffShelves = _takeMusicOffShelves;
    m_takeMusicOffShelvesHasBeenSet = true;
}

bool TakeMusicOffShelvesRequest::TakeMusicOffShelvesHasBeenSet() const
{
    return m_takeMusicOffShelvesHasBeenSet;
}


