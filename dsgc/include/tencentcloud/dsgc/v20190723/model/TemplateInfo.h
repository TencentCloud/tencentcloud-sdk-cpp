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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_TEMPLATEINFO_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_TEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 评估模版的详情数据
                */
                class TemplateInfo : public AbstractModel
                {
                public:
                    TemplateInfo();
                    ~TemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模版id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId 模版id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置模版id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateId 模版id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateName 模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateName 模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                private:

                    /**
                     * 模版id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_TEMPLATEINFO_H_
