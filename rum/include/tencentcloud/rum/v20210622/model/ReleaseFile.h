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
                     * 获取文件版本
                     * @return Version 文件版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置文件版本
                     * @param _version 文件版本
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
                     * 获取文件唯一 key
                     * @return FileKey 文件唯一 key
                     * 
                     */
                    std::string GetFileKey() const;

                    /**
                     * 设置文件唯一 key
                     * @param _fileKey 文件唯一 key
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
                     * 获取文件名
                     * @return FileName 文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
                     * @param _fileName 文件名
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
                     * 获取文件哈希值
                     * @return FileHash 文件哈希值
                     * 
                     */
                    std::string GetFileHash() const;

                    /**
                     * 设置文件哈希值
                     * @param _fileHash 文件哈希值
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
                     * 获取文件 id
                     * @return ID 文件 id
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置文件 id
                     * @param _iD 文件 id
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * 文件版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 文件唯一 key
                     */
                    std::string m_fileKey;
                    bool m_fileKeyHasBeenSet;

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件哈希值
                     */
                    std::string m_fileHash;
                    bool m_fileHashHasBeenSet;

                    /**
                     * 文件 id
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_RELEASEFILE_H_
