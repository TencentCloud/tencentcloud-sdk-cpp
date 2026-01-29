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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_PERMISSIONINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_PERMISSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * FlexDB数据库权限信息
                */
                class PermissionInfo : public AbstractModel
                {
                public:
                    PermissionInfo();
                    ~PermissionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取"READONLY",   //公有读，私有写。所有用户可读，仅创建者及管理员可写  
"PRIVATE",    //私有读写，仅创建者及管理员可读写  
"ADMINWRITE", //所有用户可读，仅管理员可写  
"ADMINONLY",  //仅管理员可操作  
"CUSTOM",     // 安全规则
                     * @return AclTag "READONLY",   //公有读，私有写。所有用户可读，仅创建者及管理员可写  
"PRIVATE",    //私有读写，仅创建者及管理员可读写  
"ADMINWRITE", //所有用户可读，仅管理员可写  
"ADMINONLY",  //仅管理员可操作  
"CUSTOM",     // 安全规则
                     * 
                     */
                    std::string GetAclTag() const;

                    /**
                     * 设置"READONLY",   //公有读，私有写。所有用户可读，仅创建者及管理员可写  
"PRIVATE",    //私有读写，仅创建者及管理员可读写  
"ADMINWRITE", //所有用户可读，仅管理员可写  
"ADMINONLY",  //仅管理员可操作  
"CUSTOM",     // 安全规则
                     * @param _aclTag "READONLY",   //公有读，私有写。所有用户可读，仅创建者及管理员可写  
"PRIVATE",    //私有读写，仅创建者及管理员可读写  
"ADMINWRITE", //所有用户可读，仅管理员可写  
"ADMINONLY",  //仅管理员可操作  
"CUSTOM",     // 安全规则
                     * 
                     */
                    void SetAclTag(const std::string& _aclTag);

                    /**
                     * 判断参数 AclTag 是否已赋值
                     * @return AclTag 是否已赋值
                     * 
                     */
                    bool AclTagHasBeenSet() const;

                    /**
                     * 获取云开发环境ID
                     * @return EnvId 云开发环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置云开发环境ID
                     * @param _envId 云开发环境ID
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
                     * 获取自定义规则
                     * @return Rule 自定义规则
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置自定义规则
                     * @param _rule 自定义规则
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                private:

                    /**
                     * "READONLY",   //公有读，私有写。所有用户可读，仅创建者及管理员可写  
"PRIVATE",    //私有读写，仅创建者及管理员可读写  
"ADMINWRITE", //所有用户可读，仅管理员可写  
"ADMINONLY",  //仅管理员可操作  
"CUSTOM",     // 安全规则
                     */
                    std::string m_aclTag;
                    bool m_aclTagHasBeenSet;

                    /**
                     * 云开发环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 自定义规则
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_PERMISSIONINFO_H_
