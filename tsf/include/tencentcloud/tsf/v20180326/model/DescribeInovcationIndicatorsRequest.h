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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEINOVCATIONINDICATORSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEINOVCATIONINDICATORSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeInovcationIndicators请求参数结构体
                */
                class DescribeInovcationIndicatorsRequest : public AbstractModel
                {
                public:
                    DescribeInovcationIndicatorsRequest();
                    ~DescribeInovcationIndicatorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取维度
                     * @return Dimension 维度
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置维度
                     * @param _dimension 维度
                     * 
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取命名空间ID
                     * @return NamespaceId 命名空间ID
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID
                     * @param _namespaceId 命名空间ID
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取微服务ID
                     * @return ServiceId 微服务ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置微服务ID
                     * @param _serviceId 微服务ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取调用方服务名
                     * @return CallerServiceName 调用方服务名
                     * 
                     */
                    std::string GetCallerServiceName() const;

                    /**
                     * 设置调用方服务名
                     * @param _callerServiceName 调用方服务名
                     * 
                     */
                    void SetCallerServiceName(const std::string& _callerServiceName);

                    /**
                     * 判断参数 CallerServiceName 是否已赋值
                     * @return CallerServiceName 是否已赋值
                     * 
                     */
                    bool CallerServiceNameHasBeenSet() const;

                    /**
                     * 获取被调方服务名
                     * @return CalleeServiceName 被调方服务名
                     * 
                     */
                    std::string GetCalleeServiceName() const;

                    /**
                     * 设置被调方服务名
                     * @param _calleeServiceName 被调方服务名
                     * 
                     */
                    void SetCalleeServiceName(const std::string& _calleeServiceName);

                    /**
                     * 判断参数 CalleeServiceName 是否已赋值
                     * @return CalleeServiceName 是否已赋值
                     * 
                     */
                    bool CalleeServiceNameHasBeenSet() const;

                    /**
                     * 获取调用方接口名
                     * @return CallerInterfaceName 调用方接口名
                     * 
                     */
                    std::string GetCallerInterfaceName() const;

                    /**
                     * 设置调用方接口名
                     * @param _callerInterfaceName 调用方接口名
                     * 
                     */
                    void SetCallerInterfaceName(const std::string& _callerInterfaceName);

                    /**
                     * 判断参数 CallerInterfaceName 是否已赋值
                     * @return CallerInterfaceName 是否已赋值
                     * 
                     */
                    bool CallerInterfaceNameHasBeenSet() const;

                    /**
                     * 获取被调方接口名
                     * @return CalleeInterfaceName 被调方接口名
                     * 
                     */
                    std::string GetCalleeInterfaceName() const;

                    /**
                     * 设置被调方接口名
                     * @param _calleeInterfaceName 被调方接口名
                     * 
                     */
                    void SetCalleeInterfaceName(const std::string& _calleeInterfaceName);

                    /**
                     * 判断参数 CalleeInterfaceName 是否已赋值
                     * @return CalleeInterfaceName 是否已赋值
                     * 
                     */
                    bool CalleeInterfaceNameHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return ApplicationId 应用ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
                     * @param _applicationId 应用ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取部署组ID
                     * @return GroupId 部署组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID
                     * @param _groupId 部署组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 维度
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 命名空间ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 微服务ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 调用方服务名
                     */
                    std::string m_callerServiceName;
                    bool m_callerServiceNameHasBeenSet;

                    /**
                     * 被调方服务名
                     */
                    std::string m_calleeServiceName;
                    bool m_calleeServiceNameHasBeenSet;

                    /**
                     * 调用方接口名
                     */
                    std::string m_callerInterfaceName;
                    bool m_callerInterfaceNameHasBeenSet;

                    /**
                     * 被调方接口名
                     */
                    std::string m_calleeInterfaceName;
                    bool m_calleeInterfaceNameHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 部署组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEINOVCATIONINDICATORSREQUEST_H_
