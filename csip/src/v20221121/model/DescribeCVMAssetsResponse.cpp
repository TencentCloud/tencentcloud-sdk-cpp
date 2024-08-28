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

#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeCVMAssetsResponse::DescribeCVMAssetsResponse() :
    m_totalHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_regionListHasBeenSet(false),
    m_defenseStatusListHasBeenSet(false),
    m_vpcListHasBeenSet(false),
    m_assetTypeListHasBeenSet(false),
    m_systemTypeListHasBeenSet(false),
    m_ipTypeListHasBeenSet(false),
    m_appIdListHasBeenSet(false),
    m_zoneListHasBeenSet(false),
    m_osListHasBeenSet(false),
    m_assetMapInstanceTypeListHasBeenSet(false),
    m_publicPrivateAttrHasBeenSet(false),
    m_protectStatusListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCVMAssetsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Data` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CVMAssetVO item;
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

    if (rsp.HasMember("VpcList") && !rsp["VpcList"].IsNull())
    {
        if (!rsp["VpcList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpcList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VpcList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpcList.push_back(item);
        }
        m_vpcListHasBeenSet = true;
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

    if (rsp.HasMember("SystemTypeList") && !rsp["SystemTypeList"].IsNull())
    {
        if (!rsp["SystemTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SystemTypeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SystemTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_systemTypeList.push_back(item);
        }
        m_systemTypeListHasBeenSet = true;
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

    if (rsp.HasMember("ZoneList") && !rsp["ZoneList"].IsNull())
    {
        if (!rsp["ZoneList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ZoneList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_zoneList.push_back(item);
        }
        m_zoneListHasBeenSet = true;
    }

    if (rsp.HasMember("OsList") && !rsp["OsList"].IsNull())
    {
        if (!rsp["OsList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OsList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OsList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_osList.push_back(item);
        }
        m_osListHasBeenSet = true;
    }

    if (rsp.HasMember("AssetMapInstanceTypeList") && !rsp["AssetMapInstanceTypeList"].IsNull())
    {
        if (!rsp["AssetMapInstanceTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetMapInstanceTypeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AssetMapInstanceTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetInstanceTypeMap item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assetMapInstanceTypeList.push_back(item);
        }
        m_assetMapInstanceTypeListHasBeenSet = true;
    }

    if (rsp.HasMember("PublicPrivateAttr") && !rsp["PublicPrivateAttr"].IsNull())
    {
        if (!rsp["PublicPrivateAttr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PublicPrivateAttr` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PublicPrivateAttr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_publicPrivateAttr.push_back(item);
        }
        m_publicPrivateAttrHasBeenSet = true;
    }

    if (rsp.HasMember("ProtectStatusList") && !rsp["ProtectStatusList"].IsNull())
    {
        if (!rsp["ProtectStatusList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProtectStatusList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ProtectStatusList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_protectStatusList.push_back(item);
        }
        m_protectStatusListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCVMAssetsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

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

    if (m_vpcListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcList.begin(); itr != m_vpcList.end(); ++itr, ++i)
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

    if (m_systemTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_systemTypeList.begin(); itr != m_systemTypeList.end(); ++itr, ++i)
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

    if (m_zoneListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zoneList.begin(); itr != m_zoneList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_osListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_osList.begin(); itr != m_osList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_assetMapInstanceTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetMapInstanceTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assetMapInstanceTypeList.begin(); itr != m_assetMapInstanceTypeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_publicPrivateAttrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicPrivateAttr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_publicPrivateAttr.begin(); itr != m_publicPrivateAttr.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_protectStatusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectStatusList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protectStatusList.begin(); itr != m_protectStatusList.end(); ++itr, ++i)
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


uint64_t DescribeCVMAssetsResponse::GetTotal() const
{
    return m_total;
}

bool DescribeCVMAssetsResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<CVMAssetVO> DescribeCVMAssetsResponse::GetData() const
{
    return m_data;
}

bool DescribeCVMAssetsResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

vector<FilterDataObject> DescribeCVMAssetsResponse::GetRegionList() const
{
    return m_regionList;
}

bool DescribeCVMAssetsResponse::RegionListHasBeenSet() const
{
    return m_regionListHasBeenSet;
}

vector<FilterDataObject> DescribeCVMAssetsResponse::GetDefenseStatusList() const
{
    return m_defenseStatusList;
}

bool DescribeCVMAssetsResponse::DefenseStatusListHasBeenSet() const
{
    return m_defenseStatusListHasBeenSet;
}

vector<FilterDataObject> DescribeCVMAssetsResponse::GetVpcList() const
{
    return m_vpcList;
}

bool DescribeCVMAssetsResponse::VpcListHasBeenSet() const
{
    return m_vpcListHasBeenSet;
}

vector<FilterDataObject> DescribeCVMAssetsResponse::GetAssetTypeList() const
{
    return m_assetTypeList;
}

bool DescribeCVMAssetsResponse::AssetTypeListHasBeenSet() const
{
    return m_assetTypeListHasBeenSet;
}

vector<FilterDataObject> DescribeCVMAssetsResponse::GetSystemTypeList() const
{
    return m_systemTypeList;
}

bool DescribeCVMAssetsResponse::SystemTypeListHasBeenSet() const
{
    return m_systemTypeListHasBeenSet;
}

vector<FilterDataObject> DescribeCVMAssetsResponse::GetIpTypeList() const
{
    return m_ipTypeList;
}

bool DescribeCVMAssetsResponse::IpTypeListHasBeenSet() const
{
    return m_ipTypeListHasBeenSet;
}

vector<FilterDataObject> DescribeCVMAssetsResponse::GetAppIdList() const
{
    return m_appIdList;
}

bool DescribeCVMAssetsResponse::AppIdListHasBeenSet() const
{
    return m_appIdListHasBeenSet;
}

vector<FilterDataObject> DescribeCVMAssetsResponse::GetZoneList() const
{
    return m_zoneList;
}

bool DescribeCVMAssetsResponse::ZoneListHasBeenSet() const
{
    return m_zoneListHasBeenSet;
}

vector<FilterDataObject> DescribeCVMAssetsResponse::GetOsList() const
{
    return m_osList;
}

bool DescribeCVMAssetsResponse::OsListHasBeenSet() const
{
    return m_osListHasBeenSet;
}

vector<AssetInstanceTypeMap> DescribeCVMAssetsResponse::GetAssetMapInstanceTypeList() const
{
    return m_assetMapInstanceTypeList;
}

bool DescribeCVMAssetsResponse::AssetMapInstanceTypeListHasBeenSet() const
{
    return m_assetMapInstanceTypeListHasBeenSet;
}

vector<FilterDataObject> DescribeCVMAssetsResponse::GetPublicPrivateAttr() const
{
    return m_publicPrivateAttr;
}

bool DescribeCVMAssetsResponse::PublicPrivateAttrHasBeenSet() const
{
    return m_publicPrivateAttrHasBeenSet;
}

vector<FilterDataObject> DescribeCVMAssetsResponse::GetProtectStatusList() const
{
    return m_protectStatusList;
}

bool DescribeCVMAssetsResponse::ProtectStatusListHasBeenSet() const
{
    return m_protectStatusListHasBeenSet;
}


