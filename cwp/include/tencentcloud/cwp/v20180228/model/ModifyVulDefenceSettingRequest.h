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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYVULDEFENCESETTINGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYVULDEFENCESETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyVulDefenceSetting请求参数结构体
                */
                class ModifyVulDefenceSettingRequest : public AbstractModel
                {
                public:
                    ModifyVulDefenceSettingRequest();
                    ~ModifyVulDefenceSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取防御开关，0 关闭 1 开启
                     * @return Enable 防御开关，0 关闭 1 开启
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置防御开关，0 关闭 1 开启
                     * @param _enable 防御开关，0 关闭 1 开启
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取1 全部旗舰版主机，0 Quuids列表主机
                     * @return Scope 1 全部旗舰版主机，0 Quuids列表主机
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置1 全部旗舰版主机，0 Quuids列表主机
                     * @param _scope 1 全部旗舰版主机，0 Quuids列表主机
                     * 
                     */
                    void SetScope(const uint64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取作用范围内旗舰版主机列表
                     * @return Quuids 作用范围内旗舰版主机列表
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置作用范围内旗舰版主机列表
                     * @param _quuids 作用范围内旗舰版主机列表
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取排除作用范围内旗舰版主机列表
                     * @return ExcludeInstanceIds 排除作用范围内旗舰版主机列表
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIds() const;

                    /**
                     * 设置排除作用范围内旗舰版主机列表
                     * @param _excludeInstanceIds 排除作用范围内旗舰版主机列表
                     * 
                     */
                    void SetExcludeInstanceIds(const std::vector<std::string>& _excludeInstanceIds);

                    /**
                     * 判断参数 ExcludeInstanceIds 是否已赋值
                     * @return ExcludeInstanceIds 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIdsHasBeenSet() const;

                    /**
                     * 获取新增资产自动包含 0 不包含 1包含
                     * @return AutoInclude 新增资产自动包含 0 不包含 1包含
                     * 
                     */
                    uint64_t GetAutoInclude() const;

                    /**
                     * 设置新增资产自动包含 0 不包含 1包含
                     * @param _autoInclude 新增资产自动包含 0 不包含 1包含
                     * 
                     */
                    void SetAutoInclude(const uint64_t& _autoInclude);

                    /**
                     * 判断参数 AutoInclude 是否已赋值
                     * @return AutoInclude 是否已赋值
                     * 
                     */
                    bool AutoIncludeHasBeenSet() const;

                    /**
                     * 获取作用范围内旗舰版主机列表
                     * @return InstanceIds 作用范围内旗舰版主机列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置作用范围内旗舰版主机列表
                     * @param _instanceIds 作用范围内旗舰版主机列表
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 防御开关，0 关闭 1 开启
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 1 全部旗舰版主机，0 Quuids列表主机
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 作用范围内旗舰版主机列表
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * 排除作用范围内旗舰版主机列表
                     */
                    std::vector<std::string> m_excludeInstanceIds;
                    bool m_excludeInstanceIdsHasBeenSet;

                    /**
                     * 新增资产自动包含 0 不包含 1包含
                     */
                    uint64_t m_autoInclude;
                    bool m_autoIncludeHasBeenSet;

                    /**
                     * 作用范围内旗舰版主机列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYVULDEFENCESETTINGREQUEST_H_
