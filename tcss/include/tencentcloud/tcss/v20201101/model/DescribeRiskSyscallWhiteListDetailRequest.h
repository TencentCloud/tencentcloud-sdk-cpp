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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBERISKSYSCALLWHITELISTDETAILREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBERISKSYSCALLWHITELISTDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeRiskSyscallWhiteListDetail请求参数结构体
                */
                class DescribeRiskSyscallWhiteListDetailRequest : public AbstractModel
                {
                public:
                    DescribeRiskSyscallWhiteListDetailRequest();
                    ~DescribeRiskSyscallWhiteListDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取白名单id
                     * @return WhiteListId 白名单id
                     * 
                     */
                    std::string GetWhiteListId() const;

                    /**
                     * 设置白名单id
                     * @param _whiteListId 白名单id
                     * 
                     */
                    void SetWhiteListId(const std::string& _whiteListId);

                    /**
                     * 判断参数 WhiteListId 是否已赋值
                     * @return WhiteListId 是否已赋值
                     * 
                     */
                    bool WhiteListIdHasBeenSet() const;

                private:

                    /**
                     * 白名单id
                     */
                    std::string m_whiteListId;
                    bool m_whiteListIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBERISKSYSCALLWHITELISTDETAILREQUEST_H_
