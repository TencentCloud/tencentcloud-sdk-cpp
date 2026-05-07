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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MANAGEDAIMODELCHARGINGINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MANAGEDAIMODELCHARGINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 托管 AI 模型计费信息
                */
                class ManagedAIModelChargingInfo : public AbstractModel
                {
                public:
                    ManagedAIModelChargingInfo();
                    ~ManagedAIModelChargingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>计费类型</p><p>枚举值：</p><ul><li>Uniform： 固定计费</li><li>Tiered： 分段计费</li></ul>
                     * @return Type <p>计费类型</p><p>枚举值：</p><ul><li>Uniform： 固定计费</li><li>Tiered： 分段计费</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>计费类型</p><p>枚举值：</p><ul><li>Uniform： 固定计费</li><li>Tiered： 分段计费</li></ul>
                     * @param _type <p>计费类型</p><p>枚举值：</p><ul><li>Uniform： 固定计费</li><li>Tiered： 分段计费</li></ul>
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
                     * 获取<p>分组名称</p>
                     * @return Name <p>分组名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>分组名称</p>
                     * @param _name <p>分组名称</p>
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
                     * 获取<p>输入 Token 价格</p>
                     * @return InputPrice <p>输入 Token 价格</p>
                     * 
                     */
                    std::string GetInputPrice() const;

                    /**
                     * 设置<p>输入 Token 价格</p>
                     * @param _inputPrice <p>输入 Token 价格</p>
                     * 
                     */
                    void SetInputPrice(const std::string& _inputPrice);

                    /**
                     * 判断参数 InputPrice 是否已赋值
                     * @return InputPrice 是否已赋值
                     * 
                     */
                    bool InputPriceHasBeenSet() const;

                    /**
                     * 获取<p>输出 Token 价格</p>
                     * @return OutputPrice <p>输出 Token 价格</p>
                     * 
                     */
                    std::string GetOutputPrice() const;

                    /**
                     * 设置<p>输出 Token 价格</p>
                     * @param _outputPrice <p>输出 Token 价格</p>
                     * 
                     */
                    void SetOutputPrice(const std::string& _outputPrice);

                    /**
                     * 判断参数 OutputPrice 是否已赋值
                     * @return OutputPrice 是否已赋值
                     * 
                     */
                    bool OutputPriceHasBeenSet() const;

                    /**
                     * 获取<p>命中缓存价格</p>
                     * @return CachePrice <p>命中缓存价格</p>
                     * 
                     */
                    std::string GetCachePrice() const;

                    /**
                     * 设置<p>命中缓存价格</p>
                     * @param _cachePrice <p>命中缓存价格</p>
                     * 
                     */
                    void SetCachePrice(const std::string& _cachePrice);

                    /**
                     * 判断参数 CachePrice 是否已赋值
                     * @return CachePrice 是否已赋值
                     * 
                     */
                    bool CachePriceHasBeenSet() const;

                    /**
                     * 获取<p>计费单位</p>
                     * @return InputOutputUnit <p>计费单位</p>
                     * 
                     */
                    std::string GetInputOutputUnit() const;

                    /**
                     * 设置<p>计费单位</p>
                     * @param _inputOutputUnit <p>计费单位</p>
                     * 
                     */
                    void SetInputOutputUnit(const std::string& _inputOutputUnit);

                    /**
                     * 判断参数 InputOutputUnit 是否已赋值
                     * @return InputOutputUnit 是否已赋值
                     * 
                     */
                    bool InputOutputUnitHasBeenSet() const;

                private:

                    /**
                     * <p>计费类型</p><p>枚举值：</p><ul><li>Uniform： 固定计费</li><li>Tiered： 分段计费</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>分组名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>输入 Token 价格</p>
                     */
                    std::string m_inputPrice;
                    bool m_inputPriceHasBeenSet;

                    /**
                     * <p>输出 Token 价格</p>
                     */
                    std::string m_outputPrice;
                    bool m_outputPriceHasBeenSet;

                    /**
                     * <p>命中缓存价格</p>
                     */
                    std::string m_cachePrice;
                    bool m_cachePriceHasBeenSet;

                    /**
                     * <p>计费单位</p>
                     */
                    std::string m_inputOutputUnit;
                    bool m_inputOutputUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MANAGEDAIMODELCHARGINGINFO_H_
