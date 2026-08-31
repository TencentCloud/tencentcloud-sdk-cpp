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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODUBBINGASYNCINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODUBBINGASYNCINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频配音任务输入。
                */
                class VideoDubbingAsyncInput : public AbstractModel
                {
                public:
                    VideoDubbingAsyncInput();
                    ~VideoDubbingAsyncInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输入视频Url</p>
                     * @return InputUrl <p>输入视频Url</p>
                     * 
                     */
                    std::string GetInputUrl() const;

                    /**
                     * 设置<p>输入视频Url</p>
                     * @param _inputUrl <p>输入视频Url</p>
                     * 
                     */
                    void SetInputUrl(const std::string& _inputUrl);

                    /**
                     * 判断参数 InputUrl 是否已赋值
                     * @return InputUrl 是否已赋值
                     * 
                     */
                    bool InputUrlHasBeenSet() const;

                    /**
                     * 获取<p>输入视频FileId</p>
                     * @return InputFileId <p>输入视频FileId</p>
                     * 
                     */
                    std::string GetInputFileId() const;

                    /**
                     * 设置<p>输入视频FileId</p>
                     * @param _inputFileId <p>输入视频FileId</p>
                     * 
                     */
                    void SetInputFileId(const std::string& _inputFileId);

                    /**
                     * 判断参数 InputFileId 是否已赋值
                     * @return InputFileId 是否已赋值
                     * 
                     */
                    bool InputFileIdHasBeenSet() const;

                    /**
                     * 获取<p>视频源语言，默认zh</p>
                     * @return SrcLanguage <p>视频源语言，默认zh</p>
                     * 
                     */
                    std::string GetSrcLanguage() const;

                    /**
                     * 设置<p>视频源语言，默认zh</p>
                     * @param _srcLanguage <p>视频源语言，默认zh</p>
                     * 
                     */
                    void SetSrcLanguage(const std::string& _srcLanguage);

                    /**
                     * 判断参数 SrcLanguage 是否已赋值
                     * @return SrcLanguage 是否已赋值
                     * 
                     */
                    bool SrcLanguageHasBeenSet() const;

                    /**
                     * 获取<p>视频目标语言，默认en</p>
                     * @return DstLanguage <p>视频目标语言，默认en</p>
                     * 
                     */
                    std::string GetDstLanguage() const;

                    /**
                     * 设置<p>视频目标语言，默认en</p>
                     * @param _dstLanguage <p>视频目标语言，默认en</p>
                     * 
                     */
                    void SetDstLanguage(const std::string& _dstLanguage);

                    /**
                     * 判断参数 DstLanguage 是否已赋值
                     * @return DstLanguage 是否已赋值
                     * 
                     */
                    bool DstLanguageHasBeenSet() const;

                    /**
                     * 获取<p>配音模型</p>
                     * @return Model <p>配音模型</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>配音模型</p>
                     * @param _model <p>配音模型</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                private:

                    /**
                     * <p>输入视频Url</p>
                     */
                    std::string m_inputUrl;
                    bool m_inputUrlHasBeenSet;

                    /**
                     * <p>输入视频FileId</p>
                     */
                    std::string m_inputFileId;
                    bool m_inputFileIdHasBeenSet;

                    /**
                     * <p>视频源语言，默认zh</p>
                     */
                    std::string m_srcLanguage;
                    bool m_srcLanguageHasBeenSet;

                    /**
                     * <p>视频目标语言，默认en</p>
                     */
                    std::string m_dstLanguage;
                    bool m_dstLanguageHasBeenSet;

                    /**
                     * <p>配音模型</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODUBBINGASYNCINPUT_H_
