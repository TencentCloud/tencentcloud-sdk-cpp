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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBESERVICELOGINSETTINGSREQUEST_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBESERVICELOGINSETTINGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * DescribeServiceLoginSettings请求参数结构体
                */
                class DescribeServiceLoginSettingsRequest : public AbstractModel
                {
                public:
                    DescribeServiceLoginSettingsRequest();
                    ~DescribeServiceLoginSettingsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID通过调用接口[DescribeInstances](https://cloud.tencent.com/document/api/1721/101612)获取。
                     * @return InstanceId 实例ID通过调用接口[DescribeInstances](https://cloud.tencent.com/document/api/1721/101612)获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID通过调用接口[DescribeInstances](https://cloud.tencent.com/document/api/1721/101612)获取。
                     * @param _instanceId 实例ID通过调用接口[DescribeInstances](https://cloud.tencent.com/document/api/1721/101612)获取。
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
                     * 获取服务名称
                     * @return ServiceName 服务名称
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名称
                     * @param _serviceName 服务名称
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                private:

                    /**
                     * 实例ID通过调用接口[DescribeInstances](https://cloud.tencent.com/document/api/1721/101612)获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBESERVICELOGINSETTINGSREQUEST_H_
