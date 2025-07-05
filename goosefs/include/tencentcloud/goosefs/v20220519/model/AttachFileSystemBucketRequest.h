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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_ATTACHFILESYSTEMBUCKETREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_ATTACHFILESYSTEMBUCKETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/MappedBucket.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * AttachFileSystemBucket请求参数结构体
                */
                class AttachFileSystemBucketRequest : public AbstractModel
                {
                public:
                    AttachFileSystemBucketRequest();
                    ~AttachFileSystemBucketRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return FileSystemId 无
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置无
                     * @param _fileSystemId 无
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取关联新Bucket
                     * @return Bucket 关联新Bucket
                     * 
                     */
                    MappedBucket GetBucket() const;

                    /**
                     * 设置关联新Bucket
                     * @param _bucket 关联新Bucket
                     * 
                     */
                    void SetBucket(const MappedBucket& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 关联新Bucket
                     */
                    MappedBucket m_bucket;
                    bool m_bucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_ATTACHFILESYSTEMBUCKETREQUEST_H_
