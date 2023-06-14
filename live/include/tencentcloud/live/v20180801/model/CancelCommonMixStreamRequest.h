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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CANCELCOMMONMIXSTREAMREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CANCELCOMMONMIXSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CancelCommonMixStream请求参数结构体
                */
                class CancelCommonMixStreamRequest : public AbstractModel
                {
                public:
                    CancelCommonMixStreamRequest();
                    ~CancelCommonMixStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取混流会话（申请混流开始到取消混流结束）标识 ID。
该值与CreateCommonMixStream中的MixStreamSessionId保持一致。
                     * @return MixStreamSessionId 混流会话（申请混流开始到取消混流结束）标识 ID。
该值与CreateCommonMixStream中的MixStreamSessionId保持一致。
                     * 
                     */
                    std::string GetMixStreamSessionId() const;

                    /**
                     * 设置混流会话（申请混流开始到取消混流结束）标识 ID。
该值与CreateCommonMixStream中的MixStreamSessionId保持一致。
                     * @param _mixStreamSessionId 混流会话（申请混流开始到取消混流结束）标识 ID。
该值与CreateCommonMixStream中的MixStreamSessionId保持一致。
                     * 
                     */
                    void SetMixStreamSessionId(const std::string& _mixStreamSessionId);

                    /**
                     * 判断参数 MixStreamSessionId 是否已赋值
                     * @return MixStreamSessionId 是否已赋值
                     * 
                     */
                    bool MixStreamSessionIdHasBeenSet() const;

                private:

                    /**
                     * 混流会话（申请混流开始到取消混流结束）标识 ID。
该值与CreateCommonMixStream中的MixStreamSessionId保持一致。
                     */
                    std::string m_mixStreamSessionId;
                    bool m_mixStreamSessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CANCELCOMMONMIXSTREAMREQUEST_H_
