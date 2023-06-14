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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DELETEPRODUCTREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DELETEPRODUCTREQUEST_H_

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
                * DeleteProduct请求参数结构体
                */
                class DeleteProductRequest : public AbstractModel
                {
                public:
                    DeleteProductRequest();
                    ~DeleteProductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要删除的产品 ID
                     * @return ProductId 需要删除的产品 ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置需要删除的产品 ID
                     * @param _productId 需要删除的产品 ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取删除LoRa产品需要skey
                     * @return Skey 删除LoRa产品需要skey
                     * 
                     */
                    std::string GetSkey() const;

                    /**
                     * 设置删除LoRa产品需要skey
                     * @param _skey 删除LoRa产品需要skey
                     * 
                     */
                    void SetSkey(const std::string& _skey);

                    /**
                     * 判断参数 Skey 是否已赋值
                     * @return Skey 是否已赋值
                     * 
                     */
                    bool SkeyHasBeenSet() const;

                private:

                    /**
                     * 需要删除的产品 ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 删除LoRa产品需要skey
                     */
                    std::string m_skey;
                    bool m_skeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DELETEPRODUCTREQUEST_H_
