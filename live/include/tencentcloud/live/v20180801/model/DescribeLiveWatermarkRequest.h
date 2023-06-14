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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEWATERMARKREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEWATERMARKREQUEST_H_

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
                * DescribeLiveWatermark请求参数结构体
                */
                class DescribeLiveWatermarkRequest : public AbstractModel
                {
                public:
                    DescribeLiveWatermarkRequest();
                    ~DescribeLiveWatermarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DescribeLiveWatermarks接口返回的水印 ID。
                     * @return WatermarkId DescribeLiveWatermarks接口返回的水印 ID。
                     * 
                     */
                    uint64_t GetWatermarkId() const;

                    /**
                     * 设置DescribeLiveWatermarks接口返回的水印 ID。
                     * @param _watermarkId DescribeLiveWatermarks接口返回的水印 ID。
                     * 
                     */
                    void SetWatermarkId(const uint64_t& _watermarkId);

                    /**
                     * 判断参数 WatermarkId 是否已赋值
                     * @return WatermarkId 是否已赋值
                     * 
                     */
                    bool WatermarkIdHasBeenSet() const;

                private:

                    /**
                     * DescribeLiveWatermarks接口返回的水印 ID。
                     */
                    uint64_t m_watermarkId;
                    bool m_watermarkIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEWATERMARKREQUEST_H_
