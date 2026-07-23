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

#include <tencentcloud/cfw/v20190904/model/BlockInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

BlockInfo::BlockInfo() :
    m_srcIPHasBeenSet(false),
    m_dstIPHasBeenSet(false),
    m_dstPortHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_maxDateHasBeenSet(false),
    m_minDateHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_blockSourceHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_countHasBeenSet(false),
    m_avgCountHasBeenSet(false),
    m_isTopHasBeenSet(false),
    m_uniqueIdHasBeenSet(false),
    m_byPassHasBeenSet(false),
    m_blockHasBeenSet(false),
    m_ignoreHasBeenSet(false),
    m_whiteTagHasBeenSet(false),
    m_dstAssetIdHasBeenSet(false),
    m_dstAssetNameHasBeenSet(false),
    m_srcVpcHasBeenSet(false),
    m_srcVpcNameHasBeenSet(false),
    m_dstVpcHasBeenSet(false),
    m_dstVpcNameHasBeenSet(false),
    m_edgeIdHasBeenSet(false),
    m_edgeNameHasBeenSet(false),
    m_logSourceHasBeenSet(false),
    m_isolateHasBeenSet(false),
    m_hideHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

CoreInternalOutcome BlockInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SrcIP") && !value["SrcIP"].IsNull())
    {
        if (!value["SrcIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.SrcIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIP = string(value["SrcIP"].GetString());
        m_srcIPHasBeenSet = true;
    }

    if (value.HasMember("DstIP") && !value["DstIP"].IsNull())
    {
        if (!value["DstIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.DstIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstIP = string(value["DstIP"].GetString());
        m_dstIPHasBeenSet = true;
    }

    if (value.HasMember("DstPort") && !value["DstPort"].IsNull())
    {
        if (!value["DstPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.DstPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstPort = string(value["DstPort"].GetString());
        m_dstPortHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.AppID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appID = string(value["AppID"].GetString());
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("MaxDate") && !value["MaxDate"].IsNull())
    {
        if (!value["MaxDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.MaxDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxDate = string(value["MaxDate"].GetString());
        m_maxDateHasBeenSet = true;
    }

    if (value.HasMember("MinDate") && !value["MinDate"].IsNull())
    {
        if (!value["MinDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.MinDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minDate = string(value["MinDate"].GetString());
        m_minDateHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.Direction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_direction = value["Direction"].GetInt64();
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("BlockSource") && !value["BlockSource"].IsNull())
    {
        if (!value["BlockSource"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.BlockSource` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockSource = value["BlockSource"].GetInt64();
        m_blockSourceHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("AvgCount") && !value["AvgCount"].IsNull())
    {
        if (!value["AvgCount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.AvgCount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgCount = value["AvgCount"].GetDouble();
        m_avgCountHasBeenSet = true;
    }

    if (value.HasMember("IsTop") && !value["IsTop"].IsNull())
    {
        if (!value["IsTop"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.IsTop` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isTop = value["IsTop"].GetInt64();
        m_isTopHasBeenSet = true;
    }

    if (value.HasMember("UniqueId") && !value["UniqueId"].IsNull())
    {
        if (!value["UniqueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.UniqueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueId = string(value["UniqueId"].GetString());
        m_uniqueIdHasBeenSet = true;
    }

    if (value.HasMember("ByPass") && !value["ByPass"].IsNull())
    {
        if (!value["ByPass"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.ByPass` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_byPass = value["ByPass"].GetInt64();
        m_byPassHasBeenSet = true;
    }

    if (value.HasMember("Block") && !value["Block"].IsNull())
    {
        if (!value["Block"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.Block` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_block = value["Block"].GetInt64();
        m_blockHasBeenSet = true;
    }

    if (value.HasMember("Ignore") && !value["Ignore"].IsNull())
    {
        if (!value["Ignore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.Ignore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ignore = value["Ignore"].GetInt64();
        m_ignoreHasBeenSet = true;
    }

    if (value.HasMember("WhiteTag") && !value["WhiteTag"].IsNull())
    {
        if (!value["WhiteTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.WhiteTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_whiteTag = string(value["WhiteTag"].GetString());
        m_whiteTagHasBeenSet = true;
    }

    if (value.HasMember("DstAssetId") && !value["DstAssetId"].IsNull())
    {
        if (!value["DstAssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.DstAssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstAssetId = string(value["DstAssetId"].GetString());
        m_dstAssetIdHasBeenSet = true;
    }

    if (value.HasMember("DstAssetName") && !value["DstAssetName"].IsNull())
    {
        if (!value["DstAssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.DstAssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstAssetName = string(value["DstAssetName"].GetString());
        m_dstAssetNameHasBeenSet = true;
    }

    if (value.HasMember("SrcVpc") && !value["SrcVpc"].IsNull())
    {
        if (!value["SrcVpc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.SrcVpc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcVpc = string(value["SrcVpc"].GetString());
        m_srcVpcHasBeenSet = true;
    }

    if (value.HasMember("SrcVpcName") && !value["SrcVpcName"].IsNull())
    {
        if (!value["SrcVpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.SrcVpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcVpcName = string(value["SrcVpcName"].GetString());
        m_srcVpcNameHasBeenSet = true;
    }

    if (value.HasMember("DstVpc") && !value["DstVpc"].IsNull())
    {
        if (!value["DstVpc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.DstVpc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstVpc = string(value["DstVpc"].GetString());
        m_dstVpcHasBeenSet = true;
    }

    if (value.HasMember("DstVpcName") && !value["DstVpcName"].IsNull())
    {
        if (!value["DstVpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.DstVpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstVpcName = string(value["DstVpcName"].GetString());
        m_dstVpcNameHasBeenSet = true;
    }

    if (value.HasMember("EdgeId") && !value["EdgeId"].IsNull())
    {
        if (!value["EdgeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.EdgeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edgeId = string(value["EdgeId"].GetString());
        m_edgeIdHasBeenSet = true;
    }

    if (value.HasMember("EdgeName") && !value["EdgeName"].IsNull())
    {
        if (!value["EdgeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.EdgeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edgeName = string(value["EdgeName"].GetString());
        m_edgeNameHasBeenSet = true;
    }

    if (value.HasMember("LogSource") && !value["LogSource"].IsNull())
    {
        if (!value["LogSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.LogSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSource = string(value["LogSource"].GetString());
        m_logSourceHasBeenSet = true;
    }

    if (value.HasMember("Isolate") && !value["Isolate"].IsNull())
    {
        if (!value["Isolate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.Isolate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isolate = value["Isolate"].GetInt64();
        m_isolateHasBeenSet = true;
    }

    if (value.HasMember("Hide") && !value["Hide"].IsNull())
    {
        if (!value["Hide"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.Hide` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hide = value["Hide"].GetInt64();
        m_hideHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BlockInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_srcIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIP.c_str(), allocator).Move(), allocator);
    }

    if (m_dstIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstIP.c_str(), allocator).Move(), allocator);
    }

    if (m_dstPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstPort.c_str(), allocator).Move(), allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appID.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_maxDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxDate.c_str(), allocator).Move(), allocator);
    }

    if (m_minDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_minDate.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_direction, allocator);
    }

    if (m_blockSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockSource, allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_avgCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgCount, allocator);
    }

    if (m_isTopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTop, allocator);
    }

    if (m_uniqueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqueId.c_str(), allocator).Move(), allocator);
    }

    if (m_byPassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ByPass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_byPass, allocator);
    }

    if (m_blockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Block";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_block, allocator);
    }

    if (m_ignoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ignore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignore, allocator);
    }

    if (m_whiteTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_whiteTag.c_str(), allocator).Move(), allocator);
    }

    if (m_dstAssetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstAssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstAssetId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstAssetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstAssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstAssetName.c_str(), allocator).Move(), allocator);
    }

    if (m_srcVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcVpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcVpc.c_str(), allocator).Move(), allocator);
    }

    if (m_srcVpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcVpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcVpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_dstVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstVpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstVpc.c_str(), allocator).Move(), allocator);
    }

    if (m_dstVpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstVpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstVpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_edgeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edgeId.c_str(), allocator).Move(), allocator);
    }

    if (m_edgeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edgeName.c_str(), allocator).Move(), allocator);
    }

    if (m_logSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSource.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isolate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolate, allocator);
    }

    if (m_hideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hide, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

}


string BlockInfo::GetSrcIP() const
{
    return m_srcIP;
}

void BlockInfo::SetSrcIP(const string& _srcIP)
{
    m_srcIP = _srcIP;
    m_srcIPHasBeenSet = true;
}

bool BlockInfo::SrcIPHasBeenSet() const
{
    return m_srcIPHasBeenSet;
}

string BlockInfo::GetDstIP() const
{
    return m_dstIP;
}

void BlockInfo::SetDstIP(const string& _dstIP)
{
    m_dstIP = _dstIP;
    m_dstIPHasBeenSet = true;
}

bool BlockInfo::DstIPHasBeenSet() const
{
    return m_dstIPHasBeenSet;
}

string BlockInfo::GetDstPort() const
{
    return m_dstPort;
}

void BlockInfo::SetDstPort(const string& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool BlockInfo::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}

string BlockInfo::GetAppID() const
{
    return m_appID;
}

void BlockInfo::SetAppID(const string& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool BlockInfo::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string BlockInfo::GetAssetId() const
{
    return m_assetId;
}

void BlockInfo::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool BlockInfo::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string BlockInfo::GetAssetName() const
{
    return m_assetName;
}

void BlockInfo::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool BlockInfo::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string BlockInfo::GetZone() const
{
    return m_zone;
}

void BlockInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool BlockInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string BlockInfo::GetMaxDate() const
{
    return m_maxDate;
}

void BlockInfo::SetMaxDate(const string& _maxDate)
{
    m_maxDate = _maxDate;
    m_maxDateHasBeenSet = true;
}

bool BlockInfo::MaxDateHasBeenSet() const
{
    return m_maxDateHasBeenSet;
}

string BlockInfo::GetMinDate() const
{
    return m_minDate;
}

void BlockInfo::SetMinDate(const string& _minDate)
{
    m_minDate = _minDate;
    m_minDateHasBeenSet = true;
}

bool BlockInfo::MinDateHasBeenSet() const
{
    return m_minDateHasBeenSet;
}

int64_t BlockInfo::GetDirection() const
{
    return m_direction;
}

void BlockInfo::SetDirection(const int64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool BlockInfo::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

int64_t BlockInfo::GetBlockSource() const
{
    return m_blockSource;
}

void BlockInfo::SetBlockSource(const int64_t& _blockSource)
{
    m_blockSource = _blockSource;
    m_blockSourceHasBeenSet = true;
}

bool BlockInfo::BlockSourceHasBeenSet() const
{
    return m_blockSourceHasBeenSet;
}

string BlockInfo::GetCountry() const
{
    return m_country;
}

void BlockInfo::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool BlockInfo::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

int64_t BlockInfo::GetCount() const
{
    return m_count;
}

void BlockInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool BlockInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

double BlockInfo::GetAvgCount() const
{
    return m_avgCount;
}

void BlockInfo::SetAvgCount(const double& _avgCount)
{
    m_avgCount = _avgCount;
    m_avgCountHasBeenSet = true;
}

bool BlockInfo::AvgCountHasBeenSet() const
{
    return m_avgCountHasBeenSet;
}

int64_t BlockInfo::GetIsTop() const
{
    return m_isTop;
}

void BlockInfo::SetIsTop(const int64_t& _isTop)
{
    m_isTop = _isTop;
    m_isTopHasBeenSet = true;
}

bool BlockInfo::IsTopHasBeenSet() const
{
    return m_isTopHasBeenSet;
}

string BlockInfo::GetUniqueId() const
{
    return m_uniqueId;
}

void BlockInfo::SetUniqueId(const string& _uniqueId)
{
    m_uniqueId = _uniqueId;
    m_uniqueIdHasBeenSet = true;
}

bool BlockInfo::UniqueIdHasBeenSet() const
{
    return m_uniqueIdHasBeenSet;
}

int64_t BlockInfo::GetByPass() const
{
    return m_byPass;
}

void BlockInfo::SetByPass(const int64_t& _byPass)
{
    m_byPass = _byPass;
    m_byPassHasBeenSet = true;
}

bool BlockInfo::ByPassHasBeenSet() const
{
    return m_byPassHasBeenSet;
}

int64_t BlockInfo::GetBlock() const
{
    return m_block;
}

void BlockInfo::SetBlock(const int64_t& _block)
{
    m_block = _block;
    m_blockHasBeenSet = true;
}

bool BlockInfo::BlockHasBeenSet() const
{
    return m_blockHasBeenSet;
}

int64_t BlockInfo::GetIgnore() const
{
    return m_ignore;
}

void BlockInfo::SetIgnore(const int64_t& _ignore)
{
    m_ignore = _ignore;
    m_ignoreHasBeenSet = true;
}

bool BlockInfo::IgnoreHasBeenSet() const
{
    return m_ignoreHasBeenSet;
}

string BlockInfo::GetWhiteTag() const
{
    return m_whiteTag;
}

void BlockInfo::SetWhiteTag(const string& _whiteTag)
{
    m_whiteTag = _whiteTag;
    m_whiteTagHasBeenSet = true;
}

bool BlockInfo::WhiteTagHasBeenSet() const
{
    return m_whiteTagHasBeenSet;
}

string BlockInfo::GetDstAssetId() const
{
    return m_dstAssetId;
}

void BlockInfo::SetDstAssetId(const string& _dstAssetId)
{
    m_dstAssetId = _dstAssetId;
    m_dstAssetIdHasBeenSet = true;
}

bool BlockInfo::DstAssetIdHasBeenSet() const
{
    return m_dstAssetIdHasBeenSet;
}

string BlockInfo::GetDstAssetName() const
{
    return m_dstAssetName;
}

void BlockInfo::SetDstAssetName(const string& _dstAssetName)
{
    m_dstAssetName = _dstAssetName;
    m_dstAssetNameHasBeenSet = true;
}

bool BlockInfo::DstAssetNameHasBeenSet() const
{
    return m_dstAssetNameHasBeenSet;
}

string BlockInfo::GetSrcVpc() const
{
    return m_srcVpc;
}

void BlockInfo::SetSrcVpc(const string& _srcVpc)
{
    m_srcVpc = _srcVpc;
    m_srcVpcHasBeenSet = true;
}

bool BlockInfo::SrcVpcHasBeenSet() const
{
    return m_srcVpcHasBeenSet;
}

string BlockInfo::GetSrcVpcName() const
{
    return m_srcVpcName;
}

void BlockInfo::SetSrcVpcName(const string& _srcVpcName)
{
    m_srcVpcName = _srcVpcName;
    m_srcVpcNameHasBeenSet = true;
}

bool BlockInfo::SrcVpcNameHasBeenSet() const
{
    return m_srcVpcNameHasBeenSet;
}

string BlockInfo::GetDstVpc() const
{
    return m_dstVpc;
}

void BlockInfo::SetDstVpc(const string& _dstVpc)
{
    m_dstVpc = _dstVpc;
    m_dstVpcHasBeenSet = true;
}

bool BlockInfo::DstVpcHasBeenSet() const
{
    return m_dstVpcHasBeenSet;
}

string BlockInfo::GetDstVpcName() const
{
    return m_dstVpcName;
}

void BlockInfo::SetDstVpcName(const string& _dstVpcName)
{
    m_dstVpcName = _dstVpcName;
    m_dstVpcNameHasBeenSet = true;
}

bool BlockInfo::DstVpcNameHasBeenSet() const
{
    return m_dstVpcNameHasBeenSet;
}

string BlockInfo::GetEdgeId() const
{
    return m_edgeId;
}

void BlockInfo::SetEdgeId(const string& _edgeId)
{
    m_edgeId = _edgeId;
    m_edgeIdHasBeenSet = true;
}

bool BlockInfo::EdgeIdHasBeenSet() const
{
    return m_edgeIdHasBeenSet;
}

string BlockInfo::GetEdgeName() const
{
    return m_edgeName;
}

void BlockInfo::SetEdgeName(const string& _edgeName)
{
    m_edgeName = _edgeName;
    m_edgeNameHasBeenSet = true;
}

bool BlockInfo::EdgeNameHasBeenSet() const
{
    return m_edgeNameHasBeenSet;
}

string BlockInfo::GetLogSource() const
{
    return m_logSource;
}

void BlockInfo::SetLogSource(const string& _logSource)
{
    m_logSource = _logSource;
    m_logSourceHasBeenSet = true;
}

bool BlockInfo::LogSourceHasBeenSet() const
{
    return m_logSourceHasBeenSet;
}

int64_t BlockInfo::GetIsolate() const
{
    return m_isolate;
}

void BlockInfo::SetIsolate(const int64_t& _isolate)
{
    m_isolate = _isolate;
    m_isolateHasBeenSet = true;
}

bool BlockInfo::IsolateHasBeenSet() const
{
    return m_isolateHasBeenSet;
}

int64_t BlockInfo::GetHide() const
{
    return m_hide;
}

void BlockInfo::SetHide(const int64_t& _hide)
{
    m_hide = _hide;
    m_hideHasBeenSet = true;
}

bool BlockInfo::HideHasBeenSet() const
{
    return m_hideHasBeenSet;
}

string BlockInfo::GetDomain() const
{
    return m_domain;
}

void BlockInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool BlockInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

