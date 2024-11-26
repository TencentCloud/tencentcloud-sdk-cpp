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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBECONCURRENCYUSAGEGRAPHRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBECONCURRENCYUSAGEGRAPHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeConcurrencyUsageGraph返回参数结构体
                */
                class DescribeConcurrencyUsageGraphResponse : public AbstractModel
                {
                public:
                    DescribeConcurrencyUsageGraphResponse();
                    ~DescribeConcurrencyUsageGraphResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取X轴: 时间区域；根据查询条件的粒度返回“分/小时/日”两种区间范围
                     * @return X X轴: 时间区域；根据查询条件的粒度返回“分/小时/日”两种区间范围
                     * 
                     */
                    std::vector<std::string> GetX() const;

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取可用并发y轴坐标
                     * @return AvailableY 可用并发y轴坐标
                     * 
                     */
                    std::vector<int64_t> GetAvailableY() const;

                    /**
                     * 判断参数 AvailableY 是否已赋值
                     * @return AvailableY 是否已赋值
                     * 
                     */
                    bool AvailableYHasBeenSet() const;

                    /**
                     * 获取成功调用并发y轴坐标
                     * @return SuccessCallY 成功调用并发y轴坐标
                     * 
                     */
                    std::vector<int64_t> GetSuccessCallY() const;

                    /**
                     * 判断参数 SuccessCallY 是否已赋值
                     * @return SuccessCallY 是否已赋值
                     * 
                     */
                    bool SuccessCallYHasBeenSet() const;

                private:

                    /**
                     * X轴: 时间区域；根据查询条件的粒度返回“分/小时/日”两种区间范围
                     */
                    std::vector<std::string> m_x;
                    bool m_xHasBeenSet;

                    /**
                     * 可用并发y轴坐标
                     */
                    std::vector<int64_t> m_availableY;
                    bool m_availableYHasBeenSet;

                    /**
                     * 成功调用并发y轴坐标
                     */
                    std::vector<int64_t> m_successCallY;
                    bool m_successCallYHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBECONCURRENCYUSAGEGRAPHRESPONSE_H_
