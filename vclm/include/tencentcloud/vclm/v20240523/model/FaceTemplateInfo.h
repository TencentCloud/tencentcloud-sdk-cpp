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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_FACETEMPLATEINFO_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_FACETEMPLATEINFO_H_

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
                * 模板信息
                */
                class FaceTemplateInfo : public AbstractModel
                {
                public:
                    FaceTemplateInfo();
                    ~FaceTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色ID。需要与MergeInfos中的TemplateFaceID依次对应。需要填数字，建议填"0"、"1"，依次累加。
                     * @return TemplateFaceID 角色ID。需要与MergeInfos中的TemplateFaceID依次对应。需要填数字，建议填"0"、"1"，依次累加。
                     * 
                     */
                    std::string GetTemplateFaceID() const;

                    /**
                     * 设置角色ID。需要与MergeInfos中的TemplateFaceID依次对应。需要填数字，建议填"0"、"1"，依次累加。
                     * @param _templateFaceID 角色ID。需要与MergeInfos中的TemplateFaceID依次对应。需要填数字，建议填"0"、"1"，依次累加。
                     * 
                     */
                    void SetTemplateFaceID(const std::string& _templateFaceID);

                    /**
                     * 判断参数 TemplateFaceID 是否已赋值
                     * @return TemplateFaceID 是否已赋值
                     * 
                     */
                    bool TemplateFaceIDHasBeenSet() const;

                    /**
                     * 获取视频模板中要替换的人脸图片
                     * @return TemplateFaceImage 视频模板中要替换的人脸图片
                     * 
                     */
                    Image GetTemplateFaceImage() const;

                    /**
                     * 设置视频模板中要替换的人脸图片
                     * @param _templateFaceImage 视频模板中要替换的人脸图片
                     * 
                     */
                    void SetTemplateFaceImage(const Image& _templateFaceImage);

                    /**
                     * 判断参数 TemplateFaceImage 是否已赋值
                     * @return TemplateFaceImage 是否已赋值
                     * 
                     */
                    bool TemplateFaceImageHasBeenSet() const;

                    /**
                     * 获取视频模板中要替换的人脸图片的人脸框。不填默认取要替换的人脸图片中最大人脸。
                     * @return TemplateFaceRect 视频模板中要替换的人脸图片的人脸框。不填默认取要替换的人脸图片中最大人脸。
                     * 
                     */
                    FaceRect GetTemplateFaceRect() const;

                    /**
                     * 设置视频模板中要替换的人脸图片的人脸框。不填默认取要替换的人脸图片中最大人脸。
                     * @param _templateFaceRect 视频模板中要替换的人脸图片的人脸框。不填默认取要替换的人脸图片中最大人脸。
                     * 
                     */
                    void SetTemplateFaceRect(const FaceRect& _templateFaceRect);

                    /**
                     * 判断参数 TemplateFaceRect 是否已赋值
                     * @return TemplateFaceRect 是否已赋值
                     * 
                     */
                    bool TemplateFaceRectHasBeenSet() const;

                private:

                    /**
                     * 角色ID。需要与MergeInfos中的TemplateFaceID依次对应。需要填数字，建议填"0"、"1"，依次累加。
                     */
                    std::string m_templateFaceID;
                    bool m_templateFaceIDHasBeenSet;

                    /**
                     * 视频模板中要替换的人脸图片
                     */
                    Image m_templateFaceImage;
                    bool m_templateFaceImageHasBeenSet;

                    /**
                     * 视频模板中要替换的人脸图片的人脸框。不填默认取要替换的人脸图片中最大人脸。
                     */
                    FaceRect m_templateFaceRect;
                    bool m_templateFaceRectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_FACETEMPLATEINFO_H_
