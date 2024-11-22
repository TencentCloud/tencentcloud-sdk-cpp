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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYCONNECTIONCONFIGREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYCONNECTIONCONFIGREQUEST_H_

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
                * ModifyConnectionConfig请求参数结构体
                */
                class ModifyConnectionConfigRequest : public AbstractModel
                {
                public:
                    ModifyConnectionConfigRequest();
                    ~ModifyConnectionConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @return InstanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @param _instanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
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
                     * 获取附加带宽，大于0，单位MB。
                     * @return Bandwidth 附加带宽，大于0，单位MB。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置附加带宽，大于0，单位MB。
                     * @param _bandwidth 附加带宽，大于0，单位MB。
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取单分片的总连接数。
- 未开启副本只读时，下限为10000，上限为40000。
- 开启副本只读时，下限为10000，上限为10000×(只读副本数+3)。
                     * @return ClientLimit 单分片的总连接数。
- 未开启副本只读时，下限为10000，上限为40000。
- 开启副本只读时，下限为10000，上限为10000×(只读副本数+3)。
                     * 
                     */
                    int64_t GetClientLimit() const;

                    /**
                     * 设置单分片的总连接数。
- 未开启副本只读时，下限为10000，上限为40000。
- 开启副本只读时，下限为10000，上限为10000×(只读副本数+3)。
                     * @param _clientLimit 单分片的总连接数。
- 未开启副本只读时，下限为10000，上限为40000。
- 开启副本只读时，下限为10000，上限为10000×(只读副本数+3)。
                     * 
                     */
                    void SetClientLimit(const int64_t& _clientLimit);

                    /**
                     * 判断参数 ClientLimit 是否已赋值
                     * @return ClientLimit 是否已赋值
                     * 
                     */
                    bool ClientLimitHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 附加带宽，大于0，单位MB。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 单分片的总连接数。
- 未开启副本只读时，下限为10000，上限为40000。
- 开启副本只读时，下限为10000，上限为10000×(只读副本数+3)。
                     */
                    int64_t m_clientLimit;
                    bool m_clientLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYCONNECTIONCONFIGREQUEST_H_
