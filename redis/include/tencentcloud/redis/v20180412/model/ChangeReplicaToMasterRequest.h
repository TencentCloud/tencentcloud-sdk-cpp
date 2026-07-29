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
                     * 获取<p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
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
                     * 获取<p>副本节点组 ID，请通过接口<a href="https://cloud.tencent.com/document/product/239/50312">DescribeInstanceZoneInfo</a>获取多 AZ备节点组的 ID 信息。单 AZ，则无需配置该参数。</p>
                     * @return GroupId <p>副本节点组 ID，请通过接口<a href="https://cloud.tencent.com/document/product/239/50312">DescribeInstanceZoneInfo</a>获取多 AZ备节点组的 ID 信息。单 AZ，则无需配置该参数。</p>
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置<p>副本节点组 ID，请通过接口<a href="https://cloud.tencent.com/document/product/239/50312">DescribeInstanceZoneInfo</a>获取多 AZ备节点组的 ID 信息。单 AZ，则无需配置该参数。</p>
                     * @param _groupId <p>副本节点组 ID，请通过接口<a href="https://cloud.tencent.com/document/product/239/50312">DescribeInstanceZoneInfo</a>获取多 AZ备节点组的 ID 信息。单 AZ，则无需配置该参数。</p>
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>紧急模式。</p><p>枚举值：</p><ul><li>false： 标准模式（安全推荐）</li><li>true： 极速模式：（高危加速）跳过校验、极速提主。高位操作，极易在异常情况下产生单主节点。</li></ul><p>默认值：false</p>
                     * @return Emergency <p>紧急模式。</p><p>枚举值：</p><ul><li>false： 标准模式（安全推荐）</li><li>true： 极速模式：（高危加速）跳过校验、极速提主。高位操作，极易在异常情况下产生单主节点。</li></ul><p>默认值：false</p>
                     * 
                     */
                    bool GetEmergency() const;

                    /**
                     * 设置<p>紧急模式。</p><p>枚举值：</p><ul><li>false： 标准模式（安全推荐）</li><li>true： 极速模式：（高危加速）跳过校验、极速提主。高位操作，极易在异常情况下产生单主节点。</li></ul><p>默认值：false</p>
                     * @param _emergency <p>紧急模式。</p><p>枚举值：</p><ul><li>false： 标准模式（安全推荐）</li><li>true： 极速模式：（高危加速）跳过校验、极速提主。高位操作，极易在异常情况下产生单主节点。</li></ul><p>默认值：false</p>
                     * 
                     */
                    void SetEmergency(const bool& _emergency);

                    /**
                     * 判断参数 Emergency 是否已赋值
                     * @return Emergency 是否已赋值
                     * 
                     */
                    bool EmergencyHasBeenSet() const;

                private:

                    /**
                     * <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>副本节点组 ID，请通过接口<a href="https://cloud.tencent.com/document/product/239/50312">DescribeInstanceZoneInfo</a>获取多 AZ备节点组的 ID 信息。单 AZ，则无需配置该参数。</p>
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>紧急模式。</p><p>枚举值：</p><ul><li>false： 标准模式（安全推荐）</li><li>true： 极速模式：（高危加速）跳过校验、极速提主。高位操作，极易在异常情况下产生单主节点。</li></ul><p>默认值：false</p>
                     */
                    bool m_emergency;
                    bool m_emergencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CHANGEREPLICATOMASTERREQUEST_H_
