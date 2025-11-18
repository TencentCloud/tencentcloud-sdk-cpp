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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_REFERENCEEXCERPT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_REFERENCEEXCERPT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/PositionInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 引用的资料
                */
                class ReferenceExcerpt : public AbstractModel
                {
                public:
                    ReferenceExcerpt();
                    ~ReferenceExcerpt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取原文内容
                     * @return Content 原文内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置原文内容
                     * @param _content 原文内容
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
                     * 获取坐标信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Position 坐标信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PositionInfo GetPosition() const;

                    /**
                     * 设置坐标信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _position 坐标信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPosition(const PositionInfo& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                private:

                    /**
                     * 原文内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 坐标信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PositionInfo m_position;
                    bool m_positionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_REFERENCEEXCERPT_H_
