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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEEMBEDWEBURLRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEEMBEDWEBURLRESPONSE_H_

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
                * CreateEmbedWebUrl返回参数结构体
                */
                class CreateEmbedWebUrlResponse : public AbstractModel
                {
                public:
                    CreateEmbedWebUrlResponse();
                    ~CreateEmbedWebUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取嵌入的web链接，有效期：5分钟
链接仅能使用一次
建议：每次都用接口生成链接，保证链接的有效性
<br/>EmbedType=PREVIEW_CC_FLOW，该url为h5链接
                     * @return WebUrl 嵌入的web链接，有效期：5分钟
链接仅能使用一次
建议：每次都用接口生成链接，保证链接的有效性
<br/>EmbedType=PREVIEW_CC_FLOW，该url为h5链接
                     * 
                     */
                    std::string GetWebUrl() const;

                    /**
                     * 判断参数 WebUrl 是否已赋值
                     * @return WebUrl 是否已赋值
                     * 
                     */
                    bool WebUrlHasBeenSet() const;

                private:

                    /**
                     * 嵌入的web链接，有效期：5分钟
链接仅能使用一次
建议：每次都用接口生成链接，保证链接的有效性
<br/>EmbedType=PREVIEW_CC_FLOW，该url为h5链接
                     */
                    std::string m_webUrl;
                    bool m_webUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEEMBEDWEBURLRESPONSE_H_
