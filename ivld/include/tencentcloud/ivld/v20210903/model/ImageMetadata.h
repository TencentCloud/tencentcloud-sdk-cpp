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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_IMAGEMETADATA_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_IMAGEMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 图片文件元信息
                */
                class ImageMetadata : public AbstractModel
                {
                public:
                    ImageMetadata();
                    ~ImageMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒资图片文件大小，单位为Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSize 媒资图片文件大小，单位为Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置媒资图片文件大小，单位为Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSize 媒资图片文件大小，单位为Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取媒资图片文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MD5 媒资图片文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置媒资图片文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mD5 媒资图片文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMD5(const std::string& _mD5);

                    /**
                     * 判断参数 MD5 是否已赋值
                     * @return MD5 是否已赋值
                     * 
                     */
                    bool MD5HasBeenSet() const;

                    /**
                     * 获取媒资图片文件宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width 媒资图片文件宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置媒资图片文件宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _width 媒资图片文件宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取媒资图片文件高度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Height 媒资图片文件高度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置媒资图片文件高度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _height 媒资图片文件高度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取媒资图片文件格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Format 媒资图片文件格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置媒资图片文件格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _format 媒资图片文件格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                private:

                    /**
                     * 媒资图片文件大小，单位为Byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 媒资图片文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * 媒资图片文件宽度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 媒资图片文件高度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 媒资图片文件格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_IMAGEMETADATA_H_
