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

#ifndef TENCENTCLOUD_MARKET_V20191010_MODEL_GETUSAGEPLANUSAGEAMOUNTRESPONSE_H_
#define TENCENTCLOUD_MARKET_V20191010_MODEL_GETUSAGEPLANUSAGEAMOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Market
    {
        namespace V20191010
        {
            namespace Model
            {
                /**
                * GetUsagePlanUsageAmount返回参数结构体
                */
                class GetUsagePlanUsageAmountResponse : public AbstractModel
                {
                public:
                    GetUsagePlanUsageAmountResponse();
                    ~GetUsagePlanUsageAmountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取最大调用量
                     * @return MaxRequestNum 最大调用量
                     * 
                     */
                    int64_t GetMaxRequestNum() const;

                    /**
                     * 判断参数 MaxRequestNum 是否已赋值
                     * @return MaxRequestNum 是否已赋值
                     * 
                     */
                    bool MaxRequestNumHasBeenSet() const;

                    /**
                     * 获取已经调用量
                     * @return InUseRequestNum 已经调用量
                     * 
                     */
                    int64_t GetInUseRequestNum() const;

                    /**
                     * 判断参数 InUseRequestNum 是否已赋值
                     * @return InUseRequestNum 是否已赋值
                     * 
                     */
                    bool InUseRequestNumHasBeenSet() const;

                    /**
                     * 获取剩余调用量
                     * @return RemainingRequestNum 剩余调用量
                     * 
                     */
                    int64_t GetRemainingRequestNum() const;

                    /**
                     * 判断参数 RemainingRequestNum 是否已赋值
                     * @return RemainingRequestNum 是否已赋值
                     * 
                     */
                    bool RemainingRequestNumHasBeenSet() const;

                private:

                    /**
                     * 最大调用量
                     */
                    int64_t m_maxRequestNum;
                    bool m_maxRequestNumHasBeenSet;

                    /**
                     * 已经调用量
                     */
                    int64_t m_inUseRequestNum;
                    bool m_inUseRequestNumHasBeenSet;

                    /**
                     * 剩余调用量
                     */
                    int64_t m_remainingRequestNum;
                    bool m_remainingRequestNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARKET_V20191010_MODEL_GETUSAGEPLANUSAGEAMOUNTRESPONSE_H_
