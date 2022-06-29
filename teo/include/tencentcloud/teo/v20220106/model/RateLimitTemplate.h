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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITTEMPLATE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/RateLimitTemplateDetail.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 速率限制模板
                */
                class RateLimitTemplate : public AbstractModel
                {
                public:
                    RateLimitTemplate();
                    ~RateLimitTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mode 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMode() const;

                    /**
                     * 设置模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Mode 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取模板值详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Detail 模板值详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RateLimitTemplateDetail GetDetail() const;

                    /**
                     * 设置模板值详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Detail 模板值详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDetail(const RateLimitTemplateDetail& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 模板值详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RateLimitTemplateDetail m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITTEMPLATE_H_
