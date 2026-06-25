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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_IOAUSERGROUP_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_IOAUSERGROUP_H_

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
                * 同步过来的ioa用户分组信息
                */
                class IOAUserGroup : public AbstractModel
                {
                public:
                    IOAUserGroup();
                    ~IOAUserGroup() = default;
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
                     * 获取<p>ioa关联用户源类型</p>
                     * @return Source <p>ioa关联用户源类型</p>
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置<p>ioa关联用户源类型</p>
                     * @param _source <p>ioa关联用户源类型</p>
                     * 
                     */
                    void SetSource(const uint64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>用户所属目录</p>
                     * @return UserDirName <p>用户所属目录</p>
                     * 
                     */
                    std::string GetUserDirName() const;

                    /**
                     * 设置<p>用户所属目录</p>
                     * @param _userDirName <p>用户所属目录</p>
                     * 
                     */
                    void SetUserDirName(const std::string& _userDirName);

                    /**
                     * 判断参数 UserDirName 是否已赋值
                     * @return UserDirName 是否已赋值
                     * 
                     */
                    bool UserDirNameHasBeenSet() const;

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
                     * <p>ioa关联用户源类型</p>
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>用户所属目录</p>
                     */
                    std::string m_userDirName;
                    bool m_userDirNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_IOAUSERGROUP_H_
