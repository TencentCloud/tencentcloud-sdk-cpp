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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEKNOWLEDGEDOCUMENTSETLISTRSP_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEKNOWLEDGEDOCUMENTSETLISTRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lowcode/v20210108/model/QureyKnowledgeDocumentSet.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 删除文档出参
                */
                class DescribeKnowledgeDocumentSetListRsp : public AbstractModel
                {
                public:
                    DescribeKnowledgeDocumentSetListRsp();
                    ~DescribeKnowledgeDocumentSetListRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件集
                     * @return DocumentSets 文件集
                     * 
                     */
                    std::vector<QureyKnowledgeDocumentSet> GetDocumentSets() const;

                    /**
                     * 设置文件集
                     * @param _documentSets 文件集
                     * 
                     */
                    void SetDocumentSets(const std::vector<QureyKnowledgeDocumentSet>& _documentSets);

                    /**
                     * 判断参数 DocumentSets 是否已赋值
                     * @return DocumentSets 是否已赋值
                     * 
                     */
                    bool DocumentSetsHasBeenSet() const;

                    /**
                     * 获取条数
                     * @return Count 条数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置条数
                     * @param _count 条数
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 文件集
                     */
                    std::vector<QureyKnowledgeDocumentSet> m_documentSets;
                    bool m_documentSetsHasBeenSet;

                    /**
                     * 条数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEKNOWLEDGEDOCUMENTSETLISTRSP_H_
