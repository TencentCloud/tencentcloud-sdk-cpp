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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_GETINPUTTEMPLATEFILERESPONSE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_GETINPUTTEMPLATEFILERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * GetInputTemplateFile返回参数结构体
                */
                class GetInputTemplateFileResponse : public AbstractModel
                {
                public:
                    GetInputTemplateFileResponse();
                    ~GetInputTemplateFileResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>COS签名url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosSignedUrl <p>COS签名url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosSignedUrl() const;

                    /**
                     * 判断参数 CosSignedUrl 是否已赋值
                     * @return CosSignedUrl 是否已赋值
                     * 
                     */
                    bool CosSignedUrlHasBeenSet() const;

                    /**
                     * 获取<p>模板内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content <p>模板内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * <p>COS签名url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosSignedUrl;
                    bool m_cosSignedUrlHasBeenSet;

                    /**
                     * <p>模板内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_GETINPUTTEMPLATEFILERESPONSE_H_
