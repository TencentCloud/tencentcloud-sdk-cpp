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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILESTORAGE_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILESTORAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 文件存储
                */
                class FileStorage : public AbstractModel
                {
                public:
                    FileStorage();
                    ~FileStorage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储类型
                     * @return StorageType 存储类型
                     * 
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置存储类型
                     * @param _storageType 存储类型
                     * 
                     */
                    void SetStorageType(const int64_t& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取存储路径
                     * @return StoragePath 存储路径
                     * 
                     */
                    std::string GetStoragePath() const;

                    /**
                     * 设置存储路径
                     * @param _storagePath 存储路径
                     * 
                     */
                    void SetStoragePath(const std::string& _storagePath);

                    /**
                     * 判断参数 StoragePath 是否已赋值
                     * @return StoragePath 是否已赋值
                     * 
                     */
                    bool StoragePathHasBeenSet() const;

                    /**
                     * 获取文件内容
                     * @return Content 文件内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置文件内容
                     * @param _content 文件内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 存储类型
                     */
                    int64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 存储路径
                     */
                    std::string m_storagePath;
                    bool m_storagePathHasBeenSet;

                    /**
                     * 文件内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILESTORAGE_H_
