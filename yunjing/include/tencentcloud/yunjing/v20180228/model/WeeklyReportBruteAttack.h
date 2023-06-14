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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_WEEKLYREPORTBRUTEATTACK_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_WEEKLYREPORTBRUTEATTACK_H_

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
                * 专业周报密码破解数据。
                */
                class WeeklyReportBruteAttack : public AbstractModel
                {
                public:
                    WeeklyReportBruteAttack();
                    ~WeeklyReportBruteAttack() = default;
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
                     * 获取被破解用户名。
                     * @return Username 被破解用户名。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置被破解用户名。
                     * @param _username 被破解用户名。
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
                     * 获取尝试次数。
                     * @return Count 尝试次数。
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置尝试次数。
                     * @param _count 尝试次数。
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取攻击时间。
                     * @return AttackTime 攻击时间。
                     * 
                     */
                    std::string GetAttackTime() const;

                    /**
                     * 设置攻击时间。
                     * @param _attackTime 攻击时间。
                     * 
                     */
                    void SetAttackTime(const std::string& _attackTime);

                    /**
                     * 判断参数 AttackTime 是否已赋值
                     * @return AttackTime 是否已赋值
                     * 
                     */
                    bool AttackTimeHasBeenSet() const;

                private:

                    /**
                     * 主机IP。
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 被破解用户名。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 源IP。
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 尝试次数。
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 攻击时间。
                     */
                    std::string m_attackTime;
                    bool m_attackTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_WEEKLYREPORTBRUTEATTACK_H_
