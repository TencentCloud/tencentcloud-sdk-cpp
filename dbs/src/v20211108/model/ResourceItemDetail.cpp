/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dbs/v20211108/model/ResourceItemDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

ResourceItemDetail::ResourceItemDetail() :
    m_tieredTypeHasBeenSet(false),
    m_stayTimeHasBeenSet(false)
{
}

CoreInternalOutcome ResourceItemDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TieredType") && !value["TieredType"].IsNull())
    {
        if (!value["TieredType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItemDetail.TieredType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tieredType = string(value["TieredType"].GetString());
        m_tieredTypeHasBeenSet = true;
    }

    if (value.HasMember("StayTime") && !value["StayTime"].IsNull())
    {
        if (!value["StayTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItemDetail.StayTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_stayTime = value["StayTime"].GetDouble();
        m_stayTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceItemDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tieredTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TieredType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tieredType.c_str(), allocator).Move(), allocator);
    }

    if (m_stayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stayTime, allocator);
    }

}


string ResourceItemDetail::GetTieredType() const
{
    return m_tieredType;
}

void ResourceItemDetail::SetTieredType(const string& _tieredType)
{
    m_tieredType = _tieredType;
    m_tieredTypeHasBeenSet = true;
}

bool ResourceItemDetail::TieredTypeHasBeenSet() const
{
    return m_tieredTypeHasBeenSet;
}

double ResourceItemDetail::GetStayTime() const
{
    return m_stayTime;
}

void ResourceItemDetail::SetStayTime(const double& _stayTime)
{
    m_stayTime = _stayTime;
    m_stayTimeHasBeenSet = true;
}

bool ResourceItemDetail::StayTimeHasBeenSet() const
{
    return m_stayTimeHasBeenSet;
}

