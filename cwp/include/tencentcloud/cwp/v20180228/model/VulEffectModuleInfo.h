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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULEFFECTMODULEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULEFFECTMODULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 漏洞影响组件详情
                */
                class VulEffectModuleInfo : public AbstractModel
                {
                public:
                    VulEffectModuleInfo();
                    ~VulEffectModuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组件名
                     * @return Name 组件名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置组件名
                     * @param _name 组件名
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
                     * 获取影响的主机uuid
                     * @return Uuids 影响的主机uuid
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置影响的主机uuid
                     * @param _uuids 影响的主机uuid
                     * 
                     */
                    void SetUuids(const std::vector<std::string>& _uuids);

                    /**
                     * 判断参数 Uuids 是否已赋值
                     * @return Uuids 是否已赋值
                     * 
                     */
                    bool UuidsHasBeenSet() const;

                    /**
                     * 获取组件影响版本
                     * @return Rule 组件影响版本
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置组件影响版本
                     * @param _rule 组件影响版本
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取组件路径
                     * @return Path 组件路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置组件路径
                     * @param _path 组件路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取组件版本
                     * @return Version 组件版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置组件版本
                     * @param _version 组件版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取修复命令
                     * @return FixCmd 修复命令
                     * 
                     */
                    std::string GetFixCmd() const;

                    /**
                     * 设置修复命令
                     * @param _fixCmd 修复命令
                     * 
                     */
                    void SetFixCmd(const std::string& _fixCmd);

                    /**
                     * 判断参数 FixCmd 是否已赋值
                     * @return FixCmd 是否已赋值
                     * 
                     */
                    bool FixCmdHasBeenSet() const;

                    /**
                     * 获取影响的主机quuid
                     * @return Quuids 影响的主机quuid
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置影响的主机quuid
                     * @param _quuids 影响的主机quuid
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                private:

                    /**
                     * 组件名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 影响的主机uuid
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                    /**
                     * 组件影响版本
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 组件路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 组件版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 修复命令
                     */
                    std::string m_fixCmd;
                    bool m_fixCmdHasBeenSet;

                    /**
                     * 影响的主机quuid
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULEFFECTMODULEINFO_H_
