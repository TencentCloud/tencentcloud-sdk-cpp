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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICESTREAMRESPONSE_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICESTREAMRESPONSE_H_

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
                * 获取开流地址返回数据
                */
                class ControlDeviceStreamResponse : public AbstractModel
                {
                public:
                    ControlDeviceStreamResponse();
                    ~ControlDeviceStreamResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取flv 流地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Flv flv 流地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlv() const;

                    /**
                     * 判断参数 Flv 是否已赋值
                     * @return Flv 是否已赋值
                     * 
                     */
                    bool FlvHasBeenSet() const;

                    /**
                     * 获取hls 流地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hls hls 流地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHls() const;

                    /**
                     * 判断参数 Hls 是否已赋值
                     * @return Hls 是否已赋值
                     * 
                     */
                    bool HlsHasBeenSet() const;

                    /**
                     * 获取rtmp 流地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rtmp rtmp 流地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRtmp() const;

                    /**
                     * 判断参数 Rtmp 是否已赋值
                     * @return Rtmp 是否已赋值
                     * 
                     */
                    bool RtmpHasBeenSet() const;

                private:

                    /**
                     * flv 流地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flv;
                    bool m_flvHasBeenSet;

                    /**
                     * hls 流地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hls;
                    bool m_hlsHasBeenSet;

                    /**
                     * rtmp 流地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rtmp;
                    bool m_rtmpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICESTREAMRESPONSE_H_
