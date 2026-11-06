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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DELETETRTCVOICEPRINTREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DELETETRTCVOICEPRINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DeleteTRTCVoicePrint请求参数结构体
                */
                class DeleteTRTCVoicePrintRequest : public AbstractModel
                {
                public:
                    DeleteTRTCVoicePrintRequest();
                    ~DeleteTRTCVoicePrintRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待删除的声纹 ID（由 RegisterTRTCVoicePrint返回）。删除为软删，按 (AppId, SdkAppId, VoicePrintId) 做数据隔离。
                     * @return VoicePrintId 待删除的声纹 ID（由 RegisterTRTCVoicePrint返回）。删除为软删，按 (AppId, SdkAppId, VoicePrintId) 做数据隔离。
                     * 
                     */
                    std::string GetVoicePrintId() const;

                    /**
                     * 设置待删除的声纹 ID（由 RegisterTRTCVoicePrint返回）。删除为软删，按 (AppId, SdkAppId, VoicePrintId) 做数据隔离。
                     * @param _voicePrintId 待删除的声纹 ID（由 RegisterTRTCVoicePrint返回）。删除为软删，按 (AppId, SdkAppId, VoicePrintId) 做数据隔离。
                     * 
                     */
                    void SetVoicePrintId(const std::string& _voicePrintId);

                    /**
                     * 判断参数 VoicePrintId 是否已赋值
                     * @return VoicePrintId 是否已赋值
                     * 
                     */
                    bool VoicePrintIdHasBeenSet() const;

                    /**
                     * 获取SdkappId
                     * @return SdkAppId SdkappId
                     * 
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置SdkappId
                     * @param _sdkAppId SdkappId
                     * 
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                private:

                    /**
                     * 待删除的声纹 ID（由 RegisterTRTCVoicePrint返回）。删除为软删，按 (AppId, SdkAppId, VoicePrintId) 做数据隔离。
                     */
                    std::string m_voicePrintId;
                    bool m_voicePrintIdHasBeenSet;

                    /**
                     * SdkappId
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DELETETRTCVOICEPRINTREQUEST_H_
