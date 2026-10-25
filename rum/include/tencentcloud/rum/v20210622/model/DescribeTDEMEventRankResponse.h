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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMEVENTRANKRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMEVENTRANKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/EventRankItem.h>
#include <tencentcloud/rum/v20210622/model/ExceptionDistribution.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTDEMEventRank返回参数结构体
                */
                class DescribeTDEMEventRankResponse : public AbstractModel
                {
                public:
                    DescribeTDEMEventRankResponse();
                    ~DescribeTDEMEventRankResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>排行行</p>
                     * @return Items <p>排行行</p>
                     * 
                     */
                    std::vector<EventRankItem> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取<p>仅 Kind=exception_dimension 返回。Rows 为完整维度行及固定分类向量；空数据返回 Rows=[]。父行 TotalCount 等于 IncludedInTotal=true 的主项 Count 之和，包含项仅展示且不重复计总。所有计数为0至9007199254740991的整数。旧 Kind 继续使用 Items。</p>
                     * @return ExceptionDistribution <p>仅 Kind=exception_dimension 返回。Rows 为完整维度行及固定分类向量；空数据返回 Rows=[]。父行 TotalCount 等于 IncludedInTotal=true 的主项 Count 之和，包含项仅展示且不重复计总。所有计数为0至9007199254740991的整数。旧 Kind 继续使用 Items。</p>
                     * 
                     */
                    ExceptionDistribution GetExceptionDistribution() const;

                    /**
                     * 判断参数 ExceptionDistribution 是否已赋值
                     * @return ExceptionDistribution 是否已赋值
                     * 
                     */
                    bool ExceptionDistributionHasBeenSet() const;

                private:

                    /**
                     * <p>排行行</p>
                     */
                    std::vector<EventRankItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * <p>仅 Kind=exception_dimension 返回。Rows 为完整维度行及固定分类向量；空数据返回 Rows=[]。父行 TotalCount 等于 IncludedInTotal=true 的主项 Count 之和，包含项仅展示且不重复计总。所有计数为0至9007199254740991的整数。旧 Kind 继续使用 Items。</p>
                     */
                    ExceptionDistribution m_exceptionDistribution;
                    bool m_exceptionDistributionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMEVENTRANKRESPONSE_H_
