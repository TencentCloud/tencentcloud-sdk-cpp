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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ADDONPARAMETER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ADDONPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AddOnImageInput.h>
#include <tencentcloud/mps/v20190612/model/ImageProcessOutputConfig.h>
#include <tencentcloud/mps/v20190612/model/ImageProcessPrompt.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 图片处理附加输入参数。
                */
                class AddOnParameter : public AbstractModel
                {
                public:
                    AddOnParameter();
                    ~AddOnParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取附加图片输入。
                     * @return ImageSet 附加图片输入。
                     * 
                     */
                    std::vector<AddOnImageInput> GetImageSet() const;

                    /**
                     * 设置附加图片输入。
                     * @param _imageSet 附加图片输入。
                     * 
                     */
                    void SetImageSet(const std::vector<AddOnImageInput>& _imageSet);

                    /**
                     * 判断参数 ImageSet 是否已赋值
                     * @return ImageSet 是否已赋值
                     * 
                     */
                    bool ImageSetHasBeenSet() const;

                    /**
                     * 获取图片处理输出配置。
                     * @return OutputConfig 图片处理输出配置。
                     * 
                     */
                    ImageProcessOutputConfig GetOutputConfig() const;

                    /**
                     * 设置图片处理输出配置。
                     * @param _outputConfig 图片处理输出配置。
                     * 
                     */
                    void SetOutputConfig(const ImageProcessOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取图片处理附加 prompt，只针对某些场景可用。
                     * @return ExtPrompt 图片处理附加 prompt，只针对某些场景可用。
                     * 
                     */
                    std::vector<ImageProcessPrompt> GetExtPrompt() const;

                    /**
                     * 设置图片处理附加 prompt，只针对某些场景可用。
                     * @param _extPrompt 图片处理附加 prompt，只针对某些场景可用。
                     * 
                     */
                    void SetExtPrompt(const std::vector<ImageProcessPrompt>& _extPrompt);

                    /**
                     * 判断参数 ExtPrompt 是否已赋值
                     * @return ExtPrompt 是否已赋值
                     * 
                     */
                    bool ExtPromptHasBeenSet() const;

                private:

                    /**
                     * 附加图片输入。
                     */
                    std::vector<AddOnImageInput> m_imageSet;
                    bool m_imageSetHasBeenSet;

                    /**
                     * 图片处理输出配置。
                     */
                    ImageProcessOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * 图片处理附加 prompt，只针对某些场景可用。
                     */
                    std::vector<ImageProcessPrompt> m_extPrompt;
                    bool m_extPromptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADDONPARAMETER_H_
