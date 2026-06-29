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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINOPERATION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINOPERATION_H_

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
                * PluginOperation
                */
                class PluginOperation : public AbstractModel
                {
                public:
                    PluginOperation();
                    ~PluginOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否允许外部调用
                     * @return AllowExternalAccess 是否允许外部调用
                     * 
                     */
                    bool GetAllowExternalAccess() const;

                    /**
                     * 设置是否允许外部调用
                     * @param _allowExternalAccess 是否允许外部调用
                     * 
                     */
                    void SetAllowExternalAccess(const bool& _allowExternalAccess);

                    /**
                     * 判断参数 AllowExternalAccess 是否已赋值
                     * @return AllowExternalAccess 是否已赋值
                     * 
                     */
                    bool AllowExternalAccessHasBeenSet() const;

                    /**
                     * 获取<p>计费类型。</p><p>枚举值：</p><ul><li>0：免费</li><li>1：公测</li><li>2：官方收费</li></ul>
                     * @return BillingType <p>计费类型。</p><p>枚举值：</p><ul><li>0：免费</li><li>1：公测</li><li>2：官方收费</li></ul>
                     * 
                     */
                    int64_t GetBillingType() const;

                    /**
                     * 设置<p>计费类型。</p><p>枚举值：</p><ul><li>0：免费</li><li>1：公测</li><li>2：官方收费</li></ul>
                     * @param _billingType <p>计费类型。</p><p>枚举值：</p><ul><li>0：免费</li><li>1：公测</li><li>2：官方收费</li></ul>
                     * 
                     */
                    void SetBillingType(const int64_t& _billingType);

                    /**
                     * 判断参数 BillingType 是否已赋值
                     * @return BillingType 是否已赋值
                     * 
                     */
                    bool BillingTypeHasBeenSet() const;

                    /**
                     * 获取插件分类标识
                     * @return CategoryKey 插件分类标识
                     * 
                     */
                    std::string GetCategoryKey() const;

                    /**
                     * 设置插件分类标识
                     * @param _categoryKey 插件分类标识
                     * 
                     */
                    void SetCategoryKey(const std::string& _categoryKey);

                    /**
                     * 判断参数 CategoryKey 是否已赋值
                     * @return CategoryKey 是否已赋值
                     * 
                     */
                    bool CategoryKeyHasBeenSet() const;

                    /**
                     * 获取插件概述
                     * @return Introduction 插件概述
                     * 
                     */
                    std::string GetIntroduction() const;

                    /**
                     * 设置插件概述
                     * @param _introduction 插件概述
                     * 
                     */
                    void SetIntroduction(const std::string& _introduction);

                    /**
                     * 判断参数 Introduction 是否已赋值
                     * @return Introduction 是否已赋值
                     * 
                     */
                    bool IntroductionHasBeenSet() const;

                    /**
                     * 获取是否精选
                     * @return IsRecommended 是否精选
                     * 
                     */
                    bool GetIsRecommended() const;

                    /**
                     * 设置是否精选
                     * @param _isRecommended 是否精选
                     * 
                     */
                    void SetIsRecommended(const bool& _isRecommended);

                    /**
                     * 判断参数 IsRecommended 是否已赋值
                     * @return IsRecommended 是否已赋值
                     * 
                     */
                    bool IsRecommendedHasBeenSet() const;

                private:

                    /**
                     * 是否允许外部调用
                     */
                    bool m_allowExternalAccess;
                    bool m_allowExternalAccessHasBeenSet;

                    /**
                     * <p>计费类型。</p><p>枚举值：</p><ul><li>0：免费</li><li>1：公测</li><li>2：官方收费</li></ul>
                     */
                    int64_t m_billingType;
                    bool m_billingTypeHasBeenSet;

                    /**
                     * 插件分类标识
                     */
                    std::string m_categoryKey;
                    bool m_categoryKeyHasBeenSet;

                    /**
                     * 插件概述
                     */
                    std::string m_introduction;
                    bool m_introductionHasBeenSet;

                    /**
                     * 是否精选
                     */
                    bool m_isRecommended;
                    bool m_isRecommendedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINOPERATION_H_
