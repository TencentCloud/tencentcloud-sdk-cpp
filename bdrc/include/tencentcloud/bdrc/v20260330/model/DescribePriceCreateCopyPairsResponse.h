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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEPRICECREATECOPYPAIRSRESPONSE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEPRICECREATECOPYPAIRSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/CopyPairPrice.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribePriceCreateCopyPairs返回参数结构体
                */
                class DescribePriceCreateCopyPairsResponse : public AbstractModel
                {
                public:
                    DescribePriceCreateCopyPairsResponse();
                    ~DescribePriceCreateCopyPairsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取复制对价格列表，与入参一一对应
                     * @return CopyPairPrices 复制对价格列表，与入参一一对应
                     * 
                     */
                    std::vector<CopyPairPrice> GetCopyPairPrices() const;

                    /**
                     * 判断参数 CopyPairPrices 是否已赋值
                     * @return CopyPairPrices 是否已赋值
                     * 
                     */
                    bool CopyPairPricesHasBeenSet() const;

                private:

                    /**
                     * 复制对价格列表，与入参一一对应
                     */
                    std::vector<CopyPairPrice> m_copyPairPrices;
                    bool m_copyPairPricesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEPRICECREATECOPYPAIRSRESPONSE_H_
