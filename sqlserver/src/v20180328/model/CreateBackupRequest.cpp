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

#include <tencentcloud/sqlserver/v20180328/model/CreateBackupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace rapidjson;
using namespace std;

CreateBackupRequest::CreateBackupRequest() :
    m_strategyHasBeenSet(false),
    m_dBNamesHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string CreateBackupRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_strategyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_strategy, allocator);
    }

    if (m_dBNamesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_dBNames.begin(); itr != m_dBNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateBackupRequest::GetStrategy() const
{
    return m_strategy;
}

void CreateBackupRequest::SetStrategy(const int64_t& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool CreateBackupRequest::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

vector<string> CreateBackupRequest::GetDBNames() const
{
    return m_dBNames;
}

void CreateBackupRequest::SetDBNames(const vector<string>& _dBNames)
{
    m_dBNames = _dBNames;
    m_dBNamesHasBeenSet = true;
}

bool CreateBackupRequest::DBNamesHasBeenSet() const
{
    return m_dBNamesHasBeenSet;
}

string CreateBackupRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateBackupRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateBackupRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}


