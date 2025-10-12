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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_BUSINESSMETADATA_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_BUSINESSMETADATA_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * BusinessMetadata
                */
                class BusinessMetadata : public AbstractModel
                {
                public:
                    BusinessMetadata();
                    ~BusinessMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagNames 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTagNames() const;

                    /**
                     * 设置标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagNames 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagNames(const std::vector<std::string>& _tagNames);

                    /**
                     * 判断参数 TagNames 是否已赋值
                     * @return TagNames 是否已赋值
                     * 
                     */
                    bool TagNamesHasBeenSet() const;

                private:

                    /**
                     * 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tagNames;
                    bool m_tagNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_BUSINESSMETADATA_H_
