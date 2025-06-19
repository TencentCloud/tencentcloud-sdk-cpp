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

#include <tencentcloud/lighthouse/v20200324/model/SyncBlueprintRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

SyncBlueprintRequest::SyncBlueprintRequest() :
    m_blueprintIdHasBeenSet(false),
    m_destinationRegionsHasBeenSet(false)
{
}

string SyncBlueprintRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_blueprintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlueprintId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_blueprintId.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationRegions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_destinationRegions.begin(); itr != m_destinationRegions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SyncBlueprintRequest::GetBlueprintId() const
{
    return m_blueprintId;
}

void SyncBlueprintRequest::SetBlueprintId(const string& _blueprintId)
{
    m_blueprintId = _blueprintId;
    m_blueprintIdHasBeenSet = true;
}

bool SyncBlueprintRequest::BlueprintIdHasBeenSet() const
{
    return m_blueprintIdHasBeenSet;
}

vector<string> SyncBlueprintRequest::GetDestinationRegions() const
{
    return m_destinationRegions;
}

void SyncBlueprintRequest::SetDestinationRegions(const vector<string>& _destinationRegions)
{
    m_destinationRegions = _destinationRegions;
    m_destinationRegionsHasBeenSet = true;
}

bool SyncBlueprintRequest::DestinationRegionsHasBeenSet() const
{
    return m_destinationRegionsHasBeenSet;
}


