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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_TARGET_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_TARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 负责均衡后端目标
                */
                class Target : public AbstractModel
                {
                public:
                    Target();
                    ~Target() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取后端服务的监听端口
                     * @return Port 后端服务的监听端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置后端服务的监听端口
                     * @param _port 后端服务的监听端口
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取子机ID
                     * @return InstanceId 子机ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置子机ID
                     * @param _instanceId 子机ID
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
                     * 获取后端服务的转发权重，取值范围：[0, 100]，默认为 10。
                     * @return Weight 后端服务的转发权重，取值范围：[0, 100]，默认为 10。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置后端服务的转发权重，取值范围：[0, 100]，默认为 10。
                     * @param _weight 后端服务的转发权重，取值范围：[0, 100]，默认为 10。
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取绑定弹性网卡时需要传入此参数，代表弹性网卡的IP，弹性网卡必须先绑定至子机，然后才能绑定到负载均衡实例。注意：参数 InstanceId 和 EniIp 只能传入一个且必须传入一个。
                     * @return EniIp 绑定弹性网卡时需要传入此参数，代表弹性网卡的IP，弹性网卡必须先绑定至子机，然后才能绑定到负载均衡实例。注意：参数 InstanceId 和 EniIp 只能传入一个且必须传入一个。
                     * 
                     */
                    std::string GetEniIp() const;

                    /**
                     * 设置绑定弹性网卡时需要传入此参数，代表弹性网卡的IP，弹性网卡必须先绑定至子机，然后才能绑定到负载均衡实例。注意：参数 InstanceId 和 EniIp 只能传入一个且必须传入一个。
                     * @param _eniIp 绑定弹性网卡时需要传入此参数，代表弹性网卡的IP，弹性网卡必须先绑定至子机，然后才能绑定到负载均衡实例。注意：参数 InstanceId 和 EniIp 只能传入一个且必须传入一个。
                     * 
                     */
                    void SetEniIp(const std::string& _eniIp);

                    /**
                     * 判断参数 EniIp 是否已赋值
                     * @return EniIp 是否已赋值
                     * 
                     */
                    bool EniIpHasBeenSet() const;

                private:

                    /**
                     * 后端服务的监听端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 子机ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 后端服务的转发权重，取值范围：[0, 100]，默认为 10。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 绑定弹性网卡时需要传入此参数，代表弹性网卡的IP，弹性网卡必须先绑定至子机，然后才能绑定到负载均衡实例。注意：参数 InstanceId 和 EniIp 只能传入一个且必须传入一个。
                     */
                    std::string m_eniIp;
                    bool m_eniIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_TARGET_H_
