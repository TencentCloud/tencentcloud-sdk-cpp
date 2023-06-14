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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERINSPECTIONRESULTSOVERVIEWREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERINSPECTIONRESULTSOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterInspectionResultsOverview请求参数结构体
                */
                class DescribeClusterInspectionResultsOverviewRequest : public AbstractModel
                {
                public:
                    DescribeClusterInspectionResultsOverviewRequest();
                    ~DescribeClusterInspectionResultsOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of String	目标集群列表，为空查询用户所有集群

                     * @return ClusterIds Array of String	目标集群列表，为空查询用户所有集群

                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置Array of String	目标集群列表，为空查询用户所有集群

                     * @param _clusterIds Array of String	目标集群列表，为空查询用户所有集群

                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取聚合字段信息，概览结果按照 GroupBy 信息聚合后返回，可选参数：
catalogue.first：按一级分类聚合
catalogue.second：按二级分类聚合
                     * @return GroupBy 聚合字段信息，概览结果按照 GroupBy 信息聚合后返回，可选参数：
catalogue.first：按一级分类聚合
catalogue.second：按二级分类聚合
                     * 
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置聚合字段信息，概览结果按照 GroupBy 信息聚合后返回，可选参数：
catalogue.first：按一级分类聚合
catalogue.second：按二级分类聚合
                     * @param _groupBy 聚合字段信息，概览结果按照 GroupBy 信息聚合后返回，可选参数：
catalogue.first：按一级分类聚合
catalogue.second：按二级分类聚合
                     * 
                     */
                    void SetGroupBy(const std::vector<std::string>& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     * 
                     */
                    bool GroupByHasBeenSet() const;

                private:

                    /**
                     * Array of String	目标集群列表，为空查询用户所有集群

                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * 聚合字段信息，概览结果按照 GroupBy 信息聚合后返回，可选参数：
catalogue.first：按一级分类聚合
catalogue.second：按二级分类聚合
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERINSPECTIONRESULTSOVERVIEWREQUEST_H_
