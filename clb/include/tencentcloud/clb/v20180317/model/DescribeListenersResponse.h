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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELISTENERSRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELISTENERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Listener.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeListeners返回参数结构体
                */
                class DescribeListenersResponse : public AbstractModel
                {
                public:
                    DescribeListenersResponse();
                    ~DescribeListenersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取监听器列表。
                     * @return Listeners 监听器列表。
                     * 
                     */
                    std::vector<Listener> GetListeners() const;

                    /**
                     * 判断参数 Listeners 是否已赋值
                     * @return Listeners 是否已赋值
                     * 
                     */
                    bool ListenersHasBeenSet() const;

                    /**
                     * 获取总的监听器个数（根据端口、协议、监听器ID过滤后）。
                     * @return TotalCount 总的监听器个数（根据端口、协议、监听器ID过滤后）。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 监听器列表。
                     */
                    std::vector<Listener> m_listeners;
                    bool m_listenersHasBeenSet;

                    /**
                     * 总的监听器个数（根据端口、协议、监听器ID过滤后）。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELISTENERSRESPONSE_H_
