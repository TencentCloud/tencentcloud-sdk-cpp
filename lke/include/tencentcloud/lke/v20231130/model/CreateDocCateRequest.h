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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREATEDOCCATEREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREATEDOCCATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * CreateDocCate请求参数结构体
                */
                class CreateDocCateRequest : public AbstractModel
                {
                public:
                    CreateDocCateRequest();
                    ~CreateDocCateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return BotBizId 应用ID
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置应用ID
                     * @param _botBizId 应用ID
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取父级业务ID
                     * @return ParentBizId 父级业务ID
                     * 
                     */
                    std::string GetParentBizId() const;

                    /**
                     * 设置父级业务ID
                     * @param _parentBizId 父级业务ID
                     * 
                     */
                    void SetParentBizId(const std::string& _parentBizId);

                    /**
                     * 判断参数 ParentBizId 是否已赋值
                     * @return ParentBizId 是否已赋值
                     * 
                     */
                    bool ParentBizIdHasBeenSet() const;

                    /**
                     * 获取分类名称

                     * @return Name 分类名称

                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分类名称

                     * @param _name 分类名称

                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 父级业务ID
                     */
                    std::string m_parentBizId;
                    bool m_parentBizIdHasBeenSet;

                    /**
                     * 分类名称

                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATEDOCCATEREQUEST_H_
