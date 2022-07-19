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

#include <tencentcloud/iotvideo/v20211125/model/PackageConsumeStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

PackageConsumeStat::PackageConsumeStat() :
    m_packageIdHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_cntHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

CoreInternalOutcome PackageConsumeStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageConsumeStat.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageConsumeStat.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("Cnt") && !value["Cnt"].IsNull())
    {
        if (!value["Cnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageConsumeStat.Cnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cnt = value["Cnt"].GetUint64();
        m_cntHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageConsumeStat.Price` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_price = value["Price"].GetInt64();
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageConsumeStat.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PackageConsumeStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_cntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cnt, allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

}


string PackageConsumeStat::GetPackageId() const
{
    return m_packageId;
}

void PackageConsumeStat::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool PackageConsumeStat::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

string PackageConsumeStat::GetPackageName() const
{
    return m_packageName;
}

void PackageConsumeStat::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool PackageConsumeStat::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

uint64_t PackageConsumeStat::GetCnt() const
{
    return m_cnt;
}

void PackageConsumeStat::SetCnt(const uint64_t& _cnt)
{
    m_cnt = _cnt;
    m_cntHasBeenSet = true;
}

bool PackageConsumeStat::CntHasBeenSet() const
{
    return m_cntHasBeenSet;
}

int64_t PackageConsumeStat::GetPrice() const
{
    return m_price;
}

void PackageConsumeStat::SetPrice(const int64_t& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool PackageConsumeStat::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

int64_t PackageConsumeStat::GetSource() const
{
    return m_source;
}

void PackageConsumeStat::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool PackageConsumeStat::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

