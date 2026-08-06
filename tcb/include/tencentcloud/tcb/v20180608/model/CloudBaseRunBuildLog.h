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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNBUILDLOG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNBUILDLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * BuildLog
                */
                class CloudBaseRunBuildLog : public AbstractModel
                {
                public:
                    CloudBaseRunBuildLog();
                    ~CloudBaseRunBuildLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取触达ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Delivered 触达ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDelivered() const;

                    /**
                     * 设置触达ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _delivered 触达ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDelivered(const int64_t& _delivered);

                    /**
                     * 判断参数 Delivered 是否已赋值
                     * @return Delivered 是否已赋值
                     * 
                     */
                    bool DeliveredHasBeenSet() const;

                    /**
                     * 获取文档
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 文档
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置文档
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _text 文档
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取是否更多
注意：此字段可能返回 null，表示取不到有效值。
                     * @return More 是否更多
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetMore() const;

                    /**
                     * 设置是否更多
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _more 是否更多
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMore(const bool& _more);

                    /**
                     * 判断参数 More 是否已赋值
                     * @return More 是否已赋值
                     * 
                     */
                    bool MoreHasBeenSet() const;

                private:

                    /**
                     * 总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 触达ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_delivered;
                    bool m_deliveredHasBeenSet;

                    /**
                     * 文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 是否更多
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_more;
                    bool m_moreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNBUILDLOG_H_
