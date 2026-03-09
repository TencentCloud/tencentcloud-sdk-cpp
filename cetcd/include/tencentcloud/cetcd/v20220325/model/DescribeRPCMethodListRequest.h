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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBERPCMETHODLISTREQUEST_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBERPCMETHODLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeRPCMethodList请求参数结构体
                */
                class DescribeRPCMethodListRequest : public AbstractModel
                {
                public:
                    DescribeRPCMethodListRequest();
                    ~DescribeRPCMethodListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取etcd实例ID
                     * @return InstanceId etcd实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置etcd实例ID
                     * @param _instanceId etcd实例ID
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
                     * 获取etcd集群pod名称
                     * @return PodName etcd集群pod名称
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置etcd集群pod名称
                     * @param _podName etcd集群pod名称
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取最大长度
                     * @return Limit 最大长度
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置最大长度
                     * @param _limit 最大长度
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * etcd实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * etcd集群pod名称
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 最大长度
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBERPCMETHODLISTREQUEST_H_
