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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSREGIONSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSREGIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusRegions请求参数结构体
                */
                class DescribePrometheusRegionsRequest : public AbstractModel
                {
                public:
                    DescribePrometheusRegionsRequest();
                    ~DescribePrometheusRegionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取1-预付费，2-后付费，3-全地域（不填默认全地域）
                     * @return PayMode 1-预付费，2-后付费，3-全地域（不填默认全地域）
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置1-预付费，2-后付费，3-全地域（不填默认全地域）
                     * @param _payMode 1-预付费，2-后付费，3-全地域（不填默认全地域）
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                private:

                    /**
                     * 1-预付费，2-后付费，3-全地域（不填默认全地域）
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSREGIONSREQUEST_H_
