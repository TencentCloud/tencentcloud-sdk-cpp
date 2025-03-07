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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_SCRIPTINFO_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_SCRIPTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 脚本信息
                */
                class ScriptInfo : public AbstractModel
                {
                public:
                    ScriptInfo();
                    ~ScriptInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件名
                     * @return Name 文件名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置文件名
                     * @param _name 文件名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取文件大小
                     * @return Size 文件大小
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置文件大小
                     * @param _size 文件大小
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取文件类型
                     * @return Type 文件类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置文件类型
                     * @param _type 文件类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取base64编码后的文件内容
                     * @return EncodedContent base64编码后的文件内容
                     * 
                     */
                    std::string GetEncodedContent() const;

                    /**
                     * 设置base64编码后的文件内容
                     * @param _encodedContent base64编码后的文件内容
                     * 
                     */
                    void SetEncodedContent(const std::string& _encodedContent);

                    /**
                     * 判断参数 EncodedContent 是否已赋值
                     * @return EncodedContent 是否已赋值
                     * 
                     */
                    bool EncodedContentHasBeenSet() const;

                    /**
                     * 获取base64编码后的har结构体
                     * @return EncodedHttpArchive base64编码后的har结构体
                     * 
                     */
                    std::string GetEncodedHttpArchive() const;

                    /**
                     * 设置base64编码后的har结构体
                     * @param _encodedHttpArchive base64编码后的har结构体
                     * 
                     */
                    void SetEncodedHttpArchive(const std::string& _encodedHttpArchive);

                    /**
                     * 判断参数 EncodedHttpArchive 是否已赋值
                     * @return EncodedHttpArchive 是否已赋值
                     * 
                     */
                    bool EncodedHttpArchiveHasBeenSet() const;

                    /**
                     * 获取脚本权重，范围 1-100
                     * @return LoadWeight 脚本权重，范围 1-100
                     * 
                     */
                    int64_t GetLoadWeight() const;

                    /**
                     * 设置脚本权重，范围 1-100
                     * @param _loadWeight 脚本权重，范围 1-100
                     * 
                     */
                    void SetLoadWeight(const int64_t& _loadWeight);

                    /**
                     * 判断参数 LoadWeight 是否已赋值
                     * @return LoadWeight 是否已赋值
                     * 
                     */
                    bool LoadWeightHasBeenSet() const;

                    /**
                     * 获取文件 ID
                     * @return FileId 文件 ID
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置文件 ID
                     * @param _fileId 文件 ID
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取文件是否已上传，如果已上传，则可以不必填写 EncodedContent,EncodedHar 等内容。
主要用于较大长度脚本上传。
                     * @return Uploaded 文件是否已上传，如果已上传，则可以不必填写 EncodedContent,EncodedHar 等内容。
主要用于较大长度脚本上传。
                     * 
                     */
                    bool GetUploaded() const;

                    /**
                     * 设置文件是否已上传，如果已上传，则可以不必填写 EncodedContent,EncodedHar 等内容。
主要用于较大长度脚本上传。
                     * @param _uploaded 文件是否已上传，如果已上传，则可以不必填写 EncodedContent,EncodedHar 等内容。
主要用于较大长度脚本上传。
                     * 
                     */
                    void SetUploaded(const bool& _uploaded);

                    /**
                     * 判断参数 Uploaded 是否已赋值
                     * @return Uploaded 是否已赋值
                     * 
                     */
                    bool UploadedHasBeenSet() const;

                private:

                    /**
                     * 文件名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 文件大小
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 文件类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * base64编码后的文件内容
                     */
                    std::string m_encodedContent;
                    bool m_encodedContentHasBeenSet;

                    /**
                     * base64编码后的har结构体
                     */
                    std::string m_encodedHttpArchive;
                    bool m_encodedHttpArchiveHasBeenSet;

                    /**
                     * 脚本权重，范围 1-100
                     */
                    int64_t m_loadWeight;
                    bool m_loadWeightHasBeenSet;

                    /**
                     * 文件 ID
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 文件是否已上传，如果已上传，则可以不必填写 EncodedContent,EncodedHar 等内容。
主要用于较大长度脚本上传。
                     */
                    bool m_uploaded;
                    bool m_uploadedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_SCRIPTINFO_H_
