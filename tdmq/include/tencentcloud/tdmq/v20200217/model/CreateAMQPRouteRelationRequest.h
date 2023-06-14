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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEAMQPROUTERELATIONREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEAMQPROUTERELATIONREQUEST_H_

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
                * CreateAMQPRouteRelation请求参数结构体
                */
                class CreateAMQPRouteRelationRequest : public AbstractModel
                {
                public:
                    CreateAMQPRouteRelationRequest();
                    ~CreateAMQPRouteRelationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取交换机所在的vhost
                     * @return VHostId 交换机所在的vhost
                     * 
                     */
                    std::string GetVHostId() const;

                    /**
                     * 设置交换机所在的vhost
                     * @param _vHostId 交换机所在的vhost
                     * 
                     */
                    void SetVHostId(const std::string& _vHostId);

                    /**
                     * 判断参数 VHostId 是否已赋值
                     * @return VHostId 是否已赋值
                     * 
                     */
                    bool VHostIdHasBeenSet() const;

                    /**
                     * 获取源Exchange名称
                     * @return SourceExchange 源Exchange名称
                     * 
                     */
                    std::string GetSourceExchange() const;

                    /**
                     * 设置源Exchange名称
                     * @param _sourceExchange 源Exchange名称
                     * 
                     */
                    void SetSourceExchange(const std::string& _sourceExchange);

                    /**
                     * 判断参数 SourceExchange 是否已赋值
                     * @return SourceExchange 是否已赋值
                     * 
                     */
                    bool SourceExchangeHasBeenSet() const;

                    /**
                     * 获取目标类型:Queue|Exchange
                     * @return DestType 目标类型:Queue|Exchange
                     * 
                     */
                    std::string GetDestType() const;

                    /**
                     * 设置目标类型:Queue|Exchange
                     * @param _destType 目标类型:Queue|Exchange
                     * 
                     */
                    void SetDestType(const std::string& _destType);

                    /**
                     * 判断参数 DestType 是否已赋值
                     * @return DestType 是否已赋值
                     * 
                     */
                    bool DestTypeHasBeenSet() const;

                    /**
                     * 获取目标值
                     * @return DestValue 目标值
                     * 
                     */
                    std::string GetDestValue() const;

                    /**
                     * 设置目标值
                     * @param _destValue 目标值
                     * 
                     */
                    void SetDestValue(const std::string& _destValue);

                    /**
                     * 判断参数 DestValue 是否已赋值
                     * @return DestValue 是否已赋值
                     * 
                     */
                    bool DestValueHasBeenSet() const;

                    /**
                     * 获取交换机说明，最大128个字符
                     * @return Remark 交换机说明，最大128个字符
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置交换机说明，最大128个字符
                     * @param _remark 交换机说明，最大128个字符
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取绑定key,缺省值为default
                     * @return RoutingKey 绑定key,缺省值为default
                     * 
                     */
                    std::string GetRoutingKey() const;

                    /**
                     * 设置绑定key,缺省值为default
                     * @param _routingKey 绑定key,缺省值为default
                     * 
                     */
                    void SetRoutingKey(const std::string& _routingKey);

                    /**
                     * 判断参数 RoutingKey 是否已赋值
                     * @return RoutingKey 是否已赋值
                     * 
                     */
                    bool RoutingKeyHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 交换机所在的vhost
                     */
                    std::string m_vHostId;
                    bool m_vHostIdHasBeenSet;

                    /**
                     * 源Exchange名称
                     */
                    std::string m_sourceExchange;
                    bool m_sourceExchangeHasBeenSet;

                    /**
                     * 目标类型:Queue|Exchange
                     */
                    std::string m_destType;
                    bool m_destTypeHasBeenSet;

                    /**
                     * 目标值
                     */
                    std::string m_destValue;
                    bool m_destValueHasBeenSet;

                    /**
                     * 交换机说明，最大128个字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 绑定key,缺省值为default
                     */
                    std::string m_routingKey;
                    bool m_routingKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEAMQPROUTERELATIONREQUEST_H_
