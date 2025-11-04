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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEINTEGRATECLUSTERREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEINTEGRATECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>
#include <tencentcloud/cynosdb/v20190107/model/ParamItem.h>
#include <tencentcloud/cynosdb/v20190107/model/IntegrateInstanceInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyConfigInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/IntegrateCreateClusterConfig.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateIntegrateCluster请求参数结构体
                */
                class CreateIntegrateClusterRequest : public AbstractModel
                {
                public:
                    CreateIntegrateClusterRequest();
                    ~CreateIntegrateClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取所属VPC网络ID
                     * @return VpcId 所属VPC网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置所属VPC网络ID
                     * @param _vpcId 所属VPC网络ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取所属子网ID
                     * @return SubnetId 所属子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置所属子网ID
                     * @param _subnetId 所属子网ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取数据库版本，取值范围: 
<li> MYSQL可选值：5.7，8.0 </li>
                     * @return DbVersion 数据库版本，取值范围: 
<li> MYSQL可选值：5.7，8.0 </li>
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置数据库版本，取值范围: 
<li> MYSQL可选值：5.7，8.0 </li>
                     * @param _dbVersion 数据库版本，取值范围: 
<li> MYSQL可选值：5.7，8.0 </li>
                     * 
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     * 
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取所属项目ID
                     * @return ProjectId 所属项目ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置所属项目ID
                     * @param _projectId 所属项目ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取集群名称，长度小于64个字符，每个字符取值范围：大/小写字母，数字，特殊符号（'-','_','.'）
                     * @return ClusterName 集群名称，长度小于64个字符，每个字符取值范围：大/小写字母，数字，特殊符号（'-','_','.'）
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称，长度小于64个字符，每个字符取值范围：大/小写字母，数字，特殊符号（'-','_','.'）
                     * @param _clusterName 集群名称，长度小于64个字符，每个字符取值范围：大/小写字母，数字，特殊符号（'-','_','.'）
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取账号密码(8-64个字符，包含大小写英文字母、数字和符号~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/中的任意三种)
                     * @return AdminPassword 账号密码(8-64个字符，包含大小写英文字母、数字和符号~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/中的任意三种)
                     * 
                     */
                    std::string GetAdminPassword() const;

                    /**
                     * 设置账号密码(8-64个字符，包含大小写英文字母、数字和符号~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/中的任意三种)
                     * @param _adminPassword 账号密码(8-64个字符，包含大小写英文字母、数字和符号~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/中的任意三种)
                     * 
                     */
                    void SetAdminPassword(const std::string& _adminPassword);

                    /**
                     * 判断参数 AdminPassword 是否已赋值
                     * @return AdminPassword 是否已赋值
                     * 
                     */
                    bool AdminPasswordHasBeenSet() const;

                    /**
                     * 获取端口，默认3306，取值范围[0, 65535)
                     * @return Port 端口，默认3306，取值范围[0, 65535)
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置端口，默认3306，取值范围[0, 65535)
                     * @param _port 端口，默认3306，取值范围[0, 65535)
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取计费模式，按量计费：0，包年包月：1。默认按量计费。
                     * @return PayMode 计费模式，按量计费：0，包年包月：1。默认按量计费。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置计费模式，按量计费：0，包年包月：1。默认按量计费。
                     * @param _payMode 计费模式，按量计费：0，包年包月：1。默认按量计费。
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取购买集群数，可选值范围[1,3]，默认为1
                     * @return Count 购买集群数，可选值范围[1,3]，默认为1
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置购买集群数，可选值范围[1,3]，默认为1
                     * @param _count 购买集群数，可选值范围[1,3]，默认为1
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取普通实例存储上限，单位GB
当DbType为MYSQL，且存储计费模式为预付费时，该参数需不大于cpu与memory对应存储规格上限
                     * @return StorageLimit 普通实例存储上限，单位GB
当DbType为MYSQL，且存储计费模式为预付费时，该参数需不大于cpu与memory对应存储规格上限
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置普通实例存储上限，单位GB
当DbType为MYSQL，且存储计费模式为预付费时，该参数需不大于cpu与memory对应存储规格上限
                     * @param _storageLimit 普通实例存储上限，单位GB
当DbType为MYSQL，且存储计费模式为预付费时，该参数需不大于cpu与memory对应存储规格上限
                     * 
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取包年包月购买时长
                     * @return TimeSpan 包年包月购买时长
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置包年包月购买时长
                     * @param _timeSpan 包年包月购买时长
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取包年包月购买时长单位，['s','d','m','y']
                     * @return TimeUnit 包年包月购买时长单位，['s','d','m','y']
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置包年包月购买时长单位，['s','d','m','y']
                     * @param _timeUnit 包年包月购买时长单位，['s','d','m','y']
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取包年包月购买是否自动续费，默认为0。
0标识默认续费方式，1表示自动续费，2表示不自动续费。
                     * @return AutoRenewFlag 包年包月购买是否自动续费，默认为0。
0标识默认续费方式，1表示自动续费，2表示不自动续费。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置包年包月购买是否自动续费，默认为0。
0标识默认续费方式，1表示自动续费，2表示不自动续费。
                     * @param _autoRenewFlag 包年包月购买是否自动续费，默认为0。
0标识默认续费方式，1表示自动续费，2表示不自动续费。
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取是否自动选择代金券 1是 0否 默认为0
                     * @return AutoVoucher 是否自动选择代金券 1是 0否 默认为0
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动选择代金券 1是 0否 默认为0
                     * @param _autoVoucher 是否自动选择代金券 1是 0否 默认为0
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取集群创建需要绑定的tag数组信息
                     * @return ResourceTags 集群创建需要绑定的tag数组信息
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置集群创建需要绑定的tag数组信息
                     * @param _resourceTags 集群创建需要绑定的tag数组信息
                     * 
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取集群存储计费模式，按量计费：0，包年包月：1。默认按量计费
当DbType为MYSQL时，在集群计算计费模式为后付费（包括DbMode为SERVERLESS）时，存储计费模式仅可为按量计费
回档与克隆均不支持包年包月存储
                     * @return StoragePayMode 集群存储计费模式，按量计费：0，包年包月：1。默认按量计费
当DbType为MYSQL时，在集群计算计费模式为后付费（包括DbMode为SERVERLESS）时，存储计费模式仅可为按量计费
回档与克隆均不支持包年包月存储
                     * 
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置集群存储计费模式，按量计费：0，包年包月：1。默认按量计费
当DbType为MYSQL时，在集群计算计费模式为后付费（包括DbMode为SERVERLESS）时，存储计费模式仅可为按量计费
回档与克隆均不支持包年包月存储
                     * @param _storagePayMode 集群存储计费模式，按量计费：0，包年包月：1。默认按量计费
当DbType为MYSQL时，在集群计算计费模式为后付费（包括DbMode为SERVERLESS）时，存储计费模式仅可为按量计费
回档与克隆均不支持包年包月存储
                     * 
                     */
                    void SetStoragePayMode(const int64_t& _storagePayMode);

                    /**
                     * 判断参数 StoragePayMode 是否已赋值
                     * @return StoragePayMode 是否已赋值
                     * 
                     */
                    bool StoragePayModeHasBeenSet() const;

                    /**
                     * 获取安全组id数组
                     * @return SecurityGroupIds 安全组id数组
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组id数组
                     * @param _securityGroupIds 安全组id数组
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取告警策略Id数组
                     * @return AlarmPolicyIds 告警策略Id数组
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicyIds() const;

                    /**
                     * 设置告警策略Id数组
                     * @param _alarmPolicyIds 告警策略Id数组
                     * 
                     */
                    void SetAlarmPolicyIds(const std::vector<std::string>& _alarmPolicyIds);

                    /**
                     * 判断参数 AlarmPolicyIds 是否已赋值
                     * @return AlarmPolicyIds 是否已赋值
                     * 
                     */
                    bool AlarmPolicyIdsHasBeenSet() const;

                    /**
                     * 获取参数数组，暂时支持character_set_server （utf8｜latin1｜gbk｜utf8mb4） ，lower_case_table_names，1-大小写不敏感，0-大小写敏感
                     * @return ClusterParams 参数数组，暂时支持character_set_server （utf8｜latin1｜gbk｜utf8mb4） ，lower_case_table_names，1-大小写不敏感，0-大小写敏感
                     * 
                     */
                    std::vector<ParamItem> GetClusterParams() const;

                    /**
                     * 设置参数数组，暂时支持character_set_server （utf8｜latin1｜gbk｜utf8mb4） ，lower_case_table_names，1-大小写不敏感，0-大小写敏感
                     * @param _clusterParams 参数数组，暂时支持character_set_server （utf8｜latin1｜gbk｜utf8mb4） ，lower_case_table_names，1-大小写不敏感，0-大小写敏感
                     * 
                     */
                    void SetClusterParams(const std::vector<ParamItem>& _clusterParams);

                    /**
                     * 判断参数 ClusterParams 是否已赋值
                     * @return ClusterParams 是否已赋值
                     * 
                     */
                    bool ClusterParamsHasBeenSet() const;

                    /**
                     * 获取交易模式，0-下单且支付，1-下单
                     * @return DealMode 交易模式，0-下单且支付，1-下单
                     * 
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置交易模式，0-下单且支付，1-下单
                     * @param _dealMode 交易模式，0-下单且支付，1-下单
                     * 
                     */
                    void SetDealMode(const int64_t& _dealMode);

                    /**
                     * 判断参数 DealMode 是否已赋值
                     * @return DealMode 是否已赋值
                     * 
                     */
                    bool DealModeHasBeenSet() const;

                    /**
                     * 获取参数模板ID，可以通过查询参数模板信息DescribeParamTemplates获得参数模板ID
                     * @return ParamTemplateId 参数模板ID，可以通过查询参数模板信息DescribeParamTemplates获得参数模板ID
                     * 
                     */
                    int64_t GetParamTemplateId() const;

                    /**
                     * 设置参数模板ID，可以通过查询参数模板信息DescribeParamTemplates获得参数模板ID
                     * @param _paramTemplateId 参数模板ID，可以通过查询参数模板信息DescribeParamTemplates获得参数模板ID
                     * 
                     */
                    void SetParamTemplateId(const int64_t& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                    /**
                     * 获取多可用区地址
                     * @return SlaveZone 多可用区地址
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置多可用区地址
                     * @param _slaveZone 多可用区地址
                     * 
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取实例初始化配置信息，主要用于购买集群时选不同规格实例
                     * @return InstanceInitInfos 实例初始化配置信息，主要用于购买集群时选不同规格实例
                     * 
                     */
                    std::vector<IntegrateInstanceInfo> GetInstanceInitInfos() const;

                    /**
                     * 设置实例初始化配置信息，主要用于购买集群时选不同规格实例
                     * @param _instanceInitInfos 实例初始化配置信息，主要用于购买集群时选不同规格实例
                     * 
                     */
                    void SetInstanceInitInfos(const std::vector<IntegrateInstanceInfo>& _instanceInitInfos);

                    /**
                     * 判断参数 InstanceInitInfos 是否已赋值
                     * @return InstanceInitInfos 是否已赋值
                     * 
                     */
                    bool InstanceInitInfosHasBeenSet() const;

                    /**
                     * 获取全球数据库唯一标识
                     * @return GdnId 全球数据库唯一标识
                     * 
                     */
                    std::string GetGdnId() const;

                    /**
                     * 设置全球数据库唯一标识
                     * @param _gdnId 全球数据库唯一标识
                     * 
                     */
                    void SetGdnId(const std::string& _gdnId);

                    /**
                     * 判断参数 GdnId 是否已赋值
                     * @return GdnId 是否已赋值
                     * 
                     */
                    bool GdnIdHasBeenSet() const;

                    /**
                     * 获取数据库代理配置
                     * @return ProxyConfig 数据库代理配置
                     * 
                     */
                    ProxyConfigInfo GetProxyConfig() const;

                    /**
                     * 设置数据库代理配置
                     * @param _proxyConfig 数据库代理配置
                     * 
                     */
                    void SetProxyConfig(const ProxyConfigInfo& _proxyConfig);

                    /**
                     * 判断参数 ProxyConfig 是否已赋值
                     * @return ProxyConfig 是否已赋值
                     * 
                     */
                    bool ProxyConfigHasBeenSet() const;

                    /**
                     * 获取是否自动归档
                     * @return AutoArchive 是否自动归档
                     * 
                     */
                    std::string GetAutoArchive() const;

                    /**
                     * 设置是否自动归档
                     * @param _autoArchive 是否自动归档
                     * 
                     */
                    void SetAutoArchive(const std::string& _autoArchive);

                    /**
                     * 判断参数 AutoArchive 是否已赋值
                     * @return AutoArchive 是否已赋值
                     * 
                     */
                    bool AutoArchiveHasBeenSet() const;

                    /**
                     * 获取暂停后的归档处理时间
                     * @return AutoArchiveDelayHours 暂停后的归档处理时间
                     * 
                     */
                    int64_t GetAutoArchiveDelayHours() const;

                    /**
                     * 设置暂停后的归档处理时间
                     * @param _autoArchiveDelayHours 暂停后的归档处理时间
                     * 
                     */
                    void SetAutoArchiveDelayHours(const int64_t& _autoArchiveDelayHours);

                    /**
                     * 判断参数 AutoArchiveDelayHours 是否已赋值
                     * @return AutoArchiveDelayHours 是否已赋值
                     * 
                     */
                    bool AutoArchiveDelayHoursHasBeenSet() const;

                    /**
                     * 获取加密方法（由加密算法和密钥对版本组成）
                     * @return EncryptMethod 加密方法（由加密算法和密钥对版本组成）
                     * 
                     */
                    std::string GetEncryptMethod() const;

                    /**
                     * 设置加密方法（由加密算法和密钥对版本组成）
                     * @param _encryptMethod 加密方法（由加密算法和密钥对版本组成）
                     * 
                     */
                    void SetEncryptMethod(const std::string& _encryptMethod);

                    /**
                     * 判断参数 EncryptMethod 是否已赋值
                     * @return EncryptMethod 是否已赋值
                     * 
                     */
                    bool EncryptMethodHasBeenSet() const;

                    /**
                     * 获取集成集群配置信息
                     * @return IntegrateCreateClusterConfig 集成集群配置信息
                     * 
                     */
                    IntegrateCreateClusterConfig GetIntegrateCreateClusterConfig() const;

                    /**
                     * 设置集成集群配置信息
                     * @param _integrateCreateClusterConfig 集成集群配置信息
                     * 
                     */
                    void SetIntegrateCreateClusterConfig(const IntegrateCreateClusterConfig& _integrateCreateClusterConfig);

                    /**
                     * 判断参数 IntegrateCreateClusterConfig 是否已赋值
                     * @return IntegrateCreateClusterConfig 是否已赋值
                     * 
                     */
                    bool IntegrateCreateClusterConfigHasBeenSet() const;

                    /**
                     * 获取存储架构类型。 枚举值：1.0/2.0 默认值：1.0
                     * @return StorageVersion 存储架构类型。 枚举值：1.0/2.0 默认值：1.0
                     * 
                     */
                    std::string GetStorageVersion() const;

                    /**
                     * 设置存储架构类型。 枚举值：1.0/2.0 默认值：1.0
                     * @param _storageVersion 存储架构类型。 枚举值：1.0/2.0 默认值：1.0
                     * 
                     */
                    void SetStorageVersion(const std::string& _storageVersion);

                    /**
                     * 判断参数 StorageVersion 是否已赋值
                     * @return StorageVersion 是否已赋值
                     * 
                     */
                    bool StorageVersionHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 所属VPC网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 所属子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 数据库版本，取值范围: 
<li> MYSQL可选值：5.7，8.0 </li>
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * 所属项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 集群名称，长度小于64个字符，每个字符取值范围：大/小写字母，数字，特殊符号（'-','_','.'）
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 账号密码(8-64个字符，包含大小写英文字母、数字和符号~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/中的任意三种)
                     */
                    std::string m_adminPassword;
                    bool m_adminPasswordHasBeenSet;

                    /**
                     * 端口，默认3306，取值范围[0, 65535)
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 计费模式，按量计费：0，包年包月：1。默认按量计费。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 购买集群数，可选值范围[1,3]，默认为1
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 普通实例存储上限，单位GB
当DbType为MYSQL，且存储计费模式为预付费时，该参数需不大于cpu与memory对应存储规格上限
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * 包年包月购买时长
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 包年包月购买时长单位，['s','d','m','y']
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 包年包月购买是否自动续费，默认为0。
0标识默认续费方式，1表示自动续费，2表示不自动续费。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 是否自动选择代金券 1是 0否 默认为0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 集群创建需要绑定的tag数组信息
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 集群存储计费模式，按量计费：0，包年包月：1。默认按量计费
当DbType为MYSQL时，在集群计算计费模式为后付费（包括DbMode为SERVERLESS）时，存储计费模式仅可为按量计费
回档与克隆均不支持包年包月存储
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * 安全组id数组
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 告警策略Id数组
                     */
                    std::vector<std::string> m_alarmPolicyIds;
                    bool m_alarmPolicyIdsHasBeenSet;

                    /**
                     * 参数数组，暂时支持character_set_server （utf8｜latin1｜gbk｜utf8mb4） ，lower_case_table_names，1-大小写不敏感，0-大小写敏感
                     */
                    std::vector<ParamItem> m_clusterParams;
                    bool m_clusterParamsHasBeenSet;

                    /**
                     * 交易模式，0-下单且支付，1-下单
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                    /**
                     * 参数模板ID，可以通过查询参数模板信息DescribeParamTemplates获得参数模板ID
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * 多可用区地址
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * 实例初始化配置信息，主要用于购买集群时选不同规格实例
                     */
                    std::vector<IntegrateInstanceInfo> m_instanceInitInfos;
                    bool m_instanceInitInfosHasBeenSet;

                    /**
                     * 全球数据库唯一标识
                     */
                    std::string m_gdnId;
                    bool m_gdnIdHasBeenSet;

                    /**
                     * 数据库代理配置
                     */
                    ProxyConfigInfo m_proxyConfig;
                    bool m_proxyConfigHasBeenSet;

                    /**
                     * 是否自动归档
                     */
                    std::string m_autoArchive;
                    bool m_autoArchiveHasBeenSet;

                    /**
                     * 暂停后的归档处理时间
                     */
                    int64_t m_autoArchiveDelayHours;
                    bool m_autoArchiveDelayHoursHasBeenSet;

                    /**
                     * 加密方法（由加密算法和密钥对版本组成）
                     */
                    std::string m_encryptMethod;
                    bool m_encryptMethodHasBeenSet;

                    /**
                     * 集成集群配置信息
                     */
                    IntegrateCreateClusterConfig m_integrateCreateClusterConfig;
                    bool m_integrateCreateClusterConfigHasBeenSet;

                    /**
                     * 存储架构类型。 枚举值：1.0/2.0 默认值：1.0
                     */
                    std::string m_storageVersion;
                    bool m_storageVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEINTEGRATECLUSTERREQUEST_H_
