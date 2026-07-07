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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_SERVICEPROVIDERITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_SERVICEPROVIDERITEM_H_

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
                * 服务商详情
                */
                class ServiceProviderItem : public AbstractModel
                {
                public:
                    ServiceProviderItem();
                    ~ServiceProviderItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>服务提供商 ID</p>
                     * @return ServiceProviderId <p>服务提供商 ID</p>
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置<p>服务提供商 ID</p>
                     * @param _serviceProviderId <p>服务提供商 ID</p>
                     * 
                     */
                    void SetServiceProviderId(const std::string& _serviceProviderId);

                    /**
                     * 判断参数 ServiceProviderId 是否已赋值
                     * @return ServiceProviderId 是否已赋值
                     * 
                     */
                    bool ServiceProviderIdHasBeenSet() const;

                    /**
                     * 获取<p>用户自定义服务提供商名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceProviderName <p>用户自定义服务提供商名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceProviderName() const;

                    /**
                     * 设置<p>用户自定义服务提供商名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceProviderName <p>用户自定义服务提供商名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceProviderName(const std::string& _serviceProviderName);

                    /**
                     * 判断参数 ServiceProviderName 是否已赋值
                     * @return ServiceProviderName 是否已赋值
                     * 
                     */
                    bool ServiceProviderNameHasBeenSet() const;

                    /**
                     * 获取<p>模型供应商</p>
                     * @return ModelProvider <p>模型供应商</p>
                     * 
                     */
                    std::string GetModelProvider() const;

                    /**
                     * 设置<p>模型供应商</p>
                     * @param _modelProvider <p>模型供应商</p>
                     * 
                     */
                    void SetModelProvider(const std::string& _modelProvider);

                    /**
                     * 判断参数 ModelProvider 是否已赋值
                     * @return ModelProvider 是否已赋值
                     * 
                     */
                    bool ModelProviderHasBeenSet() const;

                    /**
                     * 获取<p>该byok实例下该模型可支持的输入多模态能力列表。</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>file： 支持文件输入（当前仅支持pdf）</li><li>image： 支持图像输入</li></ul>
                     * @return InputModalities <p>该byok实例下该模型可支持的输入多模态能力列表。</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>file： 支持文件输入（当前仅支持pdf）</li><li>image： 支持图像输入</li></ul>
                     * 
                     */
                    std::vector<std::string> GetInputModalities() const;

                    /**
                     * 设置<p>该byok实例下该模型可支持的输入多模态能力列表。</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>file： 支持文件输入（当前仅支持pdf）</li><li>image： 支持图像输入</li></ul>
                     * @param _inputModalities <p>该byok实例下该模型可支持的输入多模态能力列表。</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>file： 支持文件输入（当前仅支持pdf）</li><li>image： 支持图像输入</li></ul>
                     * 
                     */
                    void SetInputModalities(const std::vector<std::string>& _inputModalities);

                    /**
                     * 判断参数 InputModalities 是否已赋值
                     * @return InputModalities 是否已赋值
                     * 
                     */
                    bool InputModalitiesHasBeenSet() const;

                private:

                    /**
                     * <p>服务提供商 ID</p>
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * <p>用户自定义服务提供商名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceProviderName;
                    bool m_serviceProviderNameHasBeenSet;

                    /**
                     * <p>模型供应商</p>
                     */
                    std::string m_modelProvider;
                    bool m_modelProviderHasBeenSet;

                    /**
                     * <p>该byok实例下该模型可支持的输入多模态能力列表。</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>file： 支持文件输入（当前仅支持pdf）</li><li>image： 支持图像输入</li></ul>
                     */
                    std::vector<std::string> m_inputModalities;
                    bool m_inputModalitiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SERVICEPROVIDERITEM_H_
