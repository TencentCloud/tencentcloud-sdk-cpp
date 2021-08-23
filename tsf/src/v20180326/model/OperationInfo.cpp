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

#include <tencentcloud/tsf/v20180326/model/OperationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

OperationInfo::OperationInfo() :
    m_initHasBeenSet(false),
    m_addInstanceHasBeenSet(false),
    m_destroyHasBeenSet(false)
{
}

CoreInternalOutcome OperationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Init") && !value["Init"].IsNull())
    {
        if (!value["Init"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OperationInfo.Init` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_init.Deserialize(value["Init"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_initHasBeenSet = true;
    }

    if (value.HasMember("AddInstance") && !value["AddInstance"].IsNull())
    {
        if (!value["AddInstance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OperationInfo.AddInstance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_addInstance.Deserialize(value["AddInstance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_addInstanceHasBeenSet = true;
    }

    if (value.HasMember("Destroy") && !value["Destroy"].IsNull())
    {
        if (!value["Destroy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OperationInfo.Destroy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_destroy.Deserialize(value["Destroy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_destroyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OperationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_initHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Init";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_init.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_addInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_addInstance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_destroyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destroy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_destroy.ToJsonObject(value[key.c_str()], allocator);
    }

}


OperationInfoDetail OperationInfo::GetInit() const
{
    return m_init;
}

void OperationInfo::SetInit(const OperationInfoDetail& _init)
{
    m_init = _init;
    m_initHasBeenSet = true;
}

bool OperationInfo::InitHasBeenSet() const
{
    return m_initHasBeenSet;
}

OperationInfoDetail OperationInfo::GetAddInstance() const
{
    return m_addInstance;
}

void OperationInfo::SetAddInstance(const OperationInfoDetail& _addInstance)
{
    m_addInstance = _addInstance;
    m_addInstanceHasBeenSet = true;
}

bool OperationInfo::AddInstanceHasBeenSet() const
{
    return m_addInstanceHasBeenSet;
}

OperationInfoDetail OperationInfo::GetDestroy() const
{
    return m_destroy;
}

void OperationInfo::SetDestroy(const OperationInfoDetail& _destroy)
{
    m_destroy = _destroy;
    m_destroyHasBeenSet = true;
}

bool OperationInfo::DestroyHasBeenSet() const
{
    return m_destroyHasBeenSet;
}

