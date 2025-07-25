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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_FILESUPLOADSRESPONSE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_FILESUPLOADSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * FilesUploads返回参数结构体
                */
                class FilesUploadsResponse : public AbstractModel
                {
                public:
                    FilesUploadsResponse();
                    ~FilesUploadsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件标识符，可在各个API中引用。
                     * @return ID 文件标识符，可在各个API中引用。
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取对象类型，始终为 file。
                     * @return Object 对象类型，始终为 file。
                     * 
                     */
                    std::string GetObject() const;

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     * 
                     */
                    bool ObjectHasBeenSet() const;

                    /**
                     * 获取文件大小，单位为字节。
                     * @return Bytes 文件大小，单位为字节。
                     * 
                     */
                    int64_t GetBytes() const;

                    /**
                     * 判断参数 Bytes 是否已赋值
                     * @return Bytes 是否已赋值
                     * 
                     */
                    bool BytesHasBeenSet() const;

                    /**
                     * 获取文件创建时的 Unix 时间戳（秒）。
                     * @return CreatedAt 文件创建时的 Unix 时间戳（秒）。
                     * 
                     */
                    int64_t GetCreatedAt() const;

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取文件名。
                     * @return Filename 文件名。
                     * 
                     */
                    std::string GetFilename() const;

                    /**
                     * 判断参数 Filename 是否已赋值
                     * @return Filename 是否已赋值
                     * 
                     */
                    bool FilenameHasBeenSet() const;

                    /**
                     * 获取上传文件的用途。
                     * @return Purpose 上传文件的用途。
                     * 
                     */
                    std::string GetPurpose() const;

                    /**
                     * 判断参数 Purpose 是否已赋值
                     * @return Purpose 是否已赋值
                     * 
                     */
                    bool PurposeHasBeenSet() const;

                private:

                    /**
                     * 文件标识符，可在各个API中引用。
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 对象类型，始终为 file。
                     */
                    std::string m_object;
                    bool m_objectHasBeenSet;

                    /**
                     * 文件大小，单位为字节。
                     */
                    int64_t m_bytes;
                    bool m_bytesHasBeenSet;

                    /**
                     * 文件创建时的 Unix 时间戳（秒）。
                     */
                    int64_t m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 文件名。
                     */
                    std::string m_filename;
                    bool m_filenameHasBeenSet;

                    /**
                     * 上传文件的用途。
                     */
                    std::string m_purpose;
                    bool m_purposeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_FILESUPLOADSRESPONSE_H_
