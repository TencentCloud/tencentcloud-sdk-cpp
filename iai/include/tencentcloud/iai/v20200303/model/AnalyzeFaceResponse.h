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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_ANALYZEFACERESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_ANALYZEFACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/FaceShape.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * AnalyzeFace返回参数结构体
                */
                class AnalyzeFaceResponse : public AbstractModel
                {
                public:
                    AnalyzeFaceResponse();
                    ~AnalyzeFaceResponse() = default;
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
                     * 获取五官定位（人脸关键点）具体信息。
                     * @return FaceShapeSet 五官定位（人脸关键点）具体信息。
                     * 
                     */
                    std::vector<FaceShape> GetFaceShapeSet() const;

                    /**
                     * 判断参数 FaceShapeSet 是否已赋值
                     * @return FaceShapeSet 是否已赋值
                     * 
                     */
                    bool FaceShapeSetHasBeenSet() const;

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
                     * 五官定位（人脸关键点）具体信息。
                     */
                    std::vector<FaceShape> m_faceShapeSet;
                    bool m_faceShapeSetHasBeenSet;

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

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_ANALYZEFACERESPONSE_H_
