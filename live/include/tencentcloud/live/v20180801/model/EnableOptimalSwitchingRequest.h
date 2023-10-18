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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_ENABLEOPTIMALSWITCHINGREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_ENABLEOPTIMALSWITCHINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * EnableOptimalSwitching请求参数结构体
                */
                class EnableOptimalSwitchingRequest : public AbstractModel
                {
                public:
                    EnableOptimalSwitchingRequest();
                    ~EnableOptimalSwitchingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取针对该流 ID 启用择优调度。
                     * @return StreamName 针对该流 ID 启用择优调度。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置针对该流 ID 启用择优调度。
                     * @param _streamName 针对该流 ID 启用择优调度。
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取启用开关，默认为启用。
0 - 禁用。
1 - 启用。
                     * @return EnableSwitch 启用开关，默认为启用。
0 - 禁用。
1 - 启用。
                     * 
                     */
                    int64_t GetEnableSwitch() const;

                    /**
                     * 设置启用开关，默认为启用。
0 - 禁用。
1 - 启用。
                     * @param _enableSwitch 启用开关，默认为启用。
0 - 禁用。
1 - 启用。
                     * 
                     */
                    void SetEnableSwitch(const int64_t& _enableSwitch);

                    /**
                     * 判断参数 EnableSwitch 是否已赋值
                     * @return EnableSwitch 是否已赋值
                     * 
                     */
                    bool EnableSwitchHasBeenSet() const;

                    /**
                     * 获取要启用自动择优的流所属的域名分组名称。
                     * @return HostGroupName 要启用自动择优的流所属的域名分组名称。
                     * 
                     */
                    std::string GetHostGroupName() const;

                    /**
                     * 设置要启用自动择优的流所属的域名分组名称。
                     * @param _hostGroupName 要启用自动择优的流所属的域名分组名称。
                     * 
                     */
                    void SetHostGroupName(const std::string& _hostGroupName);

                    /**
                     * 判断参数 HostGroupName 是否已赋值
                     * @return HostGroupName 是否已赋值
                     * 
                     */
                    bool HostGroupNameHasBeenSet() const;

                private:

                    /**
                     * 针对该流 ID 启用择优调度。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 启用开关，默认为启用。
0 - 禁用。
1 - 启用。
                     */
                    int64_t m_enableSwitch;
                    bool m_enableSwitchHasBeenSet;

                    /**
                     * 要启用自动择优的流所属的域名分组名称。
                     */
                    std::string m_hostGroupName;
                    bool m_hostGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_ENABLEOPTIMALSWITCHINGREQUEST_H_
