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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEVIDEOBITRATEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEVIDEOBITRATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * DescribeVideoBitRate请求参数结构体
                */
                class DescribeVideoBitRateRequest : public AbstractModel
                {
                public:
                    DescribeVideoBitRateRequest();
                    ~DescribeVideoBitRateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道ID列表
                     * @return ChannelIds 通道ID列表
                     * 
                     */
                    std::vector<std::string> GetChannelIds() const;

                    /**
                     * 设置通道ID列表
                     * @param _channelIds 通道ID列表
                     * 
                     */
                    void SetChannelIds(const std::vector<std::string>& _channelIds);

                    /**
                     * 判断参数 ChannelIds 是否已赋值
                     * @return ChannelIds 是否已赋值
                     * 
                     */
                    bool ChannelIdsHasBeenSet() const;

                private:

                    /**
                     * 通道ID列表
                     */
                    std::vector<std::string> m_channelIds;
                    bool m_channelIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEVIDEOBITRATEREQUEST_H_
