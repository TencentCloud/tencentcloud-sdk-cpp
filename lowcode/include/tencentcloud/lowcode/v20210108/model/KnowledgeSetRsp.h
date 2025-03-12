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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_KNOWLEDGESETRSP_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_KNOWLEDGESETRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lowcode/v20210108/model/KnowledgeSet.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 查询知识库列表返回
                */
                class KnowledgeSetRsp : public AbstractModel
                {
                public:
                    KnowledgeSetRsp();
                    ~KnowledgeSetRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置总数
                     * @param _total 总数
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取知识库列表
                     * @return KnowledgeSets 知识库列表
                     * 
                     */
                    std::vector<KnowledgeSet> GetKnowledgeSets() const;

                    /**
                     * 设置知识库列表
                     * @param _knowledgeSets 知识库列表
                     * 
                     */
                    void SetKnowledgeSets(const std::vector<KnowledgeSet>& _knowledgeSets);

                    /**
                     * 判断参数 KnowledgeSets 是否已赋值
                     * @return KnowledgeSets 是否已赋值
                     * 
                     */
                    bool KnowledgeSetsHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 知识库列表
                     */
                    std::vector<KnowledgeSet> m_knowledgeSets;
                    bool m_knowledgeSetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_KNOWLEDGESETRSP_H_
