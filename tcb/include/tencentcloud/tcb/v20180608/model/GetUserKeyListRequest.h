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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_GETUSERKEYLISTREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_GETUSERKEYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * GetUserKeyList请求参数结构体
                */
                class GetUserKeyListRequest : public AbstractModel
                {
                public:
                    GetUserKeyListRequest();
                    ~GetUserKeyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境ID</p>
                     * @return EnvId <p>环境ID</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境ID</p>
                     * @param _envId <p>环境ID</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>分页的offset，从0开始</p>
                     * @return Offset <p>分页的offset，从0开始</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页的offset，从0开始</p>
                     * @param _offset <p>分页的offset，从0开始</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>分页的每页多少条</p>
                     * @return Limit <p>分页的每页多少条</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页的每页多少条</p>
                     * @param _limit <p>分页的每页多少条</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>根据集成名称模糊查询，name</p>
                     * @return Name <p>根据集成名称模糊查询，name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>根据集成名称模糊查询，name</p>
                     * @param _name <p>根据集成名称模糊查询，name</p>
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
                     * 获取<p>集成类型映射码</p>
                     * @return AuthTypeCode <p>集成类型映射码</p>
                     * 
                     */
                    std::string GetAuthTypeCode() const;

                    /**
                     * 设置<p>集成类型映射码</p>
                     * @param _authTypeCode <p>集成类型映射码</p>
                     * 
                     */
                    void SetAuthTypeCode(const std::string& _authTypeCode);

                    /**
                     * 判断参数 AuthTypeCode 是否已赋值
                     * @return AuthTypeCode 是否已赋值
                     * 
                     */
                    bool AuthTypeCodeHasBeenSet() const;

                    /**
                     * 获取<p>业务类型，integration：从集成中心来的，默认为空，表示是从授权管理中心来的</p>
                     * @return Business <p>业务类型，integration：从集成中心来的，默认为空，表示是从授权管理中心来的</p>
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置<p>业务类型，integration：从集成中心来的，默认为空，表示是从授权管理中心来的</p>
                     * @param _business <p>业务类型，integration：从集成中心来的，默认为空，表示是从授权管理中心来的</p>
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                private:

                    /**
                     * <p>环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>分页的offset，从0开始</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页的每页多少条</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>根据集成名称模糊查询，name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>集成类型映射码</p>
                     */
                    std::string m_authTypeCode;
                    bool m_authTypeCodeHasBeenSet;

                    /**
                     * <p>业务类型，integration：从集成中心来的，默认为空，表示是从授权管理中心来的</p>
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_GETUSERKEYLISTREQUEST_H_
