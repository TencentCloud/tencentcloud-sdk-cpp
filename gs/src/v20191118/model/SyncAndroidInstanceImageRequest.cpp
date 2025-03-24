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

#include <tencentcloud/gs/v20191118/model/SyncAndroidInstanceImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

SyncAndroidInstanceImageRequest::SyncAndroidInstanceImageRequest() :
    m_androidInstanceImageIdHasBeenSet(false),
    m_destinationZonesHasBeenSet(false)
{
}

string SyncAndroidInstanceImageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_androidInstanceImageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_androidInstanceImageId.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationZones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_destinationZones.begin(); itr != m_destinationZones.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SyncAndroidInstanceImageRequest::GetAndroidInstanceImageId() const
{
    return m_androidInstanceImageId;
}

void SyncAndroidInstanceImageRequest::SetAndroidInstanceImageId(const string& _androidInstanceImageId)
{
    m_androidInstanceImageId = _androidInstanceImageId;
    m_androidInstanceImageIdHasBeenSet = true;
}

bool SyncAndroidInstanceImageRequest::AndroidInstanceImageIdHasBeenSet() const
{
    return m_androidInstanceImageIdHasBeenSet;
}

vector<string> SyncAndroidInstanceImageRequest::GetDestinationZones() const
{
    return m_destinationZones;
}

void SyncAndroidInstanceImageRequest::SetDestinationZones(const vector<string>& _destinationZones)
{
    m_destinationZones = _destinationZones;
    m_destinationZonesHasBeenSet = true;
}

bool SyncAndroidInstanceImageRequest::DestinationZonesHasBeenSet() const
{
    return m_destinationZonesHasBeenSet;
}


