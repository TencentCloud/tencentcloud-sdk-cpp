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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPEAKVALUERESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPEAKVALUERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribePeakValue返回参数结构体
                */
                class DescribePeakValueResponse : public AbstractModel
                {
                public:
                    DescribePeakValueResponse();
                    ~DescribePeakValueResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取QPS峰值
                     * @return Access QPS峰值
                     * 
                     */
                    uint64_t GetAccess() const;

                    /**
                     * 判断参数 Access 是否已赋值
                     * @return Access 是否已赋值
                     * 
                     */
                    bool AccessHasBeenSet() const;

                    /**
                     * 获取上行带宽峰值，单位B
                     * @return Up 上行带宽峰值，单位B
                     * 
                     */
                    uint64_t GetUp() const;

                    /**
                     * 判断参数 Up 是否已赋值
                     * @return Up 是否已赋值
                     * 
                     */
                    bool UpHasBeenSet() const;

                    /**
                     * 获取下行带宽峰值，单位B
                     * @return Down 下行带宽峰值，单位B
                     * 
                     */
                    uint64_t GetDown() const;

                    /**
                     * 判断参数 Down 是否已赋值
                     * @return Down 是否已赋值
                     * 
                     */
                    bool DownHasBeenSet() const;

                    /**
                     * 获取Web攻击总数
                     * @return Attack Web攻击总数
                     * 
                     */
                    uint64_t GetAttack() const;

                    /**
                     * 判断参数 Attack 是否已赋值
                     * @return Attack 是否已赋值
                     * 
                     */
                    bool AttackHasBeenSet() const;

                    /**
                     * 获取CC攻击总数
                     * @return Cc CC攻击总数
                     * 
                     */
                    uint64_t GetCc() const;

                    /**
                     * 判断参数 Cc 是否已赋值
                     * @return Cc 是否已赋值
                     * 
                     */
                    bool CcHasBeenSet() const;

                private:

                    /**
                     * QPS峰值
                     */
                    uint64_t m_access;
                    bool m_accessHasBeenSet;

                    /**
                     * 上行带宽峰值，单位B
                     */
                    uint64_t m_up;
                    bool m_upHasBeenSet;

                    /**
                     * 下行带宽峰值，单位B
                     */
                    uint64_t m_down;
                    bool m_downHasBeenSet;

                    /**
                     * Web攻击总数
                     */
                    uint64_t m_attack;
                    bool m_attackHasBeenSet;

                    /**
                     * CC攻击总数
                     */
                    uint64_t m_cc;
                    bool m_ccHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPEAKVALUERESPONSE_H_
