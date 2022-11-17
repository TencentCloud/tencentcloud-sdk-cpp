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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETCREDENTIALISSUETRENDREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETCREDENTIALISSUETRENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetCredentialIssueTrend请求参数结构体
                */
                class GetCredentialIssueTrendRequest : public AbstractModel
                {
                public:
                    GetCredentialIssueTrendRequest();
                    ~GetCredentialIssueTrendRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间（支持到天 2021-4-23）
                     * @return StartTime 开始时间（支持到天 2021-4-23）
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间（支持到天 2021-4-23）
                     * @param StartTime 开始时间（支持到天 2021-4-23）
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间（支持到天 2021-4-23）
                     * @return EndTime 结束时间（支持到天 2021-4-23）
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间（支持到天 2021-4-23）
                     * @param EndTime 结束时间（支持到天 2021-4-23）
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取网络ID
                     * @return ClusterId 网络ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网络ID
                     * @param ClusterId 网络ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * 开始时间（支持到天 2021-4-23）
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间（支持到天 2021-4-23）
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 网络ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETCREDENTIALISSUETRENDREQUEST_H_
