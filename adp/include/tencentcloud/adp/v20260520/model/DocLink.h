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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DOCLINK_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DOCLINK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/DocExternalLink.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 文档链接
                */
                class DocLink : public AbstractModel
                {
                public:
                    DocLink();
                    ~DocLink() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>COS 链接地址，可用作预览和下载</p>
                     * @return CosUrl <p>COS 链接地址，可用作预览和下载</p>
                     * 
                     */
                    std::string GetCosUrl() const;

                    /**
                     * 设置<p>COS 链接地址，可用作预览和下载</p>
                     * @param _cosUrl <p>COS 链接地址，可用作预览和下载</p>
                     * 
                     */
                    void SetCosUrl(const std::string& _cosUrl);

                    /**
                     * 判断参数 CosUrl 是否已赋值
                     * @return CosUrl 是否已赋值
                     * 
                     */
                    bool CosUrlHasBeenSet() const;

                    /**
                     * 获取<p>外部链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalLink <p>外部链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DocExternalLink GetExternalLink() const;

                    /**
                     * 设置<p>外部链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalLink <p>外部链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalLink(const DocExternalLink& _externalLink);

                    /**
                     * 判断参数 ExternalLink 是否已赋值
                     * @return ExternalLink 是否已赋值
                     * 
                     */
                    bool ExternalLinkHasBeenSet() const;

                private:

                    /**
                     * <p>COS 链接地址，可用作预览和下载</p>
                     */
                    std::string m_cosUrl;
                    bool m_cosUrlHasBeenSet;

                    /**
                     * <p>外部链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DocExternalLink m_externalLink;
                    bool m_externalLinkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DOCLINK_H_
