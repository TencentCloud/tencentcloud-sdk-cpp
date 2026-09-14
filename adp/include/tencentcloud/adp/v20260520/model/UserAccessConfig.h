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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_USERACCESSCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_USERACCESSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 用户访问配置
                */
                class UserAccessConfig : public AbstractModel
                {
                public:
                    UserAccessConfig();
                    ~UserAccessConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>客户自定义知识 ID</p>
                     * @return CustomerKnowledgeId <p>客户自定义知识 ID</p>
                     * 
                     */
                    std::string GetCustomerKnowledgeId() const;

                    /**
                     * 设置<p>客户自定义知识 ID</p>
                     * @param _customerKnowledgeId <p>客户自定义知识 ID</p>
                     * 
                     */
                    void SetCustomerKnowledgeId(const std::string& _customerKnowledgeId);

                    /**
                     * 判断参数 CustomerKnowledgeId 是否已赋值
                     * @return CustomerKnowledgeId 是否已赋值
                     * 
                     */
                    bool CustomerKnowledgeIdHasBeenSet() const;

                    /**
                     * 获取<p>文档是否公开</p>
                     * @return IsPublic <p>文档是否公开</p>
                     * 
                     */
                    bool GetIsPublic() const;

                    /**
                     * 设置<p>文档是否公开</p>
                     * @param _isPublic <p>文档是否公开</p>
                     * 
                     */
                    void SetIsPublic(const bool& _isPublic);

                    /**
                     * 判断参数 IsPublic 是否已赋值
                     * @return IsPublic 是否已赋值
                     * 
                     */
                    bool IsPublicHasBeenSet() const;

                private:

                    /**
                     * <p>客户自定义知识 ID</p>
                     */
                    std::string m_customerKnowledgeId;
                    bool m_customerKnowledgeIdHasBeenSet;

                    /**
                     * <p>文档是否公开</p>
                     */
                    bool m_isPublic;
                    bool m_isPublicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_USERACCESSCONFIG_H_
