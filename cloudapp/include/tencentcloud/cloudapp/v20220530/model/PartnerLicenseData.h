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

#ifndef TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_PARTNERLICENSEDATA_H_
#define TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_PARTNERLICENSEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudapp
    {
        namespace V20220530
        {
            namespace Model
            {
                /**
                * License 内容信息
                */
                class PartnerLicenseData : public AbstractModel
                {
                public:
                    PartnerLicenseData();
                    ~PartnerLicenseData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>License 文本内容。可传入密钥、证书等文本型 License 内容，二进制内容请进行 base64 编码</p>
                     * @return Text <p>License 文本内容。可传入密钥、证书等文本型 License 内容，二进制内容请进行 base64 编码</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>License 文本内容。可传入密钥、证书等文本型 License 内容，二进制内容请进行 base64 编码</p>
                     * @param _text <p>License 文本内容。可传入密钥、证书等文本型 License 内容，二进制内容请进行 base64 编码</p>
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
                     * 获取<p>License 的额外信息，JSON 字符串格式</p>
                     * @return ExtraData <p>License 的额外信息，JSON 字符串格式</p>
                     * 
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置<p>License 的额外信息，JSON 字符串格式</p>
                     * @param _extraData <p>License 的额外信息，JSON 字符串格式</p>
                     * 
                     */
                    void SetExtraData(const std::string& _extraData);

                    /**
                     * 判断参数 ExtraData 是否已赋值
                     * @return ExtraData 是否已赋值
                     * 
                     */
                    bool ExtraDataHasBeenSet() const;

                private:

                    /**
                     * <p>License 文本内容。可传入密钥、证书等文本型 License 内容，二进制内容请进行 base64 编码</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>License 的额外信息，JSON 字符串格式</p>
                     */
                    std::string m_extraData;
                    bool m_extraDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_PARTNERLICENSEDATA_H_
