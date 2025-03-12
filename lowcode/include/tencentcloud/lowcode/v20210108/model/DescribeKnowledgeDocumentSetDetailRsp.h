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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEKNOWLEDGEDOCUMENTSETDETAILRSP_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEKNOWLEDGEDOCUMENTSETDETAILRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lowcode/v20210108/model/KnowledgeDocumentSet.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 上传知识库文档返回结果
                */
                class DescribeKnowledgeDocumentSetDetailRsp : public AbstractModel
                {
                public:
                    DescribeKnowledgeDocumentSetDetailRsp();
                    ~DescribeKnowledgeDocumentSetDetailRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取获取的数量。
                     * @return Count 获取的数量。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置获取的数量。
                     * @param _count 获取的数量。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取文档信息
                     * @return DocumentSet 文档信息
                     * 
                     */
                    KnowledgeDocumentSet GetDocumentSet() const;

                    /**
                     * 设置文档信息
                     * @param _documentSet 文档信息
                     * 
                     */
                    void SetDocumentSet(const KnowledgeDocumentSet& _documentSet);

                    /**
                     * 判断参数 DocumentSet 是否已赋值
                     * @return DocumentSet 是否已赋值
                     * 
                     */
                    bool DocumentSetHasBeenSet() const;

                private:

                    /**
                     * 获取的数量。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 文档信息
                     */
                    KnowledgeDocumentSet m_documentSet;
                    bool m_documentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEKNOWLEDGEDOCUMENTSETDETAILRSP_H_
