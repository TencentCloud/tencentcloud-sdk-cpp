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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_COMPONENTVERSIONINFO_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_COMPONENTVERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * 描述组件版本的详情，包含组件发布时间、Copyright列表、组件描述Tag。
                */
                class ComponentVersionInfo : public AbstractModel
                {
                public:
                    ComponentVersionInfo();
                    ~ComponentVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublishTime 版本发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置版本发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publishTime 版本发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取当前版本的所有copyright
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CopyrightList 当前版本的所有copyright
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCopyrightList() const;

                    /**
                     * 设置当前版本的所有copyright
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _copyrightList 当前版本的所有copyright
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCopyrightList(const std::vector<std::string>& _copyrightList);

                    /**
                     * 判断参数 CopyrightList 是否已赋值
                     * @return CopyrightList 是否已赋值
                     * 
                     */
                    bool CopyrightListHasBeenSet() const;

                    /**
                     * 获取版本标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagList 版本标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTagList() const;

                    /**
                     * 设置版本标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagList 版本标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagList(const std::vector<std::string>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * 版本发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * 当前版本的所有copyright
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_copyrightList;
                    bool m_copyrightListHasBeenSet;

                    /**
                     * 版本标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_COMPONENTVERSIONINFO_H_
