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

#ifndef TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITHUNYUANTO3DPROJOBREQUEST_H_
#define TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITHUNYUANTO3DPROJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ai3d/v20250513/model/ViewImage.h>


namespace TencentCloud
{
    namespace Ai3d
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * SubmitHunyuanTo3DProJob请求参数结构体
                */
                class SubmitHunyuanTo3DProJobRequest : public AbstractModel
                {
                public:
                    SubmitHunyuanTo3DProJobRequest();
                    ~SubmitHunyuanTo3DProJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文生3D，3D内容的描述，中文正向提示词。
最多支持1024个 utf-8 字符。
文生3D, image、image_url和 prompt必填其一，且prompt和image/image_url不能同时存在。
                     * @return Prompt 文生3D，3D内容的描述，中文正向提示词。
最多支持1024个 utf-8 字符。
文生3D, image、image_url和 prompt必填其一，且prompt和image/image_url不能同时存在。
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置文生3D，3D内容的描述，中文正向提示词。
最多支持1024个 utf-8 字符。
文生3D, image、image_url和 prompt必填其一，且prompt和image/image_url不能同时存在。
                     * @param _prompt 文生3D，3D内容的描述，中文正向提示词。
最多支持1024个 utf-8 字符。
文生3D, image、image_url和 prompt必填其一，且prompt和image/image_url不能同时存在。
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取输入图 Base64 数据。
大小：单边分辨率要求不小于128，不大于5000。大小不超过8m（base64编码后会大30%左右，建议实际输入图片不超过6m）
格式：jpg，png，jpeg，webp。
ImageBase64、ImageUrl和 Prompt必填其一，且Prompt和ImageBase64/ImageUrl不能同时存在。
                     * @return ImageBase64 输入图 Base64 数据。
大小：单边分辨率要求不小于128，不大于5000。大小不超过8m（base64编码后会大30%左右，建议实际输入图片不超过6m）
格式：jpg，png，jpeg，webp。
ImageBase64、ImageUrl和 Prompt必填其一，且Prompt和ImageBase64/ImageUrl不能同时存在。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置输入图 Base64 数据。
大小：单边分辨率要求不小于128，不大于5000。大小不超过8m（base64编码后会大30%左右，建议实际输入图片不超过6m）
格式：jpg，png，jpeg，webp。
ImageBase64、ImageUrl和 Prompt必填其一，且Prompt和ImageBase64/ImageUrl不能同时存在。
                     * @param _imageBase64 输入图 Base64 数据。
大小：单边分辨率要求不小于128，不大于5000。大小不超过8m（base64编码后会大30%左右，建议实际输入图片不超过6m）
格式：jpg，png，jpeg，webp。
ImageBase64、ImageUrl和 Prompt必填其一，且Prompt和ImageBase64/ImageUrl不能同时存在。
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取输入图Url。
大小：单边分辨率要求不小于128，不大于5000。大小不超过8m（base64编码后会大30%左右，建议实际输入图片不超过6m）
格式：jpg，png，jpeg，webp。
ImageBase64/ImageUrl和 Prompt必填其一，且Prompt和ImageBase64/ImageUrl不能同时存在。
                     * @return ImageUrl 输入图Url。
大小：单边分辨率要求不小于128，不大于5000。大小不超过8m（base64编码后会大30%左右，建议实际输入图片不超过6m）
格式：jpg，png，jpeg，webp。
ImageBase64/ImageUrl和 Prompt必填其一，且Prompt和ImageBase64/ImageUrl不能同时存在。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置输入图Url。
大小：单边分辨率要求不小于128，不大于5000。大小不超过8m（base64编码后会大30%左右，建议实际输入图片不超过6m）
格式：jpg，png，jpeg，webp。
ImageBase64/ImageUrl和 Prompt必填其一，且Prompt和ImageBase64/ImageUrl不能同时存在。
                     * @param _imageUrl 输入图Url。
大小：单边分辨率要求不小于128，不大于5000。大小不超过8m（base64编码后会大30%左右，建议实际输入图片不超过6m）
格式：jpg，png，jpeg，webp。
ImageBase64/ImageUrl和 Prompt必填其一，且Prompt和ImageBase64/ImageUrl不能同时存在。
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取多视角的模型图片，视角参考值：
left：左视图；
right：右视图；
back：后视图；

每个视角仅限制一张图片。
●图片大小限制：编码后大小不可超过8M。
●图片分辨率限制：单边分辨率小于5000且大于128。
●支持图片格式：支持jpg或png
                     * @return MultiViewImages 多视角的模型图片，视角参考值：
left：左视图；
right：右视图；
back：后视图；

每个视角仅限制一张图片。
●图片大小限制：编码后大小不可超过8M。
●图片分辨率限制：单边分辨率小于5000且大于128。
●支持图片格式：支持jpg或png
                     * 
                     */
                    std::vector<ViewImage> GetMultiViewImages() const;

                    /**
                     * 设置多视角的模型图片，视角参考值：
left：左视图；
right：右视图；
back：后视图；

每个视角仅限制一张图片。
●图片大小限制：编码后大小不可超过8M。
●图片分辨率限制：单边分辨率小于5000且大于128。
●支持图片格式：支持jpg或png
                     * @param _multiViewImages 多视角的模型图片，视角参考值：
left：左视图；
right：右视图；
back：后视图；

每个视角仅限制一张图片。
●图片大小限制：编码后大小不可超过8M。
●图片分辨率限制：单边分辨率小于5000且大于128。
●支持图片格式：支持jpg或png
                     * 
                     */
                    void SetMultiViewImages(const std::vector<ViewImage>& _multiViewImages);

                    /**
                     * 判断参数 MultiViewImages 是否已赋值
                     * @return MultiViewImages 是否已赋值
                     * 
                     */
                    bool MultiViewImagesHasBeenSet() const;

                    /**
                     * 获取是否开启 PBR材质生成，默认 false。
                     * @return EnablePBR 是否开启 PBR材质生成，默认 false。
                     * 
                     */
                    bool GetEnablePBR() const;

                    /**
                     * 设置是否开启 PBR材质生成，默认 false。
                     * @param _enablePBR 是否开启 PBR材质生成，默认 false。
                     * 
                     */
                    void SetEnablePBR(const bool& _enablePBR);

                    /**
                     * 判断参数 EnablePBR 是否已赋值
                     * @return EnablePBR 是否已赋值
                     * 
                     */
                    bool EnablePBRHasBeenSet() const;

                    /**
                     * 获取生成3D模型的面数，默认值为500000。
可支持生成面数范围，参考值：40000-500000。
                     * @return FaceCount 生成3D模型的面数，默认值为500000。
可支持生成面数范围，参考值：40000-500000。
                     * 
                     */
                    int64_t GetFaceCount() const;

                    /**
                     * 设置生成3D模型的面数，默认值为500000。
可支持生成面数范围，参考值：40000-500000。
                     * @param _faceCount 生成3D模型的面数，默认值为500000。
可支持生成面数范围，参考值：40000-500000。
                     * 
                     */
                    void SetFaceCount(const int64_t& _faceCount);

                    /**
                     * 判断参数 FaceCount 是否已赋值
                     * @return FaceCount 是否已赋值
                     * 
                     */
                    bool FaceCountHasBeenSet() const;

                    /**
                     * 获取生成任务类型，默认Normal，参考值：
Normal：可生成带纹理的几何模型。
LowPoly：可生成智能减面后的模型。
Geometry：可生成不带纹理的几何模型（白模），选择此任务时，EnablePBR参数不生效。
Sketch：可输入草图或线稿图生成模型。
                     * @return GenerateType 生成任务类型，默认Normal，参考值：
Normal：可生成带纹理的几何模型。
LowPoly：可生成智能减面后的模型。
Geometry：可生成不带纹理的几何模型（白模），选择此任务时，EnablePBR参数不生效。
Sketch：可输入草图或线稿图生成模型。
                     * 
                     */
                    std::string GetGenerateType() const;

                    /**
                     * 设置生成任务类型，默认Normal，参考值：
Normal：可生成带纹理的几何模型。
LowPoly：可生成智能减面后的模型。
Geometry：可生成不带纹理的几何模型（白模），选择此任务时，EnablePBR参数不生效。
Sketch：可输入草图或线稿图生成模型。
                     * @param _generateType 生成任务类型，默认Normal，参考值：
Normal：可生成带纹理的几何模型。
LowPoly：可生成智能减面后的模型。
Geometry：可生成不带纹理的几何模型（白模），选择此任务时，EnablePBR参数不生效。
Sketch：可输入草图或线稿图生成模型。
                     * 
                     */
                    void SetGenerateType(const std::string& _generateType);

                    /**
                     * 判断参数 GenerateType 是否已赋值
                     * @return GenerateType 是否已赋值
                     * 
                     */
                    bool GenerateTypeHasBeenSet() const;

                private:

                    /**
                     * 文生3D，3D内容的描述，中文正向提示词。
最多支持1024个 utf-8 字符。
文生3D, image、image_url和 prompt必填其一，且prompt和image/image_url不能同时存在。
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 输入图 Base64 数据。
大小：单边分辨率要求不小于128，不大于5000。大小不超过8m（base64编码后会大30%左右，建议实际输入图片不超过6m）
格式：jpg，png，jpeg，webp。
ImageBase64、ImageUrl和 Prompt必填其一，且Prompt和ImageBase64/ImageUrl不能同时存在。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 输入图Url。
大小：单边分辨率要求不小于128，不大于5000。大小不超过8m（base64编码后会大30%左右，建议实际输入图片不超过6m）
格式：jpg，png，jpeg，webp。
ImageBase64/ImageUrl和 Prompt必填其一，且Prompt和ImageBase64/ImageUrl不能同时存在。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 多视角的模型图片，视角参考值：
left：左视图；
right：右视图；
back：后视图；

每个视角仅限制一张图片。
●图片大小限制：编码后大小不可超过8M。
●图片分辨率限制：单边分辨率小于5000且大于128。
●支持图片格式：支持jpg或png
                     */
                    std::vector<ViewImage> m_multiViewImages;
                    bool m_multiViewImagesHasBeenSet;

                    /**
                     * 是否开启 PBR材质生成，默认 false。
                     */
                    bool m_enablePBR;
                    bool m_enablePBRHasBeenSet;

                    /**
                     * 生成3D模型的面数，默认值为500000。
可支持生成面数范围，参考值：40000-500000。
                     */
                    int64_t m_faceCount;
                    bool m_faceCountHasBeenSet;

                    /**
                     * 生成任务类型，默认Normal，参考值：
Normal：可生成带纹理的几何模型。
LowPoly：可生成智能减面后的模型。
Geometry：可生成不带纹理的几何模型（白模），选择此任务时，EnablePBR参数不生效。
Sketch：可输入草图或线稿图生成模型。
                     */
                    std::string m_generateType;
                    bool m_generateTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITHUNYUANTO3DPROJOBREQUEST_H_
