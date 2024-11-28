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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_PAGESCREENVO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_PAGESCREENVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 页面截图信息
                */
                class PageScreenVO : public AbstractModel
                {
                public:
                    PageScreenVO();
                    ~PageScreenVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取截图base64或 url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 截图base64或 url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置截图base64或 url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 截图base64或 url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取组件Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WidgetId 组件Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWidgetId() const;

                    /**
                     * 设置组件Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _widgetId 组件Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWidgetId(const std::string& _widgetId);

                    /**
                     * 判断参数 WidgetId 是否已赋值
                     * @return WidgetId 是否已赋值
                     * 
                     */
                    bool WidgetIdHasBeenSet() const;

                private:

                    /**
                     * 截图base64或 url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 组件Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_widgetId;
                    bool m_widgetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_PAGESCREENVO_H_
