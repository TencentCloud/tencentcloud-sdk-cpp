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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODELPROVIDERBASIC_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODELPROVIDERBASIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * <p>模型提供商基本信息（已弃用，请使用 ModelProviderProfile）</p>
                */
                class ModelProviderBasic : public AbstractModel
                {
                public:
                    ModelProviderBasic();
                    ~ModelProviderBasic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型提供商别名</p>
                     * @return Alias <p>模型提供商别名</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>模型提供商别名</p>
                     * @param _alias <p>模型提供商别名</p>
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取<p>模型提供商名称</p>
                     * @return Name <p>模型提供商名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>模型提供商名称</p>
                     * @param _name <p>模型提供商名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>模型提供商类型</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_PROVIDER_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_PROVIDER_TYPE_SELF</td><td>1</td><td>自有提供商</td></tr><tr><td>MODEL_PROVIDER_TYPE_CUSTOM</td><td>2</td><td>自定义模型提供商</td></tr><tr><td>MODEL_PROVIDER_TYPE_THIRD</td><td>3</td><td>第三方模型提供商</td></tr></table>
                     * @return ProviderType <p>模型提供商类型</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_PROVIDER_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_PROVIDER_TYPE_SELF</td><td>1</td><td>自有提供商</td></tr><tr><td>MODEL_PROVIDER_TYPE_CUSTOM</td><td>2</td><td>自定义模型提供商</td></tr><tr><td>MODEL_PROVIDER_TYPE_THIRD</td><td>3</td><td>第三方模型提供商</td></tr></table>
                     * 
                     */
                    int64_t GetProviderType() const;

                    /**
                     * 设置<p>模型提供商类型</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_PROVIDER_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_PROVIDER_TYPE_SELF</td><td>1</td><td>自有提供商</td></tr><tr><td>MODEL_PROVIDER_TYPE_CUSTOM</td><td>2</td><td>自定义模型提供商</td></tr><tr><td>MODEL_PROVIDER_TYPE_THIRD</td><td>3</td><td>第三方模型提供商</td></tr></table>
                     * @param _providerType <p>模型提供商类型</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_PROVIDER_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_PROVIDER_TYPE_SELF</td><td>1</td><td>自有提供商</td></tr><tr><td>MODEL_PROVIDER_TYPE_CUSTOM</td><td>2</td><td>自定义模型提供商</td></tr><tr><td>MODEL_PROVIDER_TYPE_THIRD</td><td>3</td><td>第三方模型提供商</td></tr></table>
                     * 
                     */
                    void SetProviderType(const int64_t& _providerType);

                    /**
                     * 判断参数 ProviderType 是否已赋值
                     * @return ProviderType 是否已赋值
                     * 
                     */
                    bool ProviderTypeHasBeenSet() const;

                private:

                    /**
                     * <p>模型提供商别名</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>模型提供商名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>模型提供商类型</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_PROVIDER_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_PROVIDER_TYPE_SELF</td><td>1</td><td>自有提供商</td></tr><tr><td>MODEL_PROVIDER_TYPE_CUSTOM</td><td>2</td><td>自定义模型提供商</td></tr><tr><td>MODEL_PROVIDER_TYPE_THIRD</td><td>3</td><td>第三方模型提供商</td></tr></table>
                     */
                    int64_t m_providerType;
                    bool m_providerTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELPROVIDERBASIC_H_
