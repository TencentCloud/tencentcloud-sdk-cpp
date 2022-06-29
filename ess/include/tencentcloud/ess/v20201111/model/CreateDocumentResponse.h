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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDOCUMENTRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDOCUMENTRESPONSE_H_

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
                * CreateDocument返回参数结构体
                */
                class CreateDocumentResponse : public AbstractModel
                {
                public:
                    CreateDocumentResponse();
                    ~CreateDocumentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的电子文档ID
                     * @return DocumentId 返回的电子文档ID
                     */
                    std::string GetDocumentId() const;

                    /**
                     * 判断参数 DocumentId 是否已赋值
                     * @return DocumentId 是否已赋值
                     */
                    bool DocumentIdHasBeenSet() const;

                    /**
                     * 获取返回合同文件的预览地址 5分钟内有效。仅当NeedPreview为true 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PreviewFileUrl 返回合同文件的预览地址 5分钟内有效。仅当NeedPreview为true 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPreviewFileUrl() const;

                    /**
                     * 判断参数 PreviewFileUrl 是否已赋值
                     * @return PreviewFileUrl 是否已赋值
                     */
                    bool PreviewFileUrlHasBeenSet() const;

                private:

                    /**
                     * 返回的电子文档ID
                     */
                    std::string m_documentId;
                    bool m_documentIdHasBeenSet;

                    /**
                     * 返回合同文件的预览地址 5分钟内有效。仅当NeedPreview为true 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_previewFileUrl;
                    bool m_previewFileUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDOCUMENTRESPONSE_H_
