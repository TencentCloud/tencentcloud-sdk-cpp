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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULDEFENCESETTINGRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULDEFENCESETTINGRESPONSE_H_

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
                * DescribeVulDefenceSetting返回参数结构体
                */
                class DescribeVulDefenceSettingResponse : public AbstractModel
                {
                public:
                    DescribeVulDefenceSettingResponse();
                    ~DescribeVulDefenceSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取防御开关，0 关闭 1 开启
                     * @return Enable 防御开关，0 关闭 1 开启
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取影响范围：1 全网旗舰版主机，0 quuid列表主机
                     * @return Scope 影响范围：1 全网旗舰版主机，0 quuid列表主机
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取影响主机quuid列表
                     * @return Quuids 影响主机quuid列表
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取当前旗舰版主机数量
                     * @return FlagshipCount 当前旗舰版主机数量
                     * 
                     */
                    uint64_t GetFlagshipCount() const;

                    /**
                     * 判断参数 FlagshipCount 是否已赋值
                     * @return FlagshipCount 是否已赋值
                     * 
                     */
                    bool FlagshipCountHasBeenSet() const;

                    /**
                     * 获取影响主机id列表
                     * @return InstanceIds 影响主机id列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取新增旗舰版主机自动加入;1是，0否 
                     * @return AutoInclude 新增旗舰版主机自动加入;1是，0否 
                     * 
                     */
                    uint64_t GetAutoInclude() const;

                    /**
                     * 判断参数 AutoInclude 是否已赋值
                     * @return AutoInclude 是否已赋值
                     * 
                     */
                    bool AutoIncludeHasBeenSet() const;

                    /**
                     * 获取排除的主机id列表
                     * @return ExcludeInstanceIds 排除的主机id列表
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIds() const;

                    /**
                     * 判断参数 ExcludeInstanceIds 是否已赋值
                     * @return ExcludeInstanceIds 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 防御开关，0 关闭 1 开启
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 影响范围：1 全网旗舰版主机，0 quuid列表主机
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 影响主机quuid列表
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * 当前旗舰版主机数量
                     */
                    uint64_t m_flagshipCount;
                    bool m_flagshipCountHasBeenSet;

                    /**
                     * 影响主机id列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 新增旗舰版主机自动加入;1是，0否 
                     */
                    uint64_t m_autoInclude;
                    bool m_autoIncludeHasBeenSet;

                    /**
                     * 排除的主机id列表
                     */
                    std::vector<std::string> m_excludeInstanceIds;
                    bool m_excludeInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULDEFENCESETTINGRESPONSE_H_
