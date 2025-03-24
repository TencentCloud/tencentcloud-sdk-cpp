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

#include <tencentcloud/gs/v20191118/model/DeleteAndroidInstanceImagesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

DeleteAndroidInstanceImagesRequest::DeleteAndroidInstanceImagesRequest() :
    m_androidInstanceImageIdsHasBeenSet(false)
{
}

string DeleteAndroidInstanceImagesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_androidInstanceImageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceImageIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_androidInstanceImageIds.begin(); itr != m_androidInstanceImageIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DeleteAndroidInstanceImagesRequest::GetAndroidInstanceImageIds() const
{
    return m_androidInstanceImageIds;
}

void DeleteAndroidInstanceImagesRequest::SetAndroidInstanceImageIds(const vector<string>& _androidInstanceImageIds)
{
    m_androidInstanceImageIds = _androidInstanceImageIds;
    m_androidInstanceImageIdsHasBeenSet = true;
}

bool DeleteAndroidInstanceImagesRequest::AndroidInstanceImageIdsHasBeenSet() const
{
    return m_androidInstanceImageIdsHasBeenSet;
}


