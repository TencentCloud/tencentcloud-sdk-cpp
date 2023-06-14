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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBLACKWHITEIPLISTRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBLACKWHITEIPLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeBlackWhiteIpList返回参数结构体
                */
                class DescribeBlackWhiteIpListResponse : public AbstractModel
                {
                public:
                    DescribeBlackWhiteIpListResponse();
                    ~DescribeBlackWhiteIpListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取黑名单IP列表
                     * @return BlackIpList 黑名单IP列表
                     * 
                     */
                    std::vector<std::string> GetBlackIpList() const;

                    /**
                     * 判断参数 BlackIpList 是否已赋值
                     * @return BlackIpList 是否已赋值
                     * 
                     */
                    bool BlackIpListHasBeenSet() const;

                    /**
                     * 获取白名单IP列表
                     * @return WhiteIpList 白名单IP列表
                     * 
                     */
                    std::vector<std::string> GetWhiteIpList() const;

                    /**
                     * 判断参数 WhiteIpList 是否已赋值
                     * @return WhiteIpList 是否已赋值
                     * 
                     */
                    bool WhiteIpListHasBeenSet() const;

                private:

                    /**
                     * 黑名单IP列表
                     */
                    std::vector<std::string> m_blackIpList;
                    bool m_blackIpListHasBeenSet;

                    /**
                     * 白名单IP列表
                     */
                    std::vector<std::string> m_whiteIpList;
                    bool m_whiteIpListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBLACKWHITEIPLISTRESPONSE_H_
