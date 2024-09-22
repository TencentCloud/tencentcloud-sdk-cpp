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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBELOGCONFIGSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBELOGCONFIGSREQUEST_H_

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
                * DescribeLogConfigs请求参数结构体
                */
                class DescribeLogConfigsRequest : public AbstractModel
                {
                public:
                    DescribeLogConfigsRequest();
                    ~DescribeLogConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取当前集群类型支持tke、eks。默认为tke
                     * @return ClusterType 当前集群类型支持tke、eks。默认为tke
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置当前集群类型支持tke、eks。默认为tke
                     * @param _clusterType 当前集群类型支持tke、eks。默认为tke
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取按照采集规则名称查找，多个采集规则使用 "," 分隔。
                     * @return LogConfigNames 按照采集规则名称查找，多个采集规则使用 "," 分隔。
                     * 
                     */
                    std::string GetLogConfigNames() const;

                    /**
                     * 设置按照采集规则名称查找，多个采集规则使用 "," 分隔。
                     * @param _logConfigNames 按照采集规则名称查找，多个采集规则使用 "," 分隔。
                     * 
                     */
                    void SetLogConfigNames(const std::string& _logConfigNames);

                    /**
                     * 判断参数 LogConfigNames 是否已赋值
                     * @return LogConfigNames 是否已赋值
                     * 
                     */
                    bool LogConfigNamesHasBeenSet() const;

                    /**
                     * 获取偏移量,默认0
                     * @return Offset 偏移量,默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量,默认0
                     * @param _offset 偏移量,默认0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

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

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 当前集群类型支持tke、eks。默认为tke
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 按照采集规则名称查找，多个采集规则使用 "," 分隔。
                     */
                    std::string m_logConfigNames;
                    bool m_logConfigNamesHasBeenSet;

                    /**
                     * 偏移量,默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 最大输出条数，默认20，最大为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBELOGCONFIGSREQUEST_H_
