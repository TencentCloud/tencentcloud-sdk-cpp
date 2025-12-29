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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_FILECOLLECTION_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_FILECOLLECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 文件收集信息
                */
                class FileCollection : public AbstractModel
                {
                public:
                    FileCollection();
                    ~FileCollection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最大上传文件的数量
                     * @return MaxFileCount 最大上传文件的数量
                     * 
                     */
                    int64_t GetMaxFileCount() const;

                    /**
                     * 设置最大上传文件的数量
                     * @param _maxFileCount 最大上传文件的数量
                     * 
                     */
                    void SetMaxFileCount(const int64_t& _maxFileCount);

                    /**
                     * 判断参数 MaxFileCount 是否已赋值
                     * @return MaxFileCount 是否已赋值
                     * 
                     */
                    bool MaxFileCountHasBeenSet() const;

                    /**
                     * 获取支持的上传文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportedFileTypes 支持的上传文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSupportedFileTypes() const;

                    /**
                     * 设置支持的上传文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportedFileTypes 支持的上传文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportedFileTypes(const std::vector<std::string>& _supportedFileTypes);

                    /**
                     * 判断参数 SupportedFileTypes 是否已赋值
                     * @return SupportedFileTypes 是否已赋值
                     * 
                     */
                    bool SupportedFileTypesHasBeenSet() const;

                private:

                    /**
                     * 最大上传文件的数量
                     */
                    int64_t m_maxFileCount;
                    bool m_maxFileCountHasBeenSet;

                    /**
                     * 支持的上传文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_supportedFileTypes;
                    bool m_supportedFileTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_FILECOLLECTION_H_
