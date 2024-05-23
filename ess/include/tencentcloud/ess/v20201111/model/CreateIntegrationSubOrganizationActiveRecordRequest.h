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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONSUBORGANIZATIONACTIVERECORDREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONSUBORGANIZATIONACTIVERECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateIntegrationSubOrganizationActiveRecord请求参数结构体
                */
                class CreateIntegrationSubOrganizationActiveRecordRequest : public AbstractModel
                {
                public:
                    CreateIntegrationSubOrganizationActiveRecordRequest();
                    ~CreateIntegrationSubOrganizationActiveRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行本接口操作的员工信息。使用此接口时，必须填写userId。 支持填入集团子公司经办人 userId 代发合同。  注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。使用此接口时，必须填写userId。 支持填入集团子公司经办人 userId 代发合同。  注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。使用此接口时，必须填写userId。 支持填入集团子公司经办人 userId 代发合同。  注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。使用此接口时，必须填写userId。 支持填入集团子公司经办人 userId 代发合同。  注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取待激活成员企业ID集合
                     * @return SubOrganizationIds 待激活成员企业ID集合
                     * 
                     */
                    std::vector<std::string> GetSubOrganizationIds() const;

                    /**
                     * 设置待激活成员企业ID集合
                     * @param _subOrganizationIds 待激活成员企业ID集合
                     * 
                     */
                    void SetSubOrganizationIds(const std::vector<std::string>& _subOrganizationIds);

                    /**
                     * 判断参数 SubOrganizationIds 是否已赋值
                     * @return SubOrganizationIds 是否已赋值
                     * 
                     */
                    bool SubOrganizationIdsHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。使用此接口时，必须填写userId。 支持填入集团子公司经办人 userId 代发合同。  注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 待激活成员企业ID集合
                     */
                    std::vector<std::string> m_subOrganizationIds;
                    bool m_subOrganizationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONSUBORGANIZATIONACTIVERECORDREQUEST_H_
