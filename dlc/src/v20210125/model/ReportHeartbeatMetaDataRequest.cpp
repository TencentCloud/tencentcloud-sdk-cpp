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

#include <tencentcloud/dlc/v20210125/model/ReportHeartbeatMetaDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ReportHeartbeatMetaDataRequest::ReportHeartbeatMetaDataRequest() :
    m_datasourceConnectionNameHasBeenSet(false),
    m_lockIdHasBeenSet(false),
    m_txnIdHasBeenSet(false)
{
}

string ReportHeartbeatMetaDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_datasourceConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_lockIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lockId, allocator);
    }

    if (m_txnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_txnId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReportHeartbeatMetaDataRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void ReportHeartbeatMetaDataRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool ReportHeartbeatMetaDataRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}

int64_t ReportHeartbeatMetaDataRequest::GetLockId() const
{
    return m_lockId;
}

void ReportHeartbeatMetaDataRequest::SetLockId(const int64_t& _lockId)
{
    m_lockId = _lockId;
    m_lockIdHasBeenSet = true;
}

bool ReportHeartbeatMetaDataRequest::LockIdHasBeenSet() const
{
    return m_lockIdHasBeenSet;
}

int64_t ReportHeartbeatMetaDataRequest::GetTxnId() const
{
    return m_txnId;
}

void ReportHeartbeatMetaDataRequest::SetTxnId(const int64_t& _txnId)
{
    m_txnId = _txnId;
    m_txnIdHasBeenSet = true;
}

bool ReportHeartbeatMetaDataRequest::TxnIdHasBeenSet() const
{
    return m_txnIdHasBeenSet;
}


