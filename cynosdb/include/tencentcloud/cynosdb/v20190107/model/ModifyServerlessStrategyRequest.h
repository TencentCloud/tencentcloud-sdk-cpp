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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYSERVERLESSSTRATEGYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYSERVERLESSSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyServerlessStrategy请求参数结构体
                */
                class ModifyServerlessStrategyRequest : public AbstractModel
                {
                public:
                    ModifyServerlessStrategyRequest();
                    ~ModifyServerlessStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取serverless集群id
                     * @return ClusterId serverless集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置serverless集群id
                     * @param _clusterId serverless集群id
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
                     * 获取集群是否自动暂停，可选范围
<li>yes</li>
<li>no</li>
                     * @return AutoPause 集群是否自动暂停，可选范围
<li>yes</li>
<li>no</li>
                     * 
                     */
                    std::string GetAutoPause() const;

                    /**
                     * 设置集群是否自动暂停，可选范围
<li>yes</li>
<li>no</li>
                     * @param _autoPause 集群是否自动暂停，可选范围
<li>yes</li>
<li>no</li>
                     * 
                     */
                    void SetAutoPause(const std::string& _autoPause);

                    /**
                     * 判断参数 AutoPause 是否已赋值
                     * @return AutoPause 是否已赋值
                     * 
                     */
                    bool AutoPauseHasBeenSet() const;

                    /**
                     * 获取集群自动暂停的延迟，单位秒，可选范围[600,691200]，默认600
                     * @return AutoPauseDelay 集群自动暂停的延迟，单位秒，可选范围[600,691200]，默认600
                     * 
                     */
                    int64_t GetAutoPauseDelay() const;

                    /**
                     * 设置集群自动暂停的延迟，单位秒，可选范围[600,691200]，默认600
                     * @param _autoPauseDelay 集群自动暂停的延迟，单位秒，可选范围[600,691200]，默认600
                     * 
                     */
                    void SetAutoPauseDelay(const int64_t& _autoPauseDelay);

                    /**
                     * 判断参数 AutoPauseDelay 是否已赋值
                     * @return AutoPauseDelay 是否已赋值
                     * 
                     */
                    bool AutoPauseDelayHasBeenSet() const;

                    /**
                     * 获取该参数暂时无效
                     * @return AutoScaleUpDelay 该参数暂时无效
                     * 
                     */
                    int64_t GetAutoScaleUpDelay() const;

                    /**
                     * 设置该参数暂时无效
                     * @param _autoScaleUpDelay 该参数暂时无效
                     * 
                     */
                    void SetAutoScaleUpDelay(const int64_t& _autoScaleUpDelay);

                    /**
                     * 判断参数 AutoScaleUpDelay 是否已赋值
                     * @return AutoScaleUpDelay 是否已赋值
                     * 
                     */
                    bool AutoScaleUpDelayHasBeenSet() const;

                    /**
                     * 获取该参数暂时无效
                     * @return AutoScaleDownDelay 该参数暂时无效
                     * 
                     */
                    int64_t GetAutoScaleDownDelay() const;

                    /**
                     * 设置该参数暂时无效
                     * @param _autoScaleDownDelay 该参数暂时无效
                     * 
                     */
                    void SetAutoScaleDownDelay(const int64_t& _autoScaleDownDelay);

                    /**
                     * 判断参数 AutoScaleDownDelay 是否已赋值
                     * @return AutoScaleDownDelay 是否已赋值
                     * 
                     */
                    bool AutoScaleDownDelayHasBeenSet() const;

                    /**
                     * 获取cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * @return MinCpu cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * @param _minCpu cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * 
                     */
                    void SetMinCpu(const double& _minCpu);

                    /**
                     * 判断参数 MinCpu 是否已赋值
                     * @return MinCpu 是否已赋值
                     * 
                     */
                    bool MinCpuHasBeenSet() const;

                    /**
                     * 获取cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * @return MaxCpu cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * @param _maxCpu cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * 
                     */
                    void SetMaxCpu(const double& _maxCpu);

                    /**
                     * 判断参数 MaxCpu 是否已赋值
                     * @return MaxCpu 是否已赋值
                     * 
                     */
                    bool MaxCpuHasBeenSet() const;

                    /**
                     * 获取只读实例cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * @return MinRoCpu 只读实例cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * 
                     */
                    double GetMinRoCpu() const;

                    /**
                     * 设置只读实例cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * @param _minRoCpu 只读实例cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * 
                     */
                    void SetMinRoCpu(const double& _minRoCpu);

                    /**
                     * 判断参数 MinRoCpu 是否已赋值
                     * @return MinRoCpu 是否已赋值
                     * 
                     */
                    bool MinRoCpuHasBeenSet() const;

                    /**
                     * 获取只读cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * @return MaxRoCpu 只读cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * 
                     */
                    double GetMaxRoCpu() const;

                    /**
                     * 设置只读cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * @param _maxRoCpu 只读cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * 
                     */
                    void SetMaxRoCpu(const double& _maxRoCpu);

                    /**
                     * 判断参数 MaxRoCpu 是否已赋值
                     * @return MaxRoCpu 是否已赋值
                     * 
                     */
                    bool MaxRoCpuHasBeenSet() const;

                    /**
                     * 获取只读节点最小个数
                     * @return MinRoCount 只读节点最小个数
                     * 
                     */
                    int64_t GetMinRoCount() const;

                    /**
                     * 设置只读节点最小个数
                     * @param _minRoCount 只读节点最小个数
                     * 
                     */
                    void SetMinRoCount(const int64_t& _minRoCount);

                    /**
                     * 判断参数 MinRoCount 是否已赋值
                     * @return MinRoCount 是否已赋值
                     * 
                     */
                    bool MinRoCountHasBeenSet() const;

                    /**
                     * 获取只读节点最大个数
                     * @return MaxRoCount 只读节点最大个数
                     * 
                     */
                    int64_t GetMaxRoCount() const;

                    /**
                     * 设置只读节点最大个数
                     * @param _maxRoCount 只读节点最大个数
                     * 
                     */
                    void SetMaxRoCount(const int64_t& _maxRoCount);

                    /**
                     * 判断参数 MaxRoCount 是否已赋值
                     * @return MaxRoCount 是否已赋值
                     * 
                     */
                    bool MaxRoCountHasBeenSet() const;

                    /**
                     * 获取是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes
                     * @return AutoArchive 是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes
                     * 
                     */
                    std::string GetAutoArchive() const;

                    /**
                     * 设置是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes
                     * @param _autoArchive 是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes
                     * 
                     */
                    void SetAutoArchive(const std::string& _autoArchive);

                    /**
                     * 判断参数 AutoArchive 是否已赋值
                     * @return AutoArchive 是否已赋值
                     * 
                     */
                    bool AutoArchiveHasBeenSet() const;

                private:

                    /**
                     * serverless集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群是否自动暂停，可选范围
<li>yes</li>
<li>no</li>
                     */
                    std::string m_autoPause;
                    bool m_autoPauseHasBeenSet;

                    /**
                     * 集群自动暂停的延迟，单位秒，可选范围[600,691200]，默认600
                     */
                    int64_t m_autoPauseDelay;
                    bool m_autoPauseDelayHasBeenSet;

                    /**
                     * 该参数暂时无效
                     */
                    int64_t m_autoScaleUpDelay;
                    bool m_autoScaleUpDelayHasBeenSet;

                    /**
                     * 该参数暂时无效
                     */
                    int64_t m_autoScaleDownDelay;
                    bool m_autoScaleDownDelayHasBeenSet;

                    /**
                     * cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * 只读实例cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     */
                    double m_minRoCpu;
                    bool m_minRoCpuHasBeenSet;

                    /**
                     * 只读cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     */
                    double m_maxRoCpu;
                    bool m_maxRoCpuHasBeenSet;

                    /**
                     * 只读节点最小个数
                     */
                    int64_t m_minRoCount;
                    bool m_minRoCountHasBeenSet;

                    /**
                     * 只读节点最大个数
                     */
                    int64_t m_maxRoCount;
                    bool m_maxRoCountHasBeenSet;

                    /**
                     * 是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes
                     */
                    std::string m_autoArchive;
                    bool m_autoArchiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYSERVERLESSSTRATEGYREQUEST_H_
