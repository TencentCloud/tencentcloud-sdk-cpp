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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_LISTSKILLSREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_LISTSKILLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ListSkills请求参数结构体
                */
                class ListSkillsRequest : public AbstractModel
                {
                public:
                    ListSkillsRequest();
                    ~ListSkillsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TCR实例ID</p>
                     * @return RegistryId <p>TCR实例ID</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>TCR实例ID</p>
                     * @param _registryId <p>TCR实例ID</p>
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取<p>模糊查询</p>
                     * @return SearchKey <p>模糊查询</p>
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置<p>模糊查询</p>
                     * @param _searchKey <p>模糊查询</p>
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取<p>技能名称</p>
                     * @return SkillName <p>技能名称</p>
                     * 
                     */
                    std::string GetSkillName() const;

                    /**
                     * 设置<p>技能名称</p>
                     * @param _skillName <p>技能名称</p>
                     * 
                     */
                    void SetSkillName(const std::string& _skillName);

                    /**
                     * 判断参数 SkillName 是否已赋值
                     * @return SkillName 是否已赋值
                     * 
                     */
                    bool SkillNameHasBeenSet() const;

                    /**
                     * 获取<p>技能类型</p><p>枚举值：</p><ul><li>MCP Server： MCP Server 类型</li></ul>
                     * @return SkillType <p>技能类型</p><p>枚举值：</p><ul><li>MCP Server： MCP Server 类型</li></ul>
                     * 
                     */
                    std::string GetSkillType() const;

                    /**
                     * 设置<p>技能类型</p><p>枚举值：</p><ul><li>MCP Server： MCP Server 类型</li></ul>
                     * @param _skillType <p>技能类型</p><p>枚举值：</p><ul><li>MCP Server： MCP Server 类型</li></ul>
                     * 
                     */
                    void SetSkillType(const std::string& _skillType);

                    /**
                     * 判断参数 SkillType 是否已赋值
                     * @return SkillType 是否已赋值
                     * 
                     */
                    bool SkillTypeHasBeenSet() const;

                    /**
                     * 获取<p>状态</p><p>枚举值：</p><ul><li>active： 活跃</li></ul>
                     * @return Status <p>状态</p><p>枚举值：</p><ul><li>active： 活跃</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p><p>枚举值：</p><ul><li>active： 活跃</li></ul>
                     * @param _status <p>状态</p><p>枚举值：</p><ul><li>active： 活跃</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>偏移量</p>
                     * @return Offset <p>偏移量</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>限制</p>
                     * @return Limit <p>限制</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>限制</p>
                     * @param _limit <p>限制</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>TCR实例ID</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>模糊查询</p>
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * <p>技能名称</p>
                     */
                    std::string m_skillName;
                    bool m_skillNameHasBeenSet;

                    /**
                     * <p>技能类型</p><p>枚举值：</p><ul><li>MCP Server： MCP Server 类型</li></ul>
                     */
                    std::string m_skillType;
                    bool m_skillTypeHasBeenSet;

                    /**
                     * <p>状态</p><p>枚举值：</p><ul><li>active： 活跃</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>偏移量</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>限制</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_LISTSKILLSREQUEST_H_
