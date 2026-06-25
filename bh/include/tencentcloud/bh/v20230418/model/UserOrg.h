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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_USERORG_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_USERORG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 同步的ioa用户组织信息
                */
                class UserOrg : public AbstractModel
                {
                public:
                    UserOrg();
                    ~UserOrg() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ioa用户组织id</p>
                     * @return OrgId <p>ioa用户组织id</p>
                     * 
                     */
                    uint64_t GetOrgId() const;

                    /**
                     * 设置<p>ioa用户组织id</p>
                     * @param _orgId <p>ioa用户组织id</p>
                     * 
                     */
                    void SetOrgId(const uint64_t& _orgId);

                    /**
                     * 判断参数 OrgId 是否已赋值
                     * @return OrgId 是否已赋值
                     * 
                     */
                    bool OrgIdHasBeenSet() const;

                    /**
                     * 获取<p>ioa用户组织名称</p>
                     * @return OrgName <p>ioa用户组织名称</p>
                     * 
                     */
                    std::string GetOrgName() const;

                    /**
                     * 设置<p>ioa用户组织名称</p>
                     * @param _orgName <p>ioa用户组织名称</p>
                     * 
                     */
                    void SetOrgName(const std::string& _orgName);

                    /**
                     * 判断参数 OrgName 是否已赋值
                     * @return OrgName 是否已赋值
                     * 
                     */
                    bool OrgNameHasBeenSet() const;

                    /**
                     * 获取<p>ioa用户组织id路径</p>
                     * @return OrgIdPath <p>ioa用户组织id路径</p>
                     * 
                     */
                    std::string GetOrgIdPath() const;

                    /**
                     * 设置<p>ioa用户组织id路径</p>
                     * @param _orgIdPath <p>ioa用户组织id路径</p>
                     * 
                     */
                    void SetOrgIdPath(const std::string& _orgIdPath);

                    /**
                     * 判断参数 OrgIdPath 是否已赋值
                     * @return OrgIdPath 是否已赋值
                     * 
                     */
                    bool OrgIdPathHasBeenSet() const;

                    /**
                     * 获取<p>ioa用户组织名称路径</p>
                     * @return OrgNamePath <p>ioa用户组织名称路径</p>
                     * 
                     */
                    std::string GetOrgNamePath() const;

                    /**
                     * 设置<p>ioa用户组织名称路径</p>
                     * @param _orgNamePath <p>ioa用户组织名称路径</p>
                     * 
                     */
                    void SetOrgNamePath(const std::string& _orgNamePath);

                    /**
                     * 判断参数 OrgNamePath 是否已赋值
                     * @return OrgNamePath 是否已赋值
                     * 
                     */
                    bool OrgNamePathHasBeenSet() const;

                    /**
                     * 获取<p>ioa用户组织id下的用户数</p>
                     * @return UserTotal <p>ioa用户组织id下的用户数</p>
                     * 
                     */
                    uint64_t GetUserTotal() const;

                    /**
                     * 设置<p>ioa用户组织id下的用户数</p>
                     * @param _userTotal <p>ioa用户组织id下的用户数</p>
                     * 
                     */
                    void SetUserTotal(const uint64_t& _userTotal);

                    /**
                     * 判断参数 UserTotal 是否已赋值
                     * @return UserTotal 是否已赋值
                     * 
                     */
                    bool UserTotalHasBeenSet() const;

                    /**
                     * 获取<p>组织绑定的用户组 id 列表</p>
                     * @return BindGroupIds <p>组织绑定的用户组 id 列表</p>
                     * 
                     */
                    std::vector<uint64_t> GetBindGroupIds() const;

                    /**
                     * 设置<p>组织绑定的用户组 id 列表</p>
                     * @param _bindGroupIds <p>组织绑定的用户组 id 列表</p>
                     * 
                     */
                    void SetBindGroupIds(const std::vector<uint64_t>& _bindGroupIds);

                    /**
                     * 判断参数 BindGroupIds 是否已赋值
                     * @return BindGroupIds 是否已赋值
                     * 
                     */
                    bool BindGroupIdsHasBeenSet() const;

                private:

                    /**
                     * <p>ioa用户组织id</p>
                     */
                    uint64_t m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * <p>ioa用户组织名称</p>
                     */
                    std::string m_orgName;
                    bool m_orgNameHasBeenSet;

                    /**
                     * <p>ioa用户组织id路径</p>
                     */
                    std::string m_orgIdPath;
                    bool m_orgIdPathHasBeenSet;

                    /**
                     * <p>ioa用户组织名称路径</p>
                     */
                    std::string m_orgNamePath;
                    bool m_orgNamePathHasBeenSet;

                    /**
                     * <p>ioa用户组织id下的用户数</p>
                     */
                    uint64_t m_userTotal;
                    bool m_userTotalHasBeenSet;

                    /**
                     * <p>组织绑定的用户组 id 列表</p>
                     */
                    std::vector<uint64_t> m_bindGroupIds;
                    bool m_bindGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_USERORG_H_
