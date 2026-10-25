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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_FUNNELSTEPINPUT_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_FUNNELSTEPINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * TDEM漏斗步骤
                */
                class FunnelStepInput : public AbstractModel
                {
                public:
                    FunnelStepInput();
                    ~FunnelStepInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>应用id</p>
                     * @return StepName <p>应用id</p>
                     * 
                     */
                    std::string GetStepName() const;

                    /**
                     * 设置<p>应用id</p>
                     * @param _stepName <p>应用id</p>
                     * 
                     */
                    void SetStepName(const std::string& _stepName);

                    /**
                     * 判断参数 StepName 是否已赋值
                     * @return StepName 是否已赋值
                     * 
                     */
                    bool StepNameHasBeenSet() const;

                    /**
                     * 获取<p>页面特征</p>
                     * @return PagePattern <p>页面特征</p>
                     * 
                     */
                    std::string GetPagePattern() const;

                    /**
                     * 设置<p>页面特征</p>
                     * @param _pagePattern <p>页面特征</p>
                     * 
                     */
                    void SetPagePattern(const std::string& _pagePattern);

                    /**
                     * 判断参数 PagePattern 是否已赋值
                     * @return PagePattern 是否已赋值
                     * 
                     */
                    bool PagePatternHasBeenSet() const;

                    /**
                     * 获取<p>页面匹配模式</p>
                     * @return PageMatchMode <p>页面匹配模式</p>
                     * 
                     */
                    std::string GetPageMatchMode() const;

                    /**
                     * 设置<p>页面匹配模式</p>
                     * @param _pageMatchMode <p>页面匹配模式</p>
                     * 
                     */
                    void SetPageMatchMode(const std::string& _pageMatchMode);

                    /**
                     * 判断参数 PageMatchMode 是否已赋值
                     * @return PageMatchMode 是否已赋值
                     * 
                     */
                    bool PageMatchModeHasBeenSet() const;

                    /**
                     * 获取<p>控件Selector</p>
                     * @return Selector <p>控件Selector</p>
                     * 
                     */
                    std::string GetSelector() const;

                    /**
                     * 设置<p>控件Selector</p>
                     * @param _selector <p>控件Selector</p>
                     * 
                     */
                    void SetSelector(const std::string& _selector);

                    /**
                     * 判断参数 Selector 是否已赋值
                     * @return Selector 是否已赋值
                     * 
                     */
                    bool SelectorHasBeenSet() const;

                    /**
                     * 获取<p>事件类型</p>
                     * @return ActionType <p>事件类型</p>
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置<p>事件类型</p>
                     * @param _actionType <p>事件类型</p>
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取<p>可视化名称，如控件文本、自定义事件名</p>
                     * @return VisualName <p>可视化名称，如控件文本、自定义事件名</p>
                     * 
                     */
                    std::string GetVisualName() const;

                    /**
                     * 设置<p>可视化名称，如控件文本、自定义事件名</p>
                     * @param _visualName <p>可视化名称，如控件文本、自定义事件名</p>
                     * 
                     */
                    void SetVisualName(const std::string& _visualName);

                    /**
                     * 判断参数 VisualName 是否已赋值
                     * @return VisualName 是否已赋值
                     * 
                     */
                    bool VisualNameHasBeenSet() const;

                private:

                    /**
                     * <p>应用id</p>
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * <p>页面特征</p>
                     */
                    std::string m_pagePattern;
                    bool m_pagePatternHasBeenSet;

                    /**
                     * <p>页面匹配模式</p>
                     */
                    std::string m_pageMatchMode;
                    bool m_pageMatchModeHasBeenSet;

                    /**
                     * <p>控件Selector</p>
                     */
                    std::string m_selector;
                    bool m_selectorHasBeenSet;

                    /**
                     * <p>事件类型</p>
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>可视化名称，如控件文本、自定义事件名</p>
                     */
                    std::string m_visualName;
                    bool m_visualNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_FUNNELSTEPINPUT_H_
