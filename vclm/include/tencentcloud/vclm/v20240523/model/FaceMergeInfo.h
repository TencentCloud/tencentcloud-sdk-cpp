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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_FACEMERGEINFO_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_FACEMERGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vclm/v20240523/model/Image.h>
#include <tencentcloud/vclm/v20240523/model/FaceRect.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * 人脸图片和待被融合的素材模板图的人脸位置信息。
                */
                class FaceMergeInfo : public AbstractModel
                {
                public:
                    FaceMergeInfo();
                    ~FaceMergeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取融合图片
                     * @return MergeFaceImage 融合图片
                     * 
                     */
                    Image GetMergeFaceImage() const;

                    /**
                     * 设置融合图片
                     * @param _mergeFaceImage 融合图片
                     * 
                     */
                    void SetMergeFaceImage(const Image& _mergeFaceImage);

                    /**
                     * 判断参数 MergeFaceImage 是否已赋值
                     * @return MergeFaceImage 是否已赋值
                     * 
                     */
                    bool MergeFaceImageHasBeenSet() const;

                    /**
                     * 获取上传的图片人脸位置信息（人脸框）
Width、Height >= 30。
                     * @return MergeFaceRect 上传的图片人脸位置信息（人脸框）
Width、Height >= 30。
                     * 
                     */
                    FaceRect GetMergeFaceRect() const;

                    /**
                     * 设置上传的图片人脸位置信息（人脸框）
Width、Height >= 30。
                     * @param _mergeFaceRect 上传的图片人脸位置信息（人脸框）
Width、Height >= 30。
                     * 
                     */
                    void SetMergeFaceRect(const FaceRect& _mergeFaceRect);

                    /**
                     * 判断参数 MergeFaceRect 是否已赋值
                     * @return MergeFaceRect 是否已赋值
                     * 
                     */
                    bool MergeFaceRectHasBeenSet() const;

                    /**
                     * 获取素材人脸ID，不填默认取上传图片中最大人脸。
                     * @return TemplateFaceID 素材人脸ID，不填默认取上传图片中最大人脸。
                     * 
                     */
                    std::string GetTemplateFaceID() const;

                    /**
                     * 设置素材人脸ID，不填默认取上传图片中最大人脸。
                     * @param _templateFaceID 素材人脸ID，不填默认取上传图片中最大人脸。
                     * 
                     */
                    void SetTemplateFaceID(const std::string& _templateFaceID);

                    /**
                     * 判断参数 TemplateFaceID 是否已赋值
                     * @return TemplateFaceID 是否已赋值
                     * 
                     */
                    bool TemplateFaceIDHasBeenSet() const;

                private:

                    /**
                     * 融合图片
                     */
                    Image m_mergeFaceImage;
                    bool m_mergeFaceImageHasBeenSet;

                    /**
                     * 上传的图片人脸位置信息（人脸框）
Width、Height >= 30。
                     */
                    FaceRect m_mergeFaceRect;
                    bool m_mergeFaceRectHasBeenSet;

                    /**
                     * 素材人脸ID，不填默认取上传图片中最大人脸。
                     */
                    std::string m_templateFaceID;
                    bool m_templateFaceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_FACEMERGEINFO_H_
