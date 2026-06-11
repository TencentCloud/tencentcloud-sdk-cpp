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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_AUTHINFODETAIL_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_AUTHINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/HasAuthUser.h>
#include <tencentcloud/ess/v20201111/model/HasAuthOrganization.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 企业扩展服务授权列表详情
                */
                class AuthInfoDetail : public AbstractModel
                {
                public:
                    AuthInfoDetail();
                    ~AuthInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>扩展服务类型，和入参一致</p>
                     * @return Type <p>扩展服务类型，和入参一致</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>扩展服务类型，和入参一致</p>
                     * @param _type <p>扩展服务类型，和入参一致</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>扩展服务名称</p>
                     * @return Name <p>扩展服务名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>扩展服务名称</p>
                     * @param _name <p>扩展服务名称</p>
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
                     * 获取<p>授权员工列表</p>
                     * @return HasAuthUserList <p>授权员工列表</p>
                     * 
                     */
                    std::vector<HasAuthUser> GetHasAuthUserList() const;

                    /**
                     * 设置<p>授权员工列表</p>
                     * @param _hasAuthUserList <p>授权员工列表</p>
                     * 
                     */
                    void SetHasAuthUserList(const std::vector<HasAuthUser>& _hasAuthUserList);

                    /**
                     * 判断参数 HasAuthUserList 是否已赋值
                     * @return HasAuthUserList 是否已赋值
                     * 
                     */
                    bool HasAuthUserListHasBeenSet() const;

                    /**
                     * 获取<p>授权企业列表（企业自动签时，该字段有值）</p>
                     * @return HasAuthOrganizationList <p>授权企业列表（企业自动签时，该字段有值）</p>
                     * 
                     */
                    std::vector<HasAuthOrganization> GetHasAuthOrganizationList() const;

                    /**
                     * 设置<p>授权企业列表（企业自动签时，该字段有值）</p>
                     * @param _hasAuthOrganizationList <p>授权企业列表（企业自动签时，该字段有值）</p>
                     * 
                     */
                    void SetHasAuthOrganizationList(const std::vector<HasAuthOrganization>& _hasAuthOrganizationList);

                    /**
                     * 判断参数 HasAuthOrganizationList 是否已赋值
                     * @return HasAuthOrganizationList 是否已赋值
                     * 
                     */
                    bool HasAuthOrganizationListHasBeenSet() const;

                    /**
                     * 获取<p>授权员工列表总数</p>
                     * @return AuthUserTotal <p>授权员工列表总数</p>
                     * 
                     */
                    int64_t GetAuthUserTotal() const;

                    /**
                     * 设置<p>授权员工列表总数</p>
                     * @param _authUserTotal <p>授权员工列表总数</p>
                     * 
                     */
                    void SetAuthUserTotal(const int64_t& _authUserTotal);

                    /**
                     * 判断参数 AuthUserTotal 是否已赋值
                     * @return AuthUserTotal 是否已赋值
                     * 
                     */
                    bool AuthUserTotalHasBeenSet() const;

                    /**
                     * 获取<p>授权企业列表总数</p>
                     * @return AuthOrganizationTotal <p>授权企业列表总数</p>
                     * 
                     */
                    int64_t GetAuthOrganizationTotal() const;

                    /**
                     * 设置<p>授权企业列表总数</p>
                     * @param _authOrganizationTotal <p>授权企业列表总数</p>
                     * 
                     */
                    void SetAuthOrganizationTotal(const int64_t& _authOrganizationTotal);

                    /**
                     * 判断参数 AuthOrganizationTotal 是否已赋值
                     * @return AuthOrganizationTotal 是否已赋值
                     * 
                     */
                    bool AuthOrganizationTotalHasBeenSet() const;

                private:

                    /**
                     * <p>扩展服务类型，和入参一致</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>扩展服务名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>授权员工列表</p>
                     */
                    std::vector<HasAuthUser> m_hasAuthUserList;
                    bool m_hasAuthUserListHasBeenSet;

                    /**
                     * <p>授权企业列表（企业自动签时，该字段有值）</p>
                     */
                    std::vector<HasAuthOrganization> m_hasAuthOrganizationList;
                    bool m_hasAuthOrganizationListHasBeenSet;

                    /**
                     * <p>授权员工列表总数</p>
                     */
                    int64_t m_authUserTotal;
                    bool m_authUserTotalHasBeenSet;

                    /**
                     * <p>授权企业列表总数</p>
                     */
                    int64_t m_authOrganizationTotal;
                    bool m_authOrganizationTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_AUTHINFODETAIL_H_
