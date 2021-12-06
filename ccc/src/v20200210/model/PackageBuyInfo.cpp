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

#include <tencentcloud/ccc/v20200210/model/PackageBuyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

PackageBuyInfo::PackageBuyInfo() :
    m_packageIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_capacitySizeHasBeenSet(false),
    m_capacityRemainHasBeenSet(false),
    m_buyTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome PackageBuyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageBuyInfo.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageBuyInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CapacitySize") && !value["CapacitySize"].IsNull())
    {
        if (!value["CapacitySize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageBuyInfo.CapacitySize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_capacitySize = value["CapacitySize"].GetInt64();
        m_capacitySizeHasBeenSet = true;
    }

    if (value.HasMember("CapacityRemain") && !value["CapacityRemain"].IsNull())
    {
        if (!value["CapacityRemain"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageBuyInfo.CapacityRemain` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_capacityRemain = value["CapacityRemain"].GetInt64();
        m_capacityRemainHasBeenSet = true;
    }

    if (value.HasMember("BuyTime") && !value["BuyTime"].IsNull())
    {
        if (!value["BuyTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageBuyInfo.BuyTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_buyTime = value["BuyTime"].GetInt64();
        m_buyTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageBuyInfo.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PackageBuyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_capacitySizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacitySize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacitySize, allocator);
    }

    if (m_capacityRemainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityRemain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacityRemain, allocator);
    }

    if (m_buyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buyTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

}


string PackageBuyInfo::GetPackageId() const
{
    return m_packageId;
}

void PackageBuyInfo::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool PackageBuyInfo::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

int64_t PackageBuyInfo::GetType() const
{
    return m_type;
}

void PackageBuyInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PackageBuyInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t PackageBuyInfo::GetCapacitySize() const
{
    return m_capacitySize;
}

void PackageBuyInfo::SetCapacitySize(const int64_t& _capacitySize)
{
    m_capacitySize = _capacitySize;
    m_capacitySizeHasBeenSet = true;
}

bool PackageBuyInfo::CapacitySizeHasBeenSet() const
{
    return m_capacitySizeHasBeenSet;
}

int64_t PackageBuyInfo::GetCapacityRemain() const
{
    return m_capacityRemain;
}

void PackageBuyInfo::SetCapacityRemain(const int64_t& _capacityRemain)
{
    m_capacityRemain = _capacityRemain;
    m_capacityRemainHasBeenSet = true;
}

bool PackageBuyInfo::CapacityRemainHasBeenSet() const
{
    return m_capacityRemainHasBeenSet;
}

int64_t PackageBuyInfo::GetBuyTime() const
{
    return m_buyTime;
}

void PackageBuyInfo::SetBuyTime(const int64_t& _buyTime)
{
    m_buyTime = _buyTime;
    m_buyTimeHasBeenSet = true;
}

bool PackageBuyInfo::BuyTimeHasBeenSet() const
{
    return m_buyTimeHasBeenSet;
}

int64_t PackageBuyInfo::GetEndTime() const
{
    return m_endTime;
}

void PackageBuyInfo::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool PackageBuyInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

