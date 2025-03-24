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

#include <tencentcloud/chc/v20230418/model/WorkOrderTypeDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

WorkOrderTypeDetail::WorkOrderTypeDetail() :
    m_workOrderFamilyHasBeenSet(false),
    m_workOrderNameHasBeenSet(false),
    m_workOrderTypeHasBeenSet(false),
    m_workOrderDescriptionHasBeenSet(false),
    m_collectFlagHasBeenSet(false),
    m_slaMessageHasBeenSet(false)
{
}

CoreInternalOutcome WorkOrderTypeDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkOrderFamily") && !value["WorkOrderFamily"].IsNull())
    {
        if (!value["WorkOrderFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkOrderTypeDetail.WorkOrderFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workOrderFamily = string(value["WorkOrderFamily"].GetString());
        m_workOrderFamilyHasBeenSet = true;
    }

    if (value.HasMember("WorkOrderName") && !value["WorkOrderName"].IsNull())
    {
        if (!value["WorkOrderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkOrderTypeDetail.WorkOrderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workOrderName = string(value["WorkOrderName"].GetString());
        m_workOrderNameHasBeenSet = true;
    }

    if (value.HasMember("WorkOrderType") && !value["WorkOrderType"].IsNull())
    {
        if (!value["WorkOrderType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkOrderTypeDetail.WorkOrderType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workOrderType = string(value["WorkOrderType"].GetString());
        m_workOrderTypeHasBeenSet = true;
    }

    if (value.HasMember("WorkOrderDescription") && !value["WorkOrderDescription"].IsNull())
    {
        if (!value["WorkOrderDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkOrderTypeDetail.WorkOrderDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workOrderDescription = string(value["WorkOrderDescription"].GetString());
        m_workOrderDescriptionHasBeenSet = true;
    }

    if (value.HasMember("CollectFlag") && !value["CollectFlag"].IsNull())
    {
        if (!value["CollectFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WorkOrderTypeDetail.CollectFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_collectFlag = value["CollectFlag"].GetBool();
        m_collectFlagHasBeenSet = true;
    }

    if (value.HasMember("SlaMessage") && !value["SlaMessage"].IsNull())
    {
        if (!value["SlaMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkOrderTypeDetail.SlaMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slaMessage = string(value["SlaMessage"].GetString());
        m_slaMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkOrderTypeDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workOrderFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkOrderFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workOrderFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_workOrderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkOrderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workOrderName.c_str(), allocator).Move(), allocator);
    }

    if (m_workOrderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkOrderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workOrderType.c_str(), allocator).Move(), allocator);
    }

    if (m_workOrderDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkOrderDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workOrderDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_collectFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_collectFlag, allocator);
    }

    if (m_slaMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slaMessage.c_str(), allocator).Move(), allocator);
    }

}


string WorkOrderTypeDetail::GetWorkOrderFamily() const
{
    return m_workOrderFamily;
}

void WorkOrderTypeDetail::SetWorkOrderFamily(const string& _workOrderFamily)
{
    m_workOrderFamily = _workOrderFamily;
    m_workOrderFamilyHasBeenSet = true;
}

bool WorkOrderTypeDetail::WorkOrderFamilyHasBeenSet() const
{
    return m_workOrderFamilyHasBeenSet;
}

string WorkOrderTypeDetail::GetWorkOrderName() const
{
    return m_workOrderName;
}

void WorkOrderTypeDetail::SetWorkOrderName(const string& _workOrderName)
{
    m_workOrderName = _workOrderName;
    m_workOrderNameHasBeenSet = true;
}

bool WorkOrderTypeDetail::WorkOrderNameHasBeenSet() const
{
    return m_workOrderNameHasBeenSet;
}

string WorkOrderTypeDetail::GetWorkOrderType() const
{
    return m_workOrderType;
}

void WorkOrderTypeDetail::SetWorkOrderType(const string& _workOrderType)
{
    m_workOrderType = _workOrderType;
    m_workOrderTypeHasBeenSet = true;
}

bool WorkOrderTypeDetail::WorkOrderTypeHasBeenSet() const
{
    return m_workOrderTypeHasBeenSet;
}

string WorkOrderTypeDetail::GetWorkOrderDescription() const
{
    return m_workOrderDescription;
}

void WorkOrderTypeDetail::SetWorkOrderDescription(const string& _workOrderDescription)
{
    m_workOrderDescription = _workOrderDescription;
    m_workOrderDescriptionHasBeenSet = true;
}

bool WorkOrderTypeDetail::WorkOrderDescriptionHasBeenSet() const
{
    return m_workOrderDescriptionHasBeenSet;
}

bool WorkOrderTypeDetail::GetCollectFlag() const
{
    return m_collectFlag;
}

void WorkOrderTypeDetail::SetCollectFlag(const bool& _collectFlag)
{
    m_collectFlag = _collectFlag;
    m_collectFlagHasBeenSet = true;
}

bool WorkOrderTypeDetail::CollectFlagHasBeenSet() const
{
    return m_collectFlagHasBeenSet;
}

string WorkOrderTypeDetail::GetSlaMessage() const
{
    return m_slaMessage;
}

void WorkOrderTypeDetail::SetSlaMessage(const string& _slaMessage)
{
    m_slaMessage = _slaMessage;
    m_slaMessageHasBeenSet = true;
}

bool WorkOrderTypeDetail::SlaMessageHasBeenSet() const
{
    return m_slaMessageHasBeenSet;
}

