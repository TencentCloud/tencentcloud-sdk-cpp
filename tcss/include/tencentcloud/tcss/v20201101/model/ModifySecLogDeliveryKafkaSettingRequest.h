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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGDELIVERYKAFKASETTINGREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGDELIVERYKAFKASETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/SecLogDeliveryKafkaSettingInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifySecLogDeliveryKafkaSetting请求参数结构体
                */
                class ModifySecLogDeliveryKafkaSettingRequest : public AbstractModel
                {
                public:
                    ModifySecLogDeliveryKafkaSettingRequest();
                    ~ModifySecLogDeliveryKafkaSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceID 实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例ID
                     * @param _instanceID 实例ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
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
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return User 用户名
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户名
                     * @param _user 用户名
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取密码
                     * @return Password 密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码
                     * @param _password 密码
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
                     * 获取日志类型队列
                     * @return LogTypeList 日志类型队列
                     * 
                     */
                    std::vector<SecLogDeliveryKafkaSettingInfo> GetLogTypeList() const;

                    /**
                     * 设置日志类型队列
                     * @param _logTypeList 日志类型队列
                     * 
                     */
                    void SetLogTypeList(const std::vector<SecLogDeliveryKafkaSettingInfo>& _logTypeList);

                    /**
                     * 判断参数 LogTypeList 是否已赋值
                     * @return LogTypeList 是否已赋值
                     * 
                     */
                    bool LogTypeListHasBeenSet() const;

                    /**
                     * 获取接入类型
                     * @return AccessType 接入类型
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置接入类型
                     * @param _accessType 接入类型
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取kafka版本号
                     * @return KafkaVersion kafka版本号
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置kafka版本号
                     * @param _kafkaVersion kafka版本号
                     * 
                     */
                    void SetKafkaVersion(const std::string& _kafkaVersion);

                    /**
                     * 判断参数 KafkaVersion 是否已赋值
                     * @return KafkaVersion 是否已赋值
                     * 
                     */
                    bool KafkaVersionHasBeenSet() const;

                    /**
                     * 获取地域ID
                     * @return RegionID 地域ID
                     * 
                     */
                    std::string GetRegionID() const;

                    /**
                     * 设置地域ID
                     * @param _regionID 地域ID
                     * 
                     */
                    void SetRegionID(const std::string& _regionID);

                    /**
                     * 判断参数 RegionID 是否已赋值
                     * @return RegionID 是否已赋值
                     * 
                     */
                    bool RegionIDHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 日志类型队列
                     */
                    std::vector<SecLogDeliveryKafkaSettingInfo> m_logTypeList;
                    bool m_logTypeListHasBeenSet;

                    /**
                     * 接入类型
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * kafka版本号
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * 地域ID
                     */
                    std::string m_regionID;
                    bool m_regionIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGDELIVERYKAFKASETTINGREQUEST_H_
