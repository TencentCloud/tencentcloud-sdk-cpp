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

#ifndef TENCENTCLOUD_SVP_V20240125_MODEL_DESCRIBESAVINGPLANDEDUCTRESPONSE_H_
#define TENCENTCLOUD_SVP_V20240125_MODEL_DESCRIBESAVINGPLANDEDUCTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/svp/v20240125/model/SavingPlanDeductDetail.h>


namespace TencentCloud
{
    namespace Svp
    {
        namespace V20240125
        {
            namespace Model
            {
                /**
                * DescribeSavingPlanDeduct返回参数结构体
                */
                class DescribeSavingPlanDeductResponse : public AbstractModel
                {
                public:
                    DescribeSavingPlanDeductResponse();
                    ~DescribeSavingPlanDeductResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询命中的节省计划抵扣明细数据总条数
                     * @return Total 查询命中的节省计划抵扣明细数据总条数
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
                     * 获取查询命中的节省计划抵扣明细数据明细
                     * @return Deducts 查询命中的节省计划抵扣明细数据明细
                     * 
                     */
                    std::vector<SavingPlanDeductDetail> GetDeducts() const;

                    /**
                     * 判断参数 Deducts 是否已赋值
                     * @return Deducts 是否已赋值
                     * 
                     */
                    bool DeductsHasBeenSet() const;

                private:

                    /**
                     * 查询命中的节省计划抵扣明细数据总条数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 查询命中的节省计划抵扣明细数据明细
                     */
                    std::vector<SavingPlanDeductDetail> m_deducts;
                    bool m_deductsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SVP_V20240125_MODEL_DESCRIBESAVINGPLANDEDUCTRESPONSE_H_
