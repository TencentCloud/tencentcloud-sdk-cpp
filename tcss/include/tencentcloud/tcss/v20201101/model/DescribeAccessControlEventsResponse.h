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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEACCESSCONTROLEVENTSRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEACCESSCONTROLEVENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AccessControlEventInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAccessControlEvents返回参数结构体
                */
                class DescribeAccessControlEventsResponse : public AbstractModel
                {
                public:
                    DescribeAccessControlEventsResponse();
                    ~DescribeAccessControlEventsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取事件总数量
                     * @return TotalCount 事件总数量
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
                     * 获取访问控制事件数组
                     * @return EventSet 访问控制事件数组
                     * 
                     */
                    std::vector<AccessControlEventInfo> GetEventSet() const;

                    /**
                     * 判断参数 EventSet 是否已赋值
                     * @return EventSet 是否已赋值
                     * 
                     */
                    bool EventSetHasBeenSet() const;

                    /**
                     * 获取支持的内核版本
                     * @return SupportCoreVersion 支持的内核版本
                     * 
                     */
                    std::string GetSupportCoreVersion() const;

                    /**
                     * 判断参数 SupportCoreVersion 是否已赋值
                     * @return SupportCoreVersion 是否已赋值
                     * 
                     */
                    bool SupportCoreVersionHasBeenSet() const;

                    /**
                     * 获取拦截失败可能的原因
                     * @return InterceptionFailureTip 拦截失败可能的原因
                     * 
                     */
                    std::string GetInterceptionFailureTip() const;

                    /**
                     * 判断参数 InterceptionFailureTip 是否已赋值
                     * @return InterceptionFailureTip 是否已赋值
                     * 
                     */
                    bool InterceptionFailureTipHasBeenSet() const;

                private:

                    /**
                     * 事件总数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 访问控制事件数组
                     */
                    std::vector<AccessControlEventInfo> m_eventSet;
                    bool m_eventSetHasBeenSet;

                    /**
                     * 支持的内核版本
                     */
                    std::string m_supportCoreVersion;
                    bool m_supportCoreVersionHasBeenSet;

                    /**
                     * 拦截失败可能的原因
                     */
                    std::string m_interceptionFailureTip;
                    bool m_interceptionFailureTipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEACCESSCONTROLEVENTSRESPONSE_H_
