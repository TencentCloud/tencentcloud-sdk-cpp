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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEUSAGESUMMARYREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEUSAGESUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeUsageSummary请求参数结构体
                */
                class DescribeUsageSummaryRequest : public AbstractModel
                {
                public:
                    DescribeUsageSummaryRequest();
                    ~DescribeUsageSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取统计时间段的开始时间
                     * @return BeginTime 统计时间段的开始时间
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置统计时间段的开始时间
                     * @param BeginTime 统计时间段的开始时间
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取统计时间段的结束时间
                     * @return EndTime 统计时间段的结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置统计时间段的结束时间
                     * @param EndTime 统计时间段的结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取需要获取用量的子产品列表
                     * @return SubProducts 需要获取用量的子产品列表
                     */
                    std::vector<std::string> GetSubProducts() const;

                    /**
                     * 设置需要获取用量的子产品列表
                     * @param SubProducts 需要获取用量的子产品列表
                     */
                    void SetSubProducts(const std::vector<std::string>& _subProducts);

                    /**
                     * 判断参数 SubProducts 是否已赋值
                     * @return SubProducts 是否已赋值
                     */
                    bool SubProductsHasBeenSet() const;

                    /**
                     * 获取true: 返回加权后的数据
false: 返回原始数据
                     * @return IsWeighted true: 返回加权后的数据
false: 返回原始数据
                     */
                    bool GetIsWeighted() const;

                    /**
                     * 设置true: 返回加权后的数据
false: 返回原始数据
                     * @param IsWeighted true: 返回加权后的数据
false: 返回原始数据
                     */
                    void SetIsWeighted(const bool& _isWeighted);

                    /**
                     * 判断参数 IsWeighted 是否已赋值
                     * @return IsWeighted 是否已赋值
                     */
                    bool IsWeightedHasBeenSet() const;

                private:

                    /**
                     * 统计时间段的开始时间
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 统计时间段的结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 需要获取用量的子产品列表
                     */
                    std::vector<std::string> m_subProducts;
                    bool m_subProductsHasBeenSet;

                    /**
                     * true: 返回加权后的数据
false: 返回原始数据
                     */
                    bool m_isWeighted;
                    bool m_isWeightedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEUSAGESUMMARYREQUEST_H_
