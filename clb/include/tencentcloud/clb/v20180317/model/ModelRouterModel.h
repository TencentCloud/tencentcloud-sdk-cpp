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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERMODEL_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 模型路由关联的模型
                */
                class ModelRouterModel : public AbstractModel
                {
                public:
                    ModelRouterModel();
                    ~ModelRouterModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型名称</p>
                     * @return ModelName <p>模型名称</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称</p>
                     * @param _modelName <p>模型名称</p>
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>所属厂商</p>
                     * @return Provider <p>所属厂商</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>所属厂商</p>
                     * @param _provider <p>所属厂商</p>
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>模型类型。</p><p>枚举值：</p><ul><li>BYOK： BYOK类型</li><li>Platform： 平台类型</li></ul>
                     * @return Type <p>模型类型。</p><p>枚举值：</p><ul><li>BYOK： BYOK类型</li><li>Platform： 平台类型</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>模型类型。</p><p>枚举值：</p><ul><li>BYOK： BYOK类型</li><li>Platform： 平台类型</li></ul>
                     * @param _type <p>模型类型。</p><p>枚举值：</p><ul><li>BYOK： BYOK类型</li><li>Platform： 平台类型</li></ul>
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
                     * 获取<p>服务商/模型 ID（byok_model.model_id，形如 model-xxxxxxxx；Platform 类型不传）</p>
                     * @return ServiceProviderId <p>服务商/模型 ID（byok_model.model_id，形如 model-xxxxxxxx；Platform 类型不传）</p>
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置<p>服务商/模型 ID（byok_model.model_id，形如 model-xxxxxxxx；Platform 类型不传）</p>
                     * @param _serviceProviderId <p>服务商/模型 ID（byok_model.model_id，形如 model-xxxxxxxx；Platform 类型不传）</p>
                     * 
                     */
                    void SetServiceProviderId(const std::string& _serviceProviderId);

                    /**
                     * 判断参数 ServiceProviderId 是否已赋值
                     * @return ServiceProviderId 是否已赋值
                     * 
                     */
                    bool ServiceProviderIdHasBeenSet() const;

                private:

                    /**
                     * <p>模型名称</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>所属厂商</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>模型类型。</p><p>枚举值：</p><ul><li>BYOK： BYOK类型</li><li>Platform： 平台类型</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>服务商/模型 ID（byok_model.model_id，形如 model-xxxxxxxx；Platform 类型不传）</p>
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERMODEL_H_
