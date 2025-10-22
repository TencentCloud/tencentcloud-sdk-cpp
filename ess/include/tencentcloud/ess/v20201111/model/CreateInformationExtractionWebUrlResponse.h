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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINFORMATIONEXTRACTIONWEBURLRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINFORMATIONEXTRACTIONWEBURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateInformationExtractionWebUrl返回参数结构体
                */
                class CreateInformationExtractionWebUrlResponse : public AbstractModel
                {
                public:
                    CreateInformationExtractionWebUrlResponse();
                    ~CreateInformationExtractionWebUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取合同信息提取嵌入式web页面链接。

注意：`链接有效期为5分钟，且链接仅能使用一次。`
                     * @return Url 合同信息提取嵌入式web页面链接。

注意：`链接有效期为5分钟，且链接仅能使用一次。`
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 合同信息提取嵌入式web页面链接。

注意：`链接有效期为5分钟，且链接仅能使用一次。`
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINFORMATIONEXTRACTIONWEBURLRESPONSE_H_
