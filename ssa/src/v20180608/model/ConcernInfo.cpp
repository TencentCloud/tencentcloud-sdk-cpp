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

#include <tencentcloud/ssa/v20180608/model/ConcernInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

ConcernInfo::ConcernInfo() :
    m_concernTypeHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_concernHasBeenSet(false),
    m_statisticsCountHasBeenSet(false),
    m_ipCountryHasBeenSet(false),
    m_ipProvinceHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_ipIspHasBeenSet(false),
    m_ipInfrastructureHasBeenSet(false),
    m_threatTypeHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_victimAssetTypeHasBeenSet(false),
    m_victimAssetNameHasBeenSet(false),
    m_domainRegistrantHasBeenSet(false),
    m_domainRegisteredInstitutionHasBeenSet(false),
    m_domainRegistrationTimeHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileMd5HasBeenSet(false),
    m_virusNameHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_procNameHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_procPathHasBeenSet(false),
    m_procUserHasBeenSet(false),
    m_defendedCountHasBeenSet(false),
    m_detectedCountHasBeenSet(false),
    m_searchDataHasBeenSet(false),
    m_ipCountryIsoHasBeenSet(false),
    m_ipProvinceIsoHasBeenSet(false),
    m_ipCityHasBeenSet(false),
    m_eventSubTypeHasBeenSet(false)
{
}

CoreInternalOutcome ConcernInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConcernType") && !value["ConcernType"].IsNull())
    {
        if (!value["ConcernType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.ConcernType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_concernType = value["ConcernType"].GetInt64();
        m_concernTypeHasBeenSet = true;
    }

    if (value.HasMember("EntityType") && !value["EntityType"].IsNull())
    {
        if (!value["EntityType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.EntityType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_entityType = value["EntityType"].GetInt64();
        m_entityTypeHasBeenSet = true;
    }

    if (value.HasMember("Concern") && !value["Concern"].IsNull())
    {
        if (!value["Concern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.Concern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_concern = string(value["Concern"].GetString());
        m_concernHasBeenSet = true;
    }

    if (value.HasMember("StatisticsCount") && !value["StatisticsCount"].IsNull())
    {
        if (!value["StatisticsCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.StatisticsCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statisticsCount = value["StatisticsCount"].GetInt64();
        m_statisticsCountHasBeenSet = true;
    }

    if (value.HasMember("IpCountry") && !value["IpCountry"].IsNull())
    {
        if (!value["IpCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.IpCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipCountry = string(value["IpCountry"].GetString());
        m_ipCountryHasBeenSet = true;
    }

    if (value.HasMember("IpProvince") && !value["IpProvince"].IsNull())
    {
        if (!value["IpProvince"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.IpProvince` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipProvince = string(value["IpProvince"].GetString());
        m_ipProvinceHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("IpIsp") && !value["IpIsp"].IsNull())
    {
        if (!value["IpIsp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.IpIsp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipIsp = string(value["IpIsp"].GetString());
        m_ipIspHasBeenSet = true;
    }

    if (value.HasMember("IpInfrastructure") && !value["IpInfrastructure"].IsNull())
    {
        if (!value["IpInfrastructure"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.IpInfrastructure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipInfrastructure = string(value["IpInfrastructure"].GetString());
        m_ipInfrastructureHasBeenSet = true;
    }

    if (value.HasMember("ThreatType") && !value["ThreatType"].IsNull())
    {
        if (!value["ThreatType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.ThreatType` is not array type"));

        const rapidjson::Value &tmpValue = value["ThreatType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_threatType.push_back((*itr).GetString());
        }
        m_threatTypeHasBeenSet = true;
    }

    if (value.HasMember("Groups") && !value["Groups"].IsNull())
    {
        if (!value["Groups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.Groups` is not array type"));

        const rapidjson::Value &tmpValue = value["Groups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groups.push_back((*itr).GetString());
        }
        m_groupsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("VictimAssetType") && !value["VictimAssetType"].IsNull())
    {
        if (!value["VictimAssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.VictimAssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_victimAssetType = string(value["VictimAssetType"].GetString());
        m_victimAssetTypeHasBeenSet = true;
    }

    if (value.HasMember("VictimAssetName") && !value["VictimAssetName"].IsNull())
    {
        if (!value["VictimAssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.VictimAssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_victimAssetName = string(value["VictimAssetName"].GetString());
        m_victimAssetNameHasBeenSet = true;
    }

    if (value.HasMember("DomainRegistrant") && !value["DomainRegistrant"].IsNull())
    {
        if (!value["DomainRegistrant"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.DomainRegistrant` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainRegistrant = string(value["DomainRegistrant"].GetString());
        m_domainRegistrantHasBeenSet = true;
    }

    if (value.HasMember("DomainRegisteredInstitution") && !value["DomainRegisteredInstitution"].IsNull())
    {
        if (!value["DomainRegisteredInstitution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.DomainRegisteredInstitution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainRegisteredInstitution = string(value["DomainRegisteredInstitution"].GetString());
        m_domainRegisteredInstitutionHasBeenSet = true;
    }

    if (value.HasMember("DomainRegistrationTime") && !value["DomainRegistrationTime"].IsNull())
    {
        if (!value["DomainRegistrationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.DomainRegistrationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainRegistrationTime = string(value["DomainRegistrationTime"].GetString());
        m_domainRegistrationTimeHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileMd5") && !value["FileMd5"].IsNull())
    {
        if (!value["FileMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.FileMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMd5 = string(value["FileMd5"].GetString());
        m_fileMd5HasBeenSet = true;
    }

    if (value.HasMember("VirusName") && !value["VirusName"].IsNull())
    {
        if (!value["VirusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.VirusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusName = string(value["VirusName"].GetString());
        m_virusNameHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.FileSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = string(value["FileSize"].GetString());
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("ProcName") && !value["ProcName"].IsNull())
    {
        if (!value["ProcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.ProcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procName = string(value["ProcName"].GetString());
        m_procNameHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.Pid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pid = string(value["Pid"].GetString());
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("ProcPath") && !value["ProcPath"].IsNull())
    {
        if (!value["ProcPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.ProcPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procPath = string(value["ProcPath"].GetString());
        m_procPathHasBeenSet = true;
    }

    if (value.HasMember("ProcUser") && !value["ProcUser"].IsNull())
    {
        if (!value["ProcUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.ProcUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procUser = string(value["ProcUser"].GetString());
        m_procUserHasBeenSet = true;
    }

    if (value.HasMember("DefendedCount") && !value["DefendedCount"].IsNull())
    {
        if (!value["DefendedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.DefendedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_defendedCount = value["DefendedCount"].GetUint64();
        m_defendedCountHasBeenSet = true;
    }

    if (value.HasMember("DetectedCount") && !value["DetectedCount"].IsNull())
    {
        if (!value["DetectedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.DetectedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_detectedCount = value["DetectedCount"].GetUint64();
        m_detectedCountHasBeenSet = true;
    }

    if (value.HasMember("SearchData") && !value["SearchData"].IsNull())
    {
        if (!value["SearchData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.SearchData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_searchData = string(value["SearchData"].GetString());
        m_searchDataHasBeenSet = true;
    }

    if (value.HasMember("IpCountryIso") && !value["IpCountryIso"].IsNull())
    {
        if (!value["IpCountryIso"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.IpCountryIso` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipCountryIso = string(value["IpCountryIso"].GetString());
        m_ipCountryIsoHasBeenSet = true;
    }

    if (value.HasMember("IpProvinceIso") && !value["IpProvinceIso"].IsNull())
    {
        if (!value["IpProvinceIso"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.IpProvinceIso` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipProvinceIso = string(value["IpProvinceIso"].GetString());
        m_ipProvinceIsoHasBeenSet = true;
    }

    if (value.HasMember("IpCity") && !value["IpCity"].IsNull())
    {
        if (!value["IpCity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.IpCity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipCity = string(value["IpCity"].GetString());
        m_ipCityHasBeenSet = true;
    }

    if (value.HasMember("EventSubType") && !value["EventSubType"].IsNull())
    {
        if (!value["EventSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.EventSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventSubType = string(value["EventSubType"].GetString());
        m_eventSubTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConcernInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_concernTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcernType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concernType, allocator);
    }

    if (m_entityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_entityType, allocator);
    }

    if (m_concernHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Concern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_concern.c_str(), allocator).Move(), allocator);
    }

    if (m_statisticsCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticsCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statisticsCount, allocator);
    }

    if (m_ipCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_ipProvinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpProvince";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipProvince.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_ipIspHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpIsp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipIsp.c_str(), allocator).Move(), allocator);
    }

    if (m_ipInfrastructureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpInfrastructure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipInfrastructure.c_str(), allocator).Move(), allocator);
    }

    if (m_threatTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreatType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_threatType.begin(); itr != m_threatType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Groups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groups.begin(); itr != m_groups.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_victimAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VictimAssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_victimAssetType.c_str(), allocator).Move(), allocator);
    }

    if (m_victimAssetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VictimAssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_victimAssetName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainRegistrantHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainRegistrant";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainRegistrant.c_str(), allocator).Move(), allocator);
    }

    if (m_domainRegisteredInstitutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainRegisteredInstitution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainRegisteredInstitution.c_str(), allocator).Move(), allocator);
    }

    if (m_domainRegistrationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainRegistrationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainRegistrationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_virusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusName.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSize.c_str(), allocator).Move(), allocator);
    }

    if (m_procNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procName.c_str(), allocator).Move(), allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pid.c_str(), allocator).Move(), allocator);
    }

    if (m_procPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procPath.c_str(), allocator).Move(), allocator);
    }

    if (m_procUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procUser.c_str(), allocator).Move(), allocator);
    }

    if (m_defendedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defendedCount, allocator);
    }

    if (m_detectedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectedCount, allocator);
    }

    if (m_searchDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_searchData.c_str(), allocator).Move(), allocator);
    }

    if (m_ipCountryIsoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpCountryIso";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipCountryIso.c_str(), allocator).Move(), allocator);
    }

    if (m_ipProvinceIsoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpProvinceIso";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipProvinceIso.c_str(), allocator).Move(), allocator);
    }

    if (m_ipCityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpCity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipCity.c_str(), allocator).Move(), allocator);
    }

    if (m_eventSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventSubType.c_str(), allocator).Move(), allocator);
    }

}


int64_t ConcernInfo::GetConcernType() const
{
    return m_concernType;
}

void ConcernInfo::SetConcernType(const int64_t& _concernType)
{
    m_concernType = _concernType;
    m_concernTypeHasBeenSet = true;
}

bool ConcernInfo::ConcernTypeHasBeenSet() const
{
    return m_concernTypeHasBeenSet;
}

int64_t ConcernInfo::GetEntityType() const
{
    return m_entityType;
}

void ConcernInfo::SetEntityType(const int64_t& _entityType)
{
    m_entityType = _entityType;
    m_entityTypeHasBeenSet = true;
}

bool ConcernInfo::EntityTypeHasBeenSet() const
{
    return m_entityTypeHasBeenSet;
}

string ConcernInfo::GetConcern() const
{
    return m_concern;
}

void ConcernInfo::SetConcern(const string& _concern)
{
    m_concern = _concern;
    m_concernHasBeenSet = true;
}

bool ConcernInfo::ConcernHasBeenSet() const
{
    return m_concernHasBeenSet;
}

int64_t ConcernInfo::GetStatisticsCount() const
{
    return m_statisticsCount;
}

void ConcernInfo::SetStatisticsCount(const int64_t& _statisticsCount)
{
    m_statisticsCount = _statisticsCount;
    m_statisticsCountHasBeenSet = true;
}

bool ConcernInfo::StatisticsCountHasBeenSet() const
{
    return m_statisticsCountHasBeenSet;
}

string ConcernInfo::GetIpCountry() const
{
    return m_ipCountry;
}

void ConcernInfo::SetIpCountry(const string& _ipCountry)
{
    m_ipCountry = _ipCountry;
    m_ipCountryHasBeenSet = true;
}

bool ConcernInfo::IpCountryHasBeenSet() const
{
    return m_ipCountryHasBeenSet;
}

string ConcernInfo::GetIpProvince() const
{
    return m_ipProvince;
}

void ConcernInfo::SetIpProvince(const string& _ipProvince)
{
    m_ipProvince = _ipProvince;
    m_ipProvinceHasBeenSet = true;
}

bool ConcernInfo::IpProvinceHasBeenSet() const
{
    return m_ipProvinceHasBeenSet;
}

string ConcernInfo::GetResult() const
{
    return m_result;
}

void ConcernInfo::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool ConcernInfo::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

int64_t ConcernInfo::GetConfidence() const
{
    return m_confidence;
}

void ConcernInfo::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool ConcernInfo::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string ConcernInfo::GetIpIsp() const
{
    return m_ipIsp;
}

void ConcernInfo::SetIpIsp(const string& _ipIsp)
{
    m_ipIsp = _ipIsp;
    m_ipIspHasBeenSet = true;
}

bool ConcernInfo::IpIspHasBeenSet() const
{
    return m_ipIspHasBeenSet;
}

string ConcernInfo::GetIpInfrastructure() const
{
    return m_ipInfrastructure;
}

void ConcernInfo::SetIpInfrastructure(const string& _ipInfrastructure)
{
    m_ipInfrastructure = _ipInfrastructure;
    m_ipInfrastructureHasBeenSet = true;
}

bool ConcernInfo::IpInfrastructureHasBeenSet() const
{
    return m_ipInfrastructureHasBeenSet;
}

vector<string> ConcernInfo::GetThreatType() const
{
    return m_threatType;
}

void ConcernInfo::SetThreatType(const vector<string>& _threatType)
{
    m_threatType = _threatType;
    m_threatTypeHasBeenSet = true;
}

bool ConcernInfo::ThreatTypeHasBeenSet() const
{
    return m_threatTypeHasBeenSet;
}

vector<string> ConcernInfo::GetGroups() const
{
    return m_groups;
}

void ConcernInfo::SetGroups(const vector<string>& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool ConcernInfo::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

string ConcernInfo::GetStatus() const
{
    return m_status;
}

void ConcernInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ConcernInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> ConcernInfo::GetTags() const
{
    return m_tags;
}

void ConcernInfo::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ConcernInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ConcernInfo::GetVictimAssetType() const
{
    return m_victimAssetType;
}

void ConcernInfo::SetVictimAssetType(const string& _victimAssetType)
{
    m_victimAssetType = _victimAssetType;
    m_victimAssetTypeHasBeenSet = true;
}

bool ConcernInfo::VictimAssetTypeHasBeenSet() const
{
    return m_victimAssetTypeHasBeenSet;
}

string ConcernInfo::GetVictimAssetName() const
{
    return m_victimAssetName;
}

void ConcernInfo::SetVictimAssetName(const string& _victimAssetName)
{
    m_victimAssetName = _victimAssetName;
    m_victimAssetNameHasBeenSet = true;
}

bool ConcernInfo::VictimAssetNameHasBeenSet() const
{
    return m_victimAssetNameHasBeenSet;
}

string ConcernInfo::GetDomainRegistrant() const
{
    return m_domainRegistrant;
}

void ConcernInfo::SetDomainRegistrant(const string& _domainRegistrant)
{
    m_domainRegistrant = _domainRegistrant;
    m_domainRegistrantHasBeenSet = true;
}

bool ConcernInfo::DomainRegistrantHasBeenSet() const
{
    return m_domainRegistrantHasBeenSet;
}

string ConcernInfo::GetDomainRegisteredInstitution() const
{
    return m_domainRegisteredInstitution;
}

void ConcernInfo::SetDomainRegisteredInstitution(const string& _domainRegisteredInstitution)
{
    m_domainRegisteredInstitution = _domainRegisteredInstitution;
    m_domainRegisteredInstitutionHasBeenSet = true;
}

bool ConcernInfo::DomainRegisteredInstitutionHasBeenSet() const
{
    return m_domainRegisteredInstitutionHasBeenSet;
}

string ConcernInfo::GetDomainRegistrationTime() const
{
    return m_domainRegistrationTime;
}

void ConcernInfo::SetDomainRegistrationTime(const string& _domainRegistrationTime)
{
    m_domainRegistrationTime = _domainRegistrationTime;
    m_domainRegistrationTimeHasBeenSet = true;
}

bool ConcernInfo::DomainRegistrationTimeHasBeenSet() const
{
    return m_domainRegistrationTimeHasBeenSet;
}

string ConcernInfo::GetFileName() const
{
    return m_fileName;
}

void ConcernInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ConcernInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ConcernInfo::GetFileMd5() const
{
    return m_fileMd5;
}

void ConcernInfo::SetFileMd5(const string& _fileMd5)
{
    m_fileMd5 = _fileMd5;
    m_fileMd5HasBeenSet = true;
}

bool ConcernInfo::FileMd5HasBeenSet() const
{
    return m_fileMd5HasBeenSet;
}

string ConcernInfo::GetVirusName() const
{
    return m_virusName;
}

void ConcernInfo::SetVirusName(const string& _virusName)
{
    m_virusName = _virusName;
    m_virusNameHasBeenSet = true;
}

bool ConcernInfo::VirusNameHasBeenSet() const
{
    return m_virusNameHasBeenSet;
}

string ConcernInfo::GetFilePath() const
{
    return m_filePath;
}

void ConcernInfo::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool ConcernInfo::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string ConcernInfo::GetFileSize() const
{
    return m_fileSize;
}

void ConcernInfo::SetFileSize(const string& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool ConcernInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string ConcernInfo::GetProcName() const
{
    return m_procName;
}

void ConcernInfo::SetProcName(const string& _procName)
{
    m_procName = _procName;
    m_procNameHasBeenSet = true;
}

bool ConcernInfo::ProcNameHasBeenSet() const
{
    return m_procNameHasBeenSet;
}

string ConcernInfo::GetPid() const
{
    return m_pid;
}

void ConcernInfo::SetPid(const string& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool ConcernInfo::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string ConcernInfo::GetProcPath() const
{
    return m_procPath;
}

void ConcernInfo::SetProcPath(const string& _procPath)
{
    m_procPath = _procPath;
    m_procPathHasBeenSet = true;
}

bool ConcernInfo::ProcPathHasBeenSet() const
{
    return m_procPathHasBeenSet;
}

string ConcernInfo::GetProcUser() const
{
    return m_procUser;
}

void ConcernInfo::SetProcUser(const string& _procUser)
{
    m_procUser = _procUser;
    m_procUserHasBeenSet = true;
}

bool ConcernInfo::ProcUserHasBeenSet() const
{
    return m_procUserHasBeenSet;
}

uint64_t ConcernInfo::GetDefendedCount() const
{
    return m_defendedCount;
}

void ConcernInfo::SetDefendedCount(const uint64_t& _defendedCount)
{
    m_defendedCount = _defendedCount;
    m_defendedCountHasBeenSet = true;
}

bool ConcernInfo::DefendedCountHasBeenSet() const
{
    return m_defendedCountHasBeenSet;
}

uint64_t ConcernInfo::GetDetectedCount() const
{
    return m_detectedCount;
}

void ConcernInfo::SetDetectedCount(const uint64_t& _detectedCount)
{
    m_detectedCount = _detectedCount;
    m_detectedCountHasBeenSet = true;
}

bool ConcernInfo::DetectedCountHasBeenSet() const
{
    return m_detectedCountHasBeenSet;
}

string ConcernInfo::GetSearchData() const
{
    return m_searchData;
}

void ConcernInfo::SetSearchData(const string& _searchData)
{
    m_searchData = _searchData;
    m_searchDataHasBeenSet = true;
}

bool ConcernInfo::SearchDataHasBeenSet() const
{
    return m_searchDataHasBeenSet;
}

string ConcernInfo::GetIpCountryIso() const
{
    return m_ipCountryIso;
}

void ConcernInfo::SetIpCountryIso(const string& _ipCountryIso)
{
    m_ipCountryIso = _ipCountryIso;
    m_ipCountryIsoHasBeenSet = true;
}

bool ConcernInfo::IpCountryIsoHasBeenSet() const
{
    return m_ipCountryIsoHasBeenSet;
}

string ConcernInfo::GetIpProvinceIso() const
{
    return m_ipProvinceIso;
}

void ConcernInfo::SetIpProvinceIso(const string& _ipProvinceIso)
{
    m_ipProvinceIso = _ipProvinceIso;
    m_ipProvinceIsoHasBeenSet = true;
}

bool ConcernInfo::IpProvinceIsoHasBeenSet() const
{
    return m_ipProvinceIsoHasBeenSet;
}

string ConcernInfo::GetIpCity() const
{
    return m_ipCity;
}

void ConcernInfo::SetIpCity(const string& _ipCity)
{
    m_ipCity = _ipCity;
    m_ipCityHasBeenSet = true;
}

bool ConcernInfo::IpCityHasBeenSet() const
{
    return m_ipCityHasBeenSet;
}

string ConcernInfo::GetEventSubType() const
{
    return m_eventSubType;
}

void ConcernInfo::SetEventSubType(const string& _eventSubType)
{
    m_eventSubType = _eventSubType;
    m_eventSubTypeHasBeenSet = true;
}

bool ConcernInfo::EventSubTypeHasBeenSet() const
{
    return m_eventSubTypeHasBeenSet;
}

