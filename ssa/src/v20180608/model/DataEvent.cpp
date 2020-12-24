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

#include <tencentcloud/ssa/v20180608/model/DataEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace rapidjson;
using namespace std;

DataEvent::DataEvent() :
    m_oldIdMd5HasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_eventType1HasBeenSet(false),
    m_eventType2HasBeenSet(false),
    m_levelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_dstIpHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_dstportHasBeenSet(false),
    m_assetIpHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_ssaEventUniqidHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_idHasBeenSet(false),
    m_isAssetDeletedHasBeenSet(false),
    m_ssaSrcCountryHasBeenSet(false),
    m_ssaDstCountryHasBeenSet(false),
    m_ssaDescriptionHasBeenSet(false),
    m_ssaAttackChainHasBeenSet(false),
    m_ruleComponentsHasBeenSet(false),
    m_assetIpAllHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_publicIpAddressesHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_soarResponseStatusHasBeenSet(false),
    m_soarResponseTimeHasBeenSet(false),
    m_soarSuggestStatusHasBeenSet(false),
    m_soarPlaybookTypeHasBeenSet(false),
    m_soarRunIdHasBeenSet(false),
    m_ssaEventIdHasBeenSet(false)
{
}

CoreInternalOutcome DataEvent::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("OldIdMd5") && !value["OldIdMd5"].IsNull())
    {
        if (!value["OldIdMd5"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.OldIdMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldIdMd5 = string(value["OldIdMd5"].GetString());
        m_oldIdMd5HasBeenSet = true;
    }

    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("EventType1") && !value["EventType1"].IsNull())
    {
        if (!value["EventType1"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DataEvent.EventType1` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType1 = value["EventType1"].GetInt64();
        m_eventType1HasBeenSet = true;
    }

    if (value.HasMember("EventType2") && !value["EventType2"].IsNull())
    {
        if (!value["EventType2"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DataEvent.EventType2` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType2 = value["EventType2"].GetInt64();
        m_eventType2HasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DataEvent.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DataEvent.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("DstIp") && !value["DstIp"].IsNull())
    {
        if (!value["DstIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.DstIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstIp = string(value["DstIp"].GetString());
        m_dstIpHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Dstport") && !value["Dstport"].IsNull())
    {
        if (!value["Dstport"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DataEvent.Dstport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dstport = value["Dstport"].GetInt64();
        m_dstportHasBeenSet = true;
    }

    if (value.HasMember("AssetIp") && !value["AssetIp"].IsNull())
    {
        if (!value["AssetIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.AssetIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetIp = string(value["AssetIp"].GetString());
        m_assetIpHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("SsaEventUniqid") && !value["SsaEventUniqid"].IsNull())
    {
        if (!value["SsaEventUniqid"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.SsaEventUniqid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssaEventUniqid = string(value["SsaEventUniqid"].GetString());
        m_ssaEventUniqidHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("IsAssetDeleted") && !value["IsAssetDeleted"].IsNull())
    {
        if (!value["IsAssetDeleted"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.IsAssetDeleted` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isAssetDeleted = string(value["IsAssetDeleted"].GetString());
        m_isAssetDeletedHasBeenSet = true;
    }

    if (value.HasMember("SsaSrcCountry") && !value["SsaSrcCountry"].IsNull())
    {
        if (!value["SsaSrcCountry"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.SsaSrcCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssaSrcCountry = string(value["SsaSrcCountry"].GetString());
        m_ssaSrcCountryHasBeenSet = true;
    }

    if (value.HasMember("SsaDstCountry") && !value["SsaDstCountry"].IsNull())
    {
        if (!value["SsaDstCountry"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.SsaDstCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssaDstCountry = string(value["SsaDstCountry"].GetString());
        m_ssaDstCountryHasBeenSet = true;
    }

    if (value.HasMember("SsaDescription") && !value["SsaDescription"].IsNull())
    {
        if (!value["SsaDescription"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.SsaDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssaDescription = string(value["SsaDescription"].GetString());
        m_ssaDescriptionHasBeenSet = true;
    }

    if (value.HasMember("SsaAttackChain") && !value["SsaAttackChain"].IsNull())
    {
        if (!value["SsaAttackChain"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.SsaAttackChain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssaAttackChain = string(value["SsaAttackChain"].GetString());
        m_ssaAttackChainHasBeenSet = true;
    }

    if (value.HasMember("RuleComponents") && !value["RuleComponents"].IsNull())
    {
        if (!value["RuleComponents"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.RuleComponents` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleComponents = string(value["RuleComponents"].GetString());
        m_ruleComponentsHasBeenSet = true;
    }

    if (value.HasMember("AssetIpAll") && !value["AssetIpAll"].IsNull())
    {
        if (!value["AssetIpAll"].IsArray())
            return CoreInternalOutcome(Error("response `DataEvent.AssetIpAll` is not array type"));

        const Value &tmpValue = value["AssetIpAll"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_assetIpAll.push_back((*itr).GetString());
        }
        m_assetIpAllHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddresses") && !value["PublicIpAddresses"].IsNull())
    {
        if (!value["PublicIpAddresses"].IsArray())
            return CoreInternalOutcome(Error("response `DataEvent.PublicIpAddresses` is not array type"));

        const Value &tmpValue = value["PublicIpAddresses"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicIpAddresses.push_back((*itr).GetString());
        }
        m_publicIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddresses") && !value["PrivateIpAddresses"].IsNull())
    {
        if (!value["PrivateIpAddresses"].IsArray())
            return CoreInternalOutcome(Error("response `DataEvent.PrivateIpAddresses` is not array type"));

        const Value &tmpValue = value["PrivateIpAddresses"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateIpAddresses.push_back((*itr).GetString());
        }
        m_privateIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("SoarResponseStatus") && !value["SoarResponseStatus"].IsNull())
    {
        if (!value["SoarResponseStatus"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DataEvent.SoarResponseStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_soarResponseStatus = value["SoarResponseStatus"].GetInt64();
        m_soarResponseStatusHasBeenSet = true;
    }

    if (value.HasMember("SoarResponseTime") && !value["SoarResponseTime"].IsNull())
    {
        if (!value["SoarResponseTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DataEvent.SoarResponseTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_soarResponseTime = value["SoarResponseTime"].GetInt64();
        m_soarResponseTimeHasBeenSet = true;
    }

    if (value.HasMember("SoarSuggestStatus") && !value["SoarSuggestStatus"].IsNull())
    {
        if (!value["SoarSuggestStatus"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DataEvent.SoarSuggestStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_soarSuggestStatus = value["SoarSuggestStatus"].GetInt64();
        m_soarSuggestStatusHasBeenSet = true;
    }

    if (value.HasMember("SoarPlaybookType") && !value["SoarPlaybookType"].IsNull())
    {
        if (!value["SoarPlaybookType"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.SoarPlaybookType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_soarPlaybookType = string(value["SoarPlaybookType"].GetString());
        m_soarPlaybookTypeHasBeenSet = true;
    }

    if (value.HasMember("SoarRunId") && !value["SoarRunId"].IsNull())
    {
        if (!value["SoarRunId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.SoarRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_soarRunId = string(value["SoarRunId"].GetString());
        m_soarRunIdHasBeenSet = true;
    }

    if (value.HasMember("SsaEventId") && !value["SsaEventId"].IsNull())
    {
        if (!value["SsaEventId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataEvent.SsaEventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssaEventId = string(value["SsaEventId"].GetString());
        m_ssaEventIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataEvent::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_oldIdMd5HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OldIdMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_oldIdMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventType1HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EventType1";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType1, allocator);
    }

    if (m_eventType2HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EventType2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType2, allocator);
    }

    if (m_levelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_srcIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_dstIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DstIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dstIp.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_dstportHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Dstport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dstport, allocator);
    }

    if (m_assetIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AssetIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_assetIp.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_ssaEventUniqidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SsaEventUniqid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ssaEventUniqid.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_index.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_isAssetDeletedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsAssetDeleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_isAssetDeleted.c_str(), allocator).Move(), allocator);
    }

    if (m_ssaSrcCountryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SsaSrcCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ssaSrcCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_ssaDstCountryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SsaDstCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ssaDstCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_ssaDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SsaDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ssaDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_ssaAttackChainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SsaAttackChain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ssaAttackChain.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleComponentsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleComponents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ruleComponents.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIpAllHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AssetIpAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_assetIpAll.begin(); itr != m_assetIpAll.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assetTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpAddressesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PublicIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_publicIpAddresses.begin(); itr != m_publicIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_privateIpAddressesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PrivateIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_privateIpAddresses.begin(); itr != m_privateIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_soarResponseStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SoarResponseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_soarResponseStatus, allocator);
    }

    if (m_soarResponseTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SoarResponseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_soarResponseTime, allocator);
    }

    if (m_soarSuggestStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SoarSuggestStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_soarSuggestStatus, allocator);
    }

    if (m_soarPlaybookTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SoarPlaybookType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_soarPlaybookType.c_str(), allocator).Move(), allocator);
    }

    if (m_soarRunIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SoarRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_soarRunId.c_str(), allocator).Move(), allocator);
    }

    if (m_ssaEventIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SsaEventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ssaEventId.c_str(), allocator).Move(), allocator);
    }

}


string DataEvent::GetOldIdMd5() const
{
    return m_oldIdMd5;
}

void DataEvent::SetOldIdMd5(const string& _oldIdMd5)
{
    m_oldIdMd5 = _oldIdMd5;
    m_oldIdMd5HasBeenSet = true;
}

bool DataEvent::OldIdMd5HasBeenSet() const
{
    return m_oldIdMd5HasBeenSet;
}

string DataEvent::GetEventName() const
{
    return m_eventName;
}

void DataEvent::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool DataEvent::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

int64_t DataEvent::GetEventType1() const
{
    return m_eventType1;
}

void DataEvent::SetEventType1(const int64_t& _eventType1)
{
    m_eventType1 = _eventType1;
    m_eventType1HasBeenSet = true;
}

bool DataEvent::EventType1HasBeenSet() const
{
    return m_eventType1HasBeenSet;
}

int64_t DataEvent::GetEventType2() const
{
    return m_eventType2;
}

void DataEvent::SetEventType2(const int64_t& _eventType2)
{
    m_eventType2 = _eventType2;
    m_eventType2HasBeenSet = true;
}

bool DataEvent::EventType2HasBeenSet() const
{
    return m_eventType2HasBeenSet;
}

int64_t DataEvent::GetLevel() const
{
    return m_level;
}

void DataEvent::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DataEvent::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t DataEvent::GetStatus() const
{
    return m_status;
}

void DataEvent::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DataEvent::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DataEvent::GetSrcIp() const
{
    return m_srcIp;
}

void DataEvent::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool DataEvent::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

string DataEvent::GetDstIp() const
{
    return m_dstIp;
}

void DataEvent::SetDstIp(const string& _dstIp)
{
    m_dstIp = _dstIp;
    m_dstIpHasBeenSet = true;
}

bool DataEvent::DstIpHasBeenSet() const
{
    return m_dstIpHasBeenSet;
}

string DataEvent::GetTime() const
{
    return m_time;
}

void DataEvent::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool DataEvent::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

int64_t DataEvent::GetDstport() const
{
    return m_dstport;
}

void DataEvent::SetDstport(const int64_t& _dstport)
{
    m_dstport = _dstport;
    m_dstportHasBeenSet = true;
}

bool DataEvent::DstportHasBeenSet() const
{
    return m_dstportHasBeenSet;
}

string DataEvent::GetAssetIp() const
{
    return m_assetIp;
}

void DataEvent::SetAssetIp(const string& _assetIp)
{
    m_assetIp = _assetIp;
    m_assetIpHasBeenSet = true;
}

bool DataEvent::AssetIpHasBeenSet() const
{
    return m_assetIpHasBeenSet;
}

string DataEvent::GetAssetName() const
{
    return m_assetName;
}

void DataEvent::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool DataEvent::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string DataEvent::GetSsaEventUniqid() const
{
    return m_ssaEventUniqid;
}

void DataEvent::SetSsaEventUniqid(const string& _ssaEventUniqid)
{
    m_ssaEventUniqid = _ssaEventUniqid;
    m_ssaEventUniqidHasBeenSet = true;
}

bool DataEvent::SsaEventUniqidHasBeenSet() const
{
    return m_ssaEventUniqidHasBeenSet;
}

string DataEvent::GetAssetId() const
{
    return m_assetId;
}

void DataEvent::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DataEvent::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DataEvent::GetSource() const
{
    return m_source;
}

void DataEvent::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DataEvent::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string DataEvent::GetIndex() const
{
    return m_index;
}

void DataEvent::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool DataEvent::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string DataEvent::GetId() const
{
    return m_id;
}

void DataEvent::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DataEvent::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DataEvent::GetIsAssetDeleted() const
{
    return m_isAssetDeleted;
}

void DataEvent::SetIsAssetDeleted(const string& _isAssetDeleted)
{
    m_isAssetDeleted = _isAssetDeleted;
    m_isAssetDeletedHasBeenSet = true;
}

bool DataEvent::IsAssetDeletedHasBeenSet() const
{
    return m_isAssetDeletedHasBeenSet;
}

string DataEvent::GetSsaSrcCountry() const
{
    return m_ssaSrcCountry;
}

void DataEvent::SetSsaSrcCountry(const string& _ssaSrcCountry)
{
    m_ssaSrcCountry = _ssaSrcCountry;
    m_ssaSrcCountryHasBeenSet = true;
}

bool DataEvent::SsaSrcCountryHasBeenSet() const
{
    return m_ssaSrcCountryHasBeenSet;
}

string DataEvent::GetSsaDstCountry() const
{
    return m_ssaDstCountry;
}

void DataEvent::SetSsaDstCountry(const string& _ssaDstCountry)
{
    m_ssaDstCountry = _ssaDstCountry;
    m_ssaDstCountryHasBeenSet = true;
}

bool DataEvent::SsaDstCountryHasBeenSet() const
{
    return m_ssaDstCountryHasBeenSet;
}

string DataEvent::GetSsaDescription() const
{
    return m_ssaDescription;
}

void DataEvent::SetSsaDescription(const string& _ssaDescription)
{
    m_ssaDescription = _ssaDescription;
    m_ssaDescriptionHasBeenSet = true;
}

bool DataEvent::SsaDescriptionHasBeenSet() const
{
    return m_ssaDescriptionHasBeenSet;
}

string DataEvent::GetSsaAttackChain() const
{
    return m_ssaAttackChain;
}

void DataEvent::SetSsaAttackChain(const string& _ssaAttackChain)
{
    m_ssaAttackChain = _ssaAttackChain;
    m_ssaAttackChainHasBeenSet = true;
}

bool DataEvent::SsaAttackChainHasBeenSet() const
{
    return m_ssaAttackChainHasBeenSet;
}

string DataEvent::GetRuleComponents() const
{
    return m_ruleComponents;
}

void DataEvent::SetRuleComponents(const string& _ruleComponents)
{
    m_ruleComponents = _ruleComponents;
    m_ruleComponentsHasBeenSet = true;
}

bool DataEvent::RuleComponentsHasBeenSet() const
{
    return m_ruleComponentsHasBeenSet;
}

vector<string> DataEvent::GetAssetIpAll() const
{
    return m_assetIpAll;
}

void DataEvent::SetAssetIpAll(const vector<string>& _assetIpAll)
{
    m_assetIpAll = _assetIpAll;
    m_assetIpAllHasBeenSet = true;
}

bool DataEvent::AssetIpAllHasBeenSet() const
{
    return m_assetIpAllHasBeenSet;
}

string DataEvent::GetAssetType() const
{
    return m_assetType;
}

void DataEvent::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DataEvent::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

vector<string> DataEvent::GetPublicIpAddresses() const
{
    return m_publicIpAddresses;
}

void DataEvent::SetPublicIpAddresses(const vector<string>& _publicIpAddresses)
{
    m_publicIpAddresses = _publicIpAddresses;
    m_publicIpAddressesHasBeenSet = true;
}

bool DataEvent::PublicIpAddressesHasBeenSet() const
{
    return m_publicIpAddressesHasBeenSet;
}

vector<string> DataEvent::GetPrivateIpAddresses() const
{
    return m_privateIpAddresses;
}

void DataEvent::SetPrivateIpAddresses(const vector<string>& _privateIpAddresses)
{
    m_privateIpAddresses = _privateIpAddresses;
    m_privateIpAddressesHasBeenSet = true;
}

bool DataEvent::PrivateIpAddressesHasBeenSet() const
{
    return m_privateIpAddressesHasBeenSet;
}

int64_t DataEvent::GetSoarResponseStatus() const
{
    return m_soarResponseStatus;
}

void DataEvent::SetSoarResponseStatus(const int64_t& _soarResponseStatus)
{
    m_soarResponseStatus = _soarResponseStatus;
    m_soarResponseStatusHasBeenSet = true;
}

bool DataEvent::SoarResponseStatusHasBeenSet() const
{
    return m_soarResponseStatusHasBeenSet;
}

int64_t DataEvent::GetSoarResponseTime() const
{
    return m_soarResponseTime;
}

void DataEvent::SetSoarResponseTime(const int64_t& _soarResponseTime)
{
    m_soarResponseTime = _soarResponseTime;
    m_soarResponseTimeHasBeenSet = true;
}

bool DataEvent::SoarResponseTimeHasBeenSet() const
{
    return m_soarResponseTimeHasBeenSet;
}

int64_t DataEvent::GetSoarSuggestStatus() const
{
    return m_soarSuggestStatus;
}

void DataEvent::SetSoarSuggestStatus(const int64_t& _soarSuggestStatus)
{
    m_soarSuggestStatus = _soarSuggestStatus;
    m_soarSuggestStatusHasBeenSet = true;
}

bool DataEvent::SoarSuggestStatusHasBeenSet() const
{
    return m_soarSuggestStatusHasBeenSet;
}

string DataEvent::GetSoarPlaybookType() const
{
    return m_soarPlaybookType;
}

void DataEvent::SetSoarPlaybookType(const string& _soarPlaybookType)
{
    m_soarPlaybookType = _soarPlaybookType;
    m_soarPlaybookTypeHasBeenSet = true;
}

bool DataEvent::SoarPlaybookTypeHasBeenSet() const
{
    return m_soarPlaybookTypeHasBeenSet;
}

string DataEvent::GetSoarRunId() const
{
    return m_soarRunId;
}

void DataEvent::SetSoarRunId(const string& _soarRunId)
{
    m_soarRunId = _soarRunId;
    m_soarRunIdHasBeenSet = true;
}

bool DataEvent::SoarRunIdHasBeenSet() const
{
    return m_soarRunIdHasBeenSet;
}

string DataEvent::GetSsaEventId() const
{
    return m_ssaEventId;
}

void DataEvent::SetSsaEventId(const string& _ssaEventId)
{
    m_ssaEventId = _ssaEventId;
    m_ssaEventIdHasBeenSet = true;
}

bool DataEvent::SsaEventIdHasBeenSet() const
{
    return m_ssaEventIdHasBeenSet;
}

