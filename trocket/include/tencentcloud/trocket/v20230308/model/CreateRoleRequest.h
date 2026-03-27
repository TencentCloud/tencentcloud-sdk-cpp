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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATEROLEREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATEROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/DetailedRolePerm.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * CreateRole请求参数结构体
                */
                class CreateRoleRequest : public AbstractModel
                {
                public:
                    CreateRoleRequest();
                    ~CreateRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * @return InstanceId 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * @param _instanceId 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
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
                     * 获取角色名称，不能为空，只支持数字 大小写字母 分隔符("_","-")，不能超过 32 个字符
                     * @return Role 角色名称，不能为空，只支持数字 大小写字母 分隔符("_","-")，不能超过 32 个字符
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置角色名称，不能为空，只支持数字 大小写字母 分隔符("_","-")，不能超过 32 个字符
                     * @param _role 角色名称，不能为空，只支持数字 大小写字母 分隔符("_","-")，不能超过 32 个字符
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取是否开启生产权限
                     * @return PermWrite 是否开启生产权限
                     * 
                     */
                    bool GetPermWrite() const;

                    /**
                     * 设置是否开启生产权限
                     * @param _permWrite 是否开启生产权限
                     * 
                     */
                    void SetPermWrite(const bool& _permWrite);

                    /**
                     * 判断参数 PermWrite 是否已赋值
                     * @return PermWrite 是否已赋值
                     * 
                     */
                    bool PermWriteHasBeenSet() const;

                    /**
                     * 获取是否开启消费权限
                     * @return PermRead 是否开启消费权限
                     * 
                     */
                    bool GetPermRead() const;

                    /**
                     * 设置是否开启消费权限
                     * @param _permRead 是否开启消费权限
                     * 
                     */
                    void SetPermRead(const bool& _permRead);

                    /**
                     * 判断参数 PermRead 是否已赋值
                     * @return PermRead 是否已赋值
                     * 
                     */
                    bool PermReadHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
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
                     * 获取权限类型，默认按集群授权（Cluster：集群级别；TopicAndGroup：主题&消费组级别）
                     * @return PermType 权限类型，默认按集群授权（Cluster：集群级别；TopicAndGroup：主题&消费组级别）
                     * 
                     */
                    std::string GetPermType() const;

                    /**
                     * 设置权限类型，默认按集群授权（Cluster：集群级别；TopicAndGroup：主题&消费组级别）
                     * @param _permType 权限类型，默认按集群授权（Cluster：集群级别；TopicAndGroup：主题&消费组级别）
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
                     * 获取Topic&Group维度权限配置，权限类型为 TopicAndGroup 时必填
                     * @return DetailedPerms Topic&Group维度权限配置，权限类型为 TopicAndGroup 时必填
                     * 
                     */
                    std::vector<DetailedRolePerm> GetDetailedPerms() const;

                    /**
                     * 设置Topic&Group维度权限配置，权限类型为 TopicAndGroup 时必填
                     * @param _detailedPerms Topic&Group维度权限配置，权限类型为 TopicAndGroup 时必填
                     * 
                     */
                    void SetDetailedPerms(const std::vector<DetailedRolePerm>& _detailedPerms);

                    /**
                     * 判断参数 DetailedPerms 是否已赋值
                     * @return DetailedPerms 是否已赋值
                     * 
                     */
                    bool DetailedPermsHasBeenSet() const;

                    /**
                     * 获取AK、SK的生成方式，AUTO：后端自动生成，MANUAL：用户手动输入
                     * @return RoleGenerateMode AK、SK的生成方式，AUTO：后端自动生成，MANUAL：用户手动输入
                     * 
                     */
                    std::string GetRoleGenerateMode() const;

                    /**
                     * 设置AK、SK的生成方式，AUTO：后端自动生成，MANUAL：用户手动输入
                     * @param _roleGenerateMode AK、SK的生成方式，AUTO：后端自动生成，MANUAL：用户手动输入
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
                     * 获取选择MANUAL模式下，需要手动输入AK值
                     * @return AccessKey 选择MANUAL模式下，需要手动输入AK值
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置选择MANUAL模式下，需要手动输入AK值
                     * @param _accessKey 选择MANUAL模式下，需要手动输入AK值
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
                     * 获取选择MANUAL模式下，需要手动输入SK值
                     * @return SecretKey 选择MANUAL模式下，需要手动输入SK值
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置选择MANUAL模式下，需要手动输入SK值
                     * @param _secretKey 选择MANUAL模式下，需要手动输入SK值
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
                     * 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 角色名称，不能为空，只支持数字 大小写字母 分隔符("_","-")，不能超过 32 个字符
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 是否开启生产权限
                     */
                    bool m_permWrite;
                    bool m_permWriteHasBeenSet;

                    /**
                     * 是否开启消费权限
                     */
                    bool m_permRead;
                    bool m_permReadHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 权限类型，默认按集群授权（Cluster：集群级别；TopicAndGroup：主题&消费组级别）
                     */
                    std::string m_permType;
                    bool m_permTypeHasBeenSet;

                    /**
                     * Topic&Group维度权限配置，权限类型为 TopicAndGroup 时必填
                     */
                    std::vector<DetailedRolePerm> m_detailedPerms;
                    bool m_detailedPermsHasBeenSet;

                    /**
                     * AK、SK的生成方式，AUTO：后端自动生成，MANUAL：用户手动输入
                     */
                    std::string m_roleGenerateMode;
                    bool m_roleGenerateModeHasBeenSet;

                    /**
                     * 选择MANUAL模式下，需要手动输入AK值
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * 选择MANUAL模式下，需要手动输入SK值
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATEROLEREQUEST_H_
