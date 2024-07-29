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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYCLOUDSTORAGEAISERVICECALLBACKREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYCLOUDSTORAGEAISERVICECALLBACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * ModifyCloudStorageAIServiceCallback请求参数结构体
                */
                class ModifyCloudStorageAIServiceCallbackRequest : public AbstractModel
                {
                public:
                    ModifyCloudStorageAIServiceCallbackRequest();
                    ~ModifyCloudStorageAIServiceCallbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品 ID
                     * @return ProductId 产品 ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品 ID
                     * @param _productId 产品 ID
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
                     * 获取推送类型。可选值：
- `http`：HTTP 回调
                     * @return Type 推送类型。可选值：
- `http`：HTTP 回调
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置推送类型。可选值：
- `http`：HTTP 回调
                     * @param _type 推送类型。可选值：
- `http`：HTTP 回调
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取HTTP 回调 URL
                     * @return CallbackUrl HTTP 回调 URL
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置HTTP 回调 URL
                     * @param _callbackUrl HTTP 回调 URL
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取HTTP 回调鉴权 Token
                     * @return CallbackToken HTTP 回调鉴权 Token
                     * 
                     */
                    std::string GetCallbackToken() const;

                    /**
                     * 设置HTTP 回调鉴权 Token
                     * @param _callbackToken HTTP 回调鉴权 Token
                     * 
                     */
                    void SetCallbackToken(const std::string& _callbackToken);

                    /**
                     * 判断参数 CallbackToken 是否已赋值
                     * @return CallbackToken 是否已赋值
                     * 
                     */
                    bool CallbackTokenHasBeenSet() const;

                private:

                    /**
                     * 产品 ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 推送类型。可选值：
- `http`：HTTP 回调
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * HTTP 回调 URL
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * HTTP 回调鉴权 Token
                     */
                    std::string m_callbackToken;
                    bool m_callbackTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYCLOUDSTORAGEAISERVICECALLBACKREQUEST_H_
