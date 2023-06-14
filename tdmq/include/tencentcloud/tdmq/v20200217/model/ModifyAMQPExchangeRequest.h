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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYAMQPEXCHANGEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYAMQPEXCHANGEREQUEST_H_

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
                * ModifyAMQPExchange请求参数结构体
                */
                class ModifyAMQPExchangeRequest : public AbstractModel
                {
                public:
                    ModifyAMQPExchangeRequest();
                    ~ModifyAMQPExchangeRequest() = default;
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
                     * 获取Vhost间名称
                     * @return VHostId Vhost间名称
                     * 
                     */
                    std::string GetVHostId() const;

                    /**
                     * 设置Vhost间名称
                     * @param _vHostId Vhost间名称
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
                     * 获取交换机名称
                     * @return Exchange 交换机名称
                     * 
                     */
                    std::string GetExchange() const;

                    /**
                     * 设置交换机名称
                     * @param _exchange 交换机名称
                     * 
                     */
                    void SetExchange(const std::string& _exchange);

                    /**
                     * 判断参数 Exchange 是否已赋值
                     * @return Exchange 是否已赋值
                     * 
                     */
                    bool ExchangeHasBeenSet() const;

                    /**
                     * 获取说明信息，最大128个字符
                     * @return Remark 说明信息，最大128个字符
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明信息，最大128个字符
                     * @param _remark 说明信息，最大128个字符
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Vhost间名称
                     */
                    std::string m_vHostId;
                    bool m_vHostIdHasBeenSet;

                    /**
                     * 交换机名称
                     */
                    std::string m_exchange;
                    bool m_exchangeHasBeenSet;

                    /**
                     * 说明信息，最大128个字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYAMQPEXCHANGEREQUEST_H_
