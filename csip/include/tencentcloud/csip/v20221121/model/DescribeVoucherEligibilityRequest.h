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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVOUCHERELIGIBILITYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVOUCHERELIGIBILITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeVoucherEligibility请求参数结构体
                */
                class DescribeVoucherEligibilityRequest : public AbstractModel
                {
                public:
                    DescribeVoucherEligibilityRequest();
                    ~DescribeVoucherEligibilityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取活动 ID。
                     * @return ActivityID 活动 ID。
                     * 
                     */
                    int64_t GetActivityID() const;

                    /**
                     * 设置活动 ID。
                     * @param _activityID 活动 ID。
                     * 
                     */
                    void SetActivityID(const int64_t& _activityID);

                    /**
                     * 判断参数 ActivityID 是否已赋值
                     * @return ActivityID 是否已赋值
                     * 
                     */
                    bool ActivityIDHasBeenSet() const;

                    /**
                     * 获取代金券批次 ID。
                     * @return ActID 代金券批次 ID。
                     * 
                     */
                    int64_t GetActID() const;

                    /**
                     * 设置代金券批次 ID。
                     * @param _actID 代金券批次 ID。
                     * 
                     */
                    void SetActID(const int64_t& _actID);

                    /**
                     * 判断参数 ActID 是否已赋值
                     * @return ActID 是否已赋值
                     * 
                     */
                    bool ActIDHasBeenSet() const;

                private:

                    /**
                     * 活动 ID。
                     */
                    int64_t m_activityID;
                    bool m_activityIDHasBeenSet;

                    /**
                     * 代金券批次 ID。
                     */
                    int64_t m_actID;
                    bool m_actIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVOUCHERELIGIBILITYREQUEST_H_
