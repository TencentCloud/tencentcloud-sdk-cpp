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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_FILEINFO_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_FILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 文件信息
                */
                class FileInfo : public AbstractModel
                {
                public:
                    FileInfo();
                    ~FileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件名称
                     * @return Path 文件名称
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置文件名称
                     * @param _path 文件名称
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取文件大小，单位是Bytes
                     * @return Size 文件大小，单位是Bytes
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置文件大小，单位是Bytes
                     * @param _size 文件大小，单位是Bytes
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
                     * 获取文件mtime
                     * @return ModifyTime 文件mtime
                     * 
                     */
                    int64_t GetModifyTime() const;

                    /**
                     * 设置文件mtime
                     * @param _modifyTime 文件mtime
                     * 
                     */
                    void SetModifyTime(const int64_t& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取文件ctime
                     * @return ChangeTime 文件ctime
                     * 
                     */
                    int64_t GetChangeTime() const;

                    /**
                     * 设置文件ctime
                     * @param _changeTime 文件ctime
                     * 
                     */
                    void SetChangeTime(const int64_t& _changeTime);

                    /**
                     * 判断参数 ChangeTime 是否已赋值
                     * @return ChangeTime 是否已赋值
                     * 
                     */
                    bool ChangeTimeHasBeenSet() const;

                    /**
                     * 获取文件类型。取值包含"dir"、"file"、"symlink"
                     * @return Type 文件类型。取值包含"dir"、"file"、"symlink"
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置文件类型。取值包含"dir"、"file"、"symlink"
                     * @param _type 文件类型。取值包含"dir"、"file"、"symlink"
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 文件名称
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 文件大小，单位是Bytes
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 文件mtime
                     */
                    int64_t m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 文件ctime
                     */
                    int64_t m_changeTime;
                    bool m_changeTimeHasBeenSet;

                    /**
                     * 文件类型。取值包含"dir"、"file"、"symlink"
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_FILEINFO_H_
