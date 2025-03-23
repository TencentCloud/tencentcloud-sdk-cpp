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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ESCONNECTPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ESCONNECTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Es连接源参数
                */
                class EsConnectParam : public AbstractModel
                {
                public:
                    EsConnectParam();
                    ~EsConnectParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Es的连接port
                     * @return Port Es的连接port
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Es的连接port
                     * @param _port Es的连接port
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
                     * 获取Es连接源的用户名
                     * @return UserName Es连接源的用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Es连接源的用户名
                     * @param _userName Es连接源的用户名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Es连接源的密码
                     * @return Password Es连接源的密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Es连接源的密码
                     * @param _password Es连接源的密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Es连接源的实例资源
                     * @return Resource Es连接源的实例资源
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置Es连接源的实例资源
                     * @param _resource Es连接源的实例资源
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Es连接源是否为自建集群
                     * @return SelfBuilt Es连接源是否为自建集群
                     * 
                     */
                    bool GetSelfBuilt() const;

                    /**
                     * 设置Es连接源是否为自建集群
                     * @param _selfBuilt Es连接源是否为自建集群
                     * 
                     */
                    void SetSelfBuilt(const bool& _selfBuilt);

                    /**
                     * 判断参数 SelfBuilt 是否已赋值
                     * @return SelfBuilt 是否已赋值
                     * 
                     */
                    bool SelfBuiltHasBeenSet() const;

                    /**
                     * 获取Es连接源的实例vip，当为腾讯云实例时，必填
                     * @return ServiceVip Es连接源的实例vip，当为腾讯云实例时，必填
                     * 
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置Es连接源的实例vip，当为腾讯云实例时，必填
                     * @param _serviceVip Es连接源的实例vip，当为腾讯云实例时，必填
                     * 
                     */
                    void SetServiceVip(const std::string& _serviceVip);

                    /**
                     * 判断参数 ServiceVip 是否已赋值
                     * @return ServiceVip 是否已赋值
                     * 
                     */
                    bool ServiceVipHasBeenSet() const;

                    /**
                     * 获取Es连接源的vpcId，当为腾讯云实例时，必填
                     * @return UniqVpcId Es连接源的vpcId，当为腾讯云实例时，必填
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Es连接源的vpcId，当为腾讯云实例时，必填
                     * @param _uniqVpcId Es连接源的vpcId，当为腾讯云实例时，必填
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取是否更新到关联的Datahub任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsUpdate 是否更新到关联的Datahub任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsUpdate() const;

                    /**
                     * 设置是否更新到关联的Datahub任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isUpdate 是否更新到关联的Datahub任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsUpdate(const bool& _isUpdate);

                    /**
                     * 判断参数 IsUpdate 是否已赋值
                     * @return IsUpdate 是否已赋值
                     * 
                     */
                    bool IsUpdateHasBeenSet() const;

                private:

                    /**
                     * Es的连接port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Es连接源的用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Es连接源的密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Es连接源的实例资源
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Es连接源是否为自建集群
                     */
                    bool m_selfBuilt;
                    bool m_selfBuiltHasBeenSet;

                    /**
                     * Es连接源的实例vip，当为腾讯云实例时，必填
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * Es连接源的vpcId，当为腾讯云实例时，必填
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 是否更新到关联的Datahub任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isUpdate;
                    bool m_isUpdateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ESCONNECTPARAM_H_
