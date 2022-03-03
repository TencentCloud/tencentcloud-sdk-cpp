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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEAMQPEXCHANGEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEAMQPEXCHANGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateAMQPExchange请求参数结构体
                */
                class CreateAMQPExchangeRequest : public AbstractModel
                {
                public:
                    CreateAMQPExchangeRequest();
                    ~CreateAMQPExchangeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取交换机名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     * @return Exchange 交换机名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    std::string GetExchange() const;

                    /**
                     * 设置交换机名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     * @param Exchange 交换机名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    void SetExchange(const std::string& _exchange);

                    /**
                     * 判断参数 Exchange 是否已赋值
                     * @return Exchange 是否已赋值
                     */
                    bool ExchangeHasBeenSet() const;

                    /**
                     * 获取交换机所在的vhost，目前支持在单个vhost下创建主题
                     * @return VHosts 交换机所在的vhost，目前支持在单个vhost下创建主题
                     */
                    std::vector<std::string> GetVHosts() const;

                    /**
                     * 设置交换机所在的vhost，目前支持在单个vhost下创建主题
                     * @param VHosts 交换机所在的vhost，目前支持在单个vhost下创建主题
                     */
                    void SetVHosts(const std::vector<std::string>& _vHosts);

                    /**
                     * 判断参数 VHosts 是否已赋值
                     * @return VHosts 是否已赋值
                     */
                    bool VHostsHasBeenSet() const;

                    /**
                     * 获取交换机类型，可选值为Direct, Fanout, Topic, x-delayed-message
                     * @return Type 交换机类型，可选值为Direct, Fanout, Topic, x-delayed-message
                     */
                    std::string GetType() const;

                    /**
                     * 设置交换机类型，可选值为Direct, Fanout, Topic, x-delayed-message
                     * @param Type 交换机类型，可选值为Direct, Fanout, Topic, x-delayed-message
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取交换机说明，最大128个字符
                     * @return Remark 交换机说明，最大128个字符
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置交换机说明，最大128个字符
                     * @param Remark 交换机说明，最大128个字符
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取备用交换机名称
                     * @return AlternateExchange 备用交换机名称
                     */
                    std::string GetAlternateExchange() const;

                    /**
                     * 设置备用交换机名称
                     * @param AlternateExchange 备用交换机名称
                     */
                    void SetAlternateExchange(const std::string& _alternateExchange);

                    /**
                     * 判断参数 AlternateExchange 是否已赋值
                     * @return AlternateExchange 是否已赋值
                     */
                    bool AlternateExchangeHasBeenSet() const;

                    /**
                     * 获取延迟交换机类型，可选值为Direct, Fanout, Topic, 不允许为x-delayed-message
                     * @return DelayedType 延迟交换机类型，可选值为Direct, Fanout, Topic, 不允许为x-delayed-message
                     */
                    std::string GetDelayedType() const;

                    /**
                     * 设置延迟交换机类型，可选值为Direct, Fanout, Topic, 不允许为x-delayed-message
                     * @param DelayedType 延迟交换机类型，可选值为Direct, Fanout, Topic, 不允许为x-delayed-message
                     */
                    void SetDelayedType(const std::string& _delayedType);

                    /**
                     * 判断参数 DelayedType 是否已赋值
                     * @return DelayedType 是否已赋值
                     */
                    bool DelayedTypeHasBeenSet() const;

                private:

                    /**
                     * 交换机名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    std::string m_exchange;
                    bool m_exchangeHasBeenSet;

                    /**
                     * 交换机所在的vhost，目前支持在单个vhost下创建主题
                     */
                    std::vector<std::string> m_vHosts;
                    bool m_vHostsHasBeenSet;

                    /**
                     * 交换机类型，可选值为Direct, Fanout, Topic, x-delayed-message
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 交换机说明，最大128个字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 备用交换机名称
                     */
                    std::string m_alternateExchange;
                    bool m_alternateExchangeHasBeenSet;

                    /**
                     * 延迟交换机类型，可选值为Direct, Fanout, Topic, 不允许为x-delayed-message
                     */
                    std::string m_delayedType;
                    bool m_delayedTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEAMQPEXCHANGEREQUEST_H_
