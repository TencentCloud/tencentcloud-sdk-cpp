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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_UPDATEAGENTSWITCHREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_UPDATEAGENTSWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * UpdateAgentSwitch请求参数结构体
                */
                class UpdateAgentSwitchRequest : public AbstractModel
                {
                public:
                    UpdateAgentSwitchRequest();
                    ~UpdateAgentSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Agent标识。
                     * @return AgentId Agent标识。
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置Agent标识。
                     * @param _agentId Agent标识。
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取停止或重连Agent，支持值包括："on" - 重连Agent， "off" - 停止Agent。
                     * @return Switch 停止或重连Agent，支持值包括："on" - 重连Agent， "off" - 停止Agent。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置停止或重连Agent，支持值包括："on" - 重连Agent， "off" - 停止Agent。
                     * @param _switch 停止或重连Agent，支持值包括："on" - 重连Agent， "off" - 停止Agent。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取服务产品类型，仅支持 "dbbrain-mysql" - 自建MySQL。
                     * @return Product 服务产品类型，仅支持 "dbbrain-mysql" - 自建MySQL。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，仅支持 "dbbrain-mysql" - 自建MySQL。
                     * @param _product 服务产品类型，仅支持 "dbbrain-mysql" - 自建MySQL。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * Agent标识。
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 停止或重连Agent，支持值包括："on" - 重连Agent， "off" - 停止Agent。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 服务产品类型，仅支持 "dbbrain-mysql" - 自建MySQL。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_UPDATEAGENTSWITCHREQUEST_H_
