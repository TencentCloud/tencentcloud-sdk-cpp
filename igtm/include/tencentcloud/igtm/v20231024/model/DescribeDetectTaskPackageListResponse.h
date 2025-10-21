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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEDETECTTASKPACKAGELISTRESPONSE_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEDETECTTASKPACKAGELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/igtm/v20231024/model/DetectTaskPackage.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * DescribeDetectTaskPackageList返回参数结构体
                */
                class DescribeDetectTaskPackageListResponse : public AbstractModel
                {
                public:
                    DescribeDetectTaskPackageListResponse();
                    ~DescribeDetectTaskPackageListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取探测任务套餐列表
                     * @return TaskPackageSet 探测任务套餐列表
                     * 
                     */
                    std::vector<DetectTaskPackage> GetTaskPackageSet() const;

                    /**
                     * 判断参数 TaskPackageSet 是否已赋值
                     * @return TaskPackageSet 是否已赋值
                     * 
                     */
                    bool TaskPackageSetHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 探测任务套餐列表
                     */
                    std::vector<DetectTaskPackage> m_taskPackageSet;
                    bool m_taskPackageSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEDETECTTASKPACKAGELISTRESPONSE_H_
