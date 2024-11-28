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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_WIDGETLISTVO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_WIDGETLISTVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/WidgetVO.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 页面组件信息
                */
                class WidgetListVO : public AbstractModel
                {
                public:
                    WidgetListVO();
                    ~WidgetListVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CorpId uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCorpId() const;

                    /**
                     * 设置uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _corpId uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCorpId(const std::string& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取页面id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageId 页面id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPageId() const;

                    /**
                     * 设置页面id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageId 页面id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageId(const std::string& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取组件数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WidgetList 组件数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WidgetVO> GetWidgetList() const;

                    /**
                     * 设置组件数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _widgetList 组件数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWidgetList(const std::vector<WidgetVO>& _widgetList);

                    /**
                     * 判断参数 WidgetList 是否已赋值
                     * @return WidgetList 是否已赋值
                     * 
                     */
                    bool WidgetListHasBeenSet() const;

                private:

                    /**
                     * uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 页面id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * 组件数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WidgetVO> m_widgetList;
                    bool m_widgetListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_WIDGETLISTVO_H_
