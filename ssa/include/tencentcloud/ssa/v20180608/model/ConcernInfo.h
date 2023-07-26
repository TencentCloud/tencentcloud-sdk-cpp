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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_CONCERNINFO_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_CONCERNINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 关注点类型
                */
                class ConcernInfo : public AbstractModel
                {
                public:
                    ConcernInfo();
                    ~ConcernInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关注点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConcernType 关注点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConcernType() const;

                    /**
                     * 设置关注点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _concernType 关注点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConcernType(const int64_t& _concernType);

                    /**
                     * 判断参数 ConcernType 是否已赋值
                     * @return ConcernType 是否已赋值
                     * 
                     */
                    bool ConcernTypeHasBeenSet() const;

                    /**
                     * 获取实体类型 1: 非云上IP，2: 云上IP，3: 域名，4: IP，5: 文件，6: 进程
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EntityType 实体类型 1: 非云上IP，2: 云上IP，3: 域名，4: IP，5: 文件，6: 进程
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEntityType() const;

                    /**
                     * 设置实体类型 1: 非云上IP，2: 云上IP，3: 域名，4: IP，5: 文件，6: 进程
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _entityType 实体类型 1: 非云上IP，2: 云上IP，3: 域名，4: IP，5: 文件，6: 进程
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEntityType(const int64_t& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     * 
                     */
                    bool EntityTypeHasBeenSet() const;

                    /**
                     * 获取关注点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Concern 关注点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConcern() const;

                    /**
                     * 设置关注点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _concern 关注点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConcern(const std::string& _concern);

                    /**
                     * 判断参数 Concern 是否已赋值
                     * @return Concern 是否已赋值
                     * 
                     */
                    bool ConcernHasBeenSet() const;

                    /**
                     * 获取最近数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatisticsCount 最近数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatisticsCount() const;

                    /**
                     * 设置最近数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statisticsCount 最近数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatisticsCount(const int64_t& _statisticsCount);

                    /**
                     * 判断参数 StatisticsCount 是否已赋值
                     * @return StatisticsCount 是否已赋值
                     * 
                     */
                    bool StatisticsCountHasBeenSet() const;

                    /**
                     * 获取IP国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpCountry IP国家
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpCountry() const;

                    /**
                     * 设置IP国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipCountry IP国家
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpCountry(const std::string& _ipCountry);

                    /**
                     * 判断参数 IpCountry 是否已赋值
                     * @return IpCountry 是否已赋值
                     * 
                     */
                    bool IpCountryHasBeenSet() const;

                    /**
                     * 获取IP省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpProvince IP省份
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpProvince() const;

                    /**
                     * 设置IP省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipProvince IP省份
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpProvince(const std::string& _ipProvince);

                    /**
                     * 判断参数 IpProvince 是否已赋值
                     * @return IpProvince 是否已赋值
                     * 
                     */
                    bool IpProvinceHasBeenSet() const;

                    /**
                     * 获取结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result 结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取置信度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Confidence 置信度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置置信度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _confidence 置信度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取服务商
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpIsp 服务商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpIsp() const;

                    /**
                     * 设置服务商
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipIsp 服务商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpIsp(const std::string& _ipIsp);

                    /**
                     * 判断参数 IpIsp 是否已赋值
                     * @return IpIsp 是否已赋值
                     * 
                     */
                    bool IpIspHasBeenSet() const;

                    /**
                     * 获取是否基础设施
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpInfrastructure 是否基础设施
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpInfrastructure() const;

                    /**
                     * 设置是否基础设施
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipInfrastructure 是否基础设施
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpInfrastructure(const std::string& _ipInfrastructure);

                    /**
                     * 判断参数 IpInfrastructure 是否已赋值
                     * @return IpInfrastructure 是否已赋值
                     * 
                     */
                    bool IpInfrastructureHasBeenSet() const;

                    /**
                     * 获取威胁类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThreatType 威胁类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetThreatType() const;

                    /**
                     * 设置威胁类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _threatType 威胁类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThreatType(const std::vector<std::string>& _threatType);

                    /**
                     * 判断参数 ThreatType 是否已赋值
                     * @return ThreatType 是否已赋值
                     * 
                     */
                    bool ThreatTypeHasBeenSet() const;

                    /**
                     * 获取威胁团伙
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Groups 威胁团伙
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetGroups() const;

                    /**
                     * 设置威胁团伙
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groups 威胁团伙
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroups(const std::vector<std::string>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取状态威胁情报接口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态威胁情报接口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态威胁情报接口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态威胁情报接口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取恶意标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 恶意标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置恶意标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 恶意标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VictimAssetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVictimAssetType() const;

                    /**
                     * 设置资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _victimAssetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVictimAssetType(const std::string& _victimAssetType);

                    /**
                     * 判断参数 VictimAssetType 是否已赋值
                     * @return VictimAssetType 是否已赋值
                     * 
                     */
                    bool VictimAssetTypeHasBeenSet() const;

                    /**
                     * 获取资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VictimAssetName 资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVictimAssetName() const;

                    /**
                     * 设置资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _victimAssetName 资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVictimAssetName(const std::string& _victimAssetName);

                    /**
                     * 判断参数 VictimAssetName 是否已赋值
                     * @return VictimAssetName 是否已赋值
                     * 
                     */
                    bool VictimAssetNameHasBeenSet() const;

                    /**
                     * 获取注册者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainRegistrant 注册者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomainRegistrant() const;

                    /**
                     * 设置注册者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainRegistrant 注册者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomainRegistrant(const std::string& _domainRegistrant);

                    /**
                     * 判断参数 DomainRegistrant 是否已赋值
                     * @return DomainRegistrant 是否已赋值
                     * 
                     */
                    bool DomainRegistrantHasBeenSet() const;

                    /**
                     * 获取注册机构
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainRegisteredInstitution 注册机构
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomainRegisteredInstitution() const;

                    /**
                     * 设置注册机构
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainRegisteredInstitution 注册机构
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomainRegisteredInstitution(const std::string& _domainRegisteredInstitution);

                    /**
                     * 判断参数 DomainRegisteredInstitution 是否已赋值
                     * @return DomainRegisteredInstitution 是否已赋值
                     * 
                     */
                    bool DomainRegisteredInstitutionHasBeenSet() const;

                    /**
                     * 获取注册时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainRegistrationTime 注册时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomainRegistrationTime() const;

                    /**
                     * 设置注册时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainRegistrationTime 注册时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomainRegistrationTime(const std::string& _domainRegistrationTime);

                    /**
                     * 判断参数 DomainRegistrationTime 是否已赋值
                     * @return DomainRegistrationTime 是否已赋值
                     * 
                     */
                    bool DomainRegistrationTimeHasBeenSet() const;

                    /**
                     * 获取文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName 文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileName 文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileMd5 MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileMd5 MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileMd5(const std::string& _fileMd5);

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     * 
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取病毒名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirusName 病毒名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVirusName() const;

                    /**
                     * 设置病毒名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virusName 病毒名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVirusName(const std::string& _virusName);

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     * 
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilePath 文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filePath 文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSize 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSize 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileSize(const std::string& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取进程名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcName 进程名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcName() const;

                    /**
                     * 设置进程名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _procName 进程名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcName(const std::string& _procName);

                    /**
                     * 判断参数 ProcName 是否已赋值
                     * @return ProcName 是否已赋值
                     * 
                     */
                    bool ProcNameHasBeenSet() const;

                    /**
                     * 获取进程ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Pid 进程ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPid() const;

                    /**
                     * 设置进程ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pid 进程ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPid(const std::string& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcPath 进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcPath() const;

                    /**
                     * 设置进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _procPath 进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcPath(const std::string& _procPath);

                    /**
                     * 判断参数 ProcPath 是否已赋值
                     * @return ProcPath 是否已赋值
                     * 
                     */
                    bool ProcPathHasBeenSet() const;

                    /**
                     * 获取用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcUser 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcUser() const;

                    /**
                     * 设置用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _procUser 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcUser(const std::string& _procUser);

                    /**
                     * 判断参数 ProcUser 是否已赋值
                     * @return ProcUser 是否已赋值
                     * 
                     */
                    bool ProcUserHasBeenSet() const;

                    /**
                     * 获取已防御
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefendedCount 已防御
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDefendedCount() const;

                    /**
                     * 设置已防御
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defendedCount 已防御
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefendedCount(const uint64_t& _defendedCount);

                    /**
                     * 判断参数 DefendedCount 是否已赋值
                     * @return DefendedCount 是否已赋值
                     * 
                     */
                    bool DefendedCountHasBeenSet() const;

                    /**
                     * 获取仅检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetectedCount 仅检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDetectedCount() const;

                    /**
                     * 设置仅检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detectedCount 仅检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetectedCount(const uint64_t& _detectedCount);

                    /**
                     * 判断参数 DetectedCount 是否已赋值
                     * @return DetectedCount 是否已赋值
                     * 
                     */
                    bool DetectedCountHasBeenSet() const;

                    /**
                     * 获取可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SearchData 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSearchData() const;

                    /**
                     * 设置可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _searchData 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSearchData(const std::string& _searchData);

                    /**
                     * 判断参数 SearchData 是否已赋值
                     * @return SearchData 是否已赋值
                     * 
                     */
                    bool SearchDataHasBeenSet() const;

                    /**
                     * 获取可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpCountryIso 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpCountryIso() const;

                    /**
                     * 设置可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipCountryIso 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpCountryIso(const std::string& _ipCountryIso);

                    /**
                     * 判断参数 IpCountryIso 是否已赋值
                     * @return IpCountryIso 是否已赋值
                     * 
                     */
                    bool IpCountryIsoHasBeenSet() const;

                    /**
                     * 获取可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpProvinceIso 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpProvinceIso() const;

                    /**
                     * 设置可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipProvinceIso 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpProvinceIso(const std::string& _ipProvinceIso);

                    /**
                     * 判断参数 IpProvinceIso 是否已赋值
                     * @return IpProvinceIso 是否已赋值
                     * 
                     */
                    bool IpProvinceIsoHasBeenSet() const;

                    /**
                     * 获取可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpCity 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpCity() const;

                    /**
                     * 设置可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipCity 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpCity(const std::string& _ipCity);

                    /**
                     * 判断参数 IpCity 是否已赋值
                     * @return IpCity 是否已赋值
                     * 
                     */
                    bool IpCityHasBeenSet() const;

                    /**
                     * 获取可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventSubType 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventSubType 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventSubType(const std::string& _eventSubType);

                    /**
                     * 判断参数 EventSubType 是否已赋值
                     * @return EventSubType 是否已赋值
                     * 
                     */
                    bool EventSubTypeHasBeenSet() const;

                private:

                    /**
                     * 关注点类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_concernType;
                    bool m_concernTypeHasBeenSet;

                    /**
                     * 实体类型 1: 非云上IP，2: 云上IP，3: 域名，4: IP，5: 文件，6: 进程
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * 关注点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_concern;
                    bool m_concernHasBeenSet;

                    /**
                     * 最近数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_statisticsCount;
                    bool m_statisticsCountHasBeenSet;

                    /**
                     * IP国家
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipCountry;
                    bool m_ipCountryHasBeenSet;

                    /**
                     * IP省份
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipProvince;
                    bool m_ipProvinceHasBeenSet;

                    /**
                     * 结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 置信度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 服务商
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipIsp;
                    bool m_ipIspHasBeenSet;

                    /**
                     * 是否基础设施
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipInfrastructure;
                    bool m_ipInfrastructureHasBeenSet;

                    /**
                     * 威胁类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_threatType;
                    bool m_threatTypeHasBeenSet;

                    /**
                     * 威胁团伙
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * 状态威胁情报接口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 恶意标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_victimAssetType;
                    bool m_victimAssetTypeHasBeenSet;

                    /**
                     * 资产名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_victimAssetName;
                    bool m_victimAssetNameHasBeenSet;

                    /**
                     * 注册者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domainRegistrant;
                    bool m_domainRegistrantHasBeenSet;

                    /**
                     * 注册机构
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domainRegisteredInstitution;
                    bool m_domainRegisteredInstitutionHasBeenSet;

                    /**
                     * 注册时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domainRegistrationTime;
                    bool m_domainRegistrationTimeHasBeenSet;

                    /**
                     * 文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * MD5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * 病毒名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * 文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 进程名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_procName;
                    bool m_procNameHasBeenSet;

                    /**
                     * 进程ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_procPath;
                    bool m_procPathHasBeenSet;

                    /**
                     * 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_procUser;
                    bool m_procUserHasBeenSet;

                    /**
                     * 已防御
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_defendedCount;
                    bool m_defendedCountHasBeenSet;

                    /**
                     * 仅检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_detectedCount;
                    bool m_detectedCountHasBeenSet;

                    /**
                     * 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_searchData;
                    bool m_searchDataHasBeenSet;

                    /**
                     * 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipCountryIso;
                    bool m_ipCountryIsoHasBeenSet;

                    /**
                     * 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipProvinceIso;
                    bool m_ipProvinceIsoHasBeenSet;

                    /**
                     * 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipCity;
                    bool m_ipCityHasBeenSet;

                    /**
                     * 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_CONCERNINFO_H_
