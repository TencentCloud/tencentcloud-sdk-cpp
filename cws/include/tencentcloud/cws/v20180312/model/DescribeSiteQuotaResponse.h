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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_DESCRIBESITEQUOTARESPONSE_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_DESCRIBESITEQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * DescribeSiteQuota返回参数结构体
                */
                class DescribeSiteQuotaResponse : public AbstractModel
                {
                public:
                    DescribeSiteQuotaResponse();
                    ~DescribeSiteQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取已购买的扫描次数。
                     * @return Total 已购买的扫描次数。
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取已使用的扫描次数。
                     * @return Used 已使用的扫描次数。
                     * 
                     */
                    uint64_t GetUsed() const;

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                    /**
                     * 获取剩余可用的扫描次数。
                     * @return Available 剩余可用的扫描次数。
                     * 
                     */
                    uint64_t GetAvailable() const;

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                private:

                    /**
                     * 已购买的扫描次数。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 已使用的扫描次数。
                     */
                    uint64_t m_used;
                    bool m_usedHasBeenSet;

                    /**
                     * 剩余可用的扫描次数。
                     */
                    uint64_t m_available;
                    bool m_availableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_DESCRIBESITEQUOTARESPONSE_H_
