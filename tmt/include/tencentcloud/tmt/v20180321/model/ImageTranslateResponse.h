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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATERESPONSE_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tmt/v20180321/model/ImageRecord.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * ImageTranslate返回参数结构体
                */
                class ImageTranslateResponse : public AbstractModel
                {
                public:
                    ImageTranslateResponse();
                    ~ImageTranslateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取请求的SessionUuid返回
                     * @return SessionUuid 请求的SessionUuid返回
                     * 
                     */
                    std::string GetSessionUuid() const;

                    /**
                     * 判断参数 SessionUuid 是否已赋值
                     * @return SessionUuid 是否已赋值
                     * 
                     */
                    bool SessionUuidHasBeenSet() const;

                    /**
                     * 获取源语言
                     * @return Source 源语言
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取目标语言
                     * @return Target 目标语言
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取图片翻译结果，翻译结果按识别的文本每一行独立翻译，后续会推出按段落划分并翻译的版本
                     * @return ImageRecord 图片翻译结果，翻译结果按识别的文本每一行独立翻译，后续会推出按段落划分并翻译的版本
                     * 
                     */
                    ImageRecord GetImageRecord() const;

                    /**
                     * 判断参数 ImageRecord 是否已赋值
                     * @return ImageRecord 是否已赋值
                     * 
                     */
                    bool ImageRecordHasBeenSet() const;

                private:

                    /**
                     * 请求的SessionUuid返回
                     */
                    std::string m_sessionUuid;
                    bool m_sessionUuidHasBeenSet;

                    /**
                     * 源语言
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 目标语言
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 图片翻译结果，翻译结果按识别的文本每一行独立翻译，后续会推出按段落划分并翻译的版本
                     */
                    ImageRecord m_imageRecord;
                    bool m_imageRecordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATERESPONSE_H_
