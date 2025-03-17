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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_REGISTERINSTANCEINFO_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_REGISTERINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/Tag.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 注册实例信息。
                */
                class RegisterInstanceInfo : public AbstractModel
                {
                public:
                    RegisterInstanceInfo();
                    ~RegisterInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取注册码ID。
                     * @return RegisterCodeId 注册码ID。
                     * 
                     */
                    std::string GetRegisterCodeId() const;

                    /**
                     * 设置注册码ID。
                     * @param _registerCodeId 注册码ID。
                     * 
                     */
                    void SetRegisterCodeId(const std::string& _registerCodeId);

                    /**
                     * 判断参数 RegisterCodeId 是否已赋值
                     * @return RegisterCodeId 是否已赋值
                     * 
                     */
                    bool RegisterCodeIdHasBeenSet() const;

                    /**
                     * 获取托管实例ID。
                     * @return InstanceId 托管实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置托管实例ID。
                     * @param _instanceId 托管实例ID。
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
                     * 获取托管实例名。
                     * @return InstanceName 托管实例名。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置托管实例名。
                     * @param _instanceName 托管实例名。
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
                     * 获取机器ID。
                     * @return MachineId 机器ID。
                     * 
                     */
                    std::string GetMachineId() const;

                    /**
                     * 设置机器ID。
                     * @param _machineId 机器ID。
                     * 
                     */
                    void SetMachineId(const std::string& _machineId);

                    /**
                     * 判断参数 MachineId 是否已赋值
                     * @return MachineId 是否已赋值
                     * 
                     */
                    bool MachineIdHasBeenSet() const;

                    /**
                     * 获取系统名。取值：Linux | Windows。
                     * @return SystemName 系统名。取值：Linux | Windows。
                     * 
                     */
                    std::string GetSystemName() const;

                    /**
                     * 设置系统名。取值：Linux | Windows。
                     * @param _systemName 系统名。取值：Linux | Windows。
                     * 
                     */
                    void SetSystemName(const std::string& _systemName);

                    /**
                     * 判断参数 SystemName 是否已赋值
                     * @return SystemName 是否已赋值
                     * 
                     */
                    bool SystemNameHasBeenSet() const;

                    /**
                     * 获取主机名。
                     * @return HostName 主机名。
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名。
                     * @param _hostName 主机名。
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取内网IP。
                     * @return LocalIp 内网IP。
                     * 
                     */
                    std::string GetLocalIp() const;

                    /**
                     * 设置内网IP。
                     * @param _localIp 内网IP。
                     * 
                     */
                    void SetLocalIp(const std::string& _localIp);

                    /**
                     * 判断参数 LocalIp 是否已赋值
                     * @return LocalIp 是否已赋值
                     * 
                     */
                    bool LocalIpHasBeenSet() const;

                    /**
                     * 获取公钥。
                     * @return PublicKey 公钥。
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置公钥。
                     * @param _publicKey 公钥。
                     * 
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取托管状态。
返回Online表示实例正在托管，返回Offline表示实例未托管。
                     * @return Status 托管状态。
返回Online表示实例正在托管，返回Offline表示实例未托管。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置托管状态。
返回Online表示实例正在托管，返回Offline表示实例未托管。
                     * @param _status 托管状态。
返回Online表示实例正在托管，返回Offline表示实例未托管。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @return CreatedTime 创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @param _createdTime 创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取上次更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @return UpdatedTime 上次更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置上次更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @param _updatedTime 上次更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 注册码ID。
                     */
                    std::string m_registerCodeId;
                    bool m_registerCodeIdHasBeenSet;

                    /**
                     * 托管实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 托管实例名。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 机器ID。
                     */
                    std::string m_machineId;
                    bool m_machineIdHasBeenSet;

                    /**
                     * 系统名。取值：Linux | Windows。
                     */
                    std::string m_systemName;
                    bool m_systemNameHasBeenSet;

                    /**
                     * 主机名。
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 内网IP。
                     */
                    std::string m_localIp;
                    bool m_localIpHasBeenSet;

                    /**
                     * 公钥。
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * 托管状态。
返回Online表示实例正在托管，返回Offline表示实例未托管。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 上次更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_REGISTERINSTANCEINFO_H_
