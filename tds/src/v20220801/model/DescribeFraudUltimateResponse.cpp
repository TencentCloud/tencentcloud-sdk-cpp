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

#include <tencentcloud/tds/v20220801/model/DescribeFraudUltimateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tds::V20220801::Model;
using namespace std;

DescribeFraudUltimateResponse::DescribeFraudUltimateResponse() :
    m_appVersionHasBeenSet(false),
    m_brandHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_systemVersionHasBeenSet(false),
    m_sdkBuildNoHasBeenSet(false),
    m_riskInfosHasBeenSet(false),
    m_histRiskInfosHasBeenSet(false),
    m_openidHasBeenSet(false),
    m_sceneRiskInfosHasBeenSet(false),
    m_suggestionLevelHasBeenSet(false),
    m_unionidHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFraudUltimateResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AppVersion") && !rsp["AppVersion"].IsNull())
    {
        if (!rsp["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(rsp["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (rsp.HasMember("Brand") && !rsp["Brand"].IsNull())
    {
        if (!rsp["Brand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Brand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brand = string(rsp["Brand"].GetString());
        m_brandHasBeenSet = true;
    }

    if (rsp.HasMember("ClientIp") && !rsp["ClientIp"].IsNull())
    {
        if (!rsp["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(rsp["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (rsp.HasMember("Model") && !rsp["Model"].IsNull())
    {
        if (!rsp["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(rsp["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (rsp.HasMember("NetworkType") && !rsp["NetworkType"].IsNull())
    {
        if (!rsp["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(rsp["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (rsp.HasMember("PackageName") && !rsp["PackageName"].IsNull())
    {
        if (!rsp["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(rsp["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (rsp.HasMember("Platform") && !rsp["Platform"].IsNull())
    {
        if (!rsp["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(rsp["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (rsp.HasMember("SystemVersion") && !rsp["SystemVersion"].IsNull())
    {
        if (!rsp["SystemVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systemVersion = string(rsp["SystemVersion"].GetString());
        m_systemVersionHasBeenSet = true;
    }

    if (rsp.HasMember("SdkBuildNo") && !rsp["SdkBuildNo"].IsNull())
    {
        if (!rsp["SdkBuildNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SdkBuildNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkBuildNo = string(rsp["SdkBuildNo"].GetString());
        m_sdkBuildNoHasBeenSet = true;
    }

    if (rsp.HasMember("RiskInfos") && !rsp["RiskInfos"].IsNull())
    {
        if (!rsp["RiskInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RiskInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskInfos.push_back(item);
        }
        m_riskInfosHasBeenSet = true;
    }

    if (rsp.HasMember("HistRiskInfos") && !rsp["HistRiskInfos"].IsNull())
    {
        if (!rsp["HistRiskInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HistRiskInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["HistRiskInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_histRiskInfos.push_back(item);
        }
        m_histRiskInfosHasBeenSet = true;
    }

    if (rsp.HasMember("Openid") && !rsp["Openid"].IsNull())
    {
        if (!rsp["Openid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Openid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openid = string(rsp["Openid"].GetString());
        m_openidHasBeenSet = true;
    }

    if (rsp.HasMember("SceneRiskInfos") && !rsp["SceneRiskInfos"].IsNull())
    {
        if (!rsp["SceneRiskInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SceneRiskInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SceneRiskInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sceneRiskInfos.push_back(item);
        }
        m_sceneRiskInfosHasBeenSet = true;
    }

    if (rsp.HasMember("SuggestionLevel") && !rsp["SuggestionLevel"].IsNull())
    {
        if (!rsp["SuggestionLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SuggestionLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_suggestionLevel = rsp["SuggestionLevel"].GetUint64();
        m_suggestionLevelHasBeenSet = true;
    }

    if (rsp.HasMember("Unionid") && !rsp["Unionid"].IsNull())
    {
        if (!rsp["Unionid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Unionid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unionid = string(rsp["Unionid"].GetString());
        m_unionidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeFraudUltimateResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_brandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brand.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_systemVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_systemVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkBuildNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkBuildNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkBuildNo.c_str(), allocator).Move(), allocator);
    }

    if (m_riskInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskInfos.begin(); itr != m_riskInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_histRiskInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistRiskInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_histRiskInfos.begin(); itr != m_histRiskInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_openidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Openid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openid.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneRiskInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneRiskInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sceneRiskInfos.begin(); itr != m_sceneRiskInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_suggestionLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestionLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_suggestionLevel, allocator);
    }

    if (m_unionidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unionid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unionid.c_str(), allocator).Move(), allocator);
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


string DescribeFraudUltimateResponse::GetAppVersion() const
{
    return m_appVersion;
}

bool DescribeFraudUltimateResponse::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string DescribeFraudUltimateResponse::GetBrand() const
{
    return m_brand;
}

bool DescribeFraudUltimateResponse::BrandHasBeenSet() const
{
    return m_brandHasBeenSet;
}

string DescribeFraudUltimateResponse::GetClientIp() const
{
    return m_clientIp;
}

bool DescribeFraudUltimateResponse::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

string DescribeFraudUltimateResponse::GetModel() const
{
    return m_model;
}

bool DescribeFraudUltimateResponse::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string DescribeFraudUltimateResponse::GetNetworkType() const
{
    return m_networkType;
}

bool DescribeFraudUltimateResponse::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string DescribeFraudUltimateResponse::GetPackageName() const
{
    return m_packageName;
}

bool DescribeFraudUltimateResponse::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string DescribeFraudUltimateResponse::GetPlatform() const
{
    return m_platform;
}

bool DescribeFraudUltimateResponse::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeFraudUltimateResponse::GetSystemVersion() const
{
    return m_systemVersion;
}

bool DescribeFraudUltimateResponse::SystemVersionHasBeenSet() const
{
    return m_systemVersionHasBeenSet;
}

string DescribeFraudUltimateResponse::GetSdkBuildNo() const
{
    return m_sdkBuildNo;
}

bool DescribeFraudUltimateResponse::SdkBuildNoHasBeenSet() const
{
    return m_sdkBuildNoHasBeenSet;
}

vector<RiskInfo> DescribeFraudUltimateResponse::GetRiskInfos() const
{
    return m_riskInfos;
}

bool DescribeFraudUltimateResponse::RiskInfosHasBeenSet() const
{
    return m_riskInfosHasBeenSet;
}

vector<RiskInfo> DescribeFraudUltimateResponse::GetHistRiskInfos() const
{
    return m_histRiskInfos;
}

bool DescribeFraudUltimateResponse::HistRiskInfosHasBeenSet() const
{
    return m_histRiskInfosHasBeenSet;
}

string DescribeFraudUltimateResponse::GetOpenid() const
{
    return m_openid;
}

bool DescribeFraudUltimateResponse::OpenidHasBeenSet() const
{
    return m_openidHasBeenSet;
}

vector<RiskInfo> DescribeFraudUltimateResponse::GetSceneRiskInfos() const
{
    return m_sceneRiskInfos;
}

bool DescribeFraudUltimateResponse::SceneRiskInfosHasBeenSet() const
{
    return m_sceneRiskInfosHasBeenSet;
}

uint64_t DescribeFraudUltimateResponse::GetSuggestionLevel() const
{
    return m_suggestionLevel;
}

bool DescribeFraudUltimateResponse::SuggestionLevelHasBeenSet() const
{
    return m_suggestionLevelHasBeenSet;
}

string DescribeFraudUltimateResponse::GetUnionid() const
{
    return m_unionid;
}

bool DescribeFraudUltimateResponse::UnionidHasBeenSet() const
{
    return m_unionidHasBeenSet;
}


