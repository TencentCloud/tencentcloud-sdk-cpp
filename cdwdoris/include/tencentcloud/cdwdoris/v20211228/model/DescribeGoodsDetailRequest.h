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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEGOODSDETAILREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEGOODSDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/ResourceNodeSpec.h>
#include <tencentcloud/cdwdoris/v20211228/model/ChargeProperties.h>
#include <tencentcloud/cdwdoris/v20211228/model/Tag.h>
#include <tencentcloud/cdwdoris/v20211228/model/NetworkInfo.h>
#include <tencentcloud/cdwdoris/v20211228/model/InstanceDetail.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeGoodsDetail请求参数结构体
                */
                class DescribeGoodsDetailRequest : public AbstractModel
                {
                public:
                    DescribeGoodsDetailRequest();
                    ~DescribeGoodsDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作类型，“CREATE"表示创建、”MODIFY"表示变更配置、“RENEW"表示续费
                     * @return Case 操作类型，“CREATE"表示创建、”MODIFY"表示变更配置、“RENEW"表示续费
                     * 
                     */
                    std::string GetCase() const;

                    /**
                     * 设置操作类型，“CREATE"表示创建、”MODIFY"表示变更配置、“RENEW"表示续费
                     * @param _case 操作类型，“CREATE"表示创建、”MODIFY"表示变更配置、“RENEW"表示续费
                     * 
                     */
                    void SetCase(const std::string& _case);

                    /**
                     * 判断参数 Case 是否已赋值
                     * @return Case 是否已赋值
                     * 
                     */
                    bool CaseHasBeenSet() const;

                    /**
                     * 获取可用区，例如"ap-guangzhou-3"表示广州三区等
                     * @return Zone 可用区，例如"ap-guangzhou-3"表示广州三区等
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区，例如"ap-guangzhou-3"表示广州三区等
                     * @param _zone 可用区，例如"ap-guangzhou-3"表示广州三区等
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
                     * 获取集群的高可用标记，true表示为高可用集群
                     * @return HaFlag 集群的高可用标记，true表示为高可用集群
                     * 
                     */
                    bool GetHaFlag() const;

                    /**
                     * 设置集群的高可用标记，true表示为高可用集群
                     * @param _haFlag 集群的高可用标记，true表示为高可用集群
                     * 
                     */
                    void SetHaFlag(const bool& _haFlag);

                    /**
                     * 判断参数 HaFlag 是否已赋值
                     * @return HaFlag 是否已赋值
                     * 
                     */
                    bool HaFlagHasBeenSet() const;

                    /**
                     * 获取高可用类型： 0：非高可用 1：读高可用 2：读写高可用。	
                     * @return HaType 高可用类型： 0：非高可用 1：读高可用 2：读写高可用。	
                     * 
                     */
                    int64_t GetHaType() const;

                    /**
                     * 设置高可用类型： 0：非高可用 1：读高可用 2：读写高可用。	
                     * @param _haType 高可用类型： 0：非高可用 1：读高可用 2：读写高可用。	
                     * 
                     */
                    void SetHaType(const int64_t& _haType);

                    /**
                     * 判断参数 HaType 是否已赋值
                     * @return HaType 是否已赋值
                     * 
                     */
                    bool HaTypeHasBeenSet() const;

                    /**
                     * 获取用户集群的私有网络
                     * @return UserVPCId 用户集群的私有网络
                     * 
                     */
                    std::string GetUserVPCId() const;

                    /**
                     * 设置用户集群的私有网络
                     * @param _userVPCId 用户集群的私有网络
                     * 
                     */
                    void SetUserVPCId(const std::string& _userVPCId);

                    /**
                     * 判断参数 UserVPCId 是否已赋值
                     * @return UserVPCId 是否已赋值
                     * 
                     */
                    bool UserVPCIdHasBeenSet() const;

                    /**
                     * 获取用户集群的子网
                     * @return UserSubnetId 用户集群的子网
                     * 
                     */
                    std::string GetUserSubnetId() const;

                    /**
                     * 设置用户集群的子网
                     * @param _userSubnetId 用户集群的子网
                     * 
                     */
                    void SetUserSubnetId(const std::string& _userSubnetId);

                    /**
                     * 判断参数 UserSubnetId 是否已赋值
                     * @return UserSubnetId 是否已赋值
                     * 
                     */
                    bool UserSubnetIdHasBeenSet() const;

                    /**
                     * 获取用户集群的版本，例如“20.7.2.30”等
                     * @return ProductVersion 用户集群的版本，例如“20.7.2.30”等
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置用户集群的版本，例如“20.7.2.30”等
                     * @param _productVersion 用户集群的版本，例如“20.7.2.30”等
                     * 
                     */
                    void SetProductVersion(const std::string& _productVersion);

                    /**
                     * 判断参数 ProductVersion 是否已赋值
                     * @return ProductVersion 是否已赋值
                     * 
                     */
                    bool ProductVersionHasBeenSet() const;

                    /**
                     * 获取集群ID，创建时为空，其他情况必须存在
                     * @return InstanceId 集群ID，创建时为空，其他情况必须存在
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID，创建时为空，其他情况必须存在
                     * @param _instanceId 集群ID，创建时为空，其他情况必须存在
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取集群资源规格描述
                     * @return Resources 集群资源规格描述
                     * 
                     */
                    std::vector<ResourceNodeSpec> GetResources() const;

                    /**
                     * 设置集群资源规格描述
                     * @param _resources 集群资源规格描述
                     * 
                     */
                    void SetResources(const std::vector<ResourceNodeSpec>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取集群规格修改参数
                     * @return ModifySpec 集群规格修改参数
                     * 
                     */
                    ResourceNodeSpec GetModifySpec() const;

                    /**
                     * 设置集群规格修改参数
                     * @param _modifySpec 集群规格修改参数
                     * 
                     */
                    void SetModifySpec(const ResourceNodeSpec& _modifySpec);

                    /**
                     * 判断参数 ModifySpec 是否已赋值
                     * @return ModifySpec 是否已赋值
                     * 
                     */
                    bool ModifySpecHasBeenSet() const;

                    /**
                     * 获取计费信息
                     * @return ChargeProperties 计费信息
                     * 
                     */
                    ChargeProperties GetChargeProperties() const;

                    /**
                     * 设置计费信息
                     * @param _chargeProperties 计费信息
                     * 
                     */
                    void SetChargeProperties(const ChargeProperties& _chargeProperties);

                    /**
                     * 判断参数 ChargeProperties 是否已赋值
                     * @return ChargeProperties 是否已赋值
                     * 
                     */
                    bool ChargePropertiesHasBeenSet() const;

                    /**
                     * 获取创建集群时需要填写InstanceName
                     * @return InstanceName 创建集群时需要填写InstanceName
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置创建集群时需要填写InstanceName
                     * @param _instanceName 创建集群时需要填写InstanceName
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取购买页填写的标签列表
                     * @return Tags 购买页填写的标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置购买页填写的标签列表
                     * @param _tags 购买页填写的标签列表
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取CLS日志集ID
                     * @return ClsLogSetId CLS日志集ID
                     * 
                     */
                    std::string GetClsLogSetId() const;

                    /**
                     * 设置CLS日志集ID
                     * @param _clsLogSetId CLS日志集ID
                     * 
                     */
                    void SetClsLogSetId(const std::string& _clsLogSetId);

                    /**
                     * 判断参数 ClsLogSetId 是否已赋值
                     * @return ClsLogSetId 是否已赋值
                     * 
                     */
                    bool ClsLogSetIdHasBeenSet() const;

                    /**
                     * 获取用户子网剩余ip数量
                     * @return UserSubnetIPNum 用户子网剩余ip数量
                     * 
                     */
                    int64_t GetUserSubnetIPNum() const;

                    /**
                     * 设置用户子网剩余ip数量
                     * @param _userSubnetIPNum 用户子网剩余ip数量
                     * 
                     */
                    void SetUserSubnetIPNum(const int64_t& _userSubnetIPNum);

                    /**
                     * 判断参数 UserSubnetIPNum 是否已赋值
                     * @return UserSubnetIPNum 是否已赋值
                     * 
                     */
                    bool UserSubnetIPNumHasBeenSet() const;

                    /**
                     * 获取COS桶名称
                     * @return CosBucketName COS桶名称
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置COS桶名称
                     * @param _cosBucketName COS桶名称
                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取按量计费转包年包月
                     * @return HourToPrepaid 按量计费转包年包月
                     * 
                     */
                    bool GetHourToPrepaid() const;

                    /**
                     * 设置按量计费转包年包月
                     * @param _hourToPrepaid 按量计费转包年包月
                     * 
                     */
                    void SetHourToPrepaid(const bool& _hourToPrepaid);

                    /**
                     * 判断参数 HourToPrepaid 是否已赋值
                     * @return HourToPrepaid 是否已赋值
                     * 
                     */
                    bool HourToPrepaidHasBeenSet() const;

                    /**
                     * 获取base64密码
                     * @return DorisUserPwd base64密码
                     * 
                     */
                    std::string GetDorisUserPwd() const;

                    /**
                     * 设置base64密码
                     * @param _dorisUserPwd base64密码
                     * 
                     */
                    void SetDorisUserPwd(const std::string& _dorisUserPwd);

                    /**
                     * 判断参数 DorisUserPwd 是否已赋值
                     * @return DorisUserPwd 是否已赋值
                     * 
                     */
                    bool DorisUserPwdHasBeenSet() const;

                    /**
                     * 获取日志的类型，es或者cls_topic
                     * @return LogType 日志的类型，es或者cls_topic
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志的类型，es或者cls_topic
                     * @param _logType 日志的类型，es或者cls_topic
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取表名大小写是否敏感，0：敏感；1：不敏感，表名改为以小写存储；2：不敏感，以小写进行比较
                     * @return CaseSensitive 表名大小写是否敏感，0：敏感；1：不敏感，表名改为以小写存储；2：不敏感，以小写进行比较
                     * 
                     */
                    int64_t GetCaseSensitive() const;

                    /**
                     * 设置表名大小写是否敏感，0：敏感；1：不敏感，表名改为以小写存储；2：不敏感，以小写进行比较
                     * @param _caseSensitive 表名大小写是否敏感，0：敏感；1：不敏感，表名改为以小写存储；2：不敏感，以小写进行比较
                     * 
                     */
                    void SetCaseSensitive(const int64_t& _caseSensitive);

                    /**
                     * 判断参数 CaseSensitive 是否已赋值
                     * @return CaseSensitive 是否已赋值
                     * 
                     */
                    bool CaseSensitiveHasBeenSet() const;

                    /**
                     * 获取true为滚动重启 false为批量重启
                     * @return RollingRestart true为滚动重启 false为批量重启
                     * 
                     */
                    bool GetRollingRestart() const;

                    /**
                     * 设置true为滚动重启 false为批量重启
                     * @param _rollingRestart true为滚动重启 false为批量重启
                     * 
                     */
                    void SetRollingRestart(const bool& _rollingRestart);

                    /**
                     * 判断参数 RollingRestart 是否已赋值
                     * @return RollingRestart 是否已赋值
                     * 
                     */
                    bool RollingRestartHasBeenSet() const;

                    /**
                     * 获取是否为多可用区
                     * @return EnableMultiZones 是否为多可用区
                     * 
                     */
                    bool GetEnableMultiZones() const;

                    /**
                     * 设置是否为多可用区
                     * @param _enableMultiZones 是否为多可用区
                     * 
                     */
                    void SetEnableMultiZones(const bool& _enableMultiZones);

                    /**
                     * 判断参数 EnableMultiZones 是否已赋值
                     * @return EnableMultiZones 是否已赋值
                     * 
                     */
                    bool EnableMultiZonesHasBeenSet() const;

                    /**
                     * 获取用户多可用区的网络信息
                     * @return UserMultiZoneInfos 用户多可用区的网络信息
                     * 
                     */
                    std::vector<NetworkInfo> GetUserMultiZoneInfos() const;

                    /**
                     * 设置用户多可用区的网络信息
                     * @param _userMultiZoneInfos 用户多可用区的网络信息
                     * 
                     */
                    void SetUserMultiZoneInfos(const std::vector<NetworkInfo>& _userMultiZoneInfos);

                    /**
                     * 判断参数 UserMultiZoneInfos 是否已赋值
                     * @return UserMultiZoneInfos 是否已赋值
                     * 
                     */
                    bool UserMultiZoneInfosHasBeenSet() const;

                    /**
                     * 获取扩展字段
                     * @return Details 扩展字段
                     * 
                     */
                    InstanceDetail GetDetails() const;

                    /**
                     * 设置扩展字段
                     * @param _details 扩展字段
                     * 
                     */
                    void SetDetails(const InstanceDetail& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * 操作类型，“CREATE"表示创建、”MODIFY"表示变更配置、“RENEW"表示续费
                     */
                    std::string m_case;
                    bool m_caseHasBeenSet;

                    /**
                     * 可用区，例如"ap-guangzhou-3"表示广州三区等
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 集群的高可用标记，true表示为高可用集群
                     */
                    bool m_haFlag;
                    bool m_haFlagHasBeenSet;

                    /**
                     * 高可用类型： 0：非高可用 1：读高可用 2：读写高可用。	
                     */
                    int64_t m_haType;
                    bool m_haTypeHasBeenSet;

                    /**
                     * 用户集群的私有网络
                     */
                    std::string m_userVPCId;
                    bool m_userVPCIdHasBeenSet;

                    /**
                     * 用户集群的子网
                     */
                    std::string m_userSubnetId;
                    bool m_userSubnetIdHasBeenSet;

                    /**
                     * 用户集群的版本，例如“20.7.2.30”等
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * 集群ID，创建时为空，其他情况必须存在
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 集群资源规格描述
                     */
                    std::vector<ResourceNodeSpec> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 集群规格修改参数
                     */
                    ResourceNodeSpec m_modifySpec;
                    bool m_modifySpecHasBeenSet;

                    /**
                     * 计费信息
                     */
                    ChargeProperties m_chargeProperties;
                    bool m_chargePropertiesHasBeenSet;

                    /**
                     * 创建集群时需要填写InstanceName
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 购买页填写的标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * CLS日志集ID
                     */
                    std::string m_clsLogSetId;
                    bool m_clsLogSetIdHasBeenSet;

                    /**
                     * 用户子网剩余ip数量
                     */
                    int64_t m_userSubnetIPNum;
                    bool m_userSubnetIPNumHasBeenSet;

                    /**
                     * COS桶名称
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * 按量计费转包年包月
                     */
                    bool m_hourToPrepaid;
                    bool m_hourToPrepaidHasBeenSet;

                    /**
                     * base64密码
                     */
                    std::string m_dorisUserPwd;
                    bool m_dorisUserPwdHasBeenSet;

                    /**
                     * 日志的类型，es或者cls_topic
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 表名大小写是否敏感，0：敏感；1：不敏感，表名改为以小写存储；2：不敏感，以小写进行比较
                     */
                    int64_t m_caseSensitive;
                    bool m_caseSensitiveHasBeenSet;

                    /**
                     * true为滚动重启 false为批量重启
                     */
                    bool m_rollingRestart;
                    bool m_rollingRestartHasBeenSet;

                    /**
                     * 是否为多可用区
                     */
                    bool m_enableMultiZones;
                    bool m_enableMultiZonesHasBeenSet;

                    /**
                     * 用户多可用区的网络信息
                     */
                    std::vector<NetworkInfo> m_userMultiZoneInfos;
                    bool m_userMultiZoneInfosHasBeenSet;

                    /**
                     * 扩展字段
                     */
                    InstanceDetail m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEGOODSDETAILREQUEST_H_
