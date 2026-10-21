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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEECALLBACKREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEECALLBACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeCallbackCKafkaConfig.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * CreateTWeSeeCallback请求参数结构体
                */
                class CreateTWeSeeCallbackRequest : public AbstractModel
                {
                public:
                    CreateTWeSeeCallbackRequest();
                    ~CreateTWeSeeCallbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>回调类型</p><p>枚举值：</p><ul><li>none： 不回调</li><li>http： HTTP 回调</li><li>ckafka： 投递 CKafka Topic</li></ul>
                     * @return Type <p>回调类型</p><p>枚举值：</p><ul><li>none： 不回调</li><li>http： HTTP 回调</li><li>ckafka： 投递 CKafka Topic</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>回调类型</p><p>枚举值：</p><ul><li>none： 不回调</li><li>http： HTTP 回调</li><li>ckafka： 投递 CKafka Topic</li></ul>
                     * @param _type <p>回调类型</p><p>枚举值：</p><ul><li>none： 不回调</li><li>http： HTTP 回调</li><li>ckafka： 投递 CKafka Topic</li></ul>
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
                     * 获取<p>回调 URL。要求 http 或 https 协议，仅支持 80 或 443 端口</p>
                     * @return CallbackUrl <p>回调 URL。要求 http 或 https 协议，仅支持 80 或 443 端口</p>
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>回调 URL。要求 http 或 https 协议，仅支持 80 或 443 端口</p>
                     * @param _callbackUrl <p>回调 URL。要求 http 或 https 协议，仅支持 80 或 443 端口</p>
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
                     * 获取<p>回调签名 Token。最大长度 128</p>
                     * @return CallbackToken <p>回调签名 Token。最大长度 128</p>
                     * 
                     */
                    std::string GetCallbackToken() const;

                    /**
                     * 设置<p>回调签名 Token。最大长度 128</p>
                     * @param _callbackToken <p>回调签名 Token。最大长度 128</p>
                     * 
                     */
                    void SetCallbackToken(const std::string& _callbackToken);

                    /**
                     * 判断参数 CallbackToken 是否已赋值
                     * @return CallbackToken 是否已赋值
                     * 
                     */
                    bool CallbackTokenHasBeenSet() const;

                    /**
                     * 获取<p>回调 CKafka 配置</p>
                     * @return CallbackCKafka <p>回调 CKafka 配置</p>
                     * 
                     */
                    SeeCallbackCKafkaConfig GetCallbackCKafka() const;

                    /**
                     * 设置<p>回调 CKafka 配置</p>
                     * @param _callbackCKafka <p>回调 CKafka 配置</p>
                     * 
                     */
                    void SetCallbackCKafka(const SeeCallbackCKafkaConfig& _callbackCKafka);

                    /**
                     * 判断参数 CallbackCKafka 是否已赋值
                     * @return CallbackCKafka 是否已赋值
                     * 
                     */
                    bool CallbackCKafkaHasBeenSet() const;

                    /**
                     * 获取<p>要创建回调目标的产品 ID</p>
                     * @return ProductId <p>要创建回调目标的产品 ID</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>要创建回调目标的产品 ID</p>
                     * @param _productId <p>要创建回调目标的产品 ID</p>
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                private:

                    /**
                     * <p>回调类型</p><p>枚举值：</p><ul><li>none： 不回调</li><li>http： HTTP 回调</li><li>ckafka： 投递 CKafka Topic</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>回调 URL。要求 http 或 https 协议，仅支持 80 或 443 端口</p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>回调签名 Token。最大长度 128</p>
                     */
                    std::string m_callbackToken;
                    bool m_callbackTokenHasBeenSet;

                    /**
                     * <p>回调 CKafka 配置</p>
                     */
                    SeeCallbackCKafkaConfig m_callbackCKafka;
                    bool m_callbackCKafkaHasBeenSet;

                    /**
                     * <p>要创建回调目标的产品 ID</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEECALLBACKREQUEST_H_
