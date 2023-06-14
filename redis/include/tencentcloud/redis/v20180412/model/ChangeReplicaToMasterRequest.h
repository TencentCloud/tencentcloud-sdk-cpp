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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CHANGEREPLICATOMASTERREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CHANGEREPLICATOMASTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ChangeReplicaToMaster请求参数结构体
                */
                class ChangeReplicaToMasterRequest : public AbstractModel
                {
                public:
                    ChangeReplicaToMasterRequest();
                    ~ChangeReplicaToMasterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。

                     * @return InstanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。

                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。

                     * @param _instanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。

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
                     * 获取副本节点组 ID，请通过接口[DescribeInstanceZoneInfo](https://cloud.tencent.com/document/product/239/50312)获取多 AZ备节点组的 ID 信息。单 AZ，则无需配置该参数。
                     * @return GroupId 副本节点组 ID，请通过接口[DescribeInstanceZoneInfo](https://cloud.tencent.com/document/product/239/50312)获取多 AZ备节点组的 ID 信息。单 AZ，则无需配置该参数。
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置副本节点组 ID，请通过接口[DescribeInstanceZoneInfo](https://cloud.tencent.com/document/product/239/50312)获取多 AZ备节点组的 ID 信息。单 AZ，则无需配置该参数。
                     * @param _groupId 副本节点组 ID，请通过接口[DescribeInstanceZoneInfo](https://cloud.tencent.com/document/product/239/50312)获取多 AZ备节点组的 ID 信息。单 AZ，则无需配置该参数。
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 副本节点组 ID，请通过接口[DescribeInstanceZoneInfo](https://cloud.tencent.com/document/product/239/50312)获取多 AZ备节点组的 ID 信息。单 AZ，则无需配置该参数。
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CHANGEREPLICATOMASTERREQUEST_H_
