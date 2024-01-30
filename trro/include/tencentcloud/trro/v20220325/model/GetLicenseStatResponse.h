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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_GETLICENSESTATRESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_GETLICENSESTATRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * GetLicenseStat返回参数结构体
                */
                class GetLicenseStatResponse : public AbstractModel
                {
                public:
                    GetLicenseStatResponse();
                    ~GetLicenseStatResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取有效授权
                     * @return Valid 有效授权
                     * 
                     */
                    int64_t GetValid() const;

                    /**
                     * 判断参数 Valid 是否已赋值
                     * @return Valid 是否已赋值
                     * 
                     */
                    bool ValidHasBeenSet() const;

                    /**
                     * 获取已绑定授权
                     * @return Bound 已绑定授权
                     * 
                     */
                    int64_t GetBound() const;

                    /**
                     * 判断参数 Bound 是否已赋值
                     * @return Bound 是否已赋值
                     * 
                     */
                    bool BoundHasBeenSet() const;

                    /**
                     * 获取未绑定授权
                     * @return UnBound 未绑定授权
                     * 
                     */
                    int64_t GetUnBound() const;

                    /**
                     * 判断参数 UnBound 是否已赋值
                     * @return UnBound 是否已赋值
                     * 
                     */
                    bool UnBoundHasBeenSet() const;

                    /**
                     * 获取过期授权
                     * @return Expire 过期授权
                     * 
                     */
                    int64_t GetExpire() const;

                    /**
                     * 判断参数 Expire 是否已赋值
                     * @return Expire 是否已赋值
                     * 
                     */
                    bool ExpireHasBeenSet() const;

                    /**
                     * 获取当月用量超时授权个数
                     * @return MonthlyExpire 当月用量超时授权个数
                     * 
                     */
                    int64_t GetMonthlyExpire() const;

                    /**
                     * 判断参数 MonthlyExpire 是否已赋值
                     * @return MonthlyExpire 是否已赋值
                     * 
                     */
                    bool MonthlyExpireHasBeenSet() const;

                private:

                    /**
                     * 有效授权
                     */
                    int64_t m_valid;
                    bool m_validHasBeenSet;

                    /**
                     * 已绑定授权
                     */
                    int64_t m_bound;
                    bool m_boundHasBeenSet;

                    /**
                     * 未绑定授权
                     */
                    int64_t m_unBound;
                    bool m_unBoundHasBeenSet;

                    /**
                     * 过期授权
                     */
                    int64_t m_expire;
                    bool m_expireHasBeenSet;

                    /**
                     * 当月用量超时授权个数
                     */
                    int64_t m_monthlyExpire;
                    bool m_monthlyExpireHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_GETLICENSESTATRESPONSE_H_
