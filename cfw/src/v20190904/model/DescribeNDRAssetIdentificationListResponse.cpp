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

#include <tencentcloud/cfw/v20190904/model/DescribeNDRAssetIdentificationListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeNDRAssetIdentificationListResponse::DescribeNDRAssetIdentificationListResponse() :
    m_totalHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_assetCategoryStatsHasBeenSet(false),
    m_regionOptionsHasBeenSet(false),
    m_ipVersionOptionsHasBeenSet(false),
    m_ipTypeOptionsHasBeenSet(false),
    m_assetCategoryOptionsHasBeenSet(false),
    m_identificationSourceOptionsHasBeenSet(false),
    m_protocolOptionsHasBeenSet(false),
    m_instanceTypeOptionsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNDRAssetIdentificationListResponse::Deserialize(const string &payload)
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
            NDRAssetServiceInfo item;
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

    if (rsp.HasMember("AssetCategoryStats") && !rsp["AssetCategoryStats"].IsNull())
    {
        if (!rsp["AssetCategoryStats"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetCategoryStats` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AssetCategoryStats"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NDRAssetCategoryStats item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assetCategoryStats.push_back(item);
        }
        m_assetCategoryStatsHasBeenSet = true;
    }

    if (rsp.HasMember("RegionOptions") && !rsp["RegionOptions"].IsNull())
    {
        if (!rsp["RegionOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegionOptions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RegionOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_regionOptions.push_back(item);
        }
        m_regionOptionsHasBeenSet = true;
    }

    if (rsp.HasMember("IpVersionOptions") && !rsp["IpVersionOptions"].IsNull())
    {
        if (!rsp["IpVersionOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpVersionOptions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["IpVersionOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ipVersionOptions.push_back(item);
        }
        m_ipVersionOptionsHasBeenSet = true;
    }

    if (rsp.HasMember("IpTypeOptions") && !rsp["IpTypeOptions"].IsNull())
    {
        if (!rsp["IpTypeOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpTypeOptions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["IpTypeOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ipTypeOptions.push_back(item);
        }
        m_ipTypeOptionsHasBeenSet = true;
    }

    if (rsp.HasMember("AssetCategoryOptions") && !rsp["AssetCategoryOptions"].IsNull())
    {
        if (!rsp["AssetCategoryOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetCategoryOptions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AssetCategoryOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assetCategoryOptions.push_back(item);
        }
        m_assetCategoryOptionsHasBeenSet = true;
    }

    if (rsp.HasMember("IdentificationSourceOptions") && !rsp["IdentificationSourceOptions"].IsNull())
    {
        if (!rsp["IdentificationSourceOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IdentificationSourceOptions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["IdentificationSourceOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_identificationSourceOptions.push_back(item);
        }
        m_identificationSourceOptionsHasBeenSet = true;
    }

    if (rsp.HasMember("ProtocolOptions") && !rsp["ProtocolOptions"].IsNull())
    {
        if (!rsp["ProtocolOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProtocolOptions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ProtocolOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_protocolOptions.push_back(item);
        }
        m_protocolOptionsHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceTypeOptions") && !rsp["InstanceTypeOptions"].IsNull())
    {
        if (!rsp["InstanceTypeOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceTypeOptions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceTypeOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceTypeOptions.push_back(item);
        }
        m_instanceTypeOptionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNDRAssetIdentificationListResponse::ToJsonString() const
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

    if (m_assetCategoryStatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCategoryStats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assetCategoryStats.begin(); itr != m_assetCategoryStats.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_regionOptions.begin(); itr != m_regionOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ipVersionOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpVersionOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipVersionOptions.begin(); itr != m_ipVersionOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ipTypeOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpTypeOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipTypeOptions.begin(); itr != m_ipTypeOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_assetCategoryOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCategoryOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assetCategoryOptions.begin(); itr != m_assetCategoryOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_identificationSourceOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentificationSourceOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_identificationSourceOptions.begin(); itr != m_identificationSourceOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_protocolOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protocolOptions.begin(); itr != m_protocolOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceTypeOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypeOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceTypeOptions.begin(); itr != m_instanceTypeOptions.end(); ++itr, ++i)
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


uint64_t DescribeNDRAssetIdentificationListResponse::GetTotal() const
{
    return m_total;
}

bool DescribeNDRAssetIdentificationListResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<NDRAssetServiceInfo> DescribeNDRAssetIdentificationListResponse::GetData() const
{
    return m_data;
}

bool DescribeNDRAssetIdentificationListResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

vector<NDRAssetCategoryStats> DescribeNDRAssetIdentificationListResponse::GetAssetCategoryStats() const
{
    return m_assetCategoryStats;
}

bool DescribeNDRAssetIdentificationListResponse::AssetCategoryStatsHasBeenSet() const
{
    return m_assetCategoryStatsHasBeenSet;
}

vector<FieldOption> DescribeNDRAssetIdentificationListResponse::GetRegionOptions() const
{
    return m_regionOptions;
}

bool DescribeNDRAssetIdentificationListResponse::RegionOptionsHasBeenSet() const
{
    return m_regionOptionsHasBeenSet;
}

vector<FieldOption> DescribeNDRAssetIdentificationListResponse::GetIpVersionOptions() const
{
    return m_ipVersionOptions;
}

bool DescribeNDRAssetIdentificationListResponse::IpVersionOptionsHasBeenSet() const
{
    return m_ipVersionOptionsHasBeenSet;
}

vector<FieldOption> DescribeNDRAssetIdentificationListResponse::GetIpTypeOptions() const
{
    return m_ipTypeOptions;
}

bool DescribeNDRAssetIdentificationListResponse::IpTypeOptionsHasBeenSet() const
{
    return m_ipTypeOptionsHasBeenSet;
}

vector<FieldOption> DescribeNDRAssetIdentificationListResponse::GetAssetCategoryOptions() const
{
    return m_assetCategoryOptions;
}

bool DescribeNDRAssetIdentificationListResponse::AssetCategoryOptionsHasBeenSet() const
{
    return m_assetCategoryOptionsHasBeenSet;
}

vector<FieldOption> DescribeNDRAssetIdentificationListResponse::GetIdentificationSourceOptions() const
{
    return m_identificationSourceOptions;
}

bool DescribeNDRAssetIdentificationListResponse::IdentificationSourceOptionsHasBeenSet() const
{
    return m_identificationSourceOptionsHasBeenSet;
}

vector<FieldOption> DescribeNDRAssetIdentificationListResponse::GetProtocolOptions() const
{
    return m_protocolOptions;
}

bool DescribeNDRAssetIdentificationListResponse::ProtocolOptionsHasBeenSet() const
{
    return m_protocolOptionsHasBeenSet;
}

vector<FieldOption> DescribeNDRAssetIdentificationListResponse::GetInstanceTypeOptions() const
{
    return m_instanceTypeOptions;
}

bool DescribeNDRAssetIdentificationListResponse::InstanceTypeOptionsHasBeenSet() const
{
    return m_instanceTypeOptionsHasBeenSet;
}


