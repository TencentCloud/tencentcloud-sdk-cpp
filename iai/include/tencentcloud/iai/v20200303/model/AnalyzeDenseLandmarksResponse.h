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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_ANALYZEDENSELANDMARKSRESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_ANALYZEDENSELANDMARKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/DenseFaceShape.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * AnalyzeDenseLandmarks返回参数结构体
                */
                class AnalyzeDenseLandmarksResponse : public AbstractModel
                {
                public:
                    AnalyzeDenseLandmarksResponse();
                    ~AnalyzeDenseLandmarksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取请求的图片宽度。
                     * @return ImageWidth 请求的图片宽度。
                     * 
                     */
                    int64_t GetImageWidth() const;

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
                    int64_t GetImageHeight() const;

                    /**
                     * 判断参数 ImageHeight 是否已赋值
                     * @return ImageHeight 是否已赋值
                     * 
                     */
                    bool ImageHeightHasBeenSet() const;

                    /**
                     * 获取稠密人脸关键点具体信息。
                     * @return DenseFaceShapeSet 稠密人脸关键点具体信息。
                     * 
                     */
                    std::vector<DenseFaceShape> GetDenseFaceShapeSet() const;

                    /**
                     * 判断参数 DenseFaceShapeSet 是否已赋值
                     * @return DenseFaceShapeSet 是否已赋值
                     * 
                     */
                    bool DenseFaceShapeSetHasBeenSet() const;

                    /**
                     * 获取人脸识别服务所用的算法模型版本。本接口仅支持 “3.0“ 输入。
                     * @return FaceModelVersion 人脸识别服务所用的算法模型版本。本接口仅支持 “3.0“ 输入。
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
                    int64_t m_imageWidth;
                    bool m_imageWidthHasBeenSet;

                    /**
                     * 请求的图片高度。
                     */
                    int64_t m_imageHeight;
                    bool m_imageHeightHasBeenSet;

                    /**
                     * 稠密人脸关键点具体信息。
                     */
                    std::vector<DenseFaceShape> m_denseFaceShapeSet;
                    bool m_denseFaceShapeSetHasBeenSet;

                    /**
                     * 人脸识别服务所用的算法模型版本。本接口仅支持 “3.0“ 输入。
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_ANALYZEDENSELANDMARKSRESPONSE_H_
