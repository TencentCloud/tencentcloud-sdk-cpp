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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMWHITELISTSTRATEGYRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMWHITELISTSTRATEGYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmWhitelistStrategy.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmWhitelistStrategy返回参数结构体
                */
                class DescribeDspmWhitelistStrategyResponse : public AbstractModel
                {
                public:
                    DescribeDspmWhitelistStrategyResponse();
                    ~DescribeDspmWhitelistStrategyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取白名单列表
                     * @return WhitelistSet 白名单列表
                     * 
                     */
                    std::vector<DspmWhitelistStrategy> GetWhitelistSet() const;

                    /**
                     * 判断参数 WhitelistSet 是否已赋值
                     * @return WhitelistSet 是否已赋值
                     * 
                     */
                    bool WhitelistSetHasBeenSet() const;

                    /**
                     * 获取白名单总数
                     * @return TotalCount 白名单总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 白名单列表
                     */
                    std::vector<DspmWhitelistStrategy> m_whitelistSet;
                    bool m_whitelistSetHasBeenSet;

                    /**
                     * 白名单总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMWHITELISTSTRATEGYRESPONSE_H_
