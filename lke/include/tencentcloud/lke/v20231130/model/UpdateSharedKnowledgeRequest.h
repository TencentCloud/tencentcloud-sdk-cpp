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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_UPDATESHAREDKNOWLEDGEREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_UPDATESHAREDKNOWLEDGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeUpdateInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * UpdateSharedKnowledge请求参数结构体
                */
                class UpdateSharedKnowledgeRequest : public AbstractModel
                {
                public:
                    UpdateSharedKnowledgeRequest();
                    ~UpdateSharedKnowledgeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取共享知识库业务ID
                     * @return KnowledgeBizId 共享知识库业务ID
                     * 
                     */
                    std::string GetKnowledgeBizId() const;

                    /**
                     * 设置共享知识库业务ID
                     * @param _knowledgeBizId 共享知识库业务ID
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
                     * 获取共享知识库更新信息
                     * @return Info 共享知识库更新信息
                     * 
                     */
                    KnowledgeUpdateInfo GetInfo() const;

                    /**
                     * 设置共享知识库更新信息
                     * @param _info 共享知识库更新信息
                     * 
                     */
                    void SetInfo(const KnowledgeUpdateInfo& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * 共享知识库业务ID
                     */
                    std::string m_knowledgeBizId;
                    bool m_knowledgeBizIdHasBeenSet;

                    /**
                     * 共享知识库更新信息
                     */
                    KnowledgeUpdateInfo m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_UPDATESHAREDKNOWLEDGEREQUEST_H_
