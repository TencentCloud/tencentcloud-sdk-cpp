/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_EMBEDURLOPTION_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_EMBEDURLOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 创建嵌入式页面url个性化参数
                */
                class EmbedUrlOption : public AbstractModel
                {
                public:
                    EmbedUrlOption();
                    ~EmbedUrlOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合同详情页面是否展示合同控件信息
<br/>true:允许在合同详情页展示控件
<br/>false:不允许在合同详情页展示控件
<br/>默认false,在合同详情页不展示控件
                     * @return ShowFlowDetailComponent 合同详情页面是否展示合同控件信息
<br/>true:允许在合同详情页展示控件
<br/>false:不允许在合同详情页展示控件
<br/>默认false,在合同详情页不展示控件
                     * 
                     */
                    bool GetShowFlowDetailComponent() const;

                    /**
                     * 设置合同详情页面是否展示合同控件信息
<br/>true:允许在合同详情页展示控件
<br/>false:不允许在合同详情页展示控件
<br/>默认false,在合同详情页不展示控件
                     * @param _showFlowDetailComponent 合同详情页面是否展示合同控件信息
<br/>true:允许在合同详情页展示控件
<br/>false:不允许在合同详情页展示控件
<br/>默认false,在合同详情页不展示控件
                     * 
                     */
                    void SetShowFlowDetailComponent(const bool& _showFlowDetailComponent);

                    /**
                     * 判断参数 ShowFlowDetailComponent 是否已赋值
                     * @return ShowFlowDetailComponent 是否已赋值
                     * 
                     */
                    bool ShowFlowDetailComponentHasBeenSet() const;

                    /**
                     * 获取模版预览页面是否展示空间信息
<br/>true:允许在模版预览页展示控件
<br/>false:不允许在模版预览页展示控件
<br/>默认false,在模版预览页不展示控件
                     * @return ShowTemplateComponent 模版预览页面是否展示空间信息
<br/>true:允许在模版预览页展示控件
<br/>false:不允许在模版预览页展示控件
<br/>默认false,在模版预览页不展示控件
                     * 
                     */
                    bool GetShowTemplateComponent() const;

                    /**
                     * 设置模版预览页面是否展示空间信息
<br/>true:允许在模版预览页展示控件
<br/>false:不允许在模版预览页展示控件
<br/>默认false,在模版预览页不展示控件
                     * @param _showTemplateComponent 模版预览页面是否展示空间信息
<br/>true:允许在模版预览页展示控件
<br/>false:不允许在模版预览页展示控件
<br/>默认false,在模版预览页不展示控件
                     * 
                     */
                    void SetShowTemplateComponent(const bool& _showTemplateComponent);

                    /**
                     * 判断参数 ShowTemplateComponent 是否已赋值
                     * @return ShowTemplateComponent 是否已赋值
                     * 
                     */
                    bool ShowTemplateComponentHasBeenSet() const;

                private:

                    /**
                     * 合同详情页面是否展示合同控件信息
<br/>true:允许在合同详情页展示控件
<br/>false:不允许在合同详情页展示控件
<br/>默认false,在合同详情页不展示控件
                     */
                    bool m_showFlowDetailComponent;
                    bool m_showFlowDetailComponentHasBeenSet;

                    /**
                     * 模版预览页面是否展示空间信息
<br/>true:允许在模版预览页展示控件
<br/>false:不允许在模版预览页展示控件
<br/>默认false,在模版预览页不展示控件
                     */
                    bool m_showTemplateComponent;
                    bool m_showTemplateComponentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_EMBEDURLOPTION_H_
