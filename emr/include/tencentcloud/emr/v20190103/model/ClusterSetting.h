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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERSETTING_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Placement.h>
#include <tencentcloud/emr/v20190103/model/VPCSettings.h>
#include <tencentcloud/emr/v20190103/model/LoginSettings.h>
#include <tencentcloud/emr/v20190103/model/MetaDbInfo.h>
#include <tencentcloud/emr/v20190103/model/JobFlowResourceSpec.h>
#include <tencentcloud/emr/v20190103/model/InstanceChargePrepaid.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 集群配置。
                */
                class ClusterSetting : public AbstractModel
                {
                public:
                    ClusterSetting();
                    ~ClusterSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取付费方式。
PREPAID 包年包月。
POSTPAID_BY_HOUR 按量计费，默认方式。
                     * @return InstanceChargeType 付费方式。
PREPAID 包年包月。
POSTPAID_BY_HOUR 按量计费，默认方式。
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置付费方式。
PREPAID 包年包月。
POSTPAID_BY_HOUR 按量计费，默认方式。
                     * @param _instanceChargeType 付费方式。
PREPAID 包年包月。
POSTPAID_BY_HOUR 按量计费，默认方式。
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取是否为HA集群。
                     * @return SupportHA 是否为HA集群。
                     * 
                     */
                    bool GetSupportHA() const;

                    /**
                     * 设置是否为HA集群。
                     * @param _supportHA 是否为HA集群。
                     * 
                     */
                    void SetSupportHA(const bool& _supportHA);

                    /**
                     * 判断参数 SupportHA 是否已赋值
                     * @return SupportHA 是否已赋值
                     * 
                     */
                    bool SupportHAHasBeenSet() const;

                    /**
                     * 获取集群所使用的安全组，目前仅支持一个。
                     * @return SecurityGroupIds 集群所使用的安全组，目前仅支持一个。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置集群所使用的安全组，目前仅支持一个。
                     * @param _securityGroupIds 集群所使用的安全组，目前仅支持一个。
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
                     * 获取实例位置。
                     * @return Placement 实例位置。
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置实例位置。
                     * @param _placement 实例位置。
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取实例所在VPC。
                     * @return VPCSettings 实例所在VPC。
                     * 
                     */
                    VPCSettings GetVPCSettings() const;

                    /**
                     * 设置实例所在VPC。
                     * @param _vPCSettings 实例所在VPC。
                     * 
                     */
                    void SetVPCSettings(const VPCSettings& _vPCSettings);

                    /**
                     * 判断参数 VPCSettings 是否已赋值
                     * @return VPCSettings 是否已赋值
                     * 
                     */
                    bool VPCSettingsHasBeenSet() const;

                    /**
                     * 获取实例登录配置。
                     * @return LoginSettings 实例登录配置。
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置实例登录配置。
                     * @param _loginSettings 实例登录配置。
                     * 
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取实例标签，示例：["{\"TagKey\":\"test-tag1\",\"TagValue\":\"001\"}","{\"TagKey\":\"test-tag2\",\"TagValue\":\"002\"}"]。
                     * @return TagSpecification 实例标签，示例：["{\"TagKey\":\"test-tag1\",\"TagValue\":\"001\"}","{\"TagKey\":\"test-tag2\",\"TagValue\":\"002\"}"]。
                     * 
                     */
                    std::vector<std::string> GetTagSpecification() const;

                    /**
                     * 设置实例标签，示例：["{\"TagKey\":\"test-tag1\",\"TagValue\":\"001\"}","{\"TagKey\":\"test-tag2\",\"TagValue\":\"002\"}"]。
                     * @param _tagSpecification 实例标签，示例：["{\"TagKey\":\"test-tag1\",\"TagValue\":\"001\"}","{\"TagKey\":\"test-tag2\",\"TagValue\":\"002\"}"]。
                     * 
                     */
                    void SetTagSpecification(const std::vector<std::string>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取元数据库配置。
                     * @return MetaDB 元数据库配置。
                     * 
                     */
                    MetaDbInfo GetMetaDB() const;

                    /**
                     * 设置元数据库配置。
                     * @param _metaDB 元数据库配置。
                     * 
                     */
                    void SetMetaDB(const MetaDbInfo& _metaDB);

                    /**
                     * 判断参数 MetaDB 是否已赋值
                     * @return MetaDB 是否已赋值
                     * 
                     */
                    bool MetaDBHasBeenSet() const;

                    /**
                     * 获取实例硬件配置。
                     * @return ResourceSpec 实例硬件配置。
                     * 
                     */
                    JobFlowResourceSpec GetResourceSpec() const;

                    /**
                     * 设置实例硬件配置。
                     * @param _resourceSpec 实例硬件配置。
                     * 
                     */
                    void SetResourceSpec(const JobFlowResourceSpec& _resourceSpec);

                    /**
                     * 判断参数 ResourceSpec 是否已赋值
                     * @return ResourceSpec 是否已赋值
                     * 
                     */
                    bool ResourceSpecHasBeenSet() const;

                    /**
                     * 获取是否申请公网IP，默认为false。
                     * @return PublicIpAssigned 是否申请公网IP，默认为false。
                     * 
                     */
                    bool GetPublicIpAssigned() const;

                    /**
                     * 设置是否申请公网IP，默认为false。
                     * @param _publicIpAssigned 是否申请公网IP，默认为false。
                     * 
                     */
                    void SetPublicIpAssigned(const bool& _publicIpAssigned);

                    /**
                     * 判断参数 PublicIpAssigned 是否已赋值
                     * @return PublicIpAssigned 是否已赋值
                     * 
                     */
                    bool PublicIpAssignedHasBeenSet() const;

                    /**
                     * 获取包年包月配置，只对包年包月集群生效。
                     * @return InstanceChargePrepaid 包年包月配置，只对包年包月集群生效。
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置包年包月配置，只对包年包月集群生效。
                     * @param _instanceChargePrepaid 包年包月配置，只对包年包月集群生效。
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取集群置放群组。
                     * @return DisasterRecoverGroupIds 集群置放群组。
                     * 
                     */
                    std::string GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置集群置放群组。
                     * @param _disasterRecoverGroupIds 集群置放群组。
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::string& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取是否使用cbs加密。
                     * @return CbsEncryptFlag 是否使用cbs加密。
                     * 
                     */
                    bool GetCbsEncryptFlag() const;

                    /**
                     * 设置是否使用cbs加密。
                     * @param _cbsEncryptFlag 是否使用cbs加密。
                     * 
                     */
                    void SetCbsEncryptFlag(const bool& _cbsEncryptFlag);

                    /**
                     * 判断参数 CbsEncryptFlag 是否已赋值
                     * @return CbsEncryptFlag 是否已赋值
                     * 
                     */
                    bool CbsEncryptFlagHasBeenSet() const;

                    /**
                     * 获取是否使用远程登录，默认为false。
                     * @return RemoteTcpDefaultPort 是否使用远程登录，默认为false。
                     * 
                     */
                    bool GetRemoteTcpDefaultPort() const;

                    /**
                     * 设置是否使用远程登录，默认为false。
                     * @param _remoteTcpDefaultPort 是否使用远程登录，默认为false。
                     * 
                     */
                    void SetRemoteTcpDefaultPort(const bool& _remoteTcpDefaultPort);

                    /**
                     * 判断参数 RemoteTcpDefaultPort 是否已赋值
                     * @return RemoteTcpDefaultPort 是否已赋值
                     * 
                     */
                    bool RemoteTcpDefaultPortHasBeenSet() const;

                private:

                    /**
                     * 付费方式。
PREPAID 包年包月。
POSTPAID_BY_HOUR 按量计费，默认方式。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 是否为HA集群。
                     */
                    bool m_supportHA;
                    bool m_supportHAHasBeenSet;

                    /**
                     * 集群所使用的安全组，目前仅支持一个。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 实例位置。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 实例所在VPC。
                     */
                    VPCSettings m_vPCSettings;
                    bool m_vPCSettingsHasBeenSet;

                    /**
                     * 实例登录配置。
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * 实例标签，示例：["{\"TagKey\":\"test-tag1\",\"TagValue\":\"001\"}","{\"TagKey\":\"test-tag2\",\"TagValue\":\"002\"}"]。
                     */
                    std::vector<std::string> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * 元数据库配置。
                     */
                    MetaDbInfo m_metaDB;
                    bool m_metaDBHasBeenSet;

                    /**
                     * 实例硬件配置。
                     */
                    JobFlowResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                    /**
                     * 是否申请公网IP，默认为false。
                     */
                    bool m_publicIpAssigned;
                    bool m_publicIpAssignedHasBeenSet;

                    /**
                     * 包年包月配置，只对包年包月集群生效。
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * 集群置放群组。
                     */
                    std::string m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * 是否使用cbs加密。
                     */
                    bool m_cbsEncryptFlag;
                    bool m_cbsEncryptFlagHasBeenSet;

                    /**
                     * 是否使用远程登录，默认为false。
                     */
                    bool m_remoteTcpDefaultPort;
                    bool m_remoteTcpDefaultPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERSETTING_H_
