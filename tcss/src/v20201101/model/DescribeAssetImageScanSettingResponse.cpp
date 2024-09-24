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

#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageScanSettingResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeAssetImageScanSettingResponse::DescribeAssetImageScanSettingResponse() :
    m_enableHasBeenSet(false),
    m_scanTimeHasBeenSet(false),
    m_scanPeriodHasBeenSet(false),
    m_scanVirusHasBeenSet(false),
    m_scanRiskHasBeenSet(false),
    m_scanVulHasBeenSet(false),
    m_allHasBeenSet(false),
    m_imagesHasBeenSet(false),
    m_containerRunningHasBeenSet(false),
    m_scanScopeHasBeenSet(false),
    m_scanEndTimeHasBeenSet(false),
    m_excludeImagesHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_scanResultHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetImageScanSettingResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Enable") && !rsp["Enable"].IsNull())
    {
        if (!rsp["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = rsp["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (rsp.HasMember("ScanTime") && !rsp["ScanTime"].IsNull())
    {
        if (!rsp["ScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanTime = string(rsp["ScanTime"].GetString());
        m_scanTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ScanPeriod") && !rsp["ScanPeriod"].IsNull())
    {
        if (!rsp["ScanPeriod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanPeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanPeriod = rsp["ScanPeriod"].GetUint64();
        m_scanPeriodHasBeenSet = true;
    }

    if (rsp.HasMember("ScanVirus") && !rsp["ScanVirus"].IsNull())
    {
        if (!rsp["ScanVirus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScanVirus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scanVirus = rsp["ScanVirus"].GetBool();
        m_scanVirusHasBeenSet = true;
    }

    if (rsp.HasMember("ScanRisk") && !rsp["ScanRisk"].IsNull())
    {
        if (!rsp["ScanRisk"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScanRisk` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scanRisk = rsp["ScanRisk"].GetBool();
        m_scanRiskHasBeenSet = true;
    }

    if (rsp.HasMember("ScanVul") && !rsp["ScanVul"].IsNull())
    {
        if (!rsp["ScanVul"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScanVul` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scanVul = rsp["ScanVul"].GetBool();
        m_scanVulHasBeenSet = true;
    }

    if (rsp.HasMember("All") && !rsp["All"].IsNull())
    {
        if (!rsp["All"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `All` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_all = rsp["All"].GetBool();
        m_allHasBeenSet = true;
    }

    if (rsp.HasMember("Images") && !rsp["Images"].IsNull())
    {
        if (!rsp["Images"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Images` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Images"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_images.push_back((*itr).GetString());
        }
        m_imagesHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerRunning") && !rsp["ContainerRunning"].IsNull())
    {
        if (!rsp["ContainerRunning"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerRunning` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_containerRunning = rsp["ContainerRunning"].GetBool();
        m_containerRunningHasBeenSet = true;
    }

    if (rsp.HasMember("ScanScope") && !rsp["ScanScope"].IsNull())
    {
        if (!rsp["ScanScope"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanScope` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanScope = rsp["ScanScope"].GetUint64();
        m_scanScopeHasBeenSet = true;
    }

    if (rsp.HasMember("ScanEndTime") && !rsp["ScanEndTime"].IsNull())
    {
        if (!rsp["ScanEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanEndTime = string(rsp["ScanEndTime"].GetString());
        m_scanEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExcludeImages") && !rsp["ExcludeImages"].IsNull())
    {
        if (!rsp["ExcludeImages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExcludeImages` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ExcludeImages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeImages.push_back((*itr).GetString());
        }
        m_excludeImagesHasBeenSet = true;
    }

    if (rsp.HasMember("LastScanTime") && !rsp["LastScanTime"].IsNull())
    {
        if (!rsp["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(rsp["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ScanResult") && !rsp["ScanResult"].IsNull())
    {
        if (!rsp["ScanResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanResult = string(rsp["ScanResult"].GetString());
        m_scanResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAssetImageScanSettingResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_scanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scanPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanPeriod, allocator);
    }

    if (m_scanVirusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanVirus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanVirus, allocator);
    }

    if (m_scanRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanRisk, allocator);
    }

    if (m_scanVulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanVul";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanVul, allocator);
    }

    if (m_allHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "All";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_all, allocator);
    }

    if (m_imagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Images";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_images.begin(); itr != m_images.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_containerRunningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerRunning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerRunning, allocator);
    }

    if (m_scanScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanScope, allocator);
    }

    if (m_scanEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_excludeImagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeImages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeImages.begin(); itr != m_excludeImages.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scanResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanResult.c_str(), allocator).Move(), allocator);
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


bool DescribeAssetImageScanSettingResponse::GetEnable() const
{
    return m_enable;
}

bool DescribeAssetImageScanSettingResponse::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string DescribeAssetImageScanSettingResponse::GetScanTime() const
{
    return m_scanTime;
}

bool DescribeAssetImageScanSettingResponse::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}

uint64_t DescribeAssetImageScanSettingResponse::GetScanPeriod() const
{
    return m_scanPeriod;
}

bool DescribeAssetImageScanSettingResponse::ScanPeriodHasBeenSet() const
{
    return m_scanPeriodHasBeenSet;
}

bool DescribeAssetImageScanSettingResponse::GetScanVirus() const
{
    return m_scanVirus;
}

bool DescribeAssetImageScanSettingResponse::ScanVirusHasBeenSet() const
{
    return m_scanVirusHasBeenSet;
}

bool DescribeAssetImageScanSettingResponse::GetScanRisk() const
{
    return m_scanRisk;
}

bool DescribeAssetImageScanSettingResponse::ScanRiskHasBeenSet() const
{
    return m_scanRiskHasBeenSet;
}

bool DescribeAssetImageScanSettingResponse::GetScanVul() const
{
    return m_scanVul;
}

bool DescribeAssetImageScanSettingResponse::ScanVulHasBeenSet() const
{
    return m_scanVulHasBeenSet;
}

bool DescribeAssetImageScanSettingResponse::GetAll() const
{
    return m_all;
}

bool DescribeAssetImageScanSettingResponse::AllHasBeenSet() const
{
    return m_allHasBeenSet;
}

vector<string> DescribeAssetImageScanSettingResponse::GetImages() const
{
    return m_images;
}

bool DescribeAssetImageScanSettingResponse::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

bool DescribeAssetImageScanSettingResponse::GetContainerRunning() const
{
    return m_containerRunning;
}

bool DescribeAssetImageScanSettingResponse::ContainerRunningHasBeenSet() const
{
    return m_containerRunningHasBeenSet;
}

uint64_t DescribeAssetImageScanSettingResponse::GetScanScope() const
{
    return m_scanScope;
}

bool DescribeAssetImageScanSettingResponse::ScanScopeHasBeenSet() const
{
    return m_scanScopeHasBeenSet;
}

string DescribeAssetImageScanSettingResponse::GetScanEndTime() const
{
    return m_scanEndTime;
}

bool DescribeAssetImageScanSettingResponse::ScanEndTimeHasBeenSet() const
{
    return m_scanEndTimeHasBeenSet;
}

vector<string> DescribeAssetImageScanSettingResponse::GetExcludeImages() const
{
    return m_excludeImages;
}

bool DescribeAssetImageScanSettingResponse::ExcludeImagesHasBeenSet() const
{
    return m_excludeImagesHasBeenSet;
}

string DescribeAssetImageScanSettingResponse::GetLastScanTime() const
{
    return m_lastScanTime;
}

bool DescribeAssetImageScanSettingResponse::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

string DescribeAssetImageScanSettingResponse::GetScanResult() const
{
    return m_scanResult;
}

bool DescribeAssetImageScanSettingResponse::ScanResultHasBeenSet() const
{
    return m_scanResultHasBeenSet;
}


