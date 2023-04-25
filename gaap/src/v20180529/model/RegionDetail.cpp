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

#include <tencentcloud/gaap/v20180529/model/RegionDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

RegionDetail::RegionDetail() :
    m_regionIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_regionAreaHasBeenSet(false),
    m_regionAreaNameHasBeenSet(false),
    m_iDCTypeHasBeenSet(false),
    m_featureBitmapHasBeenSet(false),
    m_supportFeatureHasBeenSet(false)
{
}

CoreInternalOutcome RegionDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionDetail.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionDetail.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("RegionArea") && !value["RegionArea"].IsNull())
    {
        if (!value["RegionArea"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionDetail.RegionArea` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionArea = string(value["RegionArea"].GetString());
        m_regionAreaHasBeenSet = true;
    }

    if (value.HasMember("RegionAreaName") && !value["RegionAreaName"].IsNull())
    {
        if (!value["RegionAreaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionDetail.RegionAreaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionAreaName = string(value["RegionAreaName"].GetString());
        m_regionAreaNameHasBeenSet = true;
    }

    if (value.HasMember("IDCType") && !value["IDCType"].IsNull())
    {
        if (!value["IDCType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionDetail.IDCType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iDCType = string(value["IDCType"].GetString());
        m_iDCTypeHasBeenSet = true;
    }

    if (value.HasMember("FeatureBitmap") && !value["FeatureBitmap"].IsNull())
    {
        if (!value["FeatureBitmap"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionDetail.FeatureBitmap` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_featureBitmap = value["FeatureBitmap"].GetUint64();
        m_featureBitmapHasBeenSet = true;
    }

    if (value.HasMember("SupportFeature") && !value["SupportFeature"].IsNull())
    {
        if (!value["SupportFeature"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RegionDetail.SupportFeature` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_supportFeature.Deserialize(value["SupportFeature"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_supportFeatureHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionArea.c_str(), allocator).Move(), allocator);
    }

    if (m_regionAreaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionAreaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionAreaName.c_str(), allocator).Move(), allocator);
    }

    if (m_iDCTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDCType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iDCType.c_str(), allocator).Move(), allocator);
    }

    if (m_featureBitmapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureBitmap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_featureBitmap, allocator);
    }

    if (m_supportFeatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportFeature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_supportFeature.ToJsonObject(value[key.c_str()], allocator);
    }

}


string RegionDetail::GetRegionId() const
{
    return m_regionId;
}

void RegionDetail::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool RegionDetail::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string RegionDetail::GetRegionName() const
{
    return m_regionName;
}

void RegionDetail::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool RegionDetail::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string RegionDetail::GetRegionArea() const
{
    return m_regionArea;
}

void RegionDetail::SetRegionArea(const string& _regionArea)
{
    m_regionArea = _regionArea;
    m_regionAreaHasBeenSet = true;
}

bool RegionDetail::RegionAreaHasBeenSet() const
{
    return m_regionAreaHasBeenSet;
}

string RegionDetail::GetRegionAreaName() const
{
    return m_regionAreaName;
}

void RegionDetail::SetRegionAreaName(const string& _regionAreaName)
{
    m_regionAreaName = _regionAreaName;
    m_regionAreaNameHasBeenSet = true;
}

bool RegionDetail::RegionAreaNameHasBeenSet() const
{
    return m_regionAreaNameHasBeenSet;
}

string RegionDetail::GetIDCType() const
{
    return m_iDCType;
}

void RegionDetail::SetIDCType(const string& _iDCType)
{
    m_iDCType = _iDCType;
    m_iDCTypeHasBeenSet = true;
}

bool RegionDetail::IDCTypeHasBeenSet() const
{
    return m_iDCTypeHasBeenSet;
}

uint64_t RegionDetail::GetFeatureBitmap() const
{
    return m_featureBitmap;
}

void RegionDetail::SetFeatureBitmap(const uint64_t& _featureBitmap)
{
    m_featureBitmap = _featureBitmap;
    m_featureBitmapHasBeenSet = true;
}

bool RegionDetail::FeatureBitmapHasBeenSet() const
{
    return m_featureBitmapHasBeenSet;
}

SupportFeature RegionDetail::GetSupportFeature() const
{
    return m_supportFeature;
}

void RegionDetail::SetSupportFeature(const SupportFeature& _supportFeature)
{
    m_supportFeature = _supportFeature;
    m_supportFeatureHasBeenSet = true;
}

bool RegionDetail::SupportFeatureHasBeenSet() const
{
    return m_supportFeatureHasBeenSet;
}

