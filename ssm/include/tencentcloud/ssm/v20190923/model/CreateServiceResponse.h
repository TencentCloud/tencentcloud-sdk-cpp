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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_CREATESERVICERESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_CREATESERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * CreateService返回参数结构体
                */
                class CreateServiceResponse : public AbstractModel
                {
                public:
                    CreateServiceResponse();
                    ~CreateServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>义SSM 服务资源 ID，供调用方保存并标识该服务资源。</p><p>参数格式：一期后付费为 ssm_ 加 AppId，如 ssm_1250000000。</p><p>默认值：留空。</p><p>返回时资源可能仍在发货，不代表服务已可用。</p>
                     * @return ResourceId <p>义SSM 服务资源 ID，供调用方保存并标识该服务资源。</p><p>参数格式：一期后付费为 ssm_ 加 AppId，如 ssm_1250000000。</p><p>默认值：留空。</p><p>返回时资源可能仍在发货，不代表服务已可用。</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>计费交易订单号，用于核对本次开通订单</p><p>参数格式：留空；不承诺固定长度或纯数字格式。</p><p>默认值：留空。</p><p>来自计费返回的订单号；订单形成不代表发货完成。</p>
                     * @return OrderId <p>计费交易订单号，用于核对本次开通订单</p><p>参数格式：留空；不承诺固定长度或纯数字格式。</p><p>默认值：留空。</p><p>来自计费返回的订单号；订单形成不代表发货完成。</p>
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                private:

                    /**
                     * <p>义SSM 服务资源 ID，供调用方保存并标识该服务资源。</p><p>参数格式：一期后付费为 ssm_ 加 AppId，如 ssm_1250000000。</p><p>默认值：留空。</p><p>返回时资源可能仍在发货，不代表服务已可用。</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>计费交易订单号，用于核对本次开通订单</p><p>参数格式：留空；不承诺固定长度或纯数字格式。</p><p>默认值：留空。</p><p>来自计费返回的订单号；订单形成不代表发货完成。</p>
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_CREATESERVICERESPONSE_H_
