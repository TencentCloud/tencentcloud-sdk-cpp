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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SYNCPODSTATEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SYNCPODSTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PodState.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * SyncPodState请求参数结构体
                */
                class SyncPodStateRequest : public AbstractModel
                {
                public:
                    SyncPodStateRequest();
                    ~SyncPodStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EmrService中pod状态信息
                     * @return Message EmrService中pod状态信息
                     * 
                     */
                    PodState GetMessage() const;

                    /**
                     * 设置EmrService中pod状态信息
                     * @param _message EmrService中pod状态信息
                     * 
                     */
                    void SetMessage(const PodState& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * EmrService中pod状态信息
                     */
                    PodState m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SYNCPODSTATEREQUEST_H_
