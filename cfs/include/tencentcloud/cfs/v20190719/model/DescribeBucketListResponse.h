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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEBUCKETLISTRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEBUCKETLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/BucketInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeBucketList返回参数结构体
                */
                class DescribeBucketListResponse : public AbstractModel
                {
                public:
                    DescribeBucketListResponse();
                    ~DescribeBucketListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取桶的数量
                     * @return TotalCount 桶的数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取桶列表
                     * @return BucketList 桶列表
                     * 
                     */
                    std::vector<BucketInfo> GetBucketList() const;

                    /**
                     * 判断参数 BucketList 是否已赋值
                     * @return BucketList 是否已赋值
                     * 
                     */
                    bool BucketListHasBeenSet() const;

                private:

                    /**
                     * 桶的数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 桶列表
                     */
                    std::vector<BucketInfo> m_bucketList;
                    bool m_bucketListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEBUCKETLISTRESPONSE_H_
