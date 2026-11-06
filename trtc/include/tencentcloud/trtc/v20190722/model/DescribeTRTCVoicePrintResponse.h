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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCVOICEPRINTRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCVOICEPRINTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TRTCVoicePrintItem.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeTRTCVoicePrint返回参数结构体
                */
                class DescribeTRTCVoicePrintResponse : public AbstractModel
                {
                public:
                    DescribeTRTCVoicePrintResponse();
                    ~DescribeTRTCVoicePrintResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前 (AppId, SdkAppId) 下的声纹总数（仅计活跃状态）
                     * @return TotalCount 当前 (AppId, SdkAppId) 下的声纹总数（仅计活跃状态）
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取声纹条目列表，元素为 TRTCVoicePrintItem 结构：{ VoicePrintId:string, SpeakerId:string, CreateTime:string(ISO8601), UpdateTime:string(ISO8601) }。
                     * @return VoicePrintList 声纹条目列表，元素为 TRTCVoicePrintItem 结构：{ VoicePrintId:string, SpeakerId:string, CreateTime:string(ISO8601), UpdateTime:string(ISO8601) }。
                     * 
                     */
                    std::vector<TRTCVoicePrintItem> GetVoicePrintList() const;

                    /**
                     * 判断参数 VoicePrintList 是否已赋值
                     * @return VoicePrintList 是否已赋值
                     * 
                     */
                    bool VoicePrintListHasBeenSet() const;

                    /**
                     * 获取结果描述，成功时为 query voiceprint list successfully
                     * @return Message 结果描述，成功时为 query voiceprint list successfully
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 当前 (AppId, SdkAppId) 下的声纹总数（仅计活跃状态）
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 声纹条目列表，元素为 TRTCVoicePrintItem 结构：{ VoicePrintId:string, SpeakerId:string, CreateTime:string(ISO8601), UpdateTime:string(ISO8601) }。
                     */
                    std::vector<TRTCVoicePrintItem> m_voicePrintList;
                    bool m_voicePrintListHasBeenSet;

                    /**
                     * 结果描述，成功时为 query voiceprint list successfully
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCVOICEPRINTRESPONSE_H_
