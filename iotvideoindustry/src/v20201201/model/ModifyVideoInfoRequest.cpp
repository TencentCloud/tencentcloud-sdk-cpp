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

#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyVideoInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

ModifyVideoInfoRequest::ModifyVideoInfoRequest() :
    m_initIDsHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

string ModifyVideoInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_initIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_initIDs.begin(); itr != m_initIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> ModifyVideoInfoRequest::GetInitIDs() const
{
    return m_initIDs;
}

void ModifyVideoInfoRequest::SetInitIDs(const vector<int64_t>& _initIDs)
{
    m_initIDs = _initIDs;
    m_initIDsHasBeenSet = true;
}

bool ModifyVideoInfoRequest::InitIDsHasBeenSet() const
{
    return m_initIDsHasBeenSet;
}

int64_t ModifyVideoInfoRequest::GetExpireTime() const
{
    return m_expireTime;
}

void ModifyVideoInfoRequest::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ModifyVideoInfoRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}


