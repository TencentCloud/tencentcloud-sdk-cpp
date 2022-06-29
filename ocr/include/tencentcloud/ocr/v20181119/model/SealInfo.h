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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SEALINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SEALINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Rect.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 印章信息
                */
                class SealInfo : public AbstractModel
                {
                public:
                    SealInfo();
                    ~SealInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取印章主体内容
                     * @return SealBody 印章主体内容
                     */
                    std::string GetSealBody() const;

                    /**
                     * 设置印章主体内容
                     * @param SealBody 印章主体内容
                     */
                    void SetSealBody(const std::string& _sealBody);

                    /**
                     * 判断参数 SealBody 是否已赋值
                     * @return SealBody 是否已赋值
                     */
                    bool SealBodyHasBeenSet() const;

                    /**
                     * 获取印章坐标
                     * @return Location 印章坐标
                     */
                    Rect GetLocation() const;

                    /**
                     * 设置印章坐标
                     * @param Location 印章坐标
                     */
                    void SetLocation(const Rect& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取印章其它文本内容
                     * @return OtherTexts 印章其它文本内容
                     */
                    std::vector<std::string> GetOtherTexts() const;

                    /**
                     * 设置印章其它文本内容
                     * @param OtherTexts 印章其它文本内容
                     */
                    void SetOtherTexts(const std::vector<std::string>& _otherTexts);

                    /**
                     * 判断参数 OtherTexts 是否已赋值
                     * @return OtherTexts 是否已赋值
                     */
                    bool OtherTextsHasBeenSet() const;

                private:

                    /**
                     * 印章主体内容
                     */
                    std::string m_sealBody;
                    bool m_sealBodyHasBeenSet;

                    /**
                     * 印章坐标
                     */
                    Rect m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 印章其它文本内容
                     */
                    std::vector<std::string> m_otherTexts;
                    bool m_otherTextsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SEALINFO_H_
