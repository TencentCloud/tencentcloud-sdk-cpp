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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_UPDATEAIMODELCHANNELREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_UPDATEAIMODELCHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * UpdateAIModelChannel请求参数结构体
                */
                class UpdateAIModelChannelRequest : public AbstractModel
                {
                public:
                    UpdateAIModelChannelRequest();
                    ~UpdateAIModelChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模型ID
                     * @return ModelId 模型ID
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型ID
                     * @param _modelId 模型ID
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
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
                     * 获取推送类型。ckafka：消息队列；forward：http/https推送
                     * @return Type 推送类型。ckafka：消息队列；forward：http/https推送
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置推送类型。ckafka：消息队列；forward：http/https推送
                     * @param _type 推送类型。ckafka：消息队列；forward：http/https推送
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
                     * 获取第三方推送地址
                     * @return ForwardAddress 第三方推送地址
                     * 
                     */
                    std::string GetForwardAddress() const;

                    /**
                     * 设置第三方推送地址
                     * @param _forwardAddress 第三方推送地址
                     * 
                     */
                    void SetForwardAddress(const std::string& _forwardAddress);

                    /**
                     * 判断参数 ForwardAddress 是否已赋值
                     * @return ForwardAddress 是否已赋值
                     * 
                     */
                    bool ForwardAddressHasBeenSet() const;

                    /**
                     * 获取第三方推送密钥，不填写则腾讯云自动生成。
                     * @return ForwardKey 第三方推送密钥，不填写则腾讯云自动生成。
                     * 
                     */
                    std::string GetForwardKey() const;

                    /**
                     * 设置第三方推送密钥，不填写则腾讯云自动生成。
                     * @param _forwardKey 第三方推送密钥，不填写则腾讯云自动生成。
                     * 
                     */
                    void SetForwardKey(const std::string& _forwardKey);

                    /**
                     * 判断参数 ForwardKey 是否已赋值
                     * @return ForwardKey 是否已赋值
                     * 
                     */
                    bool ForwardKeyHasBeenSet() const;

                    /**
                     * 获取ckafka地域
                     * @return CKafkaRegion ckafka地域
                     * 
                     */
                    std::string GetCKafkaRegion() const;

                    /**
                     * 设置ckafka地域
                     * @param _cKafkaRegion ckafka地域
                     * 
                     */
                    void SetCKafkaRegion(const std::string& _cKafkaRegion);

                    /**
                     * 判断参数 CKafkaRegion 是否已赋值
                     * @return CKafkaRegion 是否已赋值
                     * 
                     */
                    bool CKafkaRegionHasBeenSet() const;

                    /**
                     * 获取ckafka实例
                     * @return CKafkaInstance ckafka实例
                     * 
                     */
                    std::string GetCKafkaInstance() const;

                    /**
                     * 设置ckafka实例
                     * @param _cKafkaInstance ckafka实例
                     * 
                     */
                    void SetCKafkaInstance(const std::string& _cKafkaInstance);

                    /**
                     * 判断参数 CKafkaInstance 是否已赋值
                     * @return CKafkaInstance 是否已赋值
                     * 
                     */
                    bool CKafkaInstanceHasBeenSet() const;

                    /**
                     * 获取ckafka订阅主题
                     * @return CKafkaTopic ckafka订阅主题
                     * 
                     */
                    std::string GetCKafkaTopic() const;

                    /**
                     * 设置ckafka订阅主题
                     * @param _cKafkaTopic ckafka订阅主题
                     * 
                     */
                    void SetCKafkaTopic(const std::string& _cKafkaTopic);

                    /**
                     * 判断参数 CKafkaTopic 是否已赋值
                     * @return CKafkaTopic 是否已赋值
                     * 
                     */
                    bool CKafkaTopicHasBeenSet() const;

                private:

                    /**
                     * 模型ID
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 推送类型。ckafka：消息队列；forward：http/https推送
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 第三方推送地址
                     */
                    std::string m_forwardAddress;
                    bool m_forwardAddressHasBeenSet;

                    /**
                     * 第三方推送密钥，不填写则腾讯云自动生成。
                     */
                    std::string m_forwardKey;
                    bool m_forwardKeyHasBeenSet;

                    /**
                     * ckafka地域
                     */
                    std::string m_cKafkaRegion;
                    bool m_cKafkaRegionHasBeenSet;

                    /**
                     * ckafka实例
                     */
                    std::string m_cKafkaInstance;
                    bool m_cKafkaInstanceHasBeenSet;

                    /**
                     * ckafka订阅主题
                     */
                    std::string m_cKafkaTopic;
                    bool m_cKafkaTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_UPDATEAIMODELCHANNELREQUEST_H_
