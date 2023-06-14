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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_DESCRIBECLUSTERRECOVERYTIMERANGEREQUEST_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_DESCRIBECLUSTERRECOVERYTIMERANGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdcpg
    {
        namespace V20211118
        {
            namespace Model
            {
                /**
                * DescribeClusterRecoveryTimeRange请求参数结构体
                */
                class DescribeClusterRecoveryTimeRangeRequest : public AbstractModel
                {
                public:
                    DescribeClusterRecoveryTimeRangeRequest();
                    ~DescribeClusterRecoveryTimeRangeRequest() = default;
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
                     * 获取期望的回档时间点，传入从集群创建时间到当前时间之间的时间点。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @return DataPoint 期望的回档时间点，传入从集群创建时间到当前时间之间的时间点。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    std::string GetDataPoint() const;

                    /**
                     * 设置期望的回档时间点，传入从集群创建时间到当前时间之间的时间点。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @param _dataPoint 期望的回档时间点，传入从集群创建时间到当前时间之间的时间点。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    void SetDataPoint(const std::string& _dataPoint);

                    /**
                     * 判断参数 DataPoint 是否已赋值
                     * @return DataPoint 是否已赋值
                     * 
                     */
                    bool DataPointHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 期望的回档时间点，传入从集群创建时间到当前时间之间的时间点。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     */
                    std::string m_dataPoint;
                    bool m_dataPointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_DESCRIBECLUSTERRECOVERYTIMERANGEREQUEST_H_
