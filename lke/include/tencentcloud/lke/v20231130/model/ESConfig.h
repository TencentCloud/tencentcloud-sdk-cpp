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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_ESCONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_ESCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ES存储配置
                */
                class ESConfig : public AbstractModel
                {
                public:
                    ESConfig();
                    ~ESConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>存储类型，0: 未知类型， 1:默认存储(平台提供)，2: 自定义存储(用户自建ES)</p>
                     * @return StorageType <p>存储类型，0: 未知类型， 1:默认存储(平台提供)，2: 自定义存储(用户自建ES)</p>
                     * 
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置<p>存储类型，0: 未知类型， 1:默认存储(平台提供)，2: 自定义存储(用户自建ES)</p>
                     * @param _storageType <p>存储类型，0: 未知类型， 1:默认存储(平台提供)，2: 自定义存储(用户自建ES)</p>
                     * 
                     */
                    void SetStorageType(const int64_t& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>ES集群名称(自定义存储时必填)</p>
                     * @return InstanceName <p>ES集群名称(自定义存储时必填)</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>ES集群名称(自定义存储时必填)</p>
                     * @param _instanceName <p>ES集群名称(自定义存储时必填)</p>
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
                     * 获取<p>ES集群ID(自定义存储时必填)</p>
                     * @return InstanceId <p>ES集群ID(自定义存储时必填)</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ES集群ID(自定义存储时必填)</p>
                     * @param _instanceId <p>ES集群ID(自定义存储时必填)</p>
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
                     * 获取<p>ES用户名(自定义存储时必填)</p>
                     * @return Username <p>ES用户名(自定义存储时必填)</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>ES用户名(自定义存储时必填)</p>
                     * @param _username <p>ES用户名(自定义存储时必填)</p>
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取<p>ES密码(自定义存储时必填)</p>
                     * @return Password <p>ES密码(自定义存储时必填)</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>ES密码(自定义存储时必填)</p>
                     * @param _password <p>ES密码(自定义存储时必填)</p>
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
                     * 获取<p>允许修改存储方式</p>
                     * @return CanModify <p>允许修改存储方式</p>
                     * 
                     */
                    bool GetCanModify() const;

                    /**
                     * 设置<p>允许修改存储方式</p>
                     * @param _canModify <p>允许修改存储方式</p>
                     * 
                     */
                    void SetCanModify(const bool& _canModify);

                    /**
                     * 判断参数 CanModify 是否已赋值
                     * @return CanModify 是否已赋值
                     * 
                     */
                    bool CanModifyHasBeenSet() const;

                private:

                    /**
                     * <p>存储类型，0: 未知类型， 1:默认存储(平台提供)，2: 自定义存储(用户自建ES)</p>
                     */
                    int64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>ES集群名称(自定义存储时必填)</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>ES集群ID(自定义存储时必填)</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>ES用户名(自定义存储时必填)</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>ES密码(自定义存储时必填)</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>允许修改存储方式</p>
                     */
                    bool m_canModify;
                    bool m_canModifyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_ESCONFIG_H_
