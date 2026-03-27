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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQROLEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateRocketMQRole请求参数结构体
                */
                class CreateRocketMQRoleRequest : public AbstractModel
                {
                public:
                    CreateRocketMQRoleRequest();
                    ~CreateRocketMQRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>角色名称，不支持中字以及除了短线和下划线外的特殊字符且长度必须大于0且小等于32。</p>
                     * @return RoleName <p>角色名称，不支持中字以及除了短线和下划线外的特殊字符且长度必须大于0且小等于32。</p>
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置<p>角色名称，不支持中字以及除了短线和下划线外的特殊字符且长度必须大于0且小等于32。</p>
                     * @param _roleName <p>角色名称，不支持中字以及除了短线和下划线外的特殊字符且长度必须大于0且小等于32。</p>
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取<p>必填字段，集群Id</p>
                     * @return ClusterId <p>必填字段，集群Id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>必填字段，集群Id</p>
                     * @param _clusterId <p>必填字段，集群Id</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>备注说明，长度必须大等于0且小等于128。</p>
                     * @return Remark <p>备注说明，长度必须大等于0且小等于128。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注说明，长度必须大等于0且小等于128。</p>
                     * @param _remark <p>备注说明，长度必须大等于0且小等于128。</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>角色授权类型（集群：Cluster; 主题或消费组：TopicAndGroup）</p>
                     * @return PermType <p>角色授权类型（集群：Cluster; 主题或消费组：TopicAndGroup）</p>
                     * 
                     */
                    std::string GetPermType() const;

                    /**
                     * 设置<p>角色授权类型（集群：Cluster; 主题或消费组：TopicAndGroup）</p>
                     * @param _permType <p>角色授权类型（集群：Cluster; 主题或消费组：TopicAndGroup）</p>
                     * 
                     */
                    void SetPermType(const std::string& _permType);

                    /**
                     * 判断参数 PermType 是否已赋值
                     * @return PermType 是否已赋值
                     * 
                     */
                    bool PermTypeHasBeenSet() const;

                    /**
                     * 获取<p>AK、SK的生成方式，AUTO：后端自动生成，MANUAL：用户手动输入</p>
                     * @return RoleGenerateMode <p>AK、SK的生成方式，AUTO：后端自动生成，MANUAL：用户手动输入</p>
                     * 
                     */
                    std::string GetRoleGenerateMode() const;

                    /**
                     * 设置<p>AK、SK的生成方式，AUTO：后端自动生成，MANUAL：用户手动输入</p>
                     * @param _roleGenerateMode <p>AK、SK的生成方式，AUTO：后端自动生成，MANUAL：用户手动输入</p>
                     * 
                     */
                    void SetRoleGenerateMode(const std::string& _roleGenerateMode);

                    /**
                     * 判断参数 RoleGenerateMode 是否已赋值
                     * @return RoleGenerateMode 是否已赋值
                     * 
                     */
                    bool RoleGenerateModeHasBeenSet() const;

                    /**
                     * 获取<p>选择MANUAL模式下，需要手动输入AK值</p>
                     * @return AccessKey <p>选择MANUAL模式下，需要手动输入AK值</p>
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置<p>选择MANUAL模式下，需要手动输入AK值</p>
                     * @param _accessKey <p>选择MANUAL模式下，需要手动输入AK值</p>
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取<p>选择MANUAL模式下，需要手动输入SK值</p>
                     * @return SecretKey <p>选择MANUAL模式下，需要手动输入SK值</p>
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置<p>选择MANUAL模式下，需要手动输入SK值</p>
                     * @param _secretKey <p>选择MANUAL模式下，需要手动输入SK值</p>
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                private:

                    /**
                     * <p>角色名称，不支持中字以及除了短线和下划线外的特殊字符且长度必须大于0且小等于32。</p>
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * <p>必填字段，集群Id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>备注说明，长度必须大等于0且小等于128。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>角色授权类型（集群：Cluster; 主题或消费组：TopicAndGroup）</p>
                     */
                    std::string m_permType;
                    bool m_permTypeHasBeenSet;

                    /**
                     * <p>AK、SK的生成方式，AUTO：后端自动生成，MANUAL：用户手动输入</p>
                     */
                    std::string m_roleGenerateMode;
                    bool m_roleGenerateModeHasBeenSet;

                    /**
                     * <p>选择MANUAL模式下，需要手动输入AK值</p>
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * <p>选择MANUAL模式下，需要手动输入SK值</p>
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQROLEREQUEST_H_
