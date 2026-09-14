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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_IMPORTDOCLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_IMPORTDOCLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/DocImportSpec.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ImportDocList请求参数结构体
                */
                class ImportDocListRequest : public AbstractModel
                {
                public:
                    ImportDocListRequest();
                    ~ImportDocListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待导入文档列表（数量：1~20）</p>
                     * @return DocList <p>待导入文档列表（数量：1~20）</p>
                     * 
                     */
                    std::vector<DocImportSpec> GetDocList() const;

                    /**
                     * 设置<p>待导入文档列表（数量：1~20）</p>
                     * @param _docList <p>待导入文档列表（数量：1~20）</p>
                     * 
                     */
                    void SetDocList(const std::vector<DocImportSpec>& _docList);

                    /**
                     * 判断参数 DocList 是否已赋值
                     * @return DocList 是否已赋值
                     * 
                     */
                    bool DocListHasBeenSet() const;

                    /**
                     * 获取<p>知识库 ID</p>
                     * @return KbId <p>知识库 ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>知识库 ID</p>
                     * @param _kbId <p>知识库 ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                private:

                    /**
                     * <p>待导入文档列表（数量：1~20）</p>
                     */
                    std::vector<DocImportSpec> m_docList;
                    bool m_docListHasBeenSet;

                    /**
                     * <p>知识库 ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_IMPORTDOCLISTREQUEST_H_
