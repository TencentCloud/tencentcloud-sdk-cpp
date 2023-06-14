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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBECUSTOMGROUPRESPONSE_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBECUSTOMGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeCustomGroup返回参数结构体
                */
                class DescribeCustomGroupResponse : public AbstractModel
                {
                public:
                    DescribeCustomGroupResponse();
                    ~DescribeCustomGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义人物库所包含的人物个数
                     * @return GroupSize 自定义人物库所包含的人物个数
                     * 
                     */
                    int64_t GetGroupSize() const;

                    /**
                     * 判断参数 GroupSize 是否已赋值
                     * @return GroupSize 是否已赋值
                     * 
                     */
                    bool GroupSizeHasBeenSet() const;

                    /**
                     * 获取自定义人物库图片后续所在的存储桶
                     * @return Bucket 自定义人物库图片后续所在的存储桶
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                private:

                    /**
                     * 自定义人物库所包含的人物个数
                     */
                    int64_t m_groupSize;
                    bool m_groupSizeHasBeenSet;

                    /**
                     * 自定义人物库图片后续所在的存储桶
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBECUSTOMGROUPRESPONSE_H_
