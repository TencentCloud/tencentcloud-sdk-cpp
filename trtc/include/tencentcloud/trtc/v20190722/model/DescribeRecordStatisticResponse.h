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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBERECORDSTATISTICRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBERECORDSTATISTICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/SdkAppIdRecordUsage.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeRecordStatistic返回参数结构体
                */
                class DescribeRecordStatisticResponse : public AbstractModel
                {
                public:
                    DescribeRecordStatisticResponse();
                    ~DescribeRecordStatisticResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取应用的用量信息数组。
                     * @return SdkAppIdUsages 应用的用量信息数组。
                     * 
                     */
                    std::vector<SdkAppIdRecordUsage> GetSdkAppIdUsages() const;

                    /**
                     * 判断参数 SdkAppIdUsages 是否已赋值
                     * @return SdkAppIdUsages 是否已赋值
                     * 
                     */
                    bool SdkAppIdUsagesHasBeenSet() const;

                private:

                    /**
                     * 应用的用量信息数组。
                     */
                    std::vector<SdkAppIdRecordUsage> m_sdkAppIdUsages;
                    bool m_sdkAppIdUsagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBERECORDSTATISTICRESPONSE_H_
