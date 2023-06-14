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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORRECEIVERSRESPONSE_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORRECEIVERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/TrafficMirrorReceiver.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeTrafficMirrorReceivers返回参数结构体
                */
                class DescribeTrafficMirrorReceiversResponse : public AbstractModel
                {
                public:
                    DescribeTrafficMirrorReceiversResponse();
                    ~DescribeTrafficMirrorReceiversResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取接收机列表，具体结构描述如data结构所示。
                     * @return ReceiverSet 接收机列表，具体结构描述如data结构所示。
                     * 
                     */
                    std::vector<TrafficMirrorReceiver> GetReceiverSet() const;

                    /**
                     * 判断参数 ReceiverSet 是否已赋值
                     * @return ReceiverSet 是否已赋值
                     * 
                     */
                    bool ReceiverSetHasBeenSet() const;

                    /**
                     * 获取接收机总数。
                     * @return TotalCount 接收机总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 接收机列表，具体结构描述如data结构所示。
                     */
                    std::vector<TrafficMirrorReceiver> m_receiverSet;
                    bool m_receiverSetHasBeenSet;

                    /**
                     * 接收机总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORRECEIVERSRESPONSE_H_
