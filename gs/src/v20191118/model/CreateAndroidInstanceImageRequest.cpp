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

#include <tencentcloud/gs/v20191118/model/CreateAndroidInstanceImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

CreateAndroidInstanceImageRequest::CreateAndroidInstanceImageRequest() :
    m_androidInstanceImageNameHasBeenSet(false),
    m_androidInstanceIdHasBeenSet(false)
{
}

string CreateAndroidInstanceImageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_androidInstanceImageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceImageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_androidInstanceImageName.c_str(), allocator).Move(), allocator);
    }

    if (m_androidInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_androidInstanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAndroidInstanceImageRequest::GetAndroidInstanceImageName() const
{
    return m_androidInstanceImageName;
}

void CreateAndroidInstanceImageRequest::SetAndroidInstanceImageName(const string& _androidInstanceImageName)
{
    m_androidInstanceImageName = _androidInstanceImageName;
    m_androidInstanceImageNameHasBeenSet = true;
}

bool CreateAndroidInstanceImageRequest::AndroidInstanceImageNameHasBeenSet() const
{
    return m_androidInstanceImageNameHasBeenSet;
}

string CreateAndroidInstanceImageRequest::GetAndroidInstanceId() const
{
    return m_androidInstanceId;
}

void CreateAndroidInstanceImageRequest::SetAndroidInstanceId(const string& _androidInstanceId)
{
    m_androidInstanceId = _androidInstanceId;
    m_androidInstanceIdHasBeenSet = true;
}

bool CreateAndroidInstanceImageRequest::AndroidInstanceIdHasBeenSet() const
{
    return m_androidInstanceIdHasBeenSet;
}


