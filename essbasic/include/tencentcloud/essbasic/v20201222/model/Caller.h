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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CALLER_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CALLER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
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
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用号
                     * @param _applicationId 应用号
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取下属机构ID
                     * @return SubOrganizationId 下属机构ID
                     * 
                     */
                    std::string GetSubOrganizationId() const;

                    /**
                     * 设置下属机构ID
                     * @param _subOrganizationId 下属机构ID
                     * 
                     */
                    void SetSubOrganizationId(const std::string& _subOrganizationId);

                    /**
                     * 判断参数 SubOrganizationId 是否已赋值
                     * @return SubOrganizationId 是否已赋值
                     * 
                     */
                    bool SubOrganizationIdHasBeenSet() const;

                    /**
                     * 获取经办人的用户ID
                     * @return OperatorId 经办人的用户ID
                     * 
                     */
                    std::string GetOperatorId() const;

                    /**
                     * 设置经办人的用户ID
                     * @param _operatorId 经办人的用户ID
                     * 
                     */
                    void SetOperatorId(const std::string& _operatorId);

                    /**
                     * 判断参数 OperatorId 是否已赋值
                     * @return OperatorId 是否已赋值
                     * 
                     */
                    bool OperatorIdHasBeenSet() const;

                private:

                    /**
                     * 应用号
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 下属机构ID
                     */
                    std::string m_subOrganizationId;
                    bool m_subOrganizationIdHasBeenSet;

                    /**
                     * 经办人的用户ID
                     */
                    std::string m_operatorId;
                    bool m_operatorIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CALLER_H_
