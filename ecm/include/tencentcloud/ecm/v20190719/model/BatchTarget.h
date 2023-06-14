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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_BATCHTARGET_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_BATCHTARGET_H_

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
                * 负责均衡批量目标项
                */
                class BatchTarget : public AbstractModel
                {
                public:
                    BatchTarget();
                    ~BatchTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监听器ID
                     * @return ListenerId 监听器ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID
                     * @param _listenerId 监听器ID
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取绑定端口
                     * @return Port 绑定端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置绑定端口
                     * @param _port 绑定端口
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
                     * 获取弹性网卡ip
                     * @return EniIp 弹性网卡ip
                     * 
                     */
                    std::string GetEniIp() const;

                    /**
                     * 设置弹性网卡ip
                     * @param _eniIp 弹性网卡ip
                     * 
                     */
                    void SetEniIp(const std::string& _eniIp);

                    /**
                     * 判断参数 EniIp 是否已赋值
                     * @return EniIp 是否已赋值
                     * 
                     */
                    bool EniIpHasBeenSet() const;

                    /**
                     * 获取子机权重，范围[0, 100]。绑定时如果不存在，则默认为10。
                     * @return Weight 子机权重，范围[0, 100]。绑定时如果不存在，则默认为10。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置子机权重，范围[0, 100]。绑定时如果不存在，则默认为10。
                     * @param _weight 子机权重，范围[0, 100]。绑定时如果不存在，则默认为10。
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * 监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 绑定端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 子机ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 弹性网卡ip
                     */
                    std::string m_eniIp;
                    bool m_eniIpHasBeenSet;

                    /**
                     * 子机权重，范围[0, 100]。绑定时如果不存在，则默认为10。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_BATCHTARGET_H_
