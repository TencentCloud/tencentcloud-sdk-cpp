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

#ifndef TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITTEXTURETO3DJOBREQUEST_H_
#define TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITTEXTURETO3DJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ai3d/v20250513/model/File3D.h>
#include <tencentcloud/ai3d/v20250513/model/Image.h>


namespace TencentCloud
{
    namespace Ai3d
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * SubmitTextureTo3DJob请求参数结构体
                */
                class SubmitTextureTo3DJobRequest : public AbstractModel
                {
                public:
                    SubmitTextureTo3DJobRequest();
                    ~SubmitTextureTo3DJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>源3D模型文件。<br>Type可选值：OBJ，GLB</p>
                     * @return File3D <p>源3D模型文件。<br>Type可选值：OBJ，GLB</p>
                     * 
                     */
                    File3D GetFile3D() const;

                    /**
                     * 设置<p>源3D模型文件。<br>Type可选值：OBJ，GLB</p>
                     * @param _file3D <p>源3D模型文件。<br>Type可选值：OBJ，GLB</p>
                     * 
                     */
                    void SetFile3D(const File3D& _file3D);

                    /**
                     * 判断参数 File3D 是否已赋值
                     * @return File3D 是否已赋值
                     * 
                     */
                    bool File3DHasBeenSet() const;

                    /**
                     * 获取<p>文生3D，3D内容的描述，中文正向提示词。<br>最多支持200个 utf-8 字符。<br>文生3D, image、image_url和 prompt必填其一，且prompt和image/image_url不能同时存在。</p>
                     * @return Prompt <p>文生3D，3D内容的描述，中文正向提示词。<br>最多支持200个 utf-8 字符。<br>文生3D, image、image_url和 prompt必填其一，且prompt和image/image_url不能同时存在。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>文生3D，3D内容的描述，中文正向提示词。<br>最多支持200个 utf-8 字符。<br>文生3D, image、image_url和 prompt必填其一，且prompt和image/image_url不能同时存在。</p>
                     * @param _prompt <p>文生3D，3D内容的描述，中文正向提示词。<br>最多支持200个 utf-8 字符。<br>文生3D, image、image_url和 prompt必填其一，且prompt和image/image_url不能同时存在。</p>
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
                     * 获取<p>3D模型纹理参考图 Base64 数据和参考图 Url。</p><ul><li>Base64 和 Url 必须提供一个，如果都提供以 Url 为准。</li><li>图片限制：单边分辨率小于4096且大于128，转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png。</li></ul>
                     * @return Image <p>3D模型纹理参考图 Base64 数据和参考图 Url。</p><ul><li>Base64 和 Url 必须提供一个，如果都提供以 Url 为准。</li><li>图片限制：单边分辨率小于4096且大于128，转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png。</li></ul>
                     * 
                     */
                    Image GetImage() const;

                    /**
                     * 设置<p>3D模型纹理参考图 Base64 数据和参考图 Url。</p><ul><li>Base64 和 Url 必须提供一个，如果都提供以 Url 为准。</li><li>图片限制：单边分辨率小于4096且大于128，转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png。</li></ul>
                     * @param _image <p>3D模型纹理参考图 Base64 数据和参考图 Url。</p><ul><li>Base64 和 Url 必须提供一个，如果都提供以 Url 为准。</li><li>图片限制：单边分辨率小于4096且大于128，转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png。</li></ul>
                     * 
                     */
                    void SetImage(const Image& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取<p>是否开启 PBR材质生成，默认 false。</p>
                     * @return EnablePBR <p>是否开启 PBR材质生成，默认 false。</p>
                     * 
                     */
                    bool GetEnablePBR() const;

                    /**
                     * 设置<p>是否开启 PBR材质生成，默认 false。</p>
                     * @param _enablePBR <p>是否开启 PBR材质生成，默认 false。</p>
                     * 
                     */
                    void SetEnablePBR(const bool& _enablePBR);

                    /**
                     * 判断参数 EnablePBR 是否已赋值
                     * @return EnablePBR 是否已赋值
                     * 
                     */
                    bool EnablePBRHasBeenSet() const;

                private:

                    /**
                     * <p>源3D模型文件。<br>Type可选值：OBJ，GLB</p>
                     */
                    File3D m_file3D;
                    bool m_file3DHasBeenSet;

                    /**
                     * <p>文生3D，3D内容的描述，中文正向提示词。<br>最多支持200个 utf-8 字符。<br>文生3D, image、image_url和 prompt必填其一，且prompt和image/image_url不能同时存在。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>3D模型纹理参考图 Base64 数据和参考图 Url。</p><ul><li>Base64 和 Url 必须提供一个，如果都提供以 Url 为准。</li><li>图片限制：单边分辨率小于4096且大于128，转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png。</li></ul>
                     */
                    Image m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>是否开启 PBR材质生成，默认 false。</p>
                     */
                    bool m_enablePBR;
                    bool m_enablePBRHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITTEXTURETO3DJOBREQUEST_H_
