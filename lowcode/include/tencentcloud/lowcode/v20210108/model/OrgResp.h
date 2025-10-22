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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_ORGRESP_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_ORGRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 组织架构返回参数
                */
                class OrgResp : public AbstractModel
                {
                public:
                    OrgResp();
                    ~OrgResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部门id
                     * @return OrgId 部门id
                     * 
                     */
                    std::string GetOrgId() const;

                    /**
                     * 设置部门id
                     * @param _orgId 部门id
                     * 
                     */
                    void SetOrgId(const std::string& _orgId);

                    /**
                     * 判断参数 OrgId 是否已赋值
                     * @return OrgId 是否已赋值
                     * 
                     */
                    bool OrgIdHasBeenSet() const;

                    /**
                     * 获取部门名称
                     * @return OrgName 部门名称
                     * 
                     */
                    std::string GetOrgName() const;

                    /**
                     * 设置部门名称
                     * @param _orgName 部门名称
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
                     * 获取部门标识
                     * @return OrgIdentity 部门标识
                     * 
                     */
                    std::string GetOrgIdentity() const;

                    /**
                     * 设置部门标识
                     * @param _orgIdentity 部门标识
                     * 
                     */
                    void SetOrgIdentity(const std::string& _orgIdentity);

                    /**
                     * 判断参数 OrgIdentity 是否已赋值
                     * @return OrgIdentity 是否已赋值
                     * 
                     */
                    bool OrgIdentityHasBeenSet() const;

                    /**
                     * 获取部门层级
                     * @return Level 部门层级
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置部门层级
                     * @param _level 部门层级
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取主键字段
                     * @return PrimaryColumn 主键字段
                     * 
                     */
                    std::string GetPrimaryColumn() const;

                    /**
                     * 设置主键字段
                     * @param _primaryColumn 主键字段
                     * 
                     */
                    void SetPrimaryColumn(const std::string& _primaryColumn);

                    /**
                     * 判断参数 PrimaryColumn 是否已赋值
                     * @return PrimaryColumn 是否已赋值
                     * 
                     */
                    bool PrimaryColumnHasBeenSet() const;

                private:

                    /**
                     * 部门id
                     */
                    std::string m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * 部门名称
                     */
                    std::string m_orgName;
                    bool m_orgNameHasBeenSet;

                    /**
                     * 部门标识
                     */
                    std::string m_orgIdentity;
                    bool m_orgIdentityHasBeenSet;

                    /**
                     * 部门层级
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 主键字段
                     */
                    std::string m_primaryColumn;
                    bool m_primaryColumnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_ORGRESP_H_
