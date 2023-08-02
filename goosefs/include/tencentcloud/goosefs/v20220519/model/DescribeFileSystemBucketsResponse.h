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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEFILESYSTEMBUCKETSRESPONSE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEFILESYSTEMBUCKETSRESPONSE_H_

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
                * DescribeFileSystemBuckets返回参数结构体
                */
                class DescribeFileSystemBucketsResponse : public AbstractModel
                {
                public:
                    DescribeFileSystemBucketsResponse();
                    ~DescribeFileSystemBucketsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取bucket列表
                     * @return BucketList bucket列表
                     * 
                     */
                    std::vector<MappedBucket> GetBucketList() const;

                    /**
                     * 判断参数 BucketList 是否已赋值
                     * @return BucketList 是否已赋值
                     * 
                     */
                    bool BucketListHasBeenSet() const;

                private:

                    /**
                     * bucket列表
                     */
                    std::vector<MappedBucket> m_bucketList;
                    bool m_bucketListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEFILESYSTEMBUCKETSRESPONSE_H_
