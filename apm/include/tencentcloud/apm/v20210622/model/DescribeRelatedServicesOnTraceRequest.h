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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBERELATEDSERVICESONTRACEREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBERELATEDSERVICESONTRACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeRelatedServicesOnTrace请求参数结构体
                */
                class DescribeRelatedServicesOnTraceRequest : public AbstractModel
                {
                public:
                    DescribeRelatedServicesOnTraceRequest();
                    ~DescribeRelatedServicesOnTraceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务系统 ID
                     * @return InstanceId 业务系统 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置业务系统 ID
                     * @param _instanceId 业务系统 ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间
                     * @return StartTime 查询开始时间
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置查询开始时间
                     * @param _startTime 查询开始时间
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间
                     * @return EndTime 查询结束时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置查询结束时间
                     * @param _endTime 查询结束时间
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取应用名
                     * @return ServiceName 应用名
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置应用名
                     * @param _serviceName 应用名
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取是否为应用拓扑查询
                     * @return IsServiceTopology 是否为应用拓扑查询
                     * 
                     */
                    bool GetIsServiceTopology() const;

                    /**
                     * 设置是否为应用拓扑查询
                     * @param _isServiceTopology 是否为应用拓扑查询
                     * 
                     */
                    void SetIsServiceTopology(const bool& _isServiceTopology);

                    /**
                     * 判断参数 IsServiceTopology 是否已赋值
                     * @return IsServiceTopology 是否已赋值
                     * 
                     */
                    bool IsServiceTopologyHasBeenSet() const;

                private:

                    /**
                     * 业务系统 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 查询开始时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 应用名
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 是否为应用拓扑查询
                     */
                    bool m_isServiceTopology;
                    bool m_isServiceTopologyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBERELATEDSERVICESONTRACEREQUEST_H_
