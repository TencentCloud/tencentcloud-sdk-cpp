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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_RELEASEFILE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_RELEASEFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 发布文件列表(SOURCEMAP)
                */
                class ReleaseFile : public AbstractModel
                {
                public:
                    ReleaseFile();
                    ~ReleaseFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件版本</p>
                     * @return Version <p>文件版本</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>文件版本</p>
                     * @param _version <p>文件版本</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>文件唯一 key</p>
                     * @return FileKey <p>文件唯一 key</p>
                     * 
                     */
                    std::string GetFileKey() const;

                    /**
                     * 设置<p>文件唯一 key</p>
                     * @param _fileKey <p>文件唯一 key</p>
                     * 
                     */
                    void SetFileKey(const std::string& _fileKey);

                    /**
                     * 判断参数 FileKey 是否已赋值
                     * @return FileKey 是否已赋值
                     * 
                     */
                    bool FileKeyHasBeenSet() const;

                    /**
                     * 获取<p>文件名</p>
                     * @return FileName <p>文件名</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>文件名</p>
                     * @param _fileName <p>文件名</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>文件哈希值</p>
                     * @return FileHash <p>文件哈希值</p>
                     * 
                     */
                    std::string GetFileHash() const;

                    /**
                     * 设置<p>文件哈希值</p>
                     * @param _fileHash <p>文件哈希值</p>
                     * 
                     */
                    void SetFileHash(const std::string& _fileHash);

                    /**
                     * 判断参数 FileHash 是否已赋值
                     * @return FileHash 是否已赋值
                     * 
                     */
                    bool FileHashHasBeenSet() const;

                    /**
                     * 获取<p>文件 id</p>
                     * @return ID <p>文件 id</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>文件 id</p>
                     * @param _iD <p>文件 id</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdAt <p>创建时间</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                private:

                    /**
                     * <p>文件版本</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>文件唯一 key</p>
                     */
                    std::string m_fileKey;
                    bool m_fileKeyHasBeenSet;

                    /**
                     * <p>文件名</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>文件哈希值</p>
                     */
                    std::string m_fileHash;
                    bool m_fileHashHasBeenSet;

                    /**
                     * <p>文件 id</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_RELEASEFILE_H_
