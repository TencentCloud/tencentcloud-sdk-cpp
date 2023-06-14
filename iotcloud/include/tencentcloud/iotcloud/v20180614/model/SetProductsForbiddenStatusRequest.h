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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_SETPRODUCTSFORBIDDENSTATUSREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_SETPRODUCTSFORBIDDENSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * SetProductsForbiddenStatus请求参数结构体
                */
                class SetProductsForbiddenStatusRequest : public AbstractModel
                {
                public:
                    SetProductsForbiddenStatusRequest();
                    ~SetProductsForbiddenStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要设置禁用状态的产品列表
                     * @return ProductID 要设置禁用状态的产品列表
                     * 
                     */
                    std::vector<std::string> GetProductID() const;

                    /**
                     * 设置要设置禁用状态的产品列表
                     * @param _productID 要设置禁用状态的产品列表
                     * 
                     */
                    void SetProductID(const std::vector<std::string>& _productID);

                    /**
                     * 判断参数 ProductID 是否已赋值
                     * @return ProductID 是否已赋值
                     * 
                     */
                    bool ProductIDHasBeenSet() const;

                    /**
                     * 获取0启用，1禁用
                     * @return Status 0启用，1禁用
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0启用，1禁用
                     * @param _status 0启用，1禁用
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 要设置禁用状态的产品列表
                     */
                    std::vector<std::string> m_productID;
                    bool m_productIDHasBeenSet;

                    /**
                     * 0启用，1禁用
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_SETPRODUCTSFORBIDDENSTATUSREQUEST_H_
