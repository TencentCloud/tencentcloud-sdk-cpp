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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_MODELLIST_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_MODELLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dataagent/v20250513/model/Thinking.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * 模型详情
                */
                class ModelList : public AbstractModel
                {
                public:
                    ModelList();
                    ~ModelList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型版本名称</p>
                     * @return Model <p>模型版本名称</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型版本名称</p>
                     * @param _model <p>模型版本名称</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>模型厂商</p>
                     * @return Vendor <p>模型厂商</p>
                     * 
                     */
                    std::string GetVendor() const;

                    /**
                     * 设置<p>模型厂商</p>
                     * @param _vendor <p>模型厂商</p>
                     * 
                     */
                    void SetVendor(const std::string& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                    /**
                     * 获取<p>展示名称</p>
                     * @return DisplayName <p>展示名称</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>展示名称</p>
                     * @param _displayName <p>展示名称</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>模型描述</p>
                     * @return Description <p>模型描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>模型描述</p>
                     * @param _description <p>模型描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>上下文窗口大小，单位 token</p>
                     * @return ContextWindow <p>上下文窗口大小，单位 token</p>
                     * 
                     */
                    int64_t GetContextWindow() const;

                    /**
                     * 设置<p>上下文窗口大小，单位 token</p>
                     * @param _contextWindow <p>上下文窗口大小，单位 token</p>
                     * 
                     */
                    void SetContextWindow(const int64_t& _contextWindow);

                    /**
                     * 判断参数 ContextWindow 是否已赋值
                     * @return ContextWindow 是否已赋值
                     * 
                     */
                    bool ContextWindowHasBeenSet() const;

                    /**
                     * 获取<p>模型图标 URL</p>
                     * @return IconUrl <p>模型图标 URL</p>
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置<p>模型图标 URL</p>
                     * @param _iconUrl <p>模型图标 URL</p>
                     * 
                     */
                    void SetIconUrl(const std::string& _iconUrl);

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

                    /**
                     * 获取<p>计费倍率</p>
                     * @return CreditMultiplier <p>计费倍率</p>
                     * 
                     */
                    double GetCreditMultiplier() const;

                    /**
                     * 设置<p>计费倍率</p>
                     * @param _creditMultiplier <p>计费倍率</p>
                     * 
                     */
                    void SetCreditMultiplier(const double& _creditMultiplier);

                    /**
                     * 判断参数 CreditMultiplier 是否已赋值
                     * @return CreditMultiplier 是否已赋值
                     * 
                     */
                    bool CreditMultiplierHasBeenSet() const;

                    /**
                     * 获取<p>思考配置</p>
                     * @return Thinking <p>思考配置</p>
                     * 
                     */
                    Thinking GetThinking() const;

                    /**
                     * 设置<p>思考配置</p>
                     * @param _thinking <p>思考配置</p>
                     * 
                     */
                    void SetThinking(const Thinking& _thinking);

                    /**
                     * 判断参数 Thinking 是否已赋值
                     * @return Thinking 是否已赋值
                     * 
                     */
                    bool ThinkingHasBeenSet() const;

                private:

                    /**
                     * <p>模型版本名称</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>模型厂商</p>
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * <p>展示名称</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>模型描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>上下文窗口大小，单位 token</p>
                     */
                    int64_t m_contextWindow;
                    bool m_contextWindowHasBeenSet;

                    /**
                     * <p>模型图标 URL</p>
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * <p>计费倍率</p>
                     */
                    double m_creditMultiplier;
                    bool m_creditMultiplierHasBeenSet;

                    /**
                     * <p>思考配置</p>
                     */
                    Thinking m_thinking;
                    bool m_thinkingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_MODELLIST_H_
