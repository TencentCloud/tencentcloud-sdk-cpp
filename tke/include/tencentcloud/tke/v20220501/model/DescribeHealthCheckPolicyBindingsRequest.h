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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBEHEALTHCHECKPOLICYBINDINGSREQUEST_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBEHEALTHCHECKPOLICYBINDINGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/Filter.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * DescribeHealthCheckPolicyBindings请求参数结构体
                */
                class DescribeHealthCheckPolicyBindingsRequest : public AbstractModel
                {
                public:
                    DescribeHealthCheckPolicyBindingsRequest();
                    ~DescribeHealthCheckPolicyBindingsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群 ID
                     * @return ClusterId 集群 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID
                     * @param _clusterId 集群 ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取·  HealthCheckPolicyName
    按照【健康检测规则名称】进行过滤。
    类型：String
    必选：否
                     * @return Filter ·  HealthCheckPolicyName
    按照【健康检测规则名称】进行过滤。
    类型：String
    必选：否
                     * 
                     */
                    std::vector<Filter> GetFilter() const;

                    /**
                     * 设置·  HealthCheckPolicyName
    按照【健康检测规则名称】进行过滤。
    类型：String
    必选：否
                     * @param _filter ·  HealthCheckPolicyName
    按照【健康检测规则名称】进行过滤。
    类型：String
    必选：否
                     * 
                     */
                    void SetFilter(const std::vector<Filter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取最大输出条数，默认20，最大为100
                     * @return Limit 最大输出条数，默认20，最大为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置最大输出条数，默认20，最大为100
                     * @param _limit 最大输出条数，默认20，最大为100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认0
                     * @return Offset 偏移量，默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认0
                     * @param _offset 偏移量，默认0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * ·  HealthCheckPolicyName
    按照【健康检测规则名称】进行过滤。
    类型：String
    必选：否
                     */
                    std::vector<Filter> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 最大输出条数，默认20，最大为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBEHEALTHCHECKPOLICYBINDINGSREQUEST_H_
