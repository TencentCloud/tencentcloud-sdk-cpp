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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_HANDLESTREAMCONNECTPROJECTRESPONSE_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_HANDLESTREAMCONNECTPROJECTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/VodPullInputPlayInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * HandleStreamConnectProject返回参数结构体
                */
                class HandleStreamConnectProjectResponse : public AbstractModel
                {
                public:
                    HandleStreamConnectProjectResponse();
                    ~HandleStreamConnectProjectResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取输入源推流地址，当 Operation 取值 AddInput 且 InputType 为 RtmpPush 类型时有效。
                     * @return StreamInputRtmpPushUrl 输入源推流地址，当 Operation 取值 AddInput 且 InputType 为 RtmpPush 类型时有效。
                     * 
                     */
                    std::string GetStreamInputRtmpPushUrl() const;

                    /**
                     * 判断参数 StreamInputRtmpPushUrl 是否已赋值
                     * @return StreamInputRtmpPushUrl 是否已赋值
                     * 
                     */
                    bool StreamInputRtmpPushUrlHasBeenSet() const;

                    /**
                     * 获取点播输入源播放进度信息，当 Operation 取值 DescribeInputPlayInfo 且 InputType 为 VodPull 类型时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VodPullInputPlayInfo 点播输入源播放进度信息，当 Operation 取值 DescribeInputPlayInfo 且 InputType 为 VodPull 类型时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VodPullInputPlayInfo GetVodPullInputPlayInfo() const;

                    /**
                     * 判断参数 VodPullInputPlayInfo 是否已赋值
                     * @return VodPullInputPlayInfo 是否已赋值
                     * 
                     */
                    bool VodPullInputPlayInfoHasBeenSet() const;

                private:

                    /**
                     * 输入源推流地址，当 Operation 取值 AddInput 且 InputType 为 RtmpPush 类型时有效。
                     */
                    std::string m_streamInputRtmpPushUrl;
                    bool m_streamInputRtmpPushUrlHasBeenSet;

                    /**
                     * 点播输入源播放进度信息，当 Operation 取值 DescribeInputPlayInfo 且 InputType 为 VodPull 类型时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VodPullInputPlayInfo m_vodPullInputPlayInfo;
                    bool m_vodPullInputPlayInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_HANDLESTREAMCONNECTPROJECTRESPONSE_H_
