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
                * 模型提供商基本信息
                */
                class ModelProviderBasic : public AbstractModel
                {
                public:
                    ModelProviderBasic();
                    ~ModelProviderBasic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型提供商别名
                     * @return Alias 模型提供商别名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置模型提供商别名
                     * @param _alias 模型提供商别名
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
                     * 获取模型提供商名称
                     * @return Name 模型提供商名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模型提供商名称
                     * @param _name 模型提供商名称
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
                     * 获取模型提供商类型。1-自有提供商, 2-自定义模型提供商, 3-第三方模型提供商
                     * @return ProviderType 模型提供商类型。1-自有提供商, 2-自定义模型提供商, 3-第三方模型提供商
                     * 
                     */
                    int64_t GetProviderType() const;

                    /**
                     * 设置模型提供商类型。1-自有提供商, 2-自定义模型提供商, 3-第三方模型提供商
                     * @param _providerType 模型提供商类型。1-自有提供商, 2-自定义模型提供商, 3-第三方模型提供商
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
                     * 模型提供商别名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 模型提供商名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模型提供商类型。1-自有提供商, 2-自定义模型提供商, 3-第三方模型提供商
                     */
                    int64_t m_providerType;
                    bool m_providerTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELPROVIDERBASIC_H_
