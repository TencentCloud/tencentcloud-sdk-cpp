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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBERISKSYSCALLWHITELISTDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBERISKSYSCALLWHITELISTDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RiskSyscallWhiteListInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeRiskSyscallWhiteListDetail返回参数结构体
                */
                class DescribeRiskSyscallWhiteListDetailResponse : public AbstractModel
                {
                public:
                    DescribeRiskSyscallWhiteListDetailResponse();
                    ~DescribeRiskSyscallWhiteListDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取白名单基本信息
                     * @return WhiteListDetailInfo 白名单基本信息
                     * 
                     */
                    RiskSyscallWhiteListInfo GetWhiteListDetailInfo() const;

                    /**
                     * 判断参数 WhiteListDetailInfo 是否已赋值
                     * @return WhiteListDetailInfo 是否已赋值
                     * 
                     */
                    bool WhiteListDetailInfoHasBeenSet() const;

                private:

                    /**
                     * 白名单基本信息
                     */
                    RiskSyscallWhiteListInfo m_whiteListDetailInfo;
                    bool m_whiteListDetailInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBERISKSYSCALLWHITELISTDETAILRESPONSE_H_
