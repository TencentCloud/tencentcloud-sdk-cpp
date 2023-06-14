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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_QRCODEIMGSIZE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_QRCODEIMGSIZE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 图片大小
                */
                class QrcodeImgSize : public AbstractModel
                {
                public:
                    QrcodeImgSize();
                    ~QrcodeImgSize() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取宽
                     * @return Wide 宽
                     * 
                     */
                    int64_t GetWide() const;

                    /**
                     * 设置宽
                     * @param _wide 宽
                     * 
                     */
                    void SetWide(const int64_t& _wide);

                    /**
                     * 判断参数 Wide 是否已赋值
                     * @return Wide 是否已赋值
                     * 
                     */
                    bool WideHasBeenSet() const;

                    /**
                     * 获取高
                     * @return High 高
                     * 
                     */
                    int64_t GetHigh() const;

                    /**
                     * 设置高
                     * @param _high 高
                     * 
                     */
                    void SetHigh(const int64_t& _high);

                    /**
                     * 判断参数 High 是否已赋值
                     * @return High 是否已赋值
                     * 
                     */
                    bool HighHasBeenSet() const;

                private:

                    /**
                     * 宽
                     */
                    int64_t m_wide;
                    bool m_wideHasBeenSet;

                    /**
                     * 高
                     */
                    int64_t m_high;
                    bool m_highHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_QRCODEIMGSIZE_H_
