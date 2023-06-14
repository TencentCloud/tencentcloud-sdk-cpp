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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEREVERSESHELLWHITELISTDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEREVERSESHELLWHITELISTDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ReverseShellWhiteListInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeReverseShellWhiteListDetail返回参数结构体
                */
                class DescribeReverseShellWhiteListDetailResponse : public AbstractModel
                {
                public:
                    DescribeReverseShellWhiteListDetailResponse();
                    ~DescribeReverseShellWhiteListDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取事件基本信息
                     * @return WhiteListDetailInfo 事件基本信息
                     * 
                     */
                    ReverseShellWhiteListInfo GetWhiteListDetailInfo() const;

                    /**
                     * 判断参数 WhiteListDetailInfo 是否已赋值
                     * @return WhiteListDetailInfo 是否已赋值
                     * 
                     */
                    bool WhiteListDetailInfoHasBeenSet() const;

                private:

                    /**
                     * 事件基本信息
                     */
                    ReverseShellWhiteListInfo m_whiteListDetailInfo;
                    bool m_whiteListDetailInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEREVERSESHELLWHITELISTDETAILRESPONSE_H_
