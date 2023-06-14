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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEIMAGEREVIEWUSAGEDATARESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEIMAGEREVIEWUSAGEDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImageReviewUsageDataItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeImageReviewUsageData返回参数结构体
                */
                class DescribeImageReviewUsageDataResponse : public AbstractModel
                {
                public:
                    DescribeImageReviewUsageDataResponse();
                    ~DescribeImageReviewUsageDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取图片审核次数统计数据，展示查询时间范围内的图片审核次数的概览数据。
                     * @return ImageReviewUsageDataSet 图片审核次数统计数据，展示查询时间范围内的图片审核次数的概览数据。
                     * 
                     */
                    std::vector<ImageReviewUsageDataItem> GetImageReviewUsageDataSet() const;

                    /**
                     * 判断参数 ImageReviewUsageDataSet 是否已赋值
                     * @return ImageReviewUsageDataSet 是否已赋值
                     * 
                     */
                    bool ImageReviewUsageDataSetHasBeenSet() const;

                private:

                    /**
                     * 图片审核次数统计数据，展示查询时间范围内的图片审核次数的概览数据。
                     */
                    std::vector<ImageReviewUsageDataItem> m_imageReviewUsageDataSet;
                    bool m_imageReviewUsageDataSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEIMAGEREVIEWUSAGEDATARESPONSE_H_
