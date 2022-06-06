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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEEXTERNALTRTCMEASURERESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEEXTERNALTRTCMEASURERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/SdkAppIdNewTrtcTimeUsage.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeExternalTrtcMeasure返回参数结构体
                */
                class DescribeExternalTrtcMeasureResponse : public AbstractModel
                {
                public:
                    DescribeExternalTrtcMeasureResponse();
                    ~DescribeExternalTrtcMeasureResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取每个SdkAppId的时长使用信息
                     * @return SdkAppIdTrtrTimeUsages 每个SdkAppId的时长使用信息
                     */
                    std::vector<SdkAppIdNewTrtcTimeUsage> GetSdkAppIdTrtrTimeUsages() const;

                    /**
                     * 判断参数 SdkAppIdTrtrTimeUsages 是否已赋值
                     * @return SdkAppIdTrtrTimeUsages 是否已赋值
                     */
                    bool SdkAppIdTrtrTimeUsagesHasBeenSet() const;

                    /**
                     * 获取主播的用量统计方式。取值"InRoomTime":房间时长,"SubscribeTime":"订阅时长","Bandwidth":带宽
                     * @return AnchorUsageMode 主播的用量统计方式。取值"InRoomTime":房间时长,"SubscribeTime":"订阅时长","Bandwidth":带宽
                     */
                    std::string GetAnchorUsageMode() const;

                    /**
                     * 判断参数 AnchorUsageMode 是否已赋值
                     * @return AnchorUsageMode 是否已赋值
                     */
                    bool AnchorUsageModeHasBeenSet() const;

                    /**
                     * 获取观众的用量统计方式。取值"InRoomTime":在房间时长,"SubscribeTime":"订阅时长","Bandwidth":带宽,"MergeWithAnchor":"不区分麦上麦下"
                     * @return AudienceUsageMode 观众的用量统计方式。取值"InRoomTime":在房间时长,"SubscribeTime":"订阅时长","Bandwidth":带宽,"MergeWithAnchor":"不区分麦上麦下"
                     */
                    std::string GetAudienceUsageMode() const;

                    /**
                     * 判断参数 AudienceUsageMode 是否已赋值
                     * @return AudienceUsageMode 是否已赋值
                     */
                    bool AudienceUsageModeHasBeenSet() const;

                private:

                    /**
                     * 每个SdkAppId的时长使用信息
                     */
                    std::vector<SdkAppIdNewTrtcTimeUsage> m_sdkAppIdTrtrTimeUsages;
                    bool m_sdkAppIdTrtrTimeUsagesHasBeenSet;

                    /**
                     * 主播的用量统计方式。取值"InRoomTime":房间时长,"SubscribeTime":"订阅时长","Bandwidth":带宽
                     */
                    std::string m_anchorUsageMode;
                    bool m_anchorUsageModeHasBeenSet;

                    /**
                     * 观众的用量统计方式。取值"InRoomTime":在房间时长,"SubscribeTime":"订阅时长","Bandwidth":带宽,"MergeWithAnchor":"不区分麦上麦下"
                     */
                    std::string m_audienceUsageMode;
                    bool m_audienceUsageModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEEXTERNALTRTCMEASURERESPONSE_H_
