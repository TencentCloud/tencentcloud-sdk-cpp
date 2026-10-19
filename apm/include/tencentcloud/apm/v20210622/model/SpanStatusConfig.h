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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_SPANSTATUSCONFIG_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_SPANSTATUSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ErrorSpanConf.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * https://iwiki.woa.com/p/4035597532
自定义 Span 状态
                */
                class SpanStatusConfig : public AbstractModel
                {
                public:
                    SpanStatusConfig();
                    ~SpanStatusConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标记为错误规则组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MarkAsError <p>标记为错误规则组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ErrorSpanConf GetMarkAsError() const;

                    /**
                     * 设置<p>标记为错误规则组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _markAsError <p>标记为错误规则组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMarkAsError(const ErrorSpanConf& _markAsError);

                    /**
                     * 判断参数 MarkAsError 是否已赋值
                     * @return MarkAsError 是否已赋值
                     * 
                     */
                    bool MarkAsErrorHasBeenSet() const;

                    /**
                     * 获取<p>标记为正常规则组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MarkAsOk <p>标记为正常规则组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ErrorSpanConf GetMarkAsOk() const;

                    /**
                     * 设置<p>标记为正常规则组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _markAsOk <p>标记为正常规则组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMarkAsOk(const ErrorSpanConf& _markAsOk);

                    /**
                     * 判断参数 MarkAsOk 是否已赋值
                     * @return MarkAsOk 是否已赋值
                     * 
                     */
                    bool MarkAsOkHasBeenSet() const;

                private:

                    /**
                     * <p>标记为错误规则组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorSpanConf m_markAsError;
                    bool m_markAsErrorHasBeenSet;

                    /**
                     * <p>标记为正常规则组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorSpanConf m_markAsOk;
                    bool m_markAsOkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_SPANSTATUSCONFIG_H_
