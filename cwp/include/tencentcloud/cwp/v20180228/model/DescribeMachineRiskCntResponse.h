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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINERISKCNTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINERISKCNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeMachineRiskCnt返回参数结构体
                */
                class DescribeMachineRiskCntResponse : public AbstractModel
                {
                public:
                    DescribeMachineRiskCntResponse();
                    ~DescribeMachineRiskCntResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取异地登录
                     * @return HostLogin 异地登录
                     * 
                     */
                    uint64_t GetHostLogin() const;

                    /**
                     * 判断参数 HostLogin 是否已赋值
                     * @return HostLogin 是否已赋值
                     * 
                     */
                    bool HostLoginHasBeenSet() const;

                    /**
                     * 获取密码破解
                     * @return BruteAttack 密码破解
                     * 
                     */
                    uint64_t GetBruteAttack() const;

                    /**
                     * 判断参数 BruteAttack 是否已赋值
                     * @return BruteAttack 是否已赋值
                     * 
                     */
                    bool BruteAttackHasBeenSet() const;

                    /**
                     * 获取恶意请求
                     * @return MaliciousRequest 恶意请求
                     * 
                     */
                    uint64_t GetMaliciousRequest() const;

                    /**
                     * 判断参数 MaliciousRequest 是否已赋值
                     * @return MaliciousRequest 是否已赋值
                     * 
                     */
                    bool MaliciousRequestHasBeenSet() const;

                    /**
                     * 获取反弹shell
                     * @return ReverseShell 反弹shell
                     * 
                     */
                    uint64_t GetReverseShell() const;

                    /**
                     * 判断参数 ReverseShell 是否已赋值
                     * @return ReverseShell 是否已赋值
                     * 
                     */
                    bool ReverseShellHasBeenSet() const;

                    /**
                     * 获取高危命令
                     * @return Bash 高危命令
                     * 
                     */
                    uint64_t GetBash() const;

                    /**
                     * 判断参数 Bash 是否已赋值
                     * @return Bash 是否已赋值
                     * 
                     */
                    bool BashHasBeenSet() const;

                    /**
                     * 获取本地提权
                     * @return PrivilegeEscalation 本地提权
                     * 
                     */
                    uint64_t GetPrivilegeEscalation() const;

                    /**
                     * 判断参数 PrivilegeEscalation 是否已赋值
                     * @return PrivilegeEscalation 是否已赋值
                     * 
                     */
                    bool PrivilegeEscalationHasBeenSet() const;

                    /**
                     * 获取木马
                     * @return Malware 木马
                     * 
                     */
                    uint64_t GetMalware() const;

                    /**
                     * 判断参数 Malware 是否已赋值
                     * @return Malware 是否已赋值
                     * 
                     */
                    bool MalwareHasBeenSet() const;

                private:

                    /**
                     * 异地登录
                     */
                    uint64_t m_hostLogin;
                    bool m_hostLoginHasBeenSet;

                    /**
                     * 密码破解
                     */
                    uint64_t m_bruteAttack;
                    bool m_bruteAttackHasBeenSet;

                    /**
                     * 恶意请求
                     */
                    uint64_t m_maliciousRequest;
                    bool m_maliciousRequestHasBeenSet;

                    /**
                     * 反弹shell
                     */
                    uint64_t m_reverseShell;
                    bool m_reverseShellHasBeenSet;

                    /**
                     * 高危命令
                     */
                    uint64_t m_bash;
                    bool m_bashHasBeenSet;

                    /**
                     * 本地提权
                     */
                    uint64_t m_privilegeEscalation;
                    bool m_privilegeEscalationHasBeenSet;

                    /**
                     * 木马
                     */
                    uint64_t m_malware;
                    bool m_malwareHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINERISKCNTRESPONSE_H_
