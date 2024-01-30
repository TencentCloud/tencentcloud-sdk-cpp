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

#include <tencentcloud/csip/v20221121/model/PortRiskAdvanceCFGParamItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

PortRiskAdvanceCFGParamItem::PortRiskAdvanceCFGParamItem() :
    m_portSetsHasBeenSet(false),
    m_checkTypeHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_enableHasBeenSet(false)
{
}

CoreInternalOutcome PortRiskAdvanceCFGParamItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PortSets") && !value["PortSets"].IsNull())
    {
        if (!value["PortSets"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortRiskAdvanceCFGParamItem.PortSets` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portSets = string(value["PortSets"].GetString());
        m_portSetsHasBeenSet = true;
    }

    if (value.HasMember("CheckType") && !value["CheckType"].IsNull())
    {
        if (!value["CheckType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PortRiskAdvanceCFGParamItem.CheckType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkType = value["CheckType"].GetInt64();
        m_checkTypeHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortRiskAdvanceCFGParamItem.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PortRiskAdvanceCFGParamItem.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PortRiskAdvanceCFGParamItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_portSetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortSets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_portSets.c_str(), allocator).Move(), allocator);
    }

    if (m_checkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkType, allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

}


string PortRiskAdvanceCFGParamItem::GetPortSets() const
{
    return m_portSets;
}

void PortRiskAdvanceCFGParamItem::SetPortSets(const string& _portSets)
{
    m_portSets = _portSets;
    m_portSetsHasBeenSet = true;
}

bool PortRiskAdvanceCFGParamItem::PortSetsHasBeenSet() const
{
    return m_portSetsHasBeenSet;
}

int64_t PortRiskAdvanceCFGParamItem::GetCheckType() const
{
    return m_checkType;
}

void PortRiskAdvanceCFGParamItem::SetCheckType(const int64_t& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool PortRiskAdvanceCFGParamItem::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

string PortRiskAdvanceCFGParamItem::GetDetail() const
{
    return m_detail;
}

void PortRiskAdvanceCFGParamItem::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool PortRiskAdvanceCFGParamItem::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

int64_t PortRiskAdvanceCFGParamItem::GetEnable() const
{
    return m_enable;
}

void PortRiskAdvanceCFGParamItem::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool PortRiskAdvanceCFGParamItem::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

