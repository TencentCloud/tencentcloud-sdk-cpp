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
                     * 获取ioa用户组织id
                     * @return OrgId ioa用户组织id
                     * 
                     */
                    uint64_t GetOrgId() const;

                    /**
                     * 设置ioa用户组织id
                     * @param _orgId ioa用户组织id
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
                     * 获取ioa用户组织名称
                     * @return OrgName ioa用户组织名称
                     * 
                     */
                    std::string GetOrgName() const;

                    /**
                     * 设置ioa用户组织名称
                     * @param _orgName ioa用户组织名称
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
                     * 获取ioa用户组织id路径	
                     * @return OrgIdPath ioa用户组织id路径	
                     * 
                     */
                    std::string GetOrgIdPath() const;

                    /**
                     * 设置ioa用户组织id路径	
                     * @param _orgIdPath ioa用户组织id路径	
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
                     * 获取ioa用户组织名称路径	
                     * @return OrgNamePath ioa用户组织名称路径	
                     * 
                     */
                    std::string GetOrgNamePath() const;

                    /**
                     * 设置ioa用户组织名称路径	
                     * @param _orgNamePath ioa用户组织名称路径	
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
                     * 获取ioa关联用户源类型
                     * @return Source ioa关联用户源类型
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置ioa关联用户源类型
                     * @param _source ioa关联用户源类型
                     * 
                     */
                    void SetSource(const uint64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * ioa用户组织id
                     */
                    uint64_t m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * ioa用户组织名称
                     */
                    std::string m_orgName;
                    bool m_orgNameHasBeenSet;

                    /**
                     * ioa用户组织id路径	
                     */
                    std::string m_orgIdPath;
                    bool m_orgIdPathHasBeenSet;

                    /**
                     * ioa用户组织名称路径	
                     */
                    std::string m_orgNamePath;
                    bool m_orgNamePathHasBeenSet;

                    /**
                     * ioa关联用户源类型
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_IOAUSERGROUP_H_
