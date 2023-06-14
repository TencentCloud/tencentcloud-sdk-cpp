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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_WEEKLYREPORTNONLOCALLOGINPLACE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_WEEKLYREPORTNONLOCALLOGINPLACE_H_

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
                * 专业周报异地登录数据。
                */
                class WeeklyReportNonlocalLoginPlace : public AbstractModel
                {
                public:
                    WeeklyReportNonlocalLoginPlace();
                    ~WeeklyReportNonlocalLoginPlace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取用户名。
                     * @return Username 用户名。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置用户名。
                     * @param _username 用户名。
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
                     * 获取源IP。
                     * @return SrcIp 源IP。
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置源IP。
                     * @param _srcIp 源IP。
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

                private:

                    /**
                     * 主机IP。
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 用户名。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 源IP。
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

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
                     * 城市ID。
                     */
                    uint64_t m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 登录时间。
                     */
                    std::string m_loginTime;
                    bool m_loginTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_WEEKLYREPORTNONLOCALLOGINPLACE_H_
