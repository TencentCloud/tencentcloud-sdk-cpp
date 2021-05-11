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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_DICTINFO_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_DICTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * 自定义词库信息
                */
                class DictInfo : public AbstractModel
                {
                public:
                    DictInfo();
                    ~DictInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义词库名称。
                     * @return Name 自定义词库名称。
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义词库名称。
                     * @param Name 自定义词库名称。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取自定义词库ID。
                     * @return Id 自定义词库ID。
                     */
                    std::string GetId() const;

                    /**
                     * 设置自定义词库ID。
                     * @param Id 自定义词库ID。
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取自定义词库描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 自定义词库描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置自定义词库描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 自定义词库描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取自定义词库修改时间，形式为:yyyy-mm-dd hh:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 自定义词库修改时间，形式为:yyyy-mm-dd hh:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置自定义词库修改时间，形式为:yyyy-mm-dd hh:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 自定义词库修改时间，形式为:yyyy-mm-dd hh:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取自定义词库创建时间，形式为:yyyy-mm-dd hh:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 自定义词库创建时间，形式为:yyyy-mm-dd hh:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置自定义词库创建时间，形式为:yyyy-mm-dd hh:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 自定义词库创建时间，形式为:yyyy-mm-dd hh:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 自定义词库名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义词库ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 自定义词库描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 自定义词库修改时间，形式为:yyyy-mm-dd hh:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 自定义词库创建时间，形式为:yyyy-mm-dd hh:mm:ss。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_DICTINFO_H_
