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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPACCESSRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPACCESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/BackupFile.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeBackupAccess返回参数结构体
                */
                class DescribeBackupAccessResponse : public AbstractModel
                {
                public:
                    DescribeBackupAccessResponse();
                    ~DescribeBackupAccessResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取实例所属地域
                     * @return Region 实例所属地域
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取备份文件所在存储桶
                     * @return Bucket 备份文件所在存储桶
                     */
                    std::string GetBucket() const;

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取备份文件的存储信息
                     * @return Files 备份文件的存储信息
                     */
                    std::vector<BackupFile> GetFiles() const;

                    /**
                     * 判断参数 Files 是否已赋值
                     * @return Files 是否已赋值
                     */
                    bool FilesHasBeenSet() const;

                private:

                    /**
                     * 实例所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 备份文件所在存储桶
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 备份文件的存储信息
                     */
                    std::vector<BackupFile> m_files;
                    bool m_filesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPACCESSRESPONSE_H_
