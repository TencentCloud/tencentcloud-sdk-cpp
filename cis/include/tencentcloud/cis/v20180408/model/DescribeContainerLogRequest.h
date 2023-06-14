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

#ifndef TENCENTCLOUD_CIS_V20180408_MODEL_DESCRIBECONTAINERLOGREQUEST_H_
#define TENCENTCLOUD_CIS_V20180408_MODEL_DESCRIBECONTAINERLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cis
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DescribeContainerLog请求参数结构体
                */
                class DescribeContainerLogRequest : public AbstractModel
                {
                public:
                    DescribeContainerLogRequest();
                    ~DescribeContainerLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取容器实例名称
                     * @return InstanceName 容器实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置容器实例名称
                     * @param _instanceName 容器实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取容器名称
                     * @return ContainerName 容器名称
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名称
                     * @param _containerName 容器名称
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取日志显示尾部行数
                     * @return Tail 日志显示尾部行数
                     * 
                     */
                    uint64_t GetTail() const;

                    /**
                     * 设置日志显示尾部行数
                     * @param _tail 日志显示尾部行数
                     * 
                     */
                    void SetTail(const uint64_t& _tail);

                    /**
                     * 判断参数 Tail 是否已赋值
                     * @return Tail 是否已赋值
                     * 
                     */
                    bool TailHasBeenSet() const;

                    /**
                     * 获取日志起始时间
                     * @return SinceTime 日志起始时间
                     * 
                     */
                    std::string GetSinceTime() const;

                    /**
                     * 设置日志起始时间
                     * @param _sinceTime 日志起始时间
                     * 
                     */
                    void SetSinceTime(const std::string& _sinceTime);

                    /**
                     * 判断参数 SinceTime 是否已赋值
                     * @return SinceTime 是否已赋值
                     * 
                     */
                    bool SinceTimeHasBeenSet() const;

                private:

                    /**
                     * 容器实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 容器名称
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 日志显示尾部行数
                     */
                    uint64_t m_tail;
                    bool m_tailHasBeenSet;

                    /**
                     * 日志起始时间
                     */
                    std::string m_sinceTime;
                    bool m_sinceTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIS_V20180408_MODEL_DESCRIBECONTAINERLOGREQUEST_H_
