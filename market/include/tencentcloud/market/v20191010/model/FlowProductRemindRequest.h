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

#ifndef TENCENTCLOUD_MARKET_V20191010_MODEL_FLOWPRODUCTREMINDREQUEST_H_
#define TENCENTCLOUD_MARKET_V20191010_MODEL_FLOWPRODUCTREMINDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Market
    {
        namespace V20191010
        {
            namespace Model
            {
                /**
                * FlowProductRemind请求参数结构体
                */
                class FlowProductRemindRequest : public AbstractModel
                {
                public:
                    FlowProductRemindRequest();
                    ~FlowProductRemindRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务商uin
                     * @return ProviderUin 服务商uin
                     * 
                     */
                    std::string GetProviderUin() const;

                    /**
                     * 设置服务商uin
                     * @param _providerUin 服务商uin
                     * 
                     */
                    void SetProviderUin(const std::string& _providerUin);

                    /**
                     * 判断参数 ProviderUin 是否已赋值
                     * @return ProviderUin 是否已赋值
                     * 
                     */
                    bool ProviderUinHasBeenSet() const;

                    /**
                     * 获取服务商实例ID
                     * @return SignId 服务商实例ID
                     * 
                     */
                    std::string GetSignId() const;

                    /**
                     * 设置服务商实例ID
                     * @param _signId 服务商实例ID
                     * 
                     */
                    void SetSignId(const std::string& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     * 
                     */
                    bool SignIdHasBeenSet() const;

                    /**
                     * 获取云市场实例ID
                     * @return ResourceId 云市场实例ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置云市场实例ID
                     * @param _resourceId 云市场实例ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取实例总流量
                     * @return TotalFlow 实例总流量
                     * 
                     */
                    std::string GetTotalFlow() const;

                    /**
                     * 设置实例总流量
                     * @param _totalFlow 实例总流量
                     * 
                     */
                    void SetTotalFlow(const std::string& _totalFlow);

                    /**
                     * 判断参数 TotalFlow 是否已赋值
                     * @return TotalFlow 是否已赋值
                     * 
                     */
                    bool TotalFlowHasBeenSet() const;

                    /**
                     * 获取剩余流量
                     * @return LeftFlow 剩余流量
                     * 
                     */
                    std::string GetLeftFlow() const;

                    /**
                     * 设置剩余流量
                     * @param _leftFlow 剩余流量
                     * 
                     */
                    void SetLeftFlow(const std::string& _leftFlow);

                    /**
                     * 判断参数 LeftFlow 是否已赋值
                     * @return LeftFlow 是否已赋值
                     * 
                     */
                    bool LeftFlowHasBeenSet() const;

                    /**
                     * 获取流量单位
                     * @return FlowUnit 流量单位
                     * 
                     */
                    std::string GetFlowUnit() const;

                    /**
                     * 设置流量单位
                     * @param _flowUnit 流量单位
                     * 
                     */
                    void SetFlowUnit(const std::string& _flowUnit);

                    /**
                     * 判断参数 FlowUnit 是否已赋值
                     * @return FlowUnit 是否已赋值
                     * 
                     */
                    bool FlowUnitHasBeenSet() const;

                private:

                    /**
                     * 服务商uin
                     */
                    std::string m_providerUin;
                    bool m_providerUinHasBeenSet;

                    /**
                     * 服务商实例ID
                     */
                    std::string m_signId;
                    bool m_signIdHasBeenSet;

                    /**
                     * 云市场实例ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 实例总流量
                     */
                    std::string m_totalFlow;
                    bool m_totalFlowHasBeenSet;

                    /**
                     * 剩余流量
                     */
                    std::string m_leftFlow;
                    bool m_leftFlowHasBeenSet;

                    /**
                     * 流量单位
                     */
                    std::string m_flowUnit;
                    bool m_flowUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARKET_V20191010_MODEL_FLOWPRODUCTREMINDREQUEST_H_
