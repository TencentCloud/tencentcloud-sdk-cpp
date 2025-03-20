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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CTSDBMODIFYCONNECTPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CTSDBMODIFYCONNECTPARAM_H_

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
                * Ctsdb连接源参数(更新)
                */
                class CtsdbModifyConnectParam : public AbstractModel
                {
                public:
                    CtsdbModifyConnectParam();
                    ~CtsdbModifyConnectParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Ctsdb的连接port
                     * @return Port Ctsdb的连接port
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Ctsdb的连接port
                     * @param _port Ctsdb的连接port
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
                     * 获取Ctsdb连接源的实例vip
                     * @return ServiceVip Ctsdb连接源的实例vip
                     * 
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置Ctsdb连接源的实例vip
                     * @param _serviceVip Ctsdb连接源的实例vip
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
                     * 获取Ctsdb连接源的vpcId
                     * @return UniqVpcId Ctsdb连接源的vpcId
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Ctsdb连接源的vpcId
                     * @param _uniqVpcId Ctsdb连接源的vpcId
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
                     * 获取Ctsdb连接源的用户名
                     * @return UserName Ctsdb连接源的用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Ctsdb连接源的用户名
                     * @param _userName Ctsdb连接源的用户名
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
                     * 获取Ctsdb连接源的密码
                     * @return Password Ctsdb连接源的密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Ctsdb连接源的密码
                     * @param _password Ctsdb连接源的密码
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
                     * 获取Ctsdb连接源的实例资源
                     * @return Resource Ctsdb连接源的实例资源
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置Ctsdb连接源的实例资源
                     * @param _resource Ctsdb连接源的实例资源
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                private:

                    /**
                     * Ctsdb的连接port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Ctsdb连接源的实例vip
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * Ctsdb连接源的vpcId
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Ctsdb连接源的用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Ctsdb连接源的密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Ctsdb连接源的实例资源
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CTSDBMODIFYCONNECTPARAM_H_
