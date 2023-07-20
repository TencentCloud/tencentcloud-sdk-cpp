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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_STRINGLISTNODE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_STRINGLISTNODE_H_

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
                * string 数组
                */
                class StringListNode : public AbstractModel
                {
                public:
                    StringListNode();
                    ~StringListNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取string数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PreviewRecord string数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPreviewRecord() const;

                    /**
                     * 设置string数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _previewRecord string数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPreviewRecord(const std::vector<std::string>& _previewRecord);

                    /**
                     * 判断参数 PreviewRecord 是否已赋值
                     * @return PreviewRecord 是否已赋值
                     * 
                     */
                    bool PreviewRecordHasBeenSet() const;

                private:

                    /**
                     * string数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_previewRecord;
                    bool m_previewRecordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_STRINGLISTNODE_H_
