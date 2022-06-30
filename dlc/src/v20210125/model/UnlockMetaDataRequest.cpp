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

#include <tencentcloud/dlc/v20210125/model/UnlockMetaDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UnlockMetaDataRequest::UnlockMetaDataRequest() :
    m_lockIdHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false)
{
}

string UnlockMetaDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_lockIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lockId, allocator);
    }

    if (m_datasourceConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceConnectionName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t UnlockMetaDataRequest::GetLockId() const
{
    return m_lockId;
}

void UnlockMetaDataRequest::SetLockId(const int64_t& _lockId)
{
    m_lockId = _lockId;
    m_lockIdHasBeenSet = true;
}

bool UnlockMetaDataRequest::LockIdHasBeenSet() const
{
    return m_lockIdHasBeenSet;
}

string UnlockMetaDataRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void UnlockMetaDataRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool UnlockMetaDataRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}


