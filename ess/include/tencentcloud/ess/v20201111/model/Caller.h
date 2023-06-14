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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CALLER_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CALLER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 此结构体 (Caller) 用于描述调用方属性。
                */
                class Caller : public AbstractModel
                {
                public:
                    Caller();
                    ~Caller() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用号
                     * @return ApplicationId 应用号
                     * @deprecated
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用号
                     * @param _applicationId 应用号
                     * @deprecated
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * @deprecated
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取主机构ID
                     * @return OrganizationId 主机构ID
                     * @deprecated
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置主机构ID
                     * @param _organizationId 主机构ID
                     * @deprecated
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * @deprecated
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取经办人的用户ID，同UserId
                     * @return OperatorId 经办人的用户ID，同UserId
                     * 
                     */
                    std::string GetOperatorId() const;

                    /**
                     * 设置经办人的用户ID，同UserId
                     * @param _operatorId 经办人的用户ID，同UserId
                     * 
                     */
                    void SetOperatorId(const std::string& _operatorId);

                    /**
                     * 判断参数 OperatorId 是否已赋值
                     * @return OperatorId 是否已赋值
                     * 
                     */
                    bool OperatorIdHasBeenSet() const;

                    /**
                     * 获取下属机构ID
                     * @return SubOrganizationId 下属机构ID
                     * @deprecated
                     */
                    std::string GetSubOrganizationId() const;

                    /**
                     * 设置下属机构ID
                     * @param _subOrganizationId 下属机构ID
                     * @deprecated
                     */
                    void SetSubOrganizationId(const std::string& _subOrganizationId);

                    /**
                     * 判断参数 SubOrganizationId 是否已赋值
                     * @return SubOrganizationId 是否已赋值
                     * @deprecated
                     */
                    bool SubOrganizationIdHasBeenSet() const;

                private:

                    /**
                     * 应用号
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 主机构ID
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * 经办人的用户ID，同UserId
                     */
                    std::string m_operatorId;
                    bool m_operatorIdHasBeenSet;

                    /**
                     * 下属机构ID
                     */
                    std::string m_subOrganizationId;
                    bool m_subOrganizationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CALLER_H_
