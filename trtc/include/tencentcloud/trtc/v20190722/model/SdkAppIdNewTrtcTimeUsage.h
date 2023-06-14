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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SDKAPPIDNEWTRTCTIMEUSAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SDKAPPIDNEWTRTCTIMEUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TrtcTimeNewUsage.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * SdkAppId级别实时音视频的用量数据
                */
                class SdkAppIdNewTrtcTimeUsage : public AbstractModel
                {
                public:
                    SdkAppIdNewTrtcTimeUsage();
                    ~SdkAppIdNewTrtcTimeUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SdkAppId的值。
                     * @return SdkAppId SdkAppId的值。
                     * 
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置SdkAppId的值。
                     * @param _sdkAppId SdkAppId的值。
                     * 
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取统计的时间点数据。
                     * @return TrtcTimeUsages 统计的时间点数据。
                     * 
                     */
                    std::vector<TrtcTimeNewUsage> GetTrtcTimeUsages() const;

                    /**
                     * 设置统计的时间点数据。
                     * @param _trtcTimeUsages 统计的时间点数据。
                     * 
                     */
                    void SetTrtcTimeUsages(const std::vector<TrtcTimeNewUsage>& _trtcTimeUsages);

                    /**
                     * 判断参数 TrtcTimeUsages 是否已赋值
                     * @return TrtcTimeUsages 是否已赋值
                     * 
                     */
                    bool TrtcTimeUsagesHasBeenSet() const;

                    /**
                     * 获取统计的麦下用量的时间点数据。
                     * @return AudienceTrtcTimeUsages 统计的麦下用量的时间点数据。
                     * 
                     */
                    std::vector<TrtcTimeNewUsage> GetAudienceTrtcTimeUsages() const;

                    /**
                     * 设置统计的麦下用量的时间点数据。
                     * @param _audienceTrtcTimeUsages 统计的麦下用量的时间点数据。
                     * 
                     */
                    void SetAudienceTrtcTimeUsages(const std::vector<TrtcTimeNewUsage>& _audienceTrtcTimeUsages);

                    /**
                     * 判断参数 AudienceTrtcTimeUsages 是否已赋值
                     * @return AudienceTrtcTimeUsages 是否已赋值
                     * 
                     */
                    bool AudienceTrtcTimeUsagesHasBeenSet() const;

                private:

                    /**
                     * SdkAppId的值。
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 统计的时间点数据。
                     */
                    std::vector<TrtcTimeNewUsage> m_trtcTimeUsages;
                    bool m_trtcTimeUsagesHasBeenSet;

                    /**
                     * 统计的麦下用量的时间点数据。
                     */
                    std::vector<TrtcTimeNewUsage> m_audienceTrtcTimeUsages;
                    bool m_audienceTrtcTimeUsagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SDKAPPIDNEWTRTCTIMEUSAGE_H_
