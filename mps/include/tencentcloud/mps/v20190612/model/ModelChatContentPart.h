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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODELCHATCONTENTPART_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODELCHATCONTENTPART_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ModelChatInputImage.h>
#include <tencentcloud/mps/v20190612/model/ModelChatInputVideo.h>
#include <tencentcloud/mps/v20190612/model/ModelChatInputAudio.h>
#include <tencentcloud/mps/v20190612/model/ModelChatInputFile.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 消息内容片段。
                */
                class ModelChatContentPart : public AbstractModel
                {
                public:
                    ModelChatContentPart();
                    ~ModelChatContentPart() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>内容类型</p><p>枚举值：</p><ul><li>text： 文本内容</li><li>input_image： 图片输入</li><li>input_video： 视频输入</li><li>input_audio： 音频输入</li><li>input_file： 文件输入</li></ul>
                     * @return Type <p>内容类型</p><p>枚举值：</p><ul><li>text： 文本内容</li><li>input_image： 图片输入</li><li>input_video： 视频输入</li><li>input_audio： 音频输入</li><li>input_file： 文件输入</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>内容类型</p><p>枚举值：</p><ul><li>text： 文本内容</li><li>input_image： 图片输入</li><li>input_video： 视频输入</li><li>input_audio： 音频输入</li><li>input_file： 文件输入</li></ul>
                     * @param _type <p>内容类型</p><p>枚举值：</p><ul><li>text： 文本内容</li><li>input_image： 图片输入</li><li>input_video： 视频输入</li><li>input_audio： 音频输入</li><li>input_file： 文件输入</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>文本消息</p><p>Type=text 时必填</p>
                     * @return Text <p>文本消息</p><p>Type=text 时必填</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>文本消息</p><p>Type=text 时必填</p>
                     * @param _text <p>文本消息</p><p>Type=text 时必填</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>图片输入</p><p>Type=input_image 时必填</p>
                     * @return InputImage <p>图片输入</p><p>Type=input_image 时必填</p>
                     * 
                     */
                    ModelChatInputImage GetInputImage() const;

                    /**
                     * 设置<p>图片输入</p><p>Type=input_image 时必填</p>
                     * @param _inputImage <p>图片输入</p><p>Type=input_image 时必填</p>
                     * 
                     */
                    void SetInputImage(const ModelChatInputImage& _inputImage);

                    /**
                     * 判断参数 InputImage 是否已赋值
                     * @return InputImage 是否已赋值
                     * 
                     */
                    bool InputImageHasBeenSet() const;

                    /**
                     * 获取<p>视频输入</p><p>Type=input_video 时必填</p>
                     * @return InputVideo <p>视频输入</p><p>Type=input_video 时必填</p>
                     * 
                     */
                    ModelChatInputVideo GetInputVideo() const;

                    /**
                     * 设置<p>视频输入</p><p>Type=input_video 时必填</p>
                     * @param _inputVideo <p>视频输入</p><p>Type=input_video 时必填</p>
                     * 
                     */
                    void SetInputVideo(const ModelChatInputVideo& _inputVideo);

                    /**
                     * 判断参数 InputVideo 是否已赋值
                     * @return InputVideo 是否已赋值
                     * 
                     */
                    bool InputVideoHasBeenSet() const;

                    /**
                     * 获取<p>音频输入</p><p>Type=input_audio 时必填</p>
                     * @return InputAudio <p>音频输入</p><p>Type=input_audio 时必填</p>
                     * 
                     */
                    ModelChatInputAudio GetInputAudio() const;

                    /**
                     * 设置<p>音频输入</p><p>Type=input_audio 时必填</p>
                     * @param _inputAudio <p>音频输入</p><p>Type=input_audio 时必填</p>
                     * 
                     */
                    void SetInputAudio(const ModelChatInputAudio& _inputAudio);

                    /**
                     * 判断参数 InputAudio 是否已赋值
                     * @return InputAudio 是否已赋值
                     * 
                     */
                    bool InputAudioHasBeenSet() const;

                    /**
                     * 获取<p>文件输入</p><p>Type=input_file 时必填</p>
                     * @return InputFile <p>文件输入</p><p>Type=input_file 时必填</p>
                     * 
                     */
                    ModelChatInputFile GetInputFile() const;

                    /**
                     * 设置<p>文件输入</p><p>Type=input_file 时必填</p>
                     * @param _inputFile <p>文件输入</p><p>Type=input_file 时必填</p>
                     * 
                     */
                    void SetInputFile(const ModelChatInputFile& _inputFile);

                    /**
                     * 判断参数 InputFile 是否已赋值
                     * @return InputFile 是否已赋值
                     * 
                     */
                    bool InputFileHasBeenSet() const;

                private:

                    /**
                     * <p>内容类型</p><p>枚举值：</p><ul><li>text： 文本内容</li><li>input_image： 图片输入</li><li>input_video： 视频输入</li><li>input_audio： 音频输入</li><li>input_file： 文件输入</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>文本消息</p><p>Type=text 时必填</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>图片输入</p><p>Type=input_image 时必填</p>
                     */
                    ModelChatInputImage m_inputImage;
                    bool m_inputImageHasBeenSet;

                    /**
                     * <p>视频输入</p><p>Type=input_video 时必填</p>
                     */
                    ModelChatInputVideo m_inputVideo;
                    bool m_inputVideoHasBeenSet;

                    /**
                     * <p>音频输入</p><p>Type=input_audio 时必填</p>
                     */
                    ModelChatInputAudio m_inputAudio;
                    bool m_inputAudioHasBeenSet;

                    /**
                     * <p>文件输入</p><p>Type=input_file 时必填</p>
                     */
                    ModelChatInputFile m_inputFile;
                    bool m_inputFileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODELCHATCONTENTPART_H_
