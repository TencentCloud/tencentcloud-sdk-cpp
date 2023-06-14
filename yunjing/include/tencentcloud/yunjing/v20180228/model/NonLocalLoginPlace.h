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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_NONLOCALLOGINPLACE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_NONLOCALLOGINPLACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 异地登录
                */
                class NonLocalLoginPlace : public AbstractModel
                {
                public:
                    NonLocalLoginPlace();
                    ~NonLocalLoginPlace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件ID。
                     * @return Id 事件ID。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置事件ID。
                     * @param _id 事件ID。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取主机IP。
                     * @return MachineIp 主机IP。
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机IP。
                     * @param _machineIp 主机IP。
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取登录状态
<li>NON_LOCAL_LOGIN：异地登录</li>
<li>NORMAL_LOGIN：正常登录</li>
                     * @return Status 登录状态
<li>NON_LOCAL_LOGIN：异地登录</li>
<li>NORMAL_LOGIN：正常登录</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置登录状态
<li>NON_LOCAL_LOGIN：异地登录</li>
<li>NORMAL_LOGIN：正常登录</li>
                     * @param _status 登录状态
<li>NON_LOCAL_LOGIN：异地登录</li>
<li>NORMAL_LOGIN：正常登录</li>
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
                     * 获取用户名。
                     * @return UserName 用户名。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名。
                     * @param _userName 用户名。
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
                     * 获取城市ID。
                     * @return City 城市ID。
                     * 
                     */
                    uint64_t GetCity() const;

                    /**
                     * 设置城市ID。
                     * @param _city 城市ID。
                     * 
                     */
                    void SetCity(const uint64_t& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取国家ID。
                     * @return Country 国家ID。
                     * 
                     */
                    uint64_t GetCountry() const;

                    /**
                     * 设置国家ID。
                     * @param _country 国家ID。
                     * 
                     */
                    void SetCountry(const uint64_t& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取省份ID。
                     * @return Province 省份ID。
                     * 
                     */
                    uint64_t GetProvince() const;

                    /**
                     * 设置省份ID。
                     * @param _province 省份ID。
                     * 
                     */
                    void SetProvince(const uint64_t& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取登录IP。
                     * @return SrcIp 登录IP。
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置登录IP。
                     * @param _srcIp 登录IP。
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取机器名称。
                     * @return MachineName 机器名称。
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置机器名称。
                     * @param _machineName 机器名称。
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取登录时间。
                     * @return LoginTime 登录时间。
                     * 
                     */
                    std::string GetLoginTime() const;

                    /**
                     * 设置登录时间。
                     * @param _loginTime 登录时间。
                     * 
                     */
                    void SetLoginTime(const std::string& _loginTime);

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     * 
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取云镜客户端唯一标识Uuid。
                     * @return Uuid 云镜客户端唯一标识Uuid。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置云镜客户端唯一标识Uuid。
                     * @param _uuid 云镜客户端唯一标识Uuid。
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                private:

                    /**
                     * 事件ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机IP。
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 登录状态
<li>NON_LOCAL_LOGIN：异地登录</li>
<li>NORMAL_LOGIN：正常登录</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 用户名。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 城市ID。
                     */
                    uint64_t m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 国家ID。
                     */
                    uint64_t m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 省份ID。
                     */
                    uint64_t m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 登录IP。
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 机器名称。
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 登录时间。
                     */
                    std::string m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * 云镜客户端唯一标识Uuid。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_NONLOCALLOGINPLACE_H_
