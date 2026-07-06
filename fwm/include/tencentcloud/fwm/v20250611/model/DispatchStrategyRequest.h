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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_DISPATCHSTRATEGYREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_DISPATCHSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * DispatchStrategy请求参数结构体
                */
                class DispatchStrategyRequest : public AbstractModel
                {
                public:
                    DispatchStrategyRequest();
                    ~DispatchStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取1:下发，2:中止
                     * @return Status 1:下发，2:中止
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置1:下发，2:中止
                     * @param _status 1:下发，2:中止
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取产品
                     * @return Product 产品
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置产品
                     * @param _product 产品
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
                     * 1:下发，2:中止
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 产品
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_DISPATCHSTRATEGYREQUEST_H_
