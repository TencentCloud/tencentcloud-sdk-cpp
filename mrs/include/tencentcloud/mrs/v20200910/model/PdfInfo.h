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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PDFINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PDFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检报告PDF信息
                */
                class PdfInfo : public AbstractModel
                {
                public:
                    PdfInfo();
                    ~PdfInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取pdf文件url链接(暂不支持)
                     * @return Url pdf文件url链接(暂不支持)
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置pdf文件url链接(暂不支持)
                     * @param _url pdf文件url链接(暂不支持)
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取pdf文件base64编码字符串
                     * @return Base64 pdf文件base64编码字符串
                     * 
                     */
                    std::string GetBase64() const;

                    /**
                     * 设置pdf文件base64编码字符串
                     * @param _base64 pdf文件base64编码字符串
                     * 
                     */
                    void SetBase64(const std::string& _base64);

                    /**
                     * 判断参数 Base64 是否已赋值
                     * @return Base64 是否已赋值
                     * 
                     */
                    bool Base64HasBeenSet() const;

                private:

                    /**
                     * pdf文件url链接(暂不支持)
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * pdf文件base64编码字符串
                     */
                    std::string m_base64;
                    bool m_base64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PDFINFO_H_
