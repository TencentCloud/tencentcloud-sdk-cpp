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

#include <tencentcloud/igtm/v20231024/model/GroupLine.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

GroupLine::GroupLine() :
    m_dnsLineIdHasBeenSet(false),
    m_parentHasBeenSet(false),
    m_lineNameHasBeenSet(false),
    m_lineIdHasBeenSet(false),
    m_usefulHasBeenSet(false),
    m_subGroupHasBeenSet(false),
    m_linePackageHasBeenSet(false),
    m_weightHasBeenSet(false)
{
}

CoreInternalOutcome GroupLine::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DnsLineId") && !value["DnsLineId"].IsNull())
    {
        if (!value["DnsLineId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupLine.DnsLineId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dnsLineId = value["DnsLineId"].GetUint64();
        m_dnsLineIdHasBeenSet = true;
    }

    if (value.HasMember("Parent") && !value["Parent"].IsNull())
    {
        if (!value["Parent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupLine.Parent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_parent = value["Parent"].GetUint64();
        m_parentHasBeenSet = true;
    }

    if (value.HasMember("LineName") && !value["LineName"].IsNull())
    {
        if (!value["LineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupLine.LineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineName = string(value["LineName"].GetString());
        m_lineNameHasBeenSet = true;
    }

    if (value.HasMember("LineId") && !value["LineId"].IsNull())
    {
        if (!value["LineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupLine.LineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineId = string(value["LineId"].GetString());
        m_lineIdHasBeenSet = true;
    }

    if (value.HasMember("Useful") && !value["Useful"].IsNull())
    {
        if (!value["Useful"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GroupLine.Useful` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useful = value["Useful"].GetBool();
        m_usefulHasBeenSet = true;
    }

    if (value.HasMember("SubGroup") && !value["SubGroup"].IsNull())
    {
        if (!value["SubGroup"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupLine.SubGroup` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subGroup = value["SubGroup"].GetUint64();
        m_subGroupHasBeenSet = true;
    }

    if (value.HasMember("LinePackage") && !value["LinePackage"].IsNull())
    {
        if (!value["LinePackage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupLine.LinePackage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_linePackage = value["LinePackage"].GetUint64();
        m_linePackageHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupLine.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupLine::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dnsLineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsLineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dnsLineId, allocator);
    }

    if (m_parentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parent, allocator);
    }

    if (m_lineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineName.c_str(), allocator).Move(), allocator);
    }

    if (m_lineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineId.c_str(), allocator).Move(), allocator);
    }

    if (m_usefulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Useful";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useful, allocator);
    }

    if (m_subGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subGroup, allocator);
    }

    if (m_linePackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinePackage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_linePackage, allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

}


uint64_t GroupLine::GetDnsLineId() const
{
    return m_dnsLineId;
}

void GroupLine::SetDnsLineId(const uint64_t& _dnsLineId)
{
    m_dnsLineId = _dnsLineId;
    m_dnsLineIdHasBeenSet = true;
}

bool GroupLine::DnsLineIdHasBeenSet() const
{
    return m_dnsLineIdHasBeenSet;
}

uint64_t GroupLine::GetParent() const
{
    return m_parent;
}

void GroupLine::SetParent(const uint64_t& _parent)
{
    m_parent = _parent;
    m_parentHasBeenSet = true;
}

bool GroupLine::ParentHasBeenSet() const
{
    return m_parentHasBeenSet;
}

string GroupLine::GetLineName() const
{
    return m_lineName;
}

void GroupLine::SetLineName(const string& _lineName)
{
    m_lineName = _lineName;
    m_lineNameHasBeenSet = true;
}

bool GroupLine::LineNameHasBeenSet() const
{
    return m_lineNameHasBeenSet;
}

string GroupLine::GetLineId() const
{
    return m_lineId;
}

void GroupLine::SetLineId(const string& _lineId)
{
    m_lineId = _lineId;
    m_lineIdHasBeenSet = true;
}

bool GroupLine::LineIdHasBeenSet() const
{
    return m_lineIdHasBeenSet;
}

bool GroupLine::GetUseful() const
{
    return m_useful;
}

void GroupLine::SetUseful(const bool& _useful)
{
    m_useful = _useful;
    m_usefulHasBeenSet = true;
}

bool GroupLine::UsefulHasBeenSet() const
{
    return m_usefulHasBeenSet;
}

uint64_t GroupLine::GetSubGroup() const
{
    return m_subGroup;
}

void GroupLine::SetSubGroup(const uint64_t& _subGroup)
{
    m_subGroup = _subGroup;
    m_subGroupHasBeenSet = true;
}

bool GroupLine::SubGroupHasBeenSet() const
{
    return m_subGroupHasBeenSet;
}

uint64_t GroupLine::GetLinePackage() const
{
    return m_linePackage;
}

void GroupLine::SetLinePackage(const uint64_t& _linePackage)
{
    m_linePackage = _linePackage;
    m_linePackageHasBeenSet = true;
}

bool GroupLine::LinePackageHasBeenSet() const
{
    return m_linePackageHasBeenSet;
}

uint64_t GroupLine::GetWeight() const
{
    return m_weight;
}

void GroupLine::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool GroupLine::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

