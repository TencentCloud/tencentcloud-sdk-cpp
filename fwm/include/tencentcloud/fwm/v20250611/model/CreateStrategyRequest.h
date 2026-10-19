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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_CREATESTRATEGYREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_CREATESTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/StrategyReq.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * CreateStrategy请求参数结构体
                */
                class CreateStrategyRequest : public AbstractModel
                {
                public:
                    CreateStrategyRequest();
                    ~CreateStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品类型</p>
                     * @return Product <p>产品类型</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>产品类型</p>
                     * @param _product <p>产品类型</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>下发账号</p>
                     * @return ReceiveAccount <p>下发账号</p>
                     * 
                     */
                    std::vector<std::string> GetReceiveAccount() const;

                    /**
                     * 设置<p>下发账号</p>
                     * @param _receiveAccount <p>下发账号</p>
                     * 
                     */
                    void SetReceiveAccount(const std::vector<std::string>& _receiveAccount);

                    /**
                     * 判断参数 ReceiveAccount 是否已赋值
                     * @return ReceiveAccount 是否已赋值
                     * 
                     */
                    bool ReceiveAccountHasBeenSet() const;

                    /**
                     * 获取<p>前区规则组</p>
                     * @return PreStrategy <p>前区规则组</p>
                     * 
                     */
                    std::vector<StrategyReq> GetPreStrategy() const;

                    /**
                     * 设置<p>前区规则组</p>
                     * @param _preStrategy <p>前区规则组</p>
                     * 
                     */
                    void SetPreStrategy(const std::vector<StrategyReq>& _preStrategy);

                    /**
                     * 判断参数 PreStrategy 是否已赋值
                     * @return PreStrategy 是否已赋值
                     * 
                     */
                    bool PreStrategyHasBeenSet() const;

                    /**
                     * 获取<p>后区规则组</p>
                     * @return PostStrategy <p>后区规则组</p>
                     * 
                     */
                    std::vector<StrategyReq> GetPostStrategy() const;

                    /**
                     * 设置<p>后区规则组</p>
                     * @param _postStrategy <p>后区规则组</p>
                     * 
                     */
                    void SetPostStrategy(const std::vector<StrategyReq>& _postStrategy);

                    /**
                     * 判断参数 PostStrategy 是否已赋值
                     * @return PostStrategy 是否已赋值
                     * 
                     */
                    bool PostStrategyHasBeenSet() const;

                    /**
                     * 获取<p>下发账号组</p>
                     * @return ReceiveGroup <p>下发账号组</p>
                     * 
                     */
                    std::vector<std::string> GetReceiveGroup() const;

                    /**
                     * 设置<p>下发账号组</p>
                     * @param _receiveGroup <p>下发账号组</p>
                     * 
                     */
                    void SetReceiveGroup(const std::vector<std::string>& _receiveGroup);

                    /**
                     * 判断参数 ReceiveGroup 是否已赋值
                     * @return ReceiveGroup 是否已赋值
                     * 
                     */
                    bool ReceiveGroupHasBeenSet() const;

                private:

                    /**
                     * <p>产品类型</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>下发账号</p>
                     */
                    std::vector<std::string> m_receiveAccount;
                    bool m_receiveAccountHasBeenSet;

                    /**
                     * <p>前区规则组</p>
                     */
                    std::vector<StrategyReq> m_preStrategy;
                    bool m_preStrategyHasBeenSet;

                    /**
                     * <p>后区规则组</p>
                     */
                    std::vector<StrategyReq> m_postStrategy;
                    bool m_postStrategyHasBeenSet;

                    /**
                     * <p>下发账号组</p>
                     */
                    std::vector<std::string> m_receiveGroup;
                    bool m_receiveGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_CREATESTRATEGYREQUEST_H_
