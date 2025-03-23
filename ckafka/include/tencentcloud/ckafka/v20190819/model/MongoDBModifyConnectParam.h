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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MONGODBMODIFYCONNECTPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MONGODBMODIFYCONNECTPARAM_H_

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
                * MongoDB修改连接源参数
                */
                class MongoDBModifyConnectParam : public AbstractModel
                {
                public:
                    MongoDBModifyConnectParam();
                    ~MongoDBModifyConnectParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MongoDB连接源的实例资源【不支持修改】
                     * @return Resource MongoDB连接源的实例资源【不支持修改】
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置MongoDB连接源的实例资源【不支持修改】
                     * @param _resource MongoDB连接源的实例资源【不支持修改】
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
                     * 获取MongoDB的连接port【不支持修改】
                     * @return Port MongoDB的连接port【不支持修改】
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置MongoDB的连接port【不支持修改】
                     * @param _port MongoDB的连接port【不支持修改】
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
                     * 获取MongoDB连接源的实例vip【不支持修改】
                     * @return ServiceVip MongoDB连接源的实例vip【不支持修改】
                     * 
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置MongoDB连接源的实例vip【不支持修改】
                     * @param _serviceVip MongoDB连接源的实例vip【不支持修改】
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
                     * 获取MongoDB连接源的vpcId【不支持修改】
                     * @return UniqVpcId MongoDB连接源的vpcId【不支持修改】
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置MongoDB连接源的vpcId【不支持修改】
                     * @param _uniqVpcId MongoDB连接源的vpcId【不支持修改】
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
                     * 获取MongoDB连接源的用户名
                     * @return UserName MongoDB连接源的用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置MongoDB连接源的用户名
                     * @param _userName MongoDB连接源的用户名
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
                     * 获取MongoDB连接源的密码
                     * @return Password MongoDB连接源的密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置MongoDB连接源的密码
                     * @param _password MongoDB连接源的密码
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
                     * 获取MongoDB连接源是否为自建集群【不支持修改】
                     * @return SelfBuilt MongoDB连接源是否为自建集群【不支持修改】
                     * 
                     */
                    bool GetSelfBuilt() const;

                    /**
                     * 设置MongoDB连接源是否为自建集群【不支持修改】
                     * @param _selfBuilt MongoDB连接源是否为自建集群【不支持修改】
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
                     * 获取是否更新到关联的Datahub任务
                     * @return IsUpdate 是否更新到关联的Datahub任务
                     * 
                     */
                    bool GetIsUpdate() const;

                    /**
                     * 设置是否更新到关联的Datahub任务
                     * @param _isUpdate 是否更新到关联的Datahub任务
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
                     * MongoDB连接源的实例资源【不支持修改】
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * MongoDB的连接port【不支持修改】
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * MongoDB连接源的实例vip【不支持修改】
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * MongoDB连接源的vpcId【不支持修改】
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * MongoDB连接源的用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * MongoDB连接源的密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * MongoDB连接源是否为自建集群【不支持修改】
                     */
                    bool m_selfBuilt;
                    bool m_selfBuiltHasBeenSet;

                    /**
                     * 是否更新到关联的Datahub任务
                     */
                    bool m_isUpdate;
                    bool m_isUpdateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MONGODBMODIFYCONNECTPARAM_H_
