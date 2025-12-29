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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CLARIFICATIONWIDGETCONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CLARIFICATIONWIDGETCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 澄清widget配置
                */
                class ClarificationWidgetConfig : public AbstractModel
                {
                public:
                    ClarificationWidgetConfig();
                    ~ClarificationWidgetConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取widget id
                     * @return WidgetId widget id
                     * 
                     */
                    std::string GetWidgetId() const;

                    /**
                     * 设置widget id
                     * @param _widgetId widget id
                     * 
                     */
                    void SetWidgetId(const std::string& _widgetId);

                    /**
                     * 判断参数 WidgetId 是否已赋值
                     * @return WidgetId 是否已赋值
                     * 
                     */
                    bool WidgetIdHasBeenSet() const;

                    /**
                     * 获取澄清widget类型
                     * @return ClarificationWidgetType 澄清widget类型
                     * 
                     */
                    int64_t GetClarificationWidgetType() const;

                    /**
                     * 设置澄清widget类型
                     * @param _clarificationWidgetType 澄清widget类型
                     * 
                     */
                    void SetClarificationWidgetType(const int64_t& _clarificationWidgetType);

                    /**
                     * 判断参数 ClarificationWidgetType 是否已赋值
                     * @return ClarificationWidgetType 是否已赋值
                     * 
                     */
                    bool ClarificationWidgetTypeHasBeenSet() const;

                    /**
                     * 获取Widget名称
                     * @return WidgetName Widget名称
                     * 
                     */
                    std::string GetWidgetName() const;

                    /**
                     * 设置Widget名称
                     * @param _widgetName Widget名称
                     * 
                     */
                    void SetWidgetName(const std::string& _widgetName);

                    /**
                     * 判断参数 WidgetName 是否已赋值
                     * @return WidgetName 是否已赋值
                     * 
                     */
                    bool WidgetNameHasBeenSet() const;

                    /**
                     * 获取Widget预览
                     * @return WidgetPreview Widget预览
                     * 
                     */
                    std::string GetWidgetPreview() const;

                    /**
                     * 设置Widget预览
                     * @param _widgetPreview Widget预览
                     * 
                     */
                    void SetWidgetPreview(const std::string& _widgetPreview);

                    /**
                     * 判断参数 WidgetPreview 是否已赋值
                     * @return WidgetPreview 是否已赋值
                     * 
                     */
                    bool WidgetPreviewHasBeenSet() const;

                    /**
                     * 获取是否启用该Widget作为澄清样式
                     * @return Enabled 是否启用该Widget作为澄清样式
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用该Widget作为澄清样式
                     * @param _enabled 是否启用该Widget作为澄清样式
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * widget id
                     */
                    std::string m_widgetId;
                    bool m_widgetIdHasBeenSet;

                    /**
                     * 澄清widget类型
                     */
                    int64_t m_clarificationWidgetType;
                    bool m_clarificationWidgetTypeHasBeenSet;

                    /**
                     * Widget名称
                     */
                    std::string m_widgetName;
                    bool m_widgetNameHasBeenSet;

                    /**
                     * Widget预览
                     */
                    std::string m_widgetPreview;
                    bool m_widgetPreviewHasBeenSet;

                    /**
                     * 是否启用该Widget作为澄清样式
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CLARIFICATIONWIDGETCONFIG_H_
