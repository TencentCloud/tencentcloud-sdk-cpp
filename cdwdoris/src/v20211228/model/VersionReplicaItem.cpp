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

#include <tencentcloud/cdwdoris/v20211228/model/VersionReplicaItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

VersionReplicaItem::VersionReplicaItem() :
    m_replicaFlagHasBeenSet(false),
    m_errorMsgHasBeenSet(false)
{
}

CoreInternalOutcome VersionReplicaItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReplicaFlag") && !value["ReplicaFlag"].IsNull())
    {
        if (!value["ReplicaFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionReplicaItem.ReplicaFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicaFlag = value["ReplicaFlag"].GetInt64();
        m_replicaFlagHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionReplicaItem.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VersionReplicaItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_replicaFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicaFlag, allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

}


int64_t VersionReplicaItem::GetReplicaFlag() const
{
    return m_replicaFlag;
}

void VersionReplicaItem::SetReplicaFlag(const int64_t& _replicaFlag)
{
    m_replicaFlag = _replicaFlag;
    m_replicaFlagHasBeenSet = true;
}

bool VersionReplicaItem::ReplicaFlagHasBeenSet() const
{
    return m_replicaFlagHasBeenSet;
}

string VersionReplicaItem::GetErrorMsg() const
{
    return m_errorMsg;
}

void VersionReplicaItem::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool VersionReplicaItem::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

