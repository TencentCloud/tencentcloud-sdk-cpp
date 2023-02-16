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

#include <tencentcloud/tem/v20210701/model/TemServiceVersionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

TemServiceVersionInfo::TemServiceVersionInfo() :
    m_versionIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_jdkVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_deployVersionHasBeenSet(false),
    m_publishModeHasBeenSet(false),
    m_jvmOptsHasBeenSet(false),
    m_initPodNumHasBeenSet(false),
    m_cpuSpecHasBeenSet(false),
    m_memorySpecHasBeenSet(false),
    m_imgRepoHasBeenSet(false),
    m_imgNameHasBeenSet(false),
    m_imgVersionHasBeenSet(false),
    m_esInfoHasBeenSet(false),
    m_envConfHasBeenSet(false),
    m_storageConfsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vpcHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_modifyDateHasBeenSet(false),
    m_storageMountConfsHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_logOutputConfHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationDescriptionHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_publicDomainHasBeenSet(false),
    m_enablePublicAccessHasBeenSet(false),
    m_currentInstancesHasBeenSet(false),
    m_expectedInstancesHasBeenSet(false),
    m_codingLanguageHasBeenSet(false),
    m_pkgNameHasBeenSet(false),
    m_esEnableHasBeenSet(false),
    m_esStrategyHasBeenSet(false),
    m_imageTagHasBeenSet(false),
    m_logEnableHasBeenSet(false),
    m_minAliveInstancesHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_imageCommandHasBeenSet(false),
    m_imageArgsHasBeenSet(false),
    m_useRegistryDefaultConfigHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_settingConfsHasBeenSet(false),
    m_logConfsHasBeenSet(false),
    m_postStartHasBeenSet(false),
    m_preStopHasBeenSet(false),
    m_livenessHasBeenSet(false),
    m_readinessHasBeenSet(false),
    m_horizontalAutoscalerHasBeenSet(false),
    m_cronHorizontalAutoscalerHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_lastDeployDateHasBeenSet(false),
    m_lastDeploySuccessDateHasBeenSet(false),
    m_nodeInfosHasBeenSet(false),
    m_imageTypeHasBeenSet(false),
    m_enableTracingHasBeenSet(false),
    m_enableTracingReportHasBeenSet(false),
    m_repoTypeHasBeenSet(false),
    m_batchDeployStatusHasBeenSet(false),
    m_apmInstanceIdHasBeenSet(false),
    m_workloadInfoHasBeenSet(false),
    m_speedUpHasBeenSet(false),
    m_startupProbeHasBeenSet(false),
    m_osFlavourHasBeenSet(false),
    m_repoServerHasBeenSet(false),
    m_underDeployingHasBeenSet(false),
    m_enablePrometheusConfHasBeenSet(false),
    m_stoppedManuallyHasBeenSet(false),
    m_tcrInstanceIdHasBeenSet(false),
    m_enableMetricsHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_enableRegistryHasBeenSet(false),
    m_autoscalerListHasBeenSet(false),
    m_modifierHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_deployStrategyConfHasBeenSet(false),
    m_podListHasBeenSet(false),
    m_confEditedHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_preStopEncodedHasBeenSet(false),
    m_postStartEncodedHasBeenSet(false)
{
}

CoreInternalOutcome TemServiceVersionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(value["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("DeployMode") && !value["DeployMode"].IsNull())
    {
        if (!value["DeployMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.DeployMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployMode = string(value["DeployMode"].GetString());
        m_deployModeHasBeenSet = true;
    }

    if (value.HasMember("JdkVersion") && !value["JdkVersion"].IsNull())
    {
        if (!value["JdkVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.JdkVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jdkVersion = string(value["JdkVersion"].GetString());
        m_jdkVersionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DeployVersion") && !value["DeployVersion"].IsNull())
    {
        if (!value["DeployVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.DeployVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployVersion = string(value["DeployVersion"].GetString());
        m_deployVersionHasBeenSet = true;
    }

    if (value.HasMember("PublishMode") && !value["PublishMode"].IsNull())
    {
        if (!value["PublishMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.PublishMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishMode = string(value["PublishMode"].GetString());
        m_publishModeHasBeenSet = true;
    }

    if (value.HasMember("JvmOpts") && !value["JvmOpts"].IsNull())
    {
        if (!value["JvmOpts"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.JvmOpts` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jvmOpts = string(value["JvmOpts"].GetString());
        m_jvmOptsHasBeenSet = true;
    }

    if (value.HasMember("InitPodNum") && !value["InitPodNum"].IsNull())
    {
        if (!value["InitPodNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.InitPodNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_initPodNum = value["InitPodNum"].GetInt64();
        m_initPodNumHasBeenSet = true;
    }

    if (value.HasMember("CpuSpec") && !value["CpuSpec"].IsNull())
    {
        if (!value["CpuSpec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.CpuSpec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuSpec = value["CpuSpec"].GetDouble();
        m_cpuSpecHasBeenSet = true;
    }

    if (value.HasMember("MemorySpec") && !value["MemorySpec"].IsNull())
    {
        if (!value["MemorySpec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.MemorySpec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memorySpec = value["MemorySpec"].GetDouble();
        m_memorySpecHasBeenSet = true;
    }

    if (value.HasMember("ImgRepo") && !value["ImgRepo"].IsNull())
    {
        if (!value["ImgRepo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.ImgRepo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imgRepo = string(value["ImgRepo"].GetString());
        m_imgRepoHasBeenSet = true;
    }

    if (value.HasMember("ImgName") && !value["ImgName"].IsNull())
    {
        if (!value["ImgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.ImgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imgName = string(value["ImgName"].GetString());
        m_imgNameHasBeenSet = true;
    }

    if (value.HasMember("ImgVersion") && !value["ImgVersion"].IsNull())
    {
        if (!value["ImgVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.ImgVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imgVersion = string(value["ImgVersion"].GetString());
        m_imgVersionHasBeenSet = true;
    }

    if (value.HasMember("EsInfo") && !value["EsInfo"].IsNull())
    {
        if (!value["EsInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.EsInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_esInfo.Deserialize(value["EsInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_esInfoHasBeenSet = true;
    }

    if (value.HasMember("EnvConf") && !value["EnvConf"].IsNull())
    {
        if (!value["EnvConf"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.EnvConf` is not array type"));

        const rapidjson::Value &tmpValue = value["EnvConf"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Pair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envConf.push_back(item);
        }
        m_envConfHasBeenSet = true;
    }

    if (value.HasMember("StorageConfs") && !value["StorageConfs"].IsNull())
    {
        if (!value["StorageConfs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.StorageConfs` is not array type"));

        const rapidjson::Value &tmpValue = value["StorageConfs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StorageConf item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_storageConfs.push_back(item);
        }
        m_storageConfsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Vpc") && !value["Vpc"].IsNull())
    {
        if (!value["Vpc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.Vpc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpc = string(value["Vpc"].GetString());
        m_vpcHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("CreateDate") && !value["CreateDate"].IsNull())
    {
        if (!value["CreateDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.CreateDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createDate = string(value["CreateDate"].GetString());
        m_createDateHasBeenSet = true;
    }

    if (value.HasMember("ModifyDate") && !value["ModifyDate"].IsNull())
    {
        if (!value["ModifyDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.ModifyDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyDate = string(value["ModifyDate"].GetString());
        m_modifyDateHasBeenSet = true;
    }

    if (value.HasMember("StorageMountConfs") && !value["StorageMountConfs"].IsNull())
    {
        if (!value["StorageMountConfs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.StorageMountConfs` is not array type"));

        const rapidjson::Value &tmpValue = value["StorageMountConfs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StorageMountConf item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_storageMountConfs.push_back(item);
        }
        m_storageMountConfsHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("LogOutputConf") && !value["LogOutputConf"].IsNull())
    {
        if (!value["LogOutputConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.LogOutputConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_logOutputConf.Deserialize(value["LogOutputConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_logOutputConfHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationDescription") && !value["ApplicationDescription"].IsNull())
    {
        if (!value["ApplicationDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.ApplicationDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationDescription = string(value["ApplicationDescription"].GetString());
        m_applicationDescriptionHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentName") && !value["EnvironmentName"].IsNull())
    {
        if (!value["EnvironmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.EnvironmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentName = string(value["EnvironmentName"].GetString());
        m_environmentNameHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentId") && !value["EnvironmentId"].IsNull())
    {
        if (!value["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(value["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (value.HasMember("PublicDomain") && !value["PublicDomain"].IsNull())
    {
        if (!value["PublicDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.PublicDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicDomain = string(value["PublicDomain"].GetString());
        m_publicDomainHasBeenSet = true;
    }

    if (value.HasMember("EnablePublicAccess") && !value["EnablePublicAccess"].IsNull())
    {
        if (!value["EnablePublicAccess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.EnablePublicAccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enablePublicAccess = value["EnablePublicAccess"].GetBool();
        m_enablePublicAccessHasBeenSet = true;
    }

    if (value.HasMember("CurrentInstances") && !value["CurrentInstances"].IsNull())
    {
        if (!value["CurrentInstances"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.CurrentInstances` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentInstances = value["CurrentInstances"].GetInt64();
        m_currentInstancesHasBeenSet = true;
    }

    if (value.HasMember("ExpectedInstances") && !value["ExpectedInstances"].IsNull())
    {
        if (!value["ExpectedInstances"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.ExpectedInstances` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expectedInstances = value["ExpectedInstances"].GetInt64();
        m_expectedInstancesHasBeenSet = true;
    }

    if (value.HasMember("CodingLanguage") && !value["CodingLanguage"].IsNull())
    {
        if (!value["CodingLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.CodingLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codingLanguage = string(value["CodingLanguage"].GetString());
        m_codingLanguageHasBeenSet = true;
    }

    if (value.HasMember("PkgName") && !value["PkgName"].IsNull())
    {
        if (!value["PkgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.PkgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgName = string(value["PkgName"].GetString());
        m_pkgNameHasBeenSet = true;
    }

    if (value.HasMember("EsEnable") && !value["EsEnable"].IsNull())
    {
        if (!value["EsEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.EsEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_esEnable = value["EsEnable"].GetInt64();
        m_esEnableHasBeenSet = true;
    }

    if (value.HasMember("EsStrategy") && !value["EsStrategy"].IsNull())
    {
        if (!value["EsStrategy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.EsStrategy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_esStrategy = value["EsStrategy"].GetInt64();
        m_esStrategyHasBeenSet = true;
    }

    if (value.HasMember("ImageTag") && !value["ImageTag"].IsNull())
    {
        if (!value["ImageTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.ImageTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageTag = string(value["ImageTag"].GetString());
        m_imageTagHasBeenSet = true;
    }

    if (value.HasMember("LogEnable") && !value["LogEnable"].IsNull())
    {
        if (!value["LogEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.LogEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logEnable = value["LogEnable"].GetInt64();
        m_logEnableHasBeenSet = true;
    }

    if (value.HasMember("MinAliveInstances") && !value["MinAliveInstances"].IsNull())
    {
        if (!value["MinAliveInstances"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.MinAliveInstances` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minAliveInstances = string(value["MinAliveInstances"].GetString());
        m_minAliveInstancesHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.SecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIds.push_back((*itr).GetString());
        }
        m_securityGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("ImageCommand") && !value["ImageCommand"].IsNull())
    {
        if (!value["ImageCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.ImageCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageCommand = string(value["ImageCommand"].GetString());
        m_imageCommandHasBeenSet = true;
    }

    if (value.HasMember("ImageArgs") && !value["ImageArgs"].IsNull())
    {
        if (!value["ImageArgs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.ImageArgs` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageArgs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageArgs.push_back((*itr).GetString());
        }
        m_imageArgsHasBeenSet = true;
    }

    if (value.HasMember("UseRegistryDefaultConfig") && !value["UseRegistryDefaultConfig"].IsNull())
    {
        if (!value["UseRegistryDefaultConfig"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.UseRegistryDefaultConfig` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useRegistryDefaultConfig = value["UseRegistryDefaultConfig"].GetBool();
        m_useRegistryDefaultConfigHasBeenSet = true;
    }

    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.Service` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_service.Deserialize(value["Service"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("SettingConfs") && !value["SettingConfs"].IsNull())
    {
        if (!value["SettingConfs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.SettingConfs` is not array type"));

        const rapidjson::Value &tmpValue = value["SettingConfs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MountedSettingConf item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_settingConfs.push_back(item);
        }
        m_settingConfsHasBeenSet = true;
    }

    if (value.HasMember("LogConfs") && !value["LogConfs"].IsNull())
    {
        if (!value["LogConfs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.LogConfs` is not array type"));

        const rapidjson::Value &tmpValue = value["LogConfs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_logConfs.push_back((*itr).GetString());
        }
        m_logConfsHasBeenSet = true;
    }

    if (value.HasMember("PostStart") && !value["PostStart"].IsNull())
    {
        if (!value["PostStart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.PostStart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_postStart = string(value["PostStart"].GetString());
        m_postStartHasBeenSet = true;
    }

    if (value.HasMember("PreStop") && !value["PreStop"].IsNull())
    {
        if (!value["PreStop"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.PreStop` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preStop = string(value["PreStop"].GetString());
        m_preStopHasBeenSet = true;
    }

    if (value.HasMember("Liveness") && !value["Liveness"].IsNull())
    {
        if (!value["Liveness"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.Liveness` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_liveness.Deserialize(value["Liveness"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_livenessHasBeenSet = true;
    }

    if (value.HasMember("Readiness") && !value["Readiness"].IsNull())
    {
        if (!value["Readiness"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.Readiness` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_readiness.Deserialize(value["Readiness"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_readinessHasBeenSet = true;
    }

    if (value.HasMember("HorizontalAutoscaler") && !value["HorizontalAutoscaler"].IsNull())
    {
        if (!value["HorizontalAutoscaler"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.HorizontalAutoscaler` is not array type"));

        const rapidjson::Value &tmpValue = value["HorizontalAutoscaler"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HorizontalAutoscaler item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_horizontalAutoscaler.push_back(item);
        }
        m_horizontalAutoscalerHasBeenSet = true;
    }

    if (value.HasMember("CronHorizontalAutoscaler") && !value["CronHorizontalAutoscaler"].IsNull())
    {
        if (!value["CronHorizontalAutoscaler"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.CronHorizontalAutoscaler` is not array type"));

        const rapidjson::Value &tmpValue = value["CronHorizontalAutoscaler"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CronHorizontalAutoscaler item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cronHorizontalAutoscaler.push_back(item);
        }
        m_cronHorizontalAutoscalerHasBeenSet = true;
    }

    if (value.HasMember("Zones") && !value["Zones"].IsNull())
    {
        if (!value["Zones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.Zones` is not array type"));

        const rapidjson::Value &tmpValue = value["Zones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zones.push_back((*itr).GetString());
        }
        m_zonesHasBeenSet = true;
    }

    if (value.HasMember("LastDeployDate") && !value["LastDeployDate"].IsNull())
    {
        if (!value["LastDeployDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.LastDeployDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastDeployDate = string(value["LastDeployDate"].GetString());
        m_lastDeployDateHasBeenSet = true;
    }

    if (value.HasMember("LastDeploySuccessDate") && !value["LastDeploySuccessDate"].IsNull())
    {
        if (!value["LastDeploySuccessDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.LastDeploySuccessDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastDeploySuccessDate = string(value["LastDeploySuccessDate"].GetString());
        m_lastDeploySuccessDateHasBeenSet = true;
    }

    if (value.HasMember("NodeInfos") && !value["NodeInfos"].IsNull())
    {
        if (!value["NodeInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.NodeInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeInfos.push_back(item);
        }
        m_nodeInfosHasBeenSet = true;
    }

    if (value.HasMember("ImageType") && !value["ImageType"].IsNull())
    {
        if (!value["ImageType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.ImageType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageType = value["ImageType"].GetInt64();
        m_imageTypeHasBeenSet = true;
    }

    if (value.HasMember("EnableTracing") && !value["EnableTracing"].IsNull())
    {
        if (!value["EnableTracing"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.EnableTracing` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableTracing = value["EnableTracing"].GetUint64();
        m_enableTracingHasBeenSet = true;
    }

    if (value.HasMember("EnableTracingReport") && !value["EnableTracingReport"].IsNull())
    {
        if (!value["EnableTracingReport"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.EnableTracingReport` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableTracingReport = value["EnableTracingReport"].GetUint64();
        m_enableTracingReportHasBeenSet = true;
    }

    if (value.HasMember("RepoType") && !value["RepoType"].IsNull())
    {
        if (!value["RepoType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.RepoType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_repoType = value["RepoType"].GetUint64();
        m_repoTypeHasBeenSet = true;
    }

    if (value.HasMember("BatchDeployStatus") && !value["BatchDeployStatus"].IsNull())
    {
        if (!value["BatchDeployStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.BatchDeployStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchDeployStatus = string(value["BatchDeployStatus"].GetString());
        m_batchDeployStatusHasBeenSet = true;
    }

    if (value.HasMember("ApmInstanceId") && !value["ApmInstanceId"].IsNull())
    {
        if (!value["ApmInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.ApmInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apmInstanceId = string(value["ApmInstanceId"].GetString());
        m_apmInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("WorkloadInfo") && !value["WorkloadInfo"].IsNull())
    {
        if (!value["WorkloadInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.WorkloadInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workloadInfo.Deserialize(value["WorkloadInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workloadInfoHasBeenSet = true;
    }

    if (value.HasMember("SpeedUp") && !value["SpeedUp"].IsNull())
    {
        if (!value["SpeedUp"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.SpeedUp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_speedUp = value["SpeedUp"].GetBool();
        m_speedUpHasBeenSet = true;
    }

    if (value.HasMember("StartupProbe") && !value["StartupProbe"].IsNull())
    {
        if (!value["StartupProbe"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.StartupProbe` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_startupProbe.Deserialize(value["StartupProbe"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_startupProbeHasBeenSet = true;
    }

    if (value.HasMember("OsFlavour") && !value["OsFlavour"].IsNull())
    {
        if (!value["OsFlavour"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.OsFlavour` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osFlavour = string(value["OsFlavour"].GetString());
        m_osFlavourHasBeenSet = true;
    }

    if (value.HasMember("RepoServer") && !value["RepoServer"].IsNull())
    {
        if (!value["RepoServer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.RepoServer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoServer = string(value["RepoServer"].GetString());
        m_repoServerHasBeenSet = true;
    }

    if (value.HasMember("UnderDeploying") && !value["UnderDeploying"].IsNull())
    {
        if (!value["UnderDeploying"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.UnderDeploying` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_underDeploying = value["UnderDeploying"].GetBool();
        m_underDeployingHasBeenSet = true;
    }

    if (value.HasMember("EnablePrometheusConf") && !value["EnablePrometheusConf"].IsNull())
    {
        if (!value["EnablePrometheusConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.EnablePrometheusConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_enablePrometheusConf.Deserialize(value["EnablePrometheusConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_enablePrometheusConfHasBeenSet = true;
    }

    if (value.HasMember("StoppedManually") && !value["StoppedManually"].IsNull())
    {
        if (!value["StoppedManually"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.StoppedManually` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_stoppedManually = value["StoppedManually"].GetBool();
        m_stoppedManuallyHasBeenSet = true;
    }

    if (value.HasMember("TcrInstanceId") && !value["TcrInstanceId"].IsNull())
    {
        if (!value["TcrInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.TcrInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tcrInstanceId = string(value["TcrInstanceId"].GetString());
        m_tcrInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("EnableMetrics") && !value["EnableMetrics"].IsNull())
    {
        if (!value["EnableMetrics"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.EnableMetrics` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableMetrics = value["EnableMetrics"].GetInt64();
        m_enableMetricsHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("EnableRegistry") && !value["EnableRegistry"].IsNull())
    {
        if (!value["EnableRegistry"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.EnableRegistry` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableRegistry = value["EnableRegistry"].GetInt64();
        m_enableRegistryHasBeenSet = true;
    }

    if (value.HasMember("AutoscalerList") && !value["AutoscalerList"].IsNull())
    {
        if (!value["AutoscalerList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.AutoscalerList` is not array type"));

        const rapidjson::Value &tmpValue = value["AutoscalerList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Autoscaler item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_autoscalerList.push_back(item);
        }
        m_autoscalerListHasBeenSet = true;
    }

    if (value.HasMember("Modifier") && !value["Modifier"].IsNull())
    {
        if (!value["Modifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.Modifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifier = string(value["Modifier"].GetString());
        m_modifierHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("DeployStrategyConf") && !value["DeployStrategyConf"].IsNull())
    {
        if (!value["DeployStrategyConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.DeployStrategyConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deployStrategyConf.Deserialize(value["DeployStrategyConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deployStrategyConfHasBeenSet = true;
    }

    if (value.HasMember("PodList") && !value["PodList"].IsNull())
    {
        if (!value["PodList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.PodList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_podList.Deserialize(value["PodList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_podListHasBeenSet = true;
    }

    if (value.HasMember("ConfEdited") && !value["ConfEdited"].IsNull())
    {
        if (!value["ConfEdited"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.ConfEdited` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_confEdited = value["ConfEdited"].GetBool();
        m_confEditedHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("PreStopEncoded") && !value["PreStopEncoded"].IsNull())
    {
        if (!value["PreStopEncoded"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.PreStopEncoded` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preStopEncoded = string(value["PreStopEncoded"].GetString());
        m_preStopEncodedHasBeenSet = true;
    }

    if (value.HasMember("PostStartEncoded") && !value["PostStartEncoded"].IsNull())
    {
        if (!value["PostStartEncoded"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemServiceVersionInfo.PostStartEncoded` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_postStartEncoded = string(value["PostStartEncoded"].GetString());
        m_postStartEncodedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemServiceVersionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployMode.c_str(), allocator).Move(), allocator);
    }

    if (m_jdkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JdkVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jdkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_deployVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_publishModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishMode.c_str(), allocator).Move(), allocator);
    }

    if (m_jvmOptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JvmOpts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jvmOpts.c_str(), allocator).Move(), allocator);
    }

    if (m_initPodNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitPodNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initPodNum, allocator);
    }

    if (m_cpuSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuSpec, allocator);
    }

    if (m_memorySpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemorySpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memorySpec, allocator);
    }

    if (m_imgRepoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImgRepo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imgRepo.c_str(), allocator).Move(), allocator);
    }

    if (m_imgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imgName.c_str(), allocator).Move(), allocator);
    }

    if (m_imgVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImgVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imgVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_esInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_esInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_envConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envConf.begin(); itr != m_envConf.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_storageConfsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageConfs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_storageConfs.begin(); itr != m_storageConfs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpc.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_createDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createDate.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyDate.c_str(), allocator).Move(), allocator);
    }

    if (m_storageMountConfsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageMountConfs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_storageMountConfs.begin(); itr != m_storageMountConfs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_logOutputConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogOutputConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logOutputConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_publicDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_enablePublicAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePublicAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enablePublicAccess, allocator);
    }

    if (m_currentInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentInstances, allocator);
    }

    if (m_expectedInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectedInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expectedInstances, allocator);
    }

    if (m_codingLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodingLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codingLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgName.c_str(), allocator).Move(), allocator);
    }

    if (m_esEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_esEnable, allocator);
    }

    if (m_esStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_esStrategy, allocator);
    }

    if (m_imageTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageTag.c_str(), allocator).Move(), allocator);
    }

    if (m_logEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logEnable, allocator);
    }

    if (m_minAliveInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinAliveInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_minAliveInstances.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_imageCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_imageArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageArgs.begin(); itr != m_imageArgs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_useRegistryDefaultConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseRegistryDefaultConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useRegistryDefaultConfig, allocator);
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_service.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_settingConfsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettingConfs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_settingConfs.begin(); itr != m_settingConfs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_logConfsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogConfs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logConfs.begin(); itr != m_logConfs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_postStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_postStart.c_str(), allocator).Move(), allocator);
    }

    if (m_preStopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreStop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preStop.c_str(), allocator).Move(), allocator);
    }

    if (m_livenessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Liveness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_liveness.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_readinessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Readiness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_readiness.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_horizontalAutoscalerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HorizontalAutoscaler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_horizontalAutoscaler.begin(); itr != m_horizontalAutoscaler.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cronHorizontalAutoscalerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronHorizontalAutoscaler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cronHorizontalAutoscaler.begin(); itr != m_cronHorizontalAutoscaler.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_lastDeployDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastDeployDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastDeployDate.c_str(), allocator).Move(), allocator);
    }

    if (m_lastDeploySuccessDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastDeploySuccessDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastDeploySuccessDate.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeInfos.begin(); itr != m_nodeInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_imageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageType, allocator);
    }

    if (m_enableTracingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTracing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableTracing, allocator);
    }

    if (m_enableTracingReportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTracingReport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableTracingReport, allocator);
    }

    if (m_repoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_repoType, allocator);
    }

    if (m_batchDeployStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchDeployStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchDeployStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_apmInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApmInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apmInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workloadInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_speedUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeedUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_speedUp, allocator);
    }

    if (m_startupProbeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartupProbe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_startupProbe.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_osFlavourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsFlavour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osFlavour.c_str(), allocator).Move(), allocator);
    }

    if (m_repoServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoServer.c_str(), allocator).Move(), allocator);
    }

    if (m_underDeployingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnderDeploying";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_underDeploying, allocator);
    }

    if (m_enablePrometheusConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePrometheusConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enablePrometheusConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_stoppedManuallyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoppedManually";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stoppedManually, allocator);
    }

    if (m_tcrInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcrInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tcrInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMetrics, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableRegistryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRegistry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableRegistry, allocator);
    }

    if (m_autoscalerListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalerList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_autoscalerList.begin(); itr != m_autoscalerList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Modifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifier.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_deployStrategyConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployStrategyConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deployStrategyConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_podListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_podList.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_confEditedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfEdited";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confEdited, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_preStopEncodedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreStopEncoded";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preStopEncoded.c_str(), allocator).Move(), allocator);
    }

    if (m_postStartEncodedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostStartEncoded";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_postStartEncoded.c_str(), allocator).Move(), allocator);
    }

}


string TemServiceVersionInfo::GetVersionId() const
{
    return m_versionId;
}

void TemServiceVersionInfo::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool TemServiceVersionInfo::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string TemServiceVersionInfo::GetApplicationId() const
{
    return m_applicationId;
}

void TemServiceVersionInfo::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool TemServiceVersionInfo::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string TemServiceVersionInfo::GetDeployMode() const
{
    return m_deployMode;
}

void TemServiceVersionInfo::SetDeployMode(const string& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool TemServiceVersionInfo::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

string TemServiceVersionInfo::GetJdkVersion() const
{
    return m_jdkVersion;
}

void TemServiceVersionInfo::SetJdkVersion(const string& _jdkVersion)
{
    m_jdkVersion = _jdkVersion;
    m_jdkVersionHasBeenSet = true;
}

bool TemServiceVersionInfo::JdkVersionHasBeenSet() const
{
    return m_jdkVersionHasBeenSet;
}

string TemServiceVersionInfo::GetDescription() const
{
    return m_description;
}

void TemServiceVersionInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TemServiceVersionInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string TemServiceVersionInfo::GetDeployVersion() const
{
    return m_deployVersion;
}

void TemServiceVersionInfo::SetDeployVersion(const string& _deployVersion)
{
    m_deployVersion = _deployVersion;
    m_deployVersionHasBeenSet = true;
}

bool TemServiceVersionInfo::DeployVersionHasBeenSet() const
{
    return m_deployVersionHasBeenSet;
}

string TemServiceVersionInfo::GetPublishMode() const
{
    return m_publishMode;
}

void TemServiceVersionInfo::SetPublishMode(const string& _publishMode)
{
    m_publishMode = _publishMode;
    m_publishModeHasBeenSet = true;
}

bool TemServiceVersionInfo::PublishModeHasBeenSet() const
{
    return m_publishModeHasBeenSet;
}

string TemServiceVersionInfo::GetJvmOpts() const
{
    return m_jvmOpts;
}

void TemServiceVersionInfo::SetJvmOpts(const string& _jvmOpts)
{
    m_jvmOpts = _jvmOpts;
    m_jvmOptsHasBeenSet = true;
}

bool TemServiceVersionInfo::JvmOptsHasBeenSet() const
{
    return m_jvmOptsHasBeenSet;
}

int64_t TemServiceVersionInfo::GetInitPodNum() const
{
    return m_initPodNum;
}

void TemServiceVersionInfo::SetInitPodNum(const int64_t& _initPodNum)
{
    m_initPodNum = _initPodNum;
    m_initPodNumHasBeenSet = true;
}

bool TemServiceVersionInfo::InitPodNumHasBeenSet() const
{
    return m_initPodNumHasBeenSet;
}

double TemServiceVersionInfo::GetCpuSpec() const
{
    return m_cpuSpec;
}

void TemServiceVersionInfo::SetCpuSpec(const double& _cpuSpec)
{
    m_cpuSpec = _cpuSpec;
    m_cpuSpecHasBeenSet = true;
}

bool TemServiceVersionInfo::CpuSpecHasBeenSet() const
{
    return m_cpuSpecHasBeenSet;
}

double TemServiceVersionInfo::GetMemorySpec() const
{
    return m_memorySpec;
}

void TemServiceVersionInfo::SetMemorySpec(const double& _memorySpec)
{
    m_memorySpec = _memorySpec;
    m_memorySpecHasBeenSet = true;
}

bool TemServiceVersionInfo::MemorySpecHasBeenSet() const
{
    return m_memorySpecHasBeenSet;
}

string TemServiceVersionInfo::GetImgRepo() const
{
    return m_imgRepo;
}

void TemServiceVersionInfo::SetImgRepo(const string& _imgRepo)
{
    m_imgRepo = _imgRepo;
    m_imgRepoHasBeenSet = true;
}

bool TemServiceVersionInfo::ImgRepoHasBeenSet() const
{
    return m_imgRepoHasBeenSet;
}

string TemServiceVersionInfo::GetImgName() const
{
    return m_imgName;
}

void TemServiceVersionInfo::SetImgName(const string& _imgName)
{
    m_imgName = _imgName;
    m_imgNameHasBeenSet = true;
}

bool TemServiceVersionInfo::ImgNameHasBeenSet() const
{
    return m_imgNameHasBeenSet;
}

string TemServiceVersionInfo::GetImgVersion() const
{
    return m_imgVersion;
}

void TemServiceVersionInfo::SetImgVersion(const string& _imgVersion)
{
    m_imgVersion = _imgVersion;
    m_imgVersionHasBeenSet = true;
}

bool TemServiceVersionInfo::ImgVersionHasBeenSet() const
{
    return m_imgVersionHasBeenSet;
}

EsInfo TemServiceVersionInfo::GetEsInfo() const
{
    return m_esInfo;
}

void TemServiceVersionInfo::SetEsInfo(const EsInfo& _esInfo)
{
    m_esInfo = _esInfo;
    m_esInfoHasBeenSet = true;
}

bool TemServiceVersionInfo::EsInfoHasBeenSet() const
{
    return m_esInfoHasBeenSet;
}

vector<Pair> TemServiceVersionInfo::GetEnvConf() const
{
    return m_envConf;
}

void TemServiceVersionInfo::SetEnvConf(const vector<Pair>& _envConf)
{
    m_envConf = _envConf;
    m_envConfHasBeenSet = true;
}

bool TemServiceVersionInfo::EnvConfHasBeenSet() const
{
    return m_envConfHasBeenSet;
}

vector<StorageConf> TemServiceVersionInfo::GetStorageConfs() const
{
    return m_storageConfs;
}

void TemServiceVersionInfo::SetStorageConfs(const vector<StorageConf>& _storageConfs)
{
    m_storageConfs = _storageConfs;
    m_storageConfsHasBeenSet = true;
}

bool TemServiceVersionInfo::StorageConfsHasBeenSet() const
{
    return m_storageConfsHasBeenSet;
}

string TemServiceVersionInfo::GetStatus() const
{
    return m_status;
}

void TemServiceVersionInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TemServiceVersionInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TemServiceVersionInfo::GetVpc() const
{
    return m_vpc;
}

void TemServiceVersionInfo::SetVpc(const string& _vpc)
{
    m_vpc = _vpc;
    m_vpcHasBeenSet = true;
}

bool TemServiceVersionInfo::VpcHasBeenSet() const
{
    return m_vpcHasBeenSet;
}

string TemServiceVersionInfo::GetSubnetId() const
{
    return m_subnetId;
}

void TemServiceVersionInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool TemServiceVersionInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string TemServiceVersionInfo::GetCreateDate() const
{
    return m_createDate;
}

void TemServiceVersionInfo::SetCreateDate(const string& _createDate)
{
    m_createDate = _createDate;
    m_createDateHasBeenSet = true;
}

bool TemServiceVersionInfo::CreateDateHasBeenSet() const
{
    return m_createDateHasBeenSet;
}

string TemServiceVersionInfo::GetModifyDate() const
{
    return m_modifyDate;
}

void TemServiceVersionInfo::SetModifyDate(const string& _modifyDate)
{
    m_modifyDate = _modifyDate;
    m_modifyDateHasBeenSet = true;
}

bool TemServiceVersionInfo::ModifyDateHasBeenSet() const
{
    return m_modifyDateHasBeenSet;
}

vector<StorageMountConf> TemServiceVersionInfo::GetStorageMountConfs() const
{
    return m_storageMountConfs;
}

void TemServiceVersionInfo::SetStorageMountConfs(const vector<StorageMountConf>& _storageMountConfs)
{
    m_storageMountConfs = _storageMountConfs;
    m_storageMountConfsHasBeenSet = true;
}

bool TemServiceVersionInfo::StorageMountConfsHasBeenSet() const
{
    return m_storageMountConfsHasBeenSet;
}

string TemServiceVersionInfo::GetVersionName() const
{
    return m_versionName;
}

void TemServiceVersionInfo::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool TemServiceVersionInfo::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

LogOutputConf TemServiceVersionInfo::GetLogOutputConf() const
{
    return m_logOutputConf;
}

void TemServiceVersionInfo::SetLogOutputConf(const LogOutputConf& _logOutputConf)
{
    m_logOutputConf = _logOutputConf;
    m_logOutputConfHasBeenSet = true;
}

bool TemServiceVersionInfo::LogOutputConfHasBeenSet() const
{
    return m_logOutputConfHasBeenSet;
}

string TemServiceVersionInfo::GetApplicationName() const
{
    return m_applicationName;
}

void TemServiceVersionInfo::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool TemServiceVersionInfo::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string TemServiceVersionInfo::GetApplicationDescription() const
{
    return m_applicationDescription;
}

void TemServiceVersionInfo::SetApplicationDescription(const string& _applicationDescription)
{
    m_applicationDescription = _applicationDescription;
    m_applicationDescriptionHasBeenSet = true;
}

bool TemServiceVersionInfo::ApplicationDescriptionHasBeenSet() const
{
    return m_applicationDescriptionHasBeenSet;
}

string TemServiceVersionInfo::GetEnvironmentName() const
{
    return m_environmentName;
}

void TemServiceVersionInfo::SetEnvironmentName(const string& _environmentName)
{
    m_environmentName = _environmentName;
    m_environmentNameHasBeenSet = true;
}

bool TemServiceVersionInfo::EnvironmentNameHasBeenSet() const
{
    return m_environmentNameHasBeenSet;
}

string TemServiceVersionInfo::GetEnvironmentId() const
{
    return m_environmentId;
}

void TemServiceVersionInfo::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool TemServiceVersionInfo::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string TemServiceVersionInfo::GetPublicDomain() const
{
    return m_publicDomain;
}

void TemServiceVersionInfo::SetPublicDomain(const string& _publicDomain)
{
    m_publicDomain = _publicDomain;
    m_publicDomainHasBeenSet = true;
}

bool TemServiceVersionInfo::PublicDomainHasBeenSet() const
{
    return m_publicDomainHasBeenSet;
}

bool TemServiceVersionInfo::GetEnablePublicAccess() const
{
    return m_enablePublicAccess;
}

void TemServiceVersionInfo::SetEnablePublicAccess(const bool& _enablePublicAccess)
{
    m_enablePublicAccess = _enablePublicAccess;
    m_enablePublicAccessHasBeenSet = true;
}

bool TemServiceVersionInfo::EnablePublicAccessHasBeenSet() const
{
    return m_enablePublicAccessHasBeenSet;
}

int64_t TemServiceVersionInfo::GetCurrentInstances() const
{
    return m_currentInstances;
}

void TemServiceVersionInfo::SetCurrentInstances(const int64_t& _currentInstances)
{
    m_currentInstances = _currentInstances;
    m_currentInstancesHasBeenSet = true;
}

bool TemServiceVersionInfo::CurrentInstancesHasBeenSet() const
{
    return m_currentInstancesHasBeenSet;
}

int64_t TemServiceVersionInfo::GetExpectedInstances() const
{
    return m_expectedInstances;
}

void TemServiceVersionInfo::SetExpectedInstances(const int64_t& _expectedInstances)
{
    m_expectedInstances = _expectedInstances;
    m_expectedInstancesHasBeenSet = true;
}

bool TemServiceVersionInfo::ExpectedInstancesHasBeenSet() const
{
    return m_expectedInstancesHasBeenSet;
}

string TemServiceVersionInfo::GetCodingLanguage() const
{
    return m_codingLanguage;
}

void TemServiceVersionInfo::SetCodingLanguage(const string& _codingLanguage)
{
    m_codingLanguage = _codingLanguage;
    m_codingLanguageHasBeenSet = true;
}

bool TemServiceVersionInfo::CodingLanguageHasBeenSet() const
{
    return m_codingLanguageHasBeenSet;
}

string TemServiceVersionInfo::GetPkgName() const
{
    return m_pkgName;
}

void TemServiceVersionInfo::SetPkgName(const string& _pkgName)
{
    m_pkgName = _pkgName;
    m_pkgNameHasBeenSet = true;
}

bool TemServiceVersionInfo::PkgNameHasBeenSet() const
{
    return m_pkgNameHasBeenSet;
}

int64_t TemServiceVersionInfo::GetEsEnable() const
{
    return m_esEnable;
}

void TemServiceVersionInfo::SetEsEnable(const int64_t& _esEnable)
{
    m_esEnable = _esEnable;
    m_esEnableHasBeenSet = true;
}

bool TemServiceVersionInfo::EsEnableHasBeenSet() const
{
    return m_esEnableHasBeenSet;
}

int64_t TemServiceVersionInfo::GetEsStrategy() const
{
    return m_esStrategy;
}

void TemServiceVersionInfo::SetEsStrategy(const int64_t& _esStrategy)
{
    m_esStrategy = _esStrategy;
    m_esStrategyHasBeenSet = true;
}

bool TemServiceVersionInfo::EsStrategyHasBeenSet() const
{
    return m_esStrategyHasBeenSet;
}

string TemServiceVersionInfo::GetImageTag() const
{
    return m_imageTag;
}

void TemServiceVersionInfo::SetImageTag(const string& _imageTag)
{
    m_imageTag = _imageTag;
    m_imageTagHasBeenSet = true;
}

bool TemServiceVersionInfo::ImageTagHasBeenSet() const
{
    return m_imageTagHasBeenSet;
}

int64_t TemServiceVersionInfo::GetLogEnable() const
{
    return m_logEnable;
}

void TemServiceVersionInfo::SetLogEnable(const int64_t& _logEnable)
{
    m_logEnable = _logEnable;
    m_logEnableHasBeenSet = true;
}

bool TemServiceVersionInfo::LogEnableHasBeenSet() const
{
    return m_logEnableHasBeenSet;
}

string TemServiceVersionInfo::GetMinAliveInstances() const
{
    return m_minAliveInstances;
}

void TemServiceVersionInfo::SetMinAliveInstances(const string& _minAliveInstances)
{
    m_minAliveInstances = _minAliveInstances;
    m_minAliveInstancesHasBeenSet = true;
}

bool TemServiceVersionInfo::MinAliveInstancesHasBeenSet() const
{
    return m_minAliveInstancesHasBeenSet;
}

vector<string> TemServiceVersionInfo::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void TemServiceVersionInfo::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool TemServiceVersionInfo::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

string TemServiceVersionInfo::GetImageCommand() const
{
    return m_imageCommand;
}

void TemServiceVersionInfo::SetImageCommand(const string& _imageCommand)
{
    m_imageCommand = _imageCommand;
    m_imageCommandHasBeenSet = true;
}

bool TemServiceVersionInfo::ImageCommandHasBeenSet() const
{
    return m_imageCommandHasBeenSet;
}

vector<string> TemServiceVersionInfo::GetImageArgs() const
{
    return m_imageArgs;
}

void TemServiceVersionInfo::SetImageArgs(const vector<string>& _imageArgs)
{
    m_imageArgs = _imageArgs;
    m_imageArgsHasBeenSet = true;
}

bool TemServiceVersionInfo::ImageArgsHasBeenSet() const
{
    return m_imageArgsHasBeenSet;
}

bool TemServiceVersionInfo::GetUseRegistryDefaultConfig() const
{
    return m_useRegistryDefaultConfig;
}

void TemServiceVersionInfo::SetUseRegistryDefaultConfig(const bool& _useRegistryDefaultConfig)
{
    m_useRegistryDefaultConfig = _useRegistryDefaultConfig;
    m_useRegistryDefaultConfigHasBeenSet = true;
}

bool TemServiceVersionInfo::UseRegistryDefaultConfigHasBeenSet() const
{
    return m_useRegistryDefaultConfigHasBeenSet;
}

EksService TemServiceVersionInfo::GetService() const
{
    return m_service;
}

void TemServiceVersionInfo::SetService(const EksService& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool TemServiceVersionInfo::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

vector<MountedSettingConf> TemServiceVersionInfo::GetSettingConfs() const
{
    return m_settingConfs;
}

void TemServiceVersionInfo::SetSettingConfs(const vector<MountedSettingConf>& _settingConfs)
{
    m_settingConfs = _settingConfs;
    m_settingConfsHasBeenSet = true;
}

bool TemServiceVersionInfo::SettingConfsHasBeenSet() const
{
    return m_settingConfsHasBeenSet;
}

vector<string> TemServiceVersionInfo::GetLogConfs() const
{
    return m_logConfs;
}

void TemServiceVersionInfo::SetLogConfs(const vector<string>& _logConfs)
{
    m_logConfs = _logConfs;
    m_logConfsHasBeenSet = true;
}

bool TemServiceVersionInfo::LogConfsHasBeenSet() const
{
    return m_logConfsHasBeenSet;
}

string TemServiceVersionInfo::GetPostStart() const
{
    return m_postStart;
}

void TemServiceVersionInfo::SetPostStart(const string& _postStart)
{
    m_postStart = _postStart;
    m_postStartHasBeenSet = true;
}

bool TemServiceVersionInfo::PostStartHasBeenSet() const
{
    return m_postStartHasBeenSet;
}

string TemServiceVersionInfo::GetPreStop() const
{
    return m_preStop;
}

void TemServiceVersionInfo::SetPreStop(const string& _preStop)
{
    m_preStop = _preStop;
    m_preStopHasBeenSet = true;
}

bool TemServiceVersionInfo::PreStopHasBeenSet() const
{
    return m_preStopHasBeenSet;
}

HealthCheckConfig TemServiceVersionInfo::GetLiveness() const
{
    return m_liveness;
}

void TemServiceVersionInfo::SetLiveness(const HealthCheckConfig& _liveness)
{
    m_liveness = _liveness;
    m_livenessHasBeenSet = true;
}

bool TemServiceVersionInfo::LivenessHasBeenSet() const
{
    return m_livenessHasBeenSet;
}

HealthCheckConfig TemServiceVersionInfo::GetReadiness() const
{
    return m_readiness;
}

void TemServiceVersionInfo::SetReadiness(const HealthCheckConfig& _readiness)
{
    m_readiness = _readiness;
    m_readinessHasBeenSet = true;
}

bool TemServiceVersionInfo::ReadinessHasBeenSet() const
{
    return m_readinessHasBeenSet;
}

vector<HorizontalAutoscaler> TemServiceVersionInfo::GetHorizontalAutoscaler() const
{
    return m_horizontalAutoscaler;
}

void TemServiceVersionInfo::SetHorizontalAutoscaler(const vector<HorizontalAutoscaler>& _horizontalAutoscaler)
{
    m_horizontalAutoscaler = _horizontalAutoscaler;
    m_horizontalAutoscalerHasBeenSet = true;
}

bool TemServiceVersionInfo::HorizontalAutoscalerHasBeenSet() const
{
    return m_horizontalAutoscalerHasBeenSet;
}

vector<CronHorizontalAutoscaler> TemServiceVersionInfo::GetCronHorizontalAutoscaler() const
{
    return m_cronHorizontalAutoscaler;
}

void TemServiceVersionInfo::SetCronHorizontalAutoscaler(const vector<CronHorizontalAutoscaler>& _cronHorizontalAutoscaler)
{
    m_cronHorizontalAutoscaler = _cronHorizontalAutoscaler;
    m_cronHorizontalAutoscalerHasBeenSet = true;
}

bool TemServiceVersionInfo::CronHorizontalAutoscalerHasBeenSet() const
{
    return m_cronHorizontalAutoscalerHasBeenSet;
}

vector<string> TemServiceVersionInfo::GetZones() const
{
    return m_zones;
}

void TemServiceVersionInfo::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool TemServiceVersionInfo::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

string TemServiceVersionInfo::GetLastDeployDate() const
{
    return m_lastDeployDate;
}

void TemServiceVersionInfo::SetLastDeployDate(const string& _lastDeployDate)
{
    m_lastDeployDate = _lastDeployDate;
    m_lastDeployDateHasBeenSet = true;
}

bool TemServiceVersionInfo::LastDeployDateHasBeenSet() const
{
    return m_lastDeployDateHasBeenSet;
}

string TemServiceVersionInfo::GetLastDeploySuccessDate() const
{
    return m_lastDeploySuccessDate;
}

void TemServiceVersionInfo::SetLastDeploySuccessDate(const string& _lastDeploySuccessDate)
{
    m_lastDeploySuccessDate = _lastDeploySuccessDate;
    m_lastDeploySuccessDateHasBeenSet = true;
}

bool TemServiceVersionInfo::LastDeploySuccessDateHasBeenSet() const
{
    return m_lastDeploySuccessDateHasBeenSet;
}

vector<NodeInfo> TemServiceVersionInfo::GetNodeInfos() const
{
    return m_nodeInfos;
}

void TemServiceVersionInfo::SetNodeInfos(const vector<NodeInfo>& _nodeInfos)
{
    m_nodeInfos = _nodeInfos;
    m_nodeInfosHasBeenSet = true;
}

bool TemServiceVersionInfo::NodeInfosHasBeenSet() const
{
    return m_nodeInfosHasBeenSet;
}

int64_t TemServiceVersionInfo::GetImageType() const
{
    return m_imageType;
}

void TemServiceVersionInfo::SetImageType(const int64_t& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool TemServiceVersionInfo::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}

uint64_t TemServiceVersionInfo::GetEnableTracing() const
{
    return m_enableTracing;
}

void TemServiceVersionInfo::SetEnableTracing(const uint64_t& _enableTracing)
{
    m_enableTracing = _enableTracing;
    m_enableTracingHasBeenSet = true;
}

bool TemServiceVersionInfo::EnableTracingHasBeenSet() const
{
    return m_enableTracingHasBeenSet;
}

uint64_t TemServiceVersionInfo::GetEnableTracingReport() const
{
    return m_enableTracingReport;
}

void TemServiceVersionInfo::SetEnableTracingReport(const uint64_t& _enableTracingReport)
{
    m_enableTracingReport = _enableTracingReport;
    m_enableTracingReportHasBeenSet = true;
}

bool TemServiceVersionInfo::EnableTracingReportHasBeenSet() const
{
    return m_enableTracingReportHasBeenSet;
}

uint64_t TemServiceVersionInfo::GetRepoType() const
{
    return m_repoType;
}

void TemServiceVersionInfo::SetRepoType(const uint64_t& _repoType)
{
    m_repoType = _repoType;
    m_repoTypeHasBeenSet = true;
}

bool TemServiceVersionInfo::RepoTypeHasBeenSet() const
{
    return m_repoTypeHasBeenSet;
}

string TemServiceVersionInfo::GetBatchDeployStatus() const
{
    return m_batchDeployStatus;
}

void TemServiceVersionInfo::SetBatchDeployStatus(const string& _batchDeployStatus)
{
    m_batchDeployStatus = _batchDeployStatus;
    m_batchDeployStatusHasBeenSet = true;
}

bool TemServiceVersionInfo::BatchDeployStatusHasBeenSet() const
{
    return m_batchDeployStatusHasBeenSet;
}

string TemServiceVersionInfo::GetApmInstanceId() const
{
    return m_apmInstanceId;
}

void TemServiceVersionInfo::SetApmInstanceId(const string& _apmInstanceId)
{
    m_apmInstanceId = _apmInstanceId;
    m_apmInstanceIdHasBeenSet = true;
}

bool TemServiceVersionInfo::ApmInstanceIdHasBeenSet() const
{
    return m_apmInstanceIdHasBeenSet;
}

WorkloadInfo TemServiceVersionInfo::GetWorkloadInfo() const
{
    return m_workloadInfo;
}

void TemServiceVersionInfo::SetWorkloadInfo(const WorkloadInfo& _workloadInfo)
{
    m_workloadInfo = _workloadInfo;
    m_workloadInfoHasBeenSet = true;
}

bool TemServiceVersionInfo::WorkloadInfoHasBeenSet() const
{
    return m_workloadInfoHasBeenSet;
}

bool TemServiceVersionInfo::GetSpeedUp() const
{
    return m_speedUp;
}

void TemServiceVersionInfo::SetSpeedUp(const bool& _speedUp)
{
    m_speedUp = _speedUp;
    m_speedUpHasBeenSet = true;
}

bool TemServiceVersionInfo::SpeedUpHasBeenSet() const
{
    return m_speedUpHasBeenSet;
}

HealthCheckConfig TemServiceVersionInfo::GetStartupProbe() const
{
    return m_startupProbe;
}

void TemServiceVersionInfo::SetStartupProbe(const HealthCheckConfig& _startupProbe)
{
    m_startupProbe = _startupProbe;
    m_startupProbeHasBeenSet = true;
}

bool TemServiceVersionInfo::StartupProbeHasBeenSet() const
{
    return m_startupProbeHasBeenSet;
}

string TemServiceVersionInfo::GetOsFlavour() const
{
    return m_osFlavour;
}

void TemServiceVersionInfo::SetOsFlavour(const string& _osFlavour)
{
    m_osFlavour = _osFlavour;
    m_osFlavourHasBeenSet = true;
}

bool TemServiceVersionInfo::OsFlavourHasBeenSet() const
{
    return m_osFlavourHasBeenSet;
}

string TemServiceVersionInfo::GetRepoServer() const
{
    return m_repoServer;
}

void TemServiceVersionInfo::SetRepoServer(const string& _repoServer)
{
    m_repoServer = _repoServer;
    m_repoServerHasBeenSet = true;
}

bool TemServiceVersionInfo::RepoServerHasBeenSet() const
{
    return m_repoServerHasBeenSet;
}

bool TemServiceVersionInfo::GetUnderDeploying() const
{
    return m_underDeploying;
}

void TemServiceVersionInfo::SetUnderDeploying(const bool& _underDeploying)
{
    m_underDeploying = _underDeploying;
    m_underDeployingHasBeenSet = true;
}

bool TemServiceVersionInfo::UnderDeployingHasBeenSet() const
{
    return m_underDeployingHasBeenSet;
}

EnablePrometheusConf TemServiceVersionInfo::GetEnablePrometheusConf() const
{
    return m_enablePrometheusConf;
}

void TemServiceVersionInfo::SetEnablePrometheusConf(const EnablePrometheusConf& _enablePrometheusConf)
{
    m_enablePrometheusConf = _enablePrometheusConf;
    m_enablePrometheusConfHasBeenSet = true;
}

bool TemServiceVersionInfo::EnablePrometheusConfHasBeenSet() const
{
    return m_enablePrometheusConfHasBeenSet;
}

bool TemServiceVersionInfo::GetStoppedManually() const
{
    return m_stoppedManually;
}

void TemServiceVersionInfo::SetStoppedManually(const bool& _stoppedManually)
{
    m_stoppedManually = _stoppedManually;
    m_stoppedManuallyHasBeenSet = true;
}

bool TemServiceVersionInfo::StoppedManuallyHasBeenSet() const
{
    return m_stoppedManuallyHasBeenSet;
}

string TemServiceVersionInfo::GetTcrInstanceId() const
{
    return m_tcrInstanceId;
}

void TemServiceVersionInfo::SetTcrInstanceId(const string& _tcrInstanceId)
{
    m_tcrInstanceId = _tcrInstanceId;
    m_tcrInstanceIdHasBeenSet = true;
}

bool TemServiceVersionInfo::TcrInstanceIdHasBeenSet() const
{
    return m_tcrInstanceIdHasBeenSet;
}

int64_t TemServiceVersionInfo::GetEnableMetrics() const
{
    return m_enableMetrics;
}

void TemServiceVersionInfo::SetEnableMetrics(const int64_t& _enableMetrics)
{
    m_enableMetrics = _enableMetrics;
    m_enableMetricsHasBeenSet = true;
}

bool TemServiceVersionInfo::EnableMetricsHasBeenSet() const
{
    return m_enableMetricsHasBeenSet;
}

string TemServiceVersionInfo::GetAppId() const
{
    return m_appId;
}

void TemServiceVersionInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool TemServiceVersionInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string TemServiceVersionInfo::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void TemServiceVersionInfo::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool TemServiceVersionInfo::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string TemServiceVersionInfo::GetUin() const
{
    return m_uin;
}

void TemServiceVersionInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool TemServiceVersionInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string TemServiceVersionInfo::GetRegion() const
{
    return m_region;
}

void TemServiceVersionInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool TemServiceVersionInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string TemServiceVersionInfo::GetGroupId() const
{
    return m_groupId;
}

void TemServiceVersionInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool TemServiceVersionInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t TemServiceVersionInfo::GetEnableRegistry() const
{
    return m_enableRegistry;
}

void TemServiceVersionInfo::SetEnableRegistry(const int64_t& _enableRegistry)
{
    m_enableRegistry = _enableRegistry;
    m_enableRegistryHasBeenSet = true;
}

bool TemServiceVersionInfo::EnableRegistryHasBeenSet() const
{
    return m_enableRegistryHasBeenSet;
}

vector<Autoscaler> TemServiceVersionInfo::GetAutoscalerList() const
{
    return m_autoscalerList;
}

void TemServiceVersionInfo::SetAutoscalerList(const vector<Autoscaler>& _autoscalerList)
{
    m_autoscalerList = _autoscalerList;
    m_autoscalerListHasBeenSet = true;
}

bool TemServiceVersionInfo::AutoscalerListHasBeenSet() const
{
    return m_autoscalerListHasBeenSet;
}

string TemServiceVersionInfo::GetModifier() const
{
    return m_modifier;
}

void TemServiceVersionInfo::SetModifier(const string& _modifier)
{
    m_modifier = _modifier;
    m_modifierHasBeenSet = true;
}

bool TemServiceVersionInfo::ModifierHasBeenSet() const
{
    return m_modifierHasBeenSet;
}

string TemServiceVersionInfo::GetCreator() const
{
    return m_creator;
}

void TemServiceVersionInfo::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool TemServiceVersionInfo::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

DeployStrategyConf TemServiceVersionInfo::GetDeployStrategyConf() const
{
    return m_deployStrategyConf;
}

void TemServiceVersionInfo::SetDeployStrategyConf(const DeployStrategyConf& _deployStrategyConf)
{
    m_deployStrategyConf = _deployStrategyConf;
    m_deployStrategyConfHasBeenSet = true;
}

bool TemServiceVersionInfo::DeployStrategyConfHasBeenSet() const
{
    return m_deployStrategyConfHasBeenSet;
}

DescribeRunPodPage TemServiceVersionInfo::GetPodList() const
{
    return m_podList;
}

void TemServiceVersionInfo::SetPodList(const DescribeRunPodPage& _podList)
{
    m_podList = _podList;
    m_podListHasBeenSet = true;
}

bool TemServiceVersionInfo::PodListHasBeenSet() const
{
    return m_podListHasBeenSet;
}

bool TemServiceVersionInfo::GetConfEdited() const
{
    return m_confEdited;
}

void TemServiceVersionInfo::SetConfEdited(const bool& _confEdited)
{
    m_confEdited = _confEdited;
    m_confEditedHasBeenSet = true;
}

bool TemServiceVersionInfo::ConfEditedHasBeenSet() const
{
    return m_confEditedHasBeenSet;
}

vector<Tag> TemServiceVersionInfo::GetTags() const
{
    return m_tags;
}

void TemServiceVersionInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TemServiceVersionInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string TemServiceVersionInfo::GetPreStopEncoded() const
{
    return m_preStopEncoded;
}

void TemServiceVersionInfo::SetPreStopEncoded(const string& _preStopEncoded)
{
    m_preStopEncoded = _preStopEncoded;
    m_preStopEncodedHasBeenSet = true;
}

bool TemServiceVersionInfo::PreStopEncodedHasBeenSet() const
{
    return m_preStopEncodedHasBeenSet;
}

string TemServiceVersionInfo::GetPostStartEncoded() const
{
    return m_postStartEncoded;
}

void TemServiceVersionInfo::SetPostStartEncoded(const string& _postStartEncoded)
{
    m_postStartEncoded = _postStartEncoded;
    m_postStartEncodedHasBeenSet = true;
}

bool TemServiceVersionInfo::PostStartEncodedHasBeenSet() const
{
    return m_postStartEncodedHasBeenSet;
}

