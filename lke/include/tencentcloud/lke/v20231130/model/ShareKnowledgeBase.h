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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_SHAREKNOWLEDGEBASE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_SHAREKNOWLEDGEBASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/SearchRange.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 共享知识库配置
                */
                class ShareKnowledgeBase : public AbstractModel
                {
                public:
                    ShareKnowledgeBase();
                    ~ShareKnowledgeBase() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取共享知识库ID
                     * @return KnowledgeBizId 共享知识库ID
                     * 
                     */
                    std::string GetKnowledgeBizId() const;

                    /**
                     * 设置共享知识库ID
                     * @param _knowledgeBizId 共享知识库ID
                     * 
                     */
                    void SetKnowledgeBizId(const std::string& _knowledgeBizId);

                    /**
                     * 判断参数 KnowledgeBizId 是否已赋值
                     * @return KnowledgeBizId 是否已赋值
                     * 
                     */
                    bool KnowledgeBizIdHasBeenSet() const;

                    /**
                     * 获取检索范围
                     * @return SearchRange 检索范围
                     * 
                     */
                    SearchRange GetSearchRange() const;

                    /**
                     * 设置检索范围
                     * @param _searchRange 检索范围
                     * 
                     */
                    void SetSearchRange(const SearchRange& _searchRange);

                    /**
                     * 判断参数 SearchRange 是否已赋值
                     * @return SearchRange 是否已赋值
                     * 
                     */
                    bool SearchRangeHasBeenSet() const;

                private:

                    /**
                     * 共享知识库ID
                     */
                    std::string m_knowledgeBizId;
                    bool m_knowledgeBizIdHasBeenSet;

                    /**
                     * 检索范围
                     */
                    SearchRange m_searchRange;
                    bool m_searchRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_SHAREKNOWLEDGEBASE_H_
