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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEREMOTEWRITESRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEREMOTEWRITESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/WriteDestination.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeRemoteWrites返回参数结构体
                */
                class DescribeRemoteWritesResponse : public AbstractModel
                {
                public:
                    DescribeRemoteWritesResponse();
                    ~DescribeRemoteWritesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取存储数据
                     * @return Count 存储数据
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取多写信息
                     * @return RemoteWrites 多写信息
                     * 
                     */
                    std::vector<WriteDestination> GetRemoteWrites() const;

                    /**
                     * 判断参数 RemoteWrites 是否已赋值
                     * @return RemoteWrites 是否已赋值
                     * 
                     */
                    bool RemoteWritesHasBeenSet() const;

                private:

                    /**
                     * 存储数据
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 多写信息
                     */
                    std::vector<WriteDestination> m_remoteWrites;
                    bool m_remoteWritesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEREMOTEWRITESRESPONSE_H_
