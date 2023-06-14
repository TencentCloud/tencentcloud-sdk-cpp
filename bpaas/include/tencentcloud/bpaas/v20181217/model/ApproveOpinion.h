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

#ifndef TENCENTCLOUD_BPAAS_V20181217_MODEL_APPROVEOPINION_H_
#define TENCENTCLOUD_BPAAS_V20181217_MODEL_APPROVEOPINION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bpaas
    {
        namespace V20181217
        {
            namespace Model
            {
                /**
                * 审批意见
                */
                class ApproveOpinion : public AbstractModel
                {
                public:
                    ApproveOpinion();
                    ~ApproveOpinion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取方式 1:输入文字反馈  2:预设选项
                     * @return Type 方式 1:输入文字反馈  2:预设选项
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置方式 1:输入文字反馈  2:预设选项
                     * @param _type 方式 1:输入文字反馈  2:预设选项
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取审批意见
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 审批意见
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetContent() const;

                    /**
                     * 设置审批意见
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 审批意见
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::vector<std::string>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 方式 1:输入文字反馈  2:预设选项
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 审批意见
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BPAAS_V20181217_MODEL_APPROVEOPINION_H_
