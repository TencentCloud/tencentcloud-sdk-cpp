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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACEATTRIBUTESRESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACEATTRIBUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/FaceDetailInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * DetectFaceAttributes返回参数结构体
                */
                class DetectFaceAttributesResponse : public AbstractModel
                {
                public:
                    DetectFaceAttributesResponse();
                    ~DetectFaceAttributesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取请求的图片宽度。
                     * @return ImageWidth 请求的图片宽度。
                     * 
                     */
                    uint64_t GetImageWidth() const;

                    /**
                     * 判断参数 ImageWidth 是否已赋值
                     * @return ImageWidth 是否已赋值
                     * 
                     */
                    bool ImageWidthHasBeenSet() const;

                    /**
                     * 获取请求的图片高度。
                     * @return ImageHeight 请求的图片高度。
                     * 
                     */
                    uint64_t GetImageHeight() const;

                    /**
                     * 判断参数 ImageHeight 是否已赋值
                     * @return ImageHeight 是否已赋值
                     * 
                     */
                    bool ImageHeightHasBeenSet() const;

                    /**
                     * 获取人脸信息列表。
                     * @return FaceDetailInfos 人脸信息列表。
                     * 
                     */
                    std::vector<FaceDetailInfo> GetFaceDetailInfos() const;

                    /**
                     * 判断参数 FaceDetailInfos 是否已赋值
                     * @return FaceDetailInfos 是否已赋值
                     * 
                     */
                    bool FaceDetailInfosHasBeenSet() const;

                    /**
                     * 获取人脸识别所用的算法模型版本。
                     * @return FaceModelVersion 人脸识别所用的算法模型版本。
                     * 
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     * 
                     */
                    bool FaceModelVersionHasBeenSet() const;

                private:

                    /**
                     * 请求的图片宽度。
                     */
                    uint64_t m_imageWidth;
                    bool m_imageWidthHasBeenSet;

                    /**
                     * 请求的图片高度。
                     */
                    uint64_t m_imageHeight;
                    bool m_imageHeightHasBeenSet;

                    /**
                     * 人脸信息列表。
                     */
                    std::vector<FaceDetailInfo> m_faceDetailInfos;
                    bool m_faceDetailInfosHasBeenSet;

                    /**
                     * 人脸识别所用的算法模型版本。
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACEATTRIBUTESRESPONSE_H_
