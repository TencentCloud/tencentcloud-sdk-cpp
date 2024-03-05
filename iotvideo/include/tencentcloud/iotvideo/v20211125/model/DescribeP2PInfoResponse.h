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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEP2PINFORESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEP2PINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * DescribeP2PInfo返回参数结构体
                */
                class DescribeP2PInfoResponse : public AbstractModel
                {
                public:
                    DescribeP2PInfoResponse();
                    ~DescribeP2PInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取xp2pinfo信息
                     * @return P2PInfo xp2pinfo信息
                     * 
                     */
                    std::string GetP2PInfo() const;

                    /**
                     * 判断参数 P2PInfo 是否已赋值
                     * @return P2PInfo 是否已赋值
                     * 
                     */
                    bool P2PInfoHasBeenSet() const;

                    /**
                     * 获取上报时间
                     * @return ReportTime 上报时间
                     * 
                     */
                    int64_t GetReportTime() const;

                    /**
                     * 判断参数 ReportTime 是否已赋值
                     * @return ReportTime 是否已赋值
                     * 
                     */
                    bool ReportTimeHasBeenSet() const;

                private:

                    /**
                     * xp2pinfo信息
                     */
                    std::string m_p2PInfo;
                    bool m_p2PInfoHasBeenSet;

                    /**
                     * 上报时间
                     */
                    int64_t m_reportTime;
                    bool m_reportTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEP2PINFORESPONSE_H_
