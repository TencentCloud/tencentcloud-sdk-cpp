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

#include <tencentcloud/csip/v20221121/model/DescribeAgentConfigSettingResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeAgentConfigSettingResponse::DescribeAgentConfigSettingResponse() :
    m_enhanceLogModeHasBeenSet(false),
    m_malwarePocModeHasBeenSet(false),
    m_reportSourcePortHasBeenSet(false),
    m_logCollectSettingsHasBeenSet(false),
    m_assetSelectionTypeHasBeenSet(false),
    m_tagIdsHasBeenSet(false),
    m_instanceIDsHasBeenSet(false),
    m_excludeInstanceIDsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAgentConfigSettingResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EnhanceLogMode") && !rsp["EnhanceLogMode"].IsNull())
    {
        if (!rsp["EnhanceLogMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EnhanceLogMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enhanceLogMode = rsp["EnhanceLogMode"].GetUint64();
        m_enhanceLogModeHasBeenSet = true;
    }

    if (rsp.HasMember("MalwarePocMode") && !rsp["MalwarePocMode"].IsNull())
    {
        if (!rsp["MalwarePocMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MalwarePocMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_malwarePocMode = rsp["MalwarePocMode"].GetUint64();
        m_malwarePocModeHasBeenSet = true;
    }

    if (rsp.HasMember("ReportSourcePort") && !rsp["ReportSourcePort"].IsNull())
    {
        if (!rsp["ReportSourcePort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportSourcePort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reportSourcePort = rsp["ReportSourcePort"].GetUint64();
        m_reportSourcePortHasBeenSet = true;
    }

    if (rsp.HasMember("LogCollectSettings") && !rsp["LogCollectSettings"].IsNull())
    {
        if (!rsp["LogCollectSettings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogCollectSettings` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LogCollectSettings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_logCollectSettings.push_back((*itr).GetString());
        }
        m_logCollectSettingsHasBeenSet = true;
    }

    if (rsp.HasMember("AssetSelectionType") && !rsp["AssetSelectionType"].IsNull())
    {
        if (!rsp["AssetSelectionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetSelectionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetSelectionType = string(rsp["AssetSelectionType"].GetString());
        m_assetSelectionTypeHasBeenSet = true;
    }

    if (rsp.HasMember("TagIds") && !rsp["TagIds"].IsNull())
    {
        if (!rsp["TagIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TagIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TagIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagIds.push_back((*itr).GetString());
        }
        m_tagIdsHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceIDs") && !rsp["InstanceIDs"].IsNull())
    {
        if (!rsp["InstanceIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceIDs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIDs.push_back((*itr).GetString());
        }
        m_instanceIDsHasBeenSet = true;
    }

    if (rsp.HasMember("ExcludeInstanceIDs") && !rsp["ExcludeInstanceIDs"].IsNull())
    {
        if (!rsp["ExcludeInstanceIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExcludeInstanceIDs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ExcludeInstanceIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeInstanceIDs.push_back((*itr).GetString());
        }
        m_excludeInstanceIDsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAgentConfigSettingResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_enhanceLogModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhanceLogMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enhanceLogMode, allocator);
    }

    if (m_malwarePocModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MalwarePocMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_malwarePocMode, allocator);
    }

    if (m_reportSourcePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportSourcePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportSourcePort, allocator);
    }

    if (m_logCollectSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogCollectSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logCollectSettings.begin(); itr != m_logCollectSettings.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assetSelectionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetSelectionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetSelectionType.c_str(), allocator).Move(), allocator);
    }

    if (m_tagIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIds.begin(); itr != m_tagIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIDs.begin(); itr != m_instanceIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeInstanceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeInstanceIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeInstanceIDs.begin(); itr != m_excludeInstanceIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


uint64_t DescribeAgentConfigSettingResponse::GetEnhanceLogMode() const
{
    return m_enhanceLogMode;
}

bool DescribeAgentConfigSettingResponse::EnhanceLogModeHasBeenSet() const
{
    return m_enhanceLogModeHasBeenSet;
}

uint64_t DescribeAgentConfigSettingResponse::GetMalwarePocMode() const
{
    return m_malwarePocMode;
}

bool DescribeAgentConfigSettingResponse::MalwarePocModeHasBeenSet() const
{
    return m_malwarePocModeHasBeenSet;
}

uint64_t DescribeAgentConfigSettingResponse::GetReportSourcePort() const
{
    return m_reportSourcePort;
}

bool DescribeAgentConfigSettingResponse::ReportSourcePortHasBeenSet() const
{
    return m_reportSourcePortHasBeenSet;
}

vector<string> DescribeAgentConfigSettingResponse::GetLogCollectSettings() const
{
    return m_logCollectSettings;
}

bool DescribeAgentConfigSettingResponse::LogCollectSettingsHasBeenSet() const
{
    return m_logCollectSettingsHasBeenSet;
}

string DescribeAgentConfigSettingResponse::GetAssetSelectionType() const
{
    return m_assetSelectionType;
}

bool DescribeAgentConfigSettingResponse::AssetSelectionTypeHasBeenSet() const
{
    return m_assetSelectionTypeHasBeenSet;
}

vector<string> DescribeAgentConfigSettingResponse::GetTagIds() const
{
    return m_tagIds;
}

bool DescribeAgentConfigSettingResponse::TagIdsHasBeenSet() const
{
    return m_tagIdsHasBeenSet;
}

vector<string> DescribeAgentConfigSettingResponse::GetInstanceIDs() const
{
    return m_instanceIDs;
}

bool DescribeAgentConfigSettingResponse::InstanceIDsHasBeenSet() const
{
    return m_instanceIDsHasBeenSet;
}

vector<string> DescribeAgentConfigSettingResponse::GetExcludeInstanceIDs() const
{
    return m_excludeInstanceIDs;
}

bool DescribeAgentConfigSettingResponse::ExcludeInstanceIDsHasBeenSet() const
{
    return m_excludeInstanceIDsHasBeenSet;
}


