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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_JOBLOGERRORTIP_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_JOBLOGERRORTIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 调度任务日志错误提示信息
                */
                class JobLogErrorTip : public AbstractModel
                {
                public:
                    JobLogErrorTip();
                    ~JobLogErrorTip() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行日志错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 执行日志错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置执行日志错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 执行日志错误信息
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
                     * 获取对应sql的行下标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LineNum 对应sql的行下标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLineNum() const;

                    /**
                     * 设置对应sql的行下标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lineNum 对应sql的行下标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLineNum(const uint64_t& _lineNum);

                    /**
                     * 判断参数 LineNum 是否已赋值
                     * @return LineNum 是否已赋值
                     * 
                     */
                    bool LineNumHasBeenSet() const;

                    /**
                     * 获取对应sql的列下标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnNum 对应sql的列下标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetColumnNum() const;

                    /**
                     * 设置对应sql的列下标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnNum 对应sql的列下标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnNum(const uint64_t& _columnNum);

                    /**
                     * 判断参数 ColumnNum 是否已赋值
                     * @return ColumnNum 是否已赋值
                     * 
                     */
                    bool ColumnNumHasBeenSet() const;

                private:

                    /**
                     * 执行日志错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 对应sql的行下标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lineNum;
                    bool m_lineNumHasBeenSet;

                    /**
                     * 对应sql的列下标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_columnNum;
                    bool m_columnNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_JOBLOGERRORTIP_H_
