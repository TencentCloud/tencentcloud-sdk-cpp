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

#include <tencentcloud/csip/v20221121/model/ModifyCosMarkInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyCosMarkInfoRequest::ModifyCosMarkInfoRequest() :
    m_bucketNameSetHasBeenSet(false),
    m_markInfoHasBeenSet(false)
{
}

string ModifyCosMarkInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bucketNameSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketNameSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bucketNameSet.begin(); itr != m_bucketNameSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_markInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_markInfo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<CosBucketInfo> ModifyCosMarkInfoRequest::GetBucketNameSet() const
{
    return m_bucketNameSet;
}

void ModifyCosMarkInfoRequest::SetBucketNameSet(const vector<CosBucketInfo>& _bucketNameSet)
{
    m_bucketNameSet = _bucketNameSet;
    m_bucketNameSetHasBeenSet = true;
}

bool ModifyCosMarkInfoRequest::BucketNameSetHasBeenSet() const
{
    return m_bucketNameSetHasBeenSet;
}

string ModifyCosMarkInfoRequest::GetMarkInfo() const
{
    return m_markInfo;
}

void ModifyCosMarkInfoRequest::SetMarkInfo(const string& _markInfo)
{
    m_markInfo = _markInfo;
    m_markInfoHasBeenSet = true;
}

bool ModifyCosMarkInfoRequest::MarkInfoHasBeenSet() const
{
    return m_markInfoHasBeenSet;
}


