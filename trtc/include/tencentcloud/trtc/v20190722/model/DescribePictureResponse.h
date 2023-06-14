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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEPICTURERESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEPICTURERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/PictureInfo.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribePicture返回参数结构体
                */
                class DescribePictureResponse : public AbstractModel
                {
                public:
                    DescribePictureResponse();
                    ~DescribePictureResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的图片记录数
                     * @return Total 返回的图片记录数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取图片信息列表
                     * @return PictureInfo 图片信息列表
                     * 
                     */
                    std::vector<PictureInfo> GetPictureInfo() const;

                    /**
                     * 判断参数 PictureInfo 是否已赋值
                     * @return PictureInfo 是否已赋值
                     * 
                     */
                    bool PictureInfoHasBeenSet() const;

                private:

                    /**
                     * 返回的图片记录数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 图片信息列表
                     */
                    std::vector<PictureInfo> m_pictureInfo;
                    bool m_pictureInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEPICTURERESPONSE_H_
