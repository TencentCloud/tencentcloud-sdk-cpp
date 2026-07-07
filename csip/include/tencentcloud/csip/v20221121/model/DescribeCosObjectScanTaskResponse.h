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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSOBJECTSCANTASKRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSOBJECTSCANTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosBucketTaskInfo.h>
#include <tencentcloud/csip/v20221121/model/CosAssetSyncTaskInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCosObjectScanTask返回参数结构体
                */
                class DescribeCosObjectScanTaskResponse : public AbstractModel
                {
                public:
                    DescribeCosObjectScanTaskResponse();
                    ~DescribeCosObjectScanTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>存储桶任务详情</p>
                     * @return BucketTaskIdSet <p>存储桶任务详情</p>
                     * 
                     */
                    std::vector<CosBucketTaskInfo> GetBucketTaskIdSet() const;

                    /**
                     * 判断参数 BucketTaskIdSet 是否已赋值
                     * @return BucketTaskIdSet 是否已赋值
                     * 
                     */
                    bool BucketTaskIdSetHasBeenSet() const;

                    /**
                     * 获取<p>appid维度任务列表</p>
                     * @return MemberTaskIdSet <p>appid维度任务列表</p>
                     * 
                     */
                    std::vector<CosAssetSyncTaskInfo> GetMemberTaskIdSet() const;

                    /**
                     * 判断参数 MemberTaskIdSet 是否已赋值
                     * @return MemberTaskIdSet 是否已赋值
                     * 
                     */
                    bool MemberTaskIdSetHasBeenSet() const;

                private:

                    /**
                     * <p>存储桶任务详情</p>
                     */
                    std::vector<CosBucketTaskInfo> m_bucketTaskIdSet;
                    bool m_bucketTaskIdSetHasBeenSet;

                    /**
                     * <p>appid维度任务列表</p>
                     */
                    std::vector<CosAssetSyncTaskInfo> m_memberTaskIdSet;
                    bool m_memberTaskIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSOBJECTSCANTASKRESPONSE_H_
