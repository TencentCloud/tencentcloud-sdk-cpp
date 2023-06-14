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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PORNCONFIGUREINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PORNCONFIGUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/PornImgReviewTemplateInfo.h>
#include <tencentcloud/mps/v20190612/model/PornAsrReviewTemplateInfo.h>
#include <tencentcloud/mps/v20190612/model/PornOcrReviewTemplateInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 鉴黄任务控制参数
                */
                class PornConfigureInfo : public AbstractModel
                {
                public:
                    PornConfigureInfo();
                    ~PornConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取画面鉴黄控制参数。
                     * @return ImgReviewInfo 画面鉴黄控制参数。
                     * 
                     */
                    PornImgReviewTemplateInfo GetImgReviewInfo() const;

                    /**
                     * 设置画面鉴黄控制参数。
                     * @param _imgReviewInfo 画面鉴黄控制参数。
                     * 
                     */
                    void SetImgReviewInfo(const PornImgReviewTemplateInfo& _imgReviewInfo);

                    /**
                     * 判断参数 ImgReviewInfo 是否已赋值
                     * @return ImgReviewInfo 是否已赋值
                     * 
                     */
                    bool ImgReviewInfoHasBeenSet() const;

                    /**
                     * 获取语音鉴黄控制参数。
                     * @return AsrReviewInfo 语音鉴黄控制参数。
                     * 
                     */
                    PornAsrReviewTemplateInfo GetAsrReviewInfo() const;

                    /**
                     * 设置语音鉴黄控制参数。
                     * @param _asrReviewInfo 语音鉴黄控制参数。
                     * 
                     */
                    void SetAsrReviewInfo(const PornAsrReviewTemplateInfo& _asrReviewInfo);

                    /**
                     * 判断参数 AsrReviewInfo 是否已赋值
                     * @return AsrReviewInfo 是否已赋值
                     * 
                     */
                    bool AsrReviewInfoHasBeenSet() const;

                    /**
                     * 获取文本鉴黄控制参数。
                     * @return OcrReviewInfo 文本鉴黄控制参数。
                     * 
                     */
                    PornOcrReviewTemplateInfo GetOcrReviewInfo() const;

                    /**
                     * 设置文本鉴黄控制参数。
                     * @param _ocrReviewInfo 文本鉴黄控制参数。
                     * 
                     */
                    void SetOcrReviewInfo(const PornOcrReviewTemplateInfo& _ocrReviewInfo);

                    /**
                     * 判断参数 OcrReviewInfo 是否已赋值
                     * @return OcrReviewInfo 是否已赋值
                     * 
                     */
                    bool OcrReviewInfoHasBeenSet() const;

                private:

                    /**
                     * 画面鉴黄控制参数。
                     */
                    PornImgReviewTemplateInfo m_imgReviewInfo;
                    bool m_imgReviewInfoHasBeenSet;

                    /**
                     * 语音鉴黄控制参数。
                     */
                    PornAsrReviewTemplateInfo m_asrReviewInfo;
                    bool m_asrReviewInfoHasBeenSet;

                    /**
                     * 文本鉴黄控制参数。
                     */
                    PornOcrReviewTemplateInfo m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PORNCONFIGUREINFO_H_
