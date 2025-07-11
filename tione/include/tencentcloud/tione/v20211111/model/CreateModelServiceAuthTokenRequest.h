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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEMODELSERVICEAUTHTOKENREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEMODELSERVICEAUTHTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * CreateModelServiceAuthToken请求参数结构体
                */
                class CreateModelServiceAuthTokenRequest : public AbstractModel
                {
                public:
                    CreateModelServiceAuthTokenRequest();
                    ~CreateModelServiceAuthTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务组 id
                     * @return ServiceGroupId 服务组 id
                     * 
                     */
                    std::string GetServiceGroupId() const;

                    /**
                     * 设置服务组 id
                     * @param _serviceGroupId 服务组 id
                     * 
                     */
                    void SetServiceGroupId(const std::string& _serviceGroupId);

                    /**
                     * 判断参数 ServiceGroupId 是否已赋值
                     * @return ServiceGroupId 是否已赋值
                     * 
                     */
                    bool ServiceGroupIdHasBeenSet() const;

                    /**
                     * 获取token 名称
                     * @return Name token 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置token 名称
                     * @param _name token 名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Description 描述
                     * @return Description Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description 描述
                     * @param _description Description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 服务组 id
                     */
                    std::string m_serviceGroupId;
                    bool m_serviceGroupIdHasBeenSet;

                    /**
                     * token 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEMODELSERVICEAUTHTOKENREQUEST_H_
