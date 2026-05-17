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

#include <tencentcloud/csip/v20221121/model/CosBucketInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosBucketInfo::CosBucketInfo() :
    m_appIdHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketRegionHasBeenSet(false),
    m_bucketRegionCodeHasBeenSet(false),
    m_bucketMarkerHasBeenSet(false)
{
}

CoreInternalOutcome CosBucketInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketInfo.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("BucketRegion") && !value["BucketRegion"].IsNull())
    {
        if (!value["BucketRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketInfo.BucketRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketRegion = string(value["BucketRegion"].GetString());
        m_bucketRegionHasBeenSet = true;
    }

    if (value.HasMember("BucketRegionCode") && !value["BucketRegionCode"].IsNull())
    {
        if (!value["BucketRegionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketInfo.BucketRegionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketRegionCode = string(value["BucketRegionCode"].GetString());
        m_bucketRegionCodeHasBeenSet = true;
    }

    if (value.HasMember("BucketMarker") && !value["BucketMarker"].IsNull())
    {
        if (!value["BucketMarker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketInfo.BucketMarker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketMarker = string(value["BucketMarker"].GetString());
        m_bucketMarkerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosBucketInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketRegionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketRegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketRegionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketMarkerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketMarker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketMarker.c_str(), allocator).Move(), allocator);
    }

}


int64_t CosBucketInfo::GetAppId() const
{
    return m_appId;
}

void CosBucketInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CosBucketInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CosBucketInfo::GetBucketName() const
{
    return m_bucketName;
}

void CosBucketInfo::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool CosBucketInfo::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string CosBucketInfo::GetBucketRegion() const
{
    return m_bucketRegion;
}

void CosBucketInfo::SetBucketRegion(const string& _bucketRegion)
{
    m_bucketRegion = _bucketRegion;
    m_bucketRegionHasBeenSet = true;
}

bool CosBucketInfo::BucketRegionHasBeenSet() const
{
    return m_bucketRegionHasBeenSet;
}

string CosBucketInfo::GetBucketRegionCode() const
{
    return m_bucketRegionCode;
}

void CosBucketInfo::SetBucketRegionCode(const string& _bucketRegionCode)
{
    m_bucketRegionCode = _bucketRegionCode;
    m_bucketRegionCodeHasBeenSet = true;
}

bool CosBucketInfo::BucketRegionCodeHasBeenSet() const
{
    return m_bucketRegionCodeHasBeenSet;
}

string CosBucketInfo::GetBucketMarker() const
{
    return m_bucketMarker;
}

void CosBucketInfo::SetBucketMarker(const string& _bucketMarker)
{
    m_bucketMarker = _bucketMarker;
    m_bucketMarkerHasBeenSet = true;
}

bool CosBucketInfo::BucketMarkerHasBeenSet() const
{
    return m_bucketMarkerHasBeenSet;
}

