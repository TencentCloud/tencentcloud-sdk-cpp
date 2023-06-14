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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORRECEIVERHEALTHSTATUSRESPONSE_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORRECEIVERHEALTHSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/TrafficMirrorReciversStatus.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeTrafficMirrorReceiverHealthStatus返回参数结构体
                */
                class DescribeTrafficMirrorReceiverHealthStatusResponse : public AbstractModel
                {
                public:
                    DescribeTrafficMirrorReceiverHealthStatusResponse();
                    ~DescribeTrafficMirrorReceiverHealthStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取内网IP和端口对应的状态。
                     * @return ReceiversStatusSet 内网IP和端口对应的状态。
                     * 
                     */
                    std::vector<TrafficMirrorReciversStatus> GetReceiversStatusSet() const;

                    /**
                     * 判断参数 ReceiversStatusSet 是否已赋值
                     * @return ReceiversStatusSet 是否已赋值
                     * 
                     */
                    bool ReceiversStatusSetHasBeenSet() const;

                private:

                    /**
                     * 内网IP和端口对应的状态。
                     */
                    std::vector<TrafficMirrorReciversStatus> m_receiversStatusSet;
                    bool m_receiversStatusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORRECEIVERHEALTHSTATUSRESPONSE_H_
