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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDDOSBLACKWHITEIPLISTRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDDOSBLACKWHITEIPLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/IpSegment.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeDDoSBlackWhiteIpList返回参数结构体
                */
                class DescribeDDoSBlackWhiteIpListResponse : public AbstractModel
                {
                public:
                    DescribeDDoSBlackWhiteIpListResponse();
                    ~DescribeDDoSBlackWhiteIpListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取黑名单IP列表
                     * @return BlackIpList 黑名单IP列表
                     * 
                     */
                    std::vector<IpSegment> GetBlackIpList() const;

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
                    std::vector<IpSegment> GetWhiteIpList() const;

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
                    std::vector<IpSegment> m_blackIpList;
                    bool m_blackIpListHasBeenSet;

                    /**
                     * 白名单IP列表
                     */
                    std::vector<IpSegment> m_whiteIpList;
                    bool m_whiteIpListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDDOSBLACKWHITEIPLISTRESPONSE_H_
