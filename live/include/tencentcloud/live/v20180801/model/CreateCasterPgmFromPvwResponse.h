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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATECASTERPGMFROMPVWRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATECASTERPGMFROMPVWRESPONSE_H_

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
                * CreateCasterPgmFromPvw返回参数结构体
                */
                class CreateCasterPgmFromPvwResponse : public AbstractModel
                {
                public:
                    CreateCasterPgmFromPvwResponse();
                    ~CreateCasterPgmFromPvwResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取主监任务的rtmp协议预览地址。 
注：该地址仅供预览，不可分发。
                     * @return PgmPlayUrl 主监任务的rtmp协议预览地址。 
注：该地址仅供预览，不可分发。
                     * 
                     */
                    std::string GetPgmPlayUrl() const;

                    /**
                     * 判断参数 PgmPlayUrl 是否已赋值
                     * @return PgmPlayUrl 是否已赋值
                     * 
                     */
                    bool PgmPlayUrlHasBeenSet() const;

                    /**
                     * 获取注：该字段已废弃，请结合腾讯云直播播放地址生成策略生成cdn播放地址
                     * @return CdnPlayUrl 注：该字段已废弃，请结合腾讯云直播播放地址生成策略生成cdn播放地址
                     * 
                     */
                    std::string GetCdnPlayUrl() const;

                    /**
                     * 判断参数 CdnPlayUrl 是否已赋值
                     * @return CdnPlayUrl 是否已赋值
                     * 
                     */
                    bool CdnPlayUrlHasBeenSet() const;

                    /**
                     * 获取主监任务在腾讯云直播侧的流ID。
                     * @return CdnStreamId 主监任务在腾讯云直播侧的流ID。
                     * 
                     */
                    std::string GetCdnStreamId() const;

                    /**
                     * 判断参数 CdnStreamId 是否已赋值
                     * @return CdnStreamId 是否已赋值
                     * 
                     */
                    bool CdnStreamIdHasBeenSet() const;

                    /**
                     * 获取主监任务的webrtc协议播放地址。 
注：
1.该预览地址仅作为预览，不可分发。
2.webrtc播放地址需配合腾讯云快直播播放sdk使用。
                     * @return PgmWebRTCPlayUrl 主监任务的webrtc协议播放地址。 
注：
1.该预览地址仅作为预览，不可分发。
2.webrtc播放地址需配合腾讯云快直播播放sdk使用。
                     * 
                     */
                    std::string GetPgmWebRTCPlayUrl() const;

                    /**
                     * 判断参数 PgmWebRTCPlayUrl 是否已赋值
                     * @return PgmWebRTCPlayUrl 是否已赋值
                     * 
                     */
                    bool PgmWebRTCPlayUrlHasBeenSet() const;

                private:

                    /**
                     * 主监任务的rtmp协议预览地址。 
注：该地址仅供预览，不可分发。
                     */
                    std::string m_pgmPlayUrl;
                    bool m_pgmPlayUrlHasBeenSet;

                    /**
                     * 注：该字段已废弃，请结合腾讯云直播播放地址生成策略生成cdn播放地址
                     */
                    std::string m_cdnPlayUrl;
                    bool m_cdnPlayUrlHasBeenSet;

                    /**
                     * 主监任务在腾讯云直播侧的流ID。
                     */
                    std::string m_cdnStreamId;
                    bool m_cdnStreamIdHasBeenSet;

                    /**
                     * 主监任务的webrtc协议播放地址。 
注：
1.该预览地址仅作为预览，不可分发。
2.webrtc播放地址需配合腾讯云快直播播放sdk使用。
                     */
                    std::string m_pgmWebRTCPlayUrl;
                    bool m_pgmWebRTCPlayUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATECASTERPGMFROMPVWRESPONSE_H_
