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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELNAMESRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELNAMESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ModelNameAggregatedItem.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeModelNames返回参数结构体
                */
                class DescribeModelNamesResponse : public AbstractModel
                {
                public:
                    DescribeModelNamesResponse();
                    ~DescribeModelNamesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型标识聚合列表</p>
                     * @return ModelNames <p>模型标识聚合列表</p>
                     * 
                     */
                    std::vector<ModelNameAggregatedItem> GetModelNames() const;

                    /**
                     * 判断参数 ModelNames 是否已赋值
                     * @return ModelNames 是否已赋值
                     * 
                     */
                    bool ModelNamesHasBeenSet() const;

                    /**
                     * 获取<p>聚合后的模型标识总数</p>
                     * @return TotalCount <p>聚合后的模型标识总数</p>
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
                     * <p>模型标识聚合列表</p>
                     */
                    std::vector<ModelNameAggregatedItem> m_modelNames;
                    bool m_modelNamesHasBeenSet;

                    /**
                     * <p>聚合后的模型标识总数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELNAMESRESPONSE_H_
