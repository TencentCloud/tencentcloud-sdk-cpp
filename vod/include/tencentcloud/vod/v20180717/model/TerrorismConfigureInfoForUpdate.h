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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMCONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMCONFIGUREINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TerrorismImgReviewTemplateInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/TerrorismOcrReviewTemplateInfoForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 鉴别涉及令人不安全的信息的任务控制参数。
                */
                class TerrorismConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    TerrorismConfigureInfoForUpdate();
                    ~TerrorismConfigureInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取画面鉴别涉及令人不安全的信息的任务控制参数。
                     * @return ImgReviewInfo 画面鉴别涉及令人不安全的信息的任务控制参数。
                     * 
                     */
                    TerrorismImgReviewTemplateInfoForUpdate GetImgReviewInfo() const;

                    /**
                     * 设置画面鉴别涉及令人不安全的信息的任务控制参数。
                     * @param _imgReviewInfo 画面鉴别涉及令人不安全的信息的任务控制参数。
                     * 
                     */
                    void SetImgReviewInfo(const TerrorismImgReviewTemplateInfoForUpdate& _imgReviewInfo);

                    /**
                     * 判断参数 ImgReviewInfo 是否已赋值
                     * @return ImgReviewInfo 是否已赋值
                     * 
                     */
                    bool ImgReviewInfoHasBeenSet() const;

                    /**
                     * 获取文本鉴别涉及令人不安全的信息的任务控制参数。
                     * @return OcrReviewInfo 文本鉴别涉及令人不安全的信息的任务控制参数。
                     * 
                     */
                    TerrorismOcrReviewTemplateInfoForUpdate GetOcrReviewInfo() const;

                    /**
                     * 设置文本鉴别涉及令人不安全的信息的任务控制参数。
                     * @param _ocrReviewInfo 文本鉴别涉及令人不安全的信息的任务控制参数。
                     * 
                     */
                    void SetOcrReviewInfo(const TerrorismOcrReviewTemplateInfoForUpdate& _ocrReviewInfo);

                    /**
                     * 判断参数 OcrReviewInfo 是否已赋值
                     * @return OcrReviewInfo 是否已赋值
                     * 
                     */
                    bool OcrReviewInfoHasBeenSet() const;

                private:

                    /**
                     * 画面鉴别涉及令人不安全的信息的任务控制参数。
                     */
                    TerrorismImgReviewTemplateInfoForUpdate m_imgReviewInfo;
                    bool m_imgReviewInfoHasBeenSet;

                    /**
                     * 文本鉴别涉及令人不安全的信息的任务控制参数。
                     */
                    TerrorismOcrReviewTemplateInfoForUpdate m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMCONFIGUREINFOFORUPDATE_H_
