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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_FACEINFO_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_FACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aiart/v20221229/model/Rect.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            namespace Model
            {
                /**
                * 融合信息
                */
                class FaceInfo : public AbstractModel
                {
                public:
                    FaceInfo();
                    ~FaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户图 URL 列表
                     * @return ImageUrls 用户图 URL 列表
                     * 
                     */
                    std::vector<std::string> GetImageUrls() const;

                    /**
                     * 设置用户图 URL 列表
                     * @param _imageUrls 用户图 URL 列表
                     * 
                     */
                    void SetImageUrls(const std::vector<std::string>& _imageUrls);

                    /**
                     * 判断参数 ImageUrls 是否已赋值
                     * @return ImageUrls 是否已赋值
                     * 
                     */
                    bool ImageUrlsHasBeenSet() const;

                    /**
                     * 获取模版图人脸坐标。
                     * @return TemplateFaceRect 模版图人脸坐标。
                     * 
                     */
                    Rect GetTemplateFaceRect() const;

                    /**
                     * 设置模版图人脸坐标。
                     * @param _templateFaceRect 模版图人脸坐标。
                     * 
                     */
                    void SetTemplateFaceRect(const Rect& _templateFaceRect);

                    /**
                     * 判断参数 TemplateFaceRect 是否已赋值
                     * @return TemplateFaceRect 是否已赋值
                     * 
                     */
                    bool TemplateFaceRectHasBeenSet() const;

                private:

                    /**
                     * 用户图 URL 列表
                     */
                    std::vector<std::string> m_imageUrls;
                    bool m_imageUrlsHasBeenSet;

                    /**
                     * 模版图人脸坐标。
                     */
                    Rect m_templateFaceRect;
                    bool m_templateFaceRectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_FACEINFO_H_
