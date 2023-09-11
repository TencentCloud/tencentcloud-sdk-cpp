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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_DETECTFACERESPONSE_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_DETECTFACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20180301/model/FaceInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * DetectFace返回参数结构体
                */
                class DetectFaceResponse : public AbstractModel
                {
                public:
                    DetectFaceResponse();
                    ~DetectFaceResponse() = default;
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
                     * 获取人脸信息列表。包含人脸坐标信息、属性信息（若需要）、质量分信息（若需要）。
                     * @return FaceInfos 人脸信息列表。包含人脸坐标信息、属性信息（若需要）、质量分信息（若需要）。
                     * 
                     */
                    std::vector<FaceInfo> GetFaceInfos() const;

                    /**
                     * 判断参数 FaceInfos 是否已赋值
                     * @return FaceInfos 是否已赋值
                     * 
                     */
                    bool FaceInfosHasBeenSet() const;

                    /**
                     * 获取人脸识别服务所用的算法模型版本。
目前入参支持 “2.0”和“3.0“ 两个输入。
2020年4月2日开始，默认为“3.0”，之前使用过本接口的账号若未填写本参数默认为“2.0”。
2020年11月26日后开通服务的账号仅支持输入“3.0”。
不同算法模型版本对应的人脸识别算法不同，新版本的整体效果会优于旧版本，建议使用“3.0”版本。
                     * @return FaceModelVersion 人脸识别服务所用的算法模型版本。
目前入参支持 “2.0”和“3.0“ 两个输入。
2020年4月2日开始，默认为“3.0”，之前使用过本接口的账号若未填写本参数默认为“2.0”。
2020年11月26日后开通服务的账号仅支持输入“3.0”。
不同算法模型版本对应的人脸识别算法不同，新版本的整体效果会优于旧版本，建议使用“3.0”版本。
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
                     * 人脸信息列表。包含人脸坐标信息、属性信息（若需要）、质量分信息（若需要）。
                     */
                    std::vector<FaceInfo> m_faceInfos;
                    bool m_faceInfosHasBeenSet;

                    /**
                     * 人脸识别服务所用的算法模型版本。
目前入参支持 “2.0”和“3.0“ 两个输入。
2020年4月2日开始，默认为“3.0”，之前使用过本接口的账号若未填写本参数默认为“2.0”。
2020年11月26日后开通服务的账号仅支持输入“3.0”。
不同算法模型版本对应的人脸识别算法不同，新版本的整体效果会优于旧版本，建议使用“3.0”版本。
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_DETECTFACERESPONSE_H_
