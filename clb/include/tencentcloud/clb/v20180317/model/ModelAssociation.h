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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODELASSOCIATION_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODELASSOCIATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ServiceProvider.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 模型关联信息
                */
                class ModelAssociation : public AbstractModel
                {
                public:
                    ModelAssociation();
                    ~ModelAssociation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>该模型最大可支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul>
                     * @return InputModalitiesUnion <p>该模型最大可支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul>
                     * 
                     */
                    std::vector<std::string> GetInputModalitiesUnion() const;

                    /**
                     * 设置<p>该模型最大可支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul>
                     * @param _inputModalitiesUnion <p>该模型最大可支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul>
                     * 
                     */
                    void SetInputModalitiesUnion(const std::vector<std::string>& _inputModalitiesUnion);

                    /**
                     * 判断参数 InputModalitiesUnion 是否已赋值
                     * @return InputModalitiesUnion 是否已赋值
                     * 
                     */
                    bool InputModalitiesUnionHasBeenSet() const;

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
                     * 获取<p>BYOK列表</p>
                     * @return ServiceProviders <p>BYOK列表</p>
                     * 
                     */
                    std::vector<ServiceProvider> GetServiceProviders() const;

                    /**
                     * 设置<p>BYOK列表</p>
                     * @param _serviceProviders <p>BYOK列表</p>
                     * 
                     */
                    void SetServiceProviders(const std::vector<ServiceProvider>& _serviceProviders);

                    /**
                     * 判断参数 ServiceProviders 是否已赋值
                     * @return ServiceProviders 是否已赋值
                     * 
                     */
                    bool ServiceProvidersHasBeenSet() const;

                    /**
                     * 获取<p>模型类型</p>
                     * @return Type <p>模型类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>模型类型</p>
                     * @param _type <p>模型类型</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>该模型最大可支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul>
                     */
                    std::vector<std::string> m_inputModalitiesUnion;
                    bool m_inputModalitiesUnionHasBeenSet;

                    /**
                     * <p>模型名称</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>BYOK列表</p>
                     */
                    std::vector<ServiceProvider> m_serviceProviders;
                    bool m_serviceProvidersHasBeenSet;

                    /**
                     * <p>模型类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODELASSOCIATION_H_
