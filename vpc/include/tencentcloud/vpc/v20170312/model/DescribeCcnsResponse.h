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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CCN.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeCcns返回参数结构体
                */
                class DescribeCcnsResponse : public AbstractModel
                {
                public:
                    DescribeCcnsResponse();
                    ~DescribeCcnsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的对象数。
                     * @return TotalCount 符合条件的对象数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取CCN对象。
                     * @return CcnSet CCN对象。
                     * 
                     */
                    std::vector<CCN> GetCcnSet() const;

                    /**
                     * 判断参数 CcnSet 是否已赋值
                     * @return CcnSet 是否已赋值
                     * 
                     */
                    bool CcnSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的对象数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * CCN对象。
                     */
                    std::vector<CCN> m_ccnSet;
                    bool m_ccnSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNSRESPONSE_H_
