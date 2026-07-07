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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYSERVICEPROVIDERMODELATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYSERVICEPROVIDERMODELATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyServiceProviderModelAttributes请求参数结构体
                */
                class ModifyServiceProviderModelAttributesRequest : public AbstractModel
                {
                public:
                    ModifyServiceProviderModelAttributesRequest();
                    ~ModifyServiceProviderModelAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>BYOK 实例 ID</p>
                     * @return ServiceProviderId <p>BYOK 实例 ID</p>
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置<p>BYOK 实例 ID</p>
                     * @param _serviceProviderId <p>BYOK 实例 ID</p>
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
                     * 获取<p>待修改的模型的名称（原始模型名称）</p>
                     * @return ModelName <p>待修改的模型的名称（原始模型名称）</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>待修改的模型的名称（原始模型名称）</p>
                     * @param _modelName <p>待修改的模型的名称（原始模型名称）</p>
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
                     * 获取<p>该模型支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul>
                     * @return InputModalities <p>该模型支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul>
                     * 
                     */
                    std::vector<std::string> GetInputModalities() const;

                    /**
                     * 设置<p>该模型支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul>
                     * @param _inputModalities <p>该模型支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul>
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
                     * <p>BYOK 实例 ID</p>
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * <p>待修改的模型的名称（原始模型名称）</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>该模型支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul>
                     */
                    std::vector<std::string> m_inputModalities;
                    bool m_inputModalitiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYSERVICEPROVIDERMODELATTRIBUTESREQUEST_H_
