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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEWATERMARKSRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEWATERMARKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/WatermarkInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveWatermarks返回参数结构体
                */
                class DescribeLiveWatermarksResponse : public AbstractModel
                {
                public:
                    DescribeLiveWatermarksResponse();
                    ~DescribeLiveWatermarksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取水印总个数。
                     * @return TotalNum 水印总个数。
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取水印信息列表。
                     * @return WatermarkList 水印信息列表。
                     * 
                     */
                    std::vector<WatermarkInfo> GetWatermarkList() const;

                    /**
                     * 判断参数 WatermarkList 是否已赋值
                     * @return WatermarkList 是否已赋值
                     * 
                     */
                    bool WatermarkListHasBeenSet() const;

                private:

                    /**
                     * 水印总个数。
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 水印信息列表。
                     */
                    std::vector<WatermarkInfo> m_watermarkList;
                    bool m_watermarkListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEWATERMARKSRESPONSE_H_
