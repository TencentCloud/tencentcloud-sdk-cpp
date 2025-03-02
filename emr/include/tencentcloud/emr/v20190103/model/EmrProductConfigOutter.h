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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_EMRPRODUCTCONFIGOUTTER_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_EMRPRODUCTCONFIGOUTTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/OutterResource.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * EMR产品配置
                */
                class EmrProductConfigOutter : public AbstractModel
                {
                public:
                    EmrProductConfigOutter();
                    ~EmrProductConfigOutter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取软件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SoftInfo 软件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSoftInfo() const;

                    /**
                     * 设置软件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _softInfo 软件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSoftInfo(const std::vector<std::string>& _softInfo);

                    /**
                     * 判断参数 SoftInfo 是否已赋值
                     * @return SoftInfo 是否已赋值
                     * 
                     */
                    bool SoftInfoHasBeenSet() const;

                    /**
                     * 获取Master节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MasterNodeSize Master节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMasterNodeSize() const;

                    /**
                     * 设置Master节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _masterNodeSize Master节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMasterNodeSize(const int64_t& _masterNodeSize);

                    /**
                     * 判断参数 MasterNodeSize 是否已赋值
                     * @return MasterNodeSize 是否已赋值
                     * 
                     */
                    bool MasterNodeSizeHasBeenSet() const;

                    /**
                     * 获取Core节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoreNodeSize Core节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCoreNodeSize() const;

                    /**
                     * 设置Core节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coreNodeSize Core节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoreNodeSize(const int64_t& _coreNodeSize);

                    /**
                     * 判断参数 CoreNodeSize 是否已赋值
                     * @return CoreNodeSize 是否已赋值
                     * 
                     */
                    bool CoreNodeSizeHasBeenSet() const;

                    /**
                     * 获取Task节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskNodeSize Task节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskNodeSize() const;

                    /**
                     * 设置Task节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskNodeSize Task节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskNodeSize(const int64_t& _taskNodeSize);

                    /**
                     * 判断参数 TaskNodeSize 是否已赋值
                     * @return TaskNodeSize 是否已赋值
                     * 
                     */
                    bool TaskNodeSizeHasBeenSet() const;

                    /**
                     * 获取Common节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComNodeSize Common节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetComNodeSize() const;

                    /**
                     * 设置Common节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comNodeSize Common节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComNodeSize(const int64_t& _comNodeSize);

                    /**
                     * 判断参数 ComNodeSize 是否已赋值
                     * @return ComNodeSize 是否已赋值
                     * 
                     */
                    bool ComNodeSizeHasBeenSet() const;

                    /**
                     * 获取Master节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MasterResource Master节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OutterResource GetMasterResource() const;

                    /**
                     * 设置Master节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _masterResource Master节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMasterResource(const OutterResource& _masterResource);

                    /**
                     * 判断参数 MasterResource 是否已赋值
                     * @return MasterResource 是否已赋值
                     * 
                     */
                    bool MasterResourceHasBeenSet() const;

                    /**
                     * 获取Core节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoreResource Core节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OutterResource GetCoreResource() const;

                    /**
                     * 设置Core节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coreResource Core节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoreResource(const OutterResource& _coreResource);

                    /**
                     * 判断参数 CoreResource 是否已赋值
                     * @return CoreResource 是否已赋值
                     * 
                     */
                    bool CoreResourceHasBeenSet() const;

                    /**
                     * 获取Task节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskResource Task节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OutterResource GetTaskResource() const;

                    /**
                     * 设置Task节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskResource Task节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskResource(const OutterResource& _taskResource);

                    /**
                     * 判断参数 TaskResource 是否已赋值
                     * @return TaskResource 是否已赋值
                     * 
                     */
                    bool TaskResourceHasBeenSet() const;

                    /**
                     * 获取Common节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComResource Common节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OutterResource GetComResource() const;

                    /**
                     * 设置Common节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comResource Common节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComResource(const OutterResource& _comResource);

                    /**
                     * 判断参数 ComResource 是否已赋值
                     * @return ComResource 是否已赋值
                     * 
                     */
                    bool ComResourceHasBeenSet() const;

                    /**
                     * 获取是否使用COS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnCos 是否使用COS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetOnCos() const;

                    /**
                     * 设置是否使用COS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _onCos 是否使用COS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOnCos(const bool& _onCos);

                    /**
                     * 判断参数 OnCos 是否已赋值
                     * @return OnCos 是否已赋值
                     * 
                     */
                    bool OnCosHasBeenSet() const;

                    /**
                     * 获取收费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeType 收费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置收费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeType 收费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取Router节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RouterNodeSize Router节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRouterNodeSize() const;

                    /**
                     * 设置Router节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _routerNodeSize Router节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRouterNodeSize(const int64_t& _routerNodeSize);

                    /**
                     * 判断参数 RouterNodeSize 是否已赋值
                     * @return RouterNodeSize 是否已赋值
                     * 
                     */
                    bool RouterNodeSizeHasBeenSet() const;

                    /**
                     * 获取是否支持HA
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportHA 是否支持HA
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSupportHA() const;

                    /**
                     * 设置是否支持HA
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportHA 是否支持HA
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否支持安全模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityOn 是否支持安全模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSecurityOn() const;

                    /**
                     * 设置是否支持安全模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityOn 是否支持安全模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecurityOn(const bool& _securityOn);

                    /**
                     * 判断参数 SecurityOn 是否已赋值
                     * @return SecurityOn 是否已赋值
                     * 
                     */
                    bool SecurityOnHasBeenSet() const;

                    /**
                     * 获取集群初始安全组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityGroup 集群初始安全组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecurityGroup() const;

                    /**
                     * 设置集群初始安全组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityGroup 集群初始安全组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecurityGroup(const std::string& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取是否开启Cbs加密
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CbsEncrypt 是否开启Cbs加密
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCbsEncrypt() const;

                    /**
                     * 设置是否开启Cbs加密
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cbsEncrypt 是否开启Cbs加密
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCbsEncrypt(const int64_t& _cbsEncrypt);

                    /**
                     * 判断参数 CbsEncrypt 是否已赋值
                     * @return CbsEncrypt 是否已赋值
                     * 
                     */
                    bool CbsEncryptHasBeenSet() const;

                    /**
                     * 获取自定义应用角色。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationRole 自定义应用角色。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationRole() const;

                    /**
                     * 设置自定义应用角色。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationRole 自定义应用角色。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationRole(const std::string& _applicationRole);

                    /**
                     * 判断参数 ApplicationRole 是否已赋值
                     * @return ApplicationRole 是否已赋值
                     * 
                     */
                    bool ApplicationRoleHasBeenSet() const;

                    /**
                     * 获取安全组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityGroups 安全组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroups() const;

                    /**
                     * 设置安全组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityGroups 安全组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecurityGroups(const std::vector<std::string>& _securityGroups);

                    /**
                     * 判断参数 SecurityGroups 是否已赋值
                     * @return SecurityGroups 是否已赋值
                     * 
                     */
                    bool SecurityGroupsHasBeenSet() const;

                    /**
                     * 获取SSH密钥Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicKeyId SSH密钥Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicKeyId() const;

                    /**
                     * 设置SSH密钥Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicKeyId SSH密钥Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicKeyId(const std::string& _publicKeyId);

                    /**
                     * 判断参数 PublicKeyId 是否已赋值
                     * @return PublicKeyId 是否已赋值
                     * 
                     */
                    bool PublicKeyIdHasBeenSet() const;

                private:

                    /**
                     * 软件信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_softInfo;
                    bool m_softInfoHasBeenSet;

                    /**
                     * Master节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_masterNodeSize;
                    bool m_masterNodeSizeHasBeenSet;

                    /**
                     * Core节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_coreNodeSize;
                    bool m_coreNodeSizeHasBeenSet;

                    /**
                     * Task节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskNodeSize;
                    bool m_taskNodeSizeHasBeenSet;

                    /**
                     * Common节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_comNodeSize;
                    bool m_comNodeSizeHasBeenSet;

                    /**
                     * Master节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OutterResource m_masterResource;
                    bool m_masterResourceHasBeenSet;

                    /**
                     * Core节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OutterResource m_coreResource;
                    bool m_coreResourceHasBeenSet;

                    /**
                     * Task节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OutterResource m_taskResource;
                    bool m_taskResourceHasBeenSet;

                    /**
                     * Common节点资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OutterResource m_comResource;
                    bool m_comResourceHasBeenSet;

                    /**
                     * 是否使用COS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_onCos;
                    bool m_onCosHasBeenSet;

                    /**
                     * 收费类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Router节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_routerNodeSize;
                    bool m_routerNodeSizeHasBeenSet;

                    /**
                     * 是否支持HA
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportHA;
                    bool m_supportHAHasBeenSet;

                    /**
                     * 是否支持安全模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_securityOn;
                    bool m_securityOnHasBeenSet;

                    /**
                     * 集群初始安全组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * 是否开启Cbs加密
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cbsEncrypt;
                    bool m_cbsEncryptHasBeenSet;

                    /**
                     * 自定义应用角色。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationRole;
                    bool m_applicationRoleHasBeenSet;

                    /**
                     * 安全组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_securityGroups;
                    bool m_securityGroupsHasBeenSet;

                    /**
                     * SSH密钥Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicKeyId;
                    bool m_publicKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_EMRPRODUCTCONFIGOUTTER_H_
