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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_BEAUTYCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_BEAUTYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/BeautyEffectItemConfig.h>
#include <tencentcloud/mps/v20190612/model/BeautyFilterItemConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 美颜配置
                */
                class BeautyConfig : public AbstractModel
                {
                public:
                    BeautyConfig();
                    ~BeautyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>美颜效果</p>
                     * @return BeautyEffectItems <p>美颜效果</p>
                     * 
                     */
                    std::vector<BeautyEffectItemConfig> GetBeautyEffectItems() const;

                    /**
                     * 设置<p>美颜效果</p>
                     * @param _beautyEffectItems <p>美颜效果</p>
                     * 
                     */
                    void SetBeautyEffectItems(const std::vector<BeautyEffectItemConfig>& _beautyEffectItems);

                    /**
                     * 判断参数 BeautyEffectItems 是否已赋值
                     * @return BeautyEffectItems 是否已赋值
                     * 
                     */
                    bool BeautyEffectItemsHasBeenSet() const;

                    /**
                     * 获取<p>美颜滤镜</p>
                     * @return BeautyFilterItems <p>美颜滤镜</p>
                     * 
                     */
                    std::vector<BeautyFilterItemConfig> GetBeautyFilterItems() const;

                    /**
                     * 设置<p>美颜滤镜</p>
                     * @param _beautyFilterItems <p>美颜滤镜</p>
                     * 
                     */
                    void SetBeautyFilterItems(const std::vector<BeautyFilterItemConfig>& _beautyFilterItems);

                    /**
                     * 判断参数 BeautyFilterItems 是否已赋值
                     * @return BeautyFilterItems 是否已赋值
                     * 
                     */
                    bool BeautyFilterItemsHasBeenSet() const;

                    /**
                     * 获取<p>美颜类型</p><p>枚举值：</p><ul><li>auto： 智能自动美颜</li></ul><p>传入美颜参数时，忽略该参数。</p>
                     * @return Type <p>美颜类型</p><p>枚举值：</p><ul><li>auto： 智能自动美颜</li></ul><p>传入美颜参数时，忽略该参数。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>美颜类型</p><p>枚举值：</p><ul><li>auto： 智能自动美颜</li></ul><p>传入美颜参数时，忽略该参数。</p>
                     * @param _type <p>美颜类型</p><p>枚举值：</p><ul><li>auto： 智能自动美颜</li></ul><p>传入美颜参数时，忽略该参数。</p>
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
                     * <p>美颜效果</p>
                     */
                    std::vector<BeautyEffectItemConfig> m_beautyEffectItems;
                    bool m_beautyEffectItemsHasBeenSet;

                    /**
                     * <p>美颜滤镜</p>
                     */
                    std::vector<BeautyFilterItemConfig> m_beautyFilterItems;
                    bool m_beautyFilterItemsHasBeenSet;

                    /**
                     * <p>美颜类型</p><p>枚举值：</p><ul><li>auto： 智能自动美颜</li></ul><p>传入美颜参数时，忽略该参数。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_BEAUTYCONFIG_H_
