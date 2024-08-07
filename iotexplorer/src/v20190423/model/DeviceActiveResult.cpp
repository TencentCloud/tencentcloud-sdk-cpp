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

#include <tencentcloud/iotexplorer/v20190423/model/DeviceActiveResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DeviceActiveResult::DeviceActiveResult() :
    m_modelIdHasBeenSet(false),
    m_snHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome DeviceActiveResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceActiveResult.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("Sn") && !value["Sn"].IsNull())
    {
        if (!value["Sn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceActiveResult.Sn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sn = string(value["Sn"].GetString());
        m_snHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceActiveResult.ErrCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetUint64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceActiveResult.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceActiveResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_snHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sn.c_str(), allocator).Move(), allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

}


string DeviceActiveResult::GetModelId() const
{
    return m_modelId;
}

void DeviceActiveResult::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool DeviceActiveResult::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string DeviceActiveResult::GetSn() const
{
    return m_sn;
}

void DeviceActiveResult::SetSn(const string& _sn)
{
    m_sn = _sn;
    m_snHasBeenSet = true;
}

bool DeviceActiveResult::SnHasBeenSet() const
{
    return m_snHasBeenSet;
}

uint64_t DeviceActiveResult::GetErrCode() const
{
    return m_errCode;
}

void DeviceActiveResult::SetErrCode(const uint64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool DeviceActiveResult::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

int64_t DeviceActiveResult::GetExpireTime() const
{
    return m_expireTime;
}

void DeviceActiveResult::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DeviceActiveResult::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

