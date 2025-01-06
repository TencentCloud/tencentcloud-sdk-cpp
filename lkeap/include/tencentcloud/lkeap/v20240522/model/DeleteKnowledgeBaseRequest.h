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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_DELETEKNOWLEDGEBASEREQUEST_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_DELETEKNOWLEDGEBASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * DeleteKnowledgeBase请求参数结构体
                */
                class DeleteKnowledgeBaseRequest : public AbstractModel
                {
                public:
                    DeleteKnowledgeBaseRequest();
                    ~DeleteKnowledgeBaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取知识库ID
                     * @return KnowledgeBaseId 知识库ID
                     * 
                     */
                    std::string GetKnowledgeBaseId() const;

                    /**
                     * 设置知识库ID
                     * @param _knowledgeBaseId 知识库ID
                     * 
                     */
                    void SetKnowledgeBaseId(const std::string& _knowledgeBaseId);

                    /**
                     * 判断参数 KnowledgeBaseId 是否已赋值
                     * @return KnowledgeBaseId 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseIdHasBeenSet() const;

                private:

                    /**
                     * 知识库ID
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_DELETEKNOWLEDGEBASEREQUEST_H_
