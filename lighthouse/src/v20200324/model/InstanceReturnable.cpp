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

#include <tencentcloud/lighthouse/v20200324/model/InstanceReturnable.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

InstanceReturnable::InstanceReturnable() :
    m_instanceIdHasBeenSet(false),
    m_isReturnableHasBeenSet(false),
    m_returnFailCodeHasBeenSet(false),
    m_returnFailMessageHasBeenSet(false)
{
}

CoreInternalOutcome InstanceReturnable::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReturnable.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("IsReturnable") && !value["IsReturnable"].IsNull())
    {
        if (!value["IsReturnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReturnable.IsReturnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isReturnable = value["IsReturnable"].GetBool();
        m_isReturnableHasBeenSet = true;
    }

    if (value.HasMember("ReturnFailCode") && !value["ReturnFailCode"].IsNull())
    {
        if (!value["ReturnFailCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReturnable.ReturnFailCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_returnFailCode = value["ReturnFailCode"].GetInt64();
        m_returnFailCodeHasBeenSet = true;
    }

    if (value.HasMember("ReturnFailMessage") && !value["ReturnFailMessage"].IsNull())
    {
        if (!value["ReturnFailMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReturnable.ReturnFailMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnFailMessage = string(value["ReturnFailMessage"].GetString());
        m_returnFailMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceReturnable::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_isReturnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReturnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isReturnable, allocator);
    }

    if (m_returnFailCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnFailCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_returnFailCode, allocator);
    }

    if (m_returnFailMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnFailMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_returnFailMessage.c_str(), allocator).Move(), allocator);
    }

}


string InstanceReturnable::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceReturnable::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceReturnable::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool InstanceReturnable::GetIsReturnable() const
{
    return m_isReturnable;
}

void InstanceReturnable::SetIsReturnable(const bool& _isReturnable)
{
    m_isReturnable = _isReturnable;
    m_isReturnableHasBeenSet = true;
}

bool InstanceReturnable::IsReturnableHasBeenSet() const
{
    return m_isReturnableHasBeenSet;
}

int64_t InstanceReturnable::GetReturnFailCode() const
{
    return m_returnFailCode;
}

void InstanceReturnable::SetReturnFailCode(const int64_t& _returnFailCode)
{
    m_returnFailCode = _returnFailCode;
    m_returnFailCodeHasBeenSet = true;
}

bool InstanceReturnable::ReturnFailCodeHasBeenSet() const
{
    return m_returnFailCodeHasBeenSet;
}

string InstanceReturnable::GetReturnFailMessage() const
{
    return m_returnFailMessage;
}

void InstanceReturnable::SetReturnFailMessage(const string& _returnFailMessage)
{
    m_returnFailMessage = _returnFailMessage;
    m_returnFailMessageHasBeenSet = true;
}

bool InstanceReturnable::ReturnFailMessageHasBeenSet() const
{
    return m_returnFailMessageHasBeenSet;
}

