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

#ifndef TENCENTCLOUD_FACEFUSION_V20181201_MODEL_FACEFUSIONRESPONSE_H_
#define TENCENTCLOUD_FACEFUSION_V20181201_MODEL_FACEFUSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20181201/model/FuseFaceReviewResult.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20181201
        {
            namespace Model
            {
                /**
                * FaceFusion返回参数结构体
                */
                class FaceFusionResponse : public AbstractModel
                {
                public:
                    FaceFusionResponse();
                    ~FaceFusionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取RspImgType 为 url 时，返回结果的 url， RspImgType 为 base64 时返回 base64 数据。
                     * @return Image RspImgType 为 url 时，返回结果的 url， RspImgType 为 base64 时返回 base64 数据。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取不适宜内容识别结果
                     * @return ReviewResultSet 不适宜内容识别结果
                     * 
                     */
                    std::vector<FuseFaceReviewResult> GetReviewResultSet() const;

                    /**
                     * 判断参数 ReviewResultSet 是否已赋值
                     * @return ReviewResultSet 是否已赋值
                     * 
                     */
                    bool ReviewResultSetHasBeenSet() const;

                private:

                    /**
                     * RspImgType 为 url 时，返回结果的 url， RspImgType 为 base64 时返回 base64 数据。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 不适宜内容识别结果
                     */
                    std::vector<FuseFaceReviewResult> m_reviewResultSet;
                    bool m_reviewResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20181201_MODEL_FACEFUSIONRESPONSE_H_
