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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_USAGE_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_USAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * 桌面使用时长详情
                */
                class Usage : public AbstractModel
                {
                public:
                    Usage();
                    ~Usage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取桌面实例 ID
                     * @return InstanceId 桌面实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置桌面实例 ID
                     * @param _instanceId 桌面实例 ID
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
                     * 获取桌面名称
                     * @return Name 桌面名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置桌面名称
                     * @param _name 桌面名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取桌面当前状态
                     * @return Status 桌面当前状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置桌面当前状态
                     * @param _status 桌面当前状态
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
                     * 获取桌面绑定的用户名，若未绑定，为空
                     * @return UserName 桌面绑定的用户名，若未绑定，为空
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置桌面绑定的用户名，若未绑定，为空
                     * @param _userName 桌面绑定的用户名，若未绑定，为空
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
                     * 获取桌面计费类型
                     * @return ChargeType 桌面计费类型
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置桌面计费类型
                     * @param _chargeType 桌面计费类型
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取桌面类型
                     * @return InstanceType 桌面类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置桌面类型
                     * @param _instanceType 桌面类型
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取桌面操作系统
                     * @return OsName 桌面操作系统
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置桌面操作系统
                     * @param _osName 桌面操作系统
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取桌面使用时长，h:m:s
                     * @return ActiveTime 桌面使用时长，h:m:s
                     * 
                     */
                    std::string GetActiveTime() const;

                    /**
                     * 设置桌面使用时长，h:m:s
                     * @param _activeTime 桌面使用时长，h:m:s
                     * 
                     */
                    void SetActiveTime(const std::string& _activeTime);

                    /**
                     * 判断参数 ActiveTime 是否已赋值
                     * @return ActiveTime 是否已赋值
                     * 
                     */
                    bool ActiveTimeHasBeenSet() const;

                    /**
                     * 获取桌面空闲时长，h:m:s
                     * @return IdleTime 桌面空闲时长，h:m:s
                     * 
                     */
                    std::string GetIdleTime() const;

                    /**
                     * 设置桌面空闲时长，h:m:s
                     * @param _idleTime 桌面空闲时长，h:m:s
                     * 
                     */
                    void SetIdleTime(const std::string& _idleTime);

                    /**
                     * 判断参数 IdleTime 是否已赋值
                     * @return IdleTime 是否已赋值
                     * 
                     */
                    bool IdleTimeHasBeenSet() const;

                    /**
                     * 获取是否匿名访问
                     * @return AnonymousAccess 是否匿名访问
                     * 
                     */
                    bool GetAnonymousAccess() const;

                    /**
                     * 设置是否匿名访问
                     * @param _anonymousAccess 是否匿名访问
                     * 
                     */
                    void SetAnonymousAccess(const bool& _anonymousAccess);

                    /**
                     * 判断参数 AnonymousAccess 是否已赋值
                     * @return AnonymousAccess 是否已赋值
                     * 
                     */
                    bool AnonymousAccessHasBeenSet() const;

                private:

                    /**
                     * 桌面实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 桌面名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 桌面当前状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 桌面绑定的用户名，若未绑定，为空
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 桌面计费类型
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 桌面类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 桌面操作系统
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * 桌面使用时长，h:m:s
                     */
                    std::string m_activeTime;
                    bool m_activeTimeHasBeenSet;

                    /**
                     * 桌面空闲时长，h:m:s
                     */
                    std::string m_idleTime;
                    bool m_idleTimeHasBeenSet;

                    /**
                     * 是否匿名访问
                     */
                    bool m_anonymousAccess;
                    bool m_anonymousAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_USAGE_H_
