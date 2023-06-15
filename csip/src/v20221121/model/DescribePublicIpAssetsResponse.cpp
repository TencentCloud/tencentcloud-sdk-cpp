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

#include <tencentcloud/csip/v20221121/model/DescribePublicIpAssetsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribePublicIpAssetsResponse::DescribePublicIpAssetsResponse() :
    m_dataHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_assetLocationListHasBeenSet(false),
    m_ipTypeListHasBeenSet(false),
    m_regionListHasBeenSet(false),
    m_defenseStatusListHasBeenSet(false),
    m_assetTypeListHasBeenSet(false),
    m_appIdListHasBeenSet(false)
{
}

CoreInternalOutcome DescribePublicIpAssetsResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Data` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IpAssetListVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("AssetLocationList") && !rsp["AssetLocationList"].IsNull())
    {
        if (!rsp["AssetLocationList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetLocationList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AssetLocationList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assetLocationList.push_back(item);
        }
        m_assetLocationListHasBeenSet = true;
    }

    if (rsp.HasMember("IpTypeList") && !rsp["IpTypeList"].IsNull())
    {
        if (!rsp["IpTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpTypeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["IpTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ipTypeList.push_back(item);
        }
        m_ipTypeListHasBeenSet = true;
    }

    if (rsp.HasMember("RegionList") && !rsp["RegionList"].IsNull())
    {
        if (!rsp["RegionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegionList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RegionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_regionList.push_back(item);
        }
        m_regionListHasBeenSet = true;
    }

    if (rsp.HasMember("DefenseStatusList") && !rsp["DefenseStatusList"].IsNull())
    {
        if (!rsp["DefenseStatusList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DefenseStatusList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DefenseStatusList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_defenseStatusList.push_back(item);
        }
        m_defenseStatusListHasBeenSet = true;
    }

    if (rsp.HasMember("AssetTypeList") && !rsp["AssetTypeList"].IsNull())
    {
        if (!rsp["AssetTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetTypeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AssetTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assetTypeList.push_back(item);
        }
        m_assetTypeListHasBeenSet = true;
    }

    if (rsp.HasMember("AppIdList") && !rsp["AppIdList"].IsNull())
    {
        if (!rsp["AppIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppIdList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AppIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_appIdList.push_back(item);
        }
        m_appIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePublicIpAssetsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_assetLocationListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetLocationList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assetLocationList.begin(); itr != m_assetLocationList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ipTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipTypeList.begin(); itr != m_ipTypeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_regionList.begin(); itr != m_regionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_defenseStatusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenseStatusList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_defenseStatusList.begin(); itr != m_defenseStatusList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_assetTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assetTypeList.begin(); itr != m_assetTypeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_appIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_appIdList.begin(); itr != m_appIdList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<IpAssetListVO> DescribePublicIpAssetsResponse::GetData() const
{
    return m_data;
}

bool DescribePublicIpAssetsResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

uint64_t DescribePublicIpAssetsResponse::GetTotal() const
{
    return m_total;
}

bool DescribePublicIpAssetsResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<FilterDataObject> DescribePublicIpAssetsResponse::GetAssetLocationList() const
{
    return m_assetLocationList;
}

bool DescribePublicIpAssetsResponse::AssetLocationListHasBeenSet() const
{
    return m_assetLocationListHasBeenSet;
}

vector<FilterDataObject> DescribePublicIpAssetsResponse::GetIpTypeList() const
{
    return m_ipTypeList;
}

bool DescribePublicIpAssetsResponse::IpTypeListHasBeenSet() const
{
    return m_ipTypeListHasBeenSet;
}

vector<FilterDataObject> DescribePublicIpAssetsResponse::GetRegionList() const
{
    return m_regionList;
}

bool DescribePublicIpAssetsResponse::RegionListHasBeenSet() const
{
    return m_regionListHasBeenSet;
}

vector<FilterDataObject> DescribePublicIpAssetsResponse::GetDefenseStatusList() const
{
    return m_defenseStatusList;
}

bool DescribePublicIpAssetsResponse::DefenseStatusListHasBeenSet() const
{
    return m_defenseStatusListHasBeenSet;
}

vector<FilterDataObject> DescribePublicIpAssetsResponse::GetAssetTypeList() const
{
    return m_assetTypeList;
}

bool DescribePublicIpAssetsResponse::AssetTypeListHasBeenSet() const
{
    return m_assetTypeListHasBeenSet;
}

vector<FilterDataObject> DescribePublicIpAssetsResponse::GetAppIdList() const
{
    return m_appIdList;
}

bool DescribePublicIpAssetsResponse::AppIdListHasBeenSet() const
{
    return m_appIdListHasBeenSet;
}


