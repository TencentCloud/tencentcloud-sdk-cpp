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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEVIDEOENCODINGPRESETSRESPONSE_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEVIDEOENCODINGPRESETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/VideoEncodingPreset.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * DescribeVideoEncodingPresets返回参数结构体
                */
                class DescribeVideoEncodingPresetsResponse : public AbstractModel
                {
                public:
                    DescribeVideoEncodingPresetsResponse();
                    ~DescribeVideoEncodingPresetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的编码配置总个数。
                     * @return TotalCount 符合条件的编码配置总个数。
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
                     * 获取视频编码配置信息。
                     * @return VideoEncodingPresetSet 视频编码配置信息。
                     * 
                     */
                    std::vector<VideoEncodingPreset> GetVideoEncodingPresetSet() const;

                    /**
                     * 判断参数 VideoEncodingPresetSet 是否已赋值
                     * @return VideoEncodingPresetSet 是否已赋值
                     * 
                     */
                    bool VideoEncodingPresetSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的编码配置总个数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 视频编码配置信息。
                     */
                    std::vector<VideoEncodingPreset> m_videoEncodingPresetSet;
                    bool m_videoEncodingPresetSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEVIDEOENCODINGPRESETSRESPONSE_H_
