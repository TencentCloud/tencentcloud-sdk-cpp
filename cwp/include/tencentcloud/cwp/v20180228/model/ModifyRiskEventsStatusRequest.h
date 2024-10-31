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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRISKEVENTSSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRISKEVENTSSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyRiskEventsStatus请求参数结构体
                */
                class ModifyRiskEventsStatusRequest : public AbstractModel
                {
                public:
                    ModifyRiskEventsStatusRequest();
                    ~ModifyRiskEventsStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作-0:标记已处理,1:忽略,2:删除记录,3:木马隔离,4:木马恢复隔离,5:木马信任,6:木马取消信任,7:查杀异常进程,8:加入白名单
                     * @return Operate 操作-0:标记已处理,1:忽略,2:删除记录,3:木马隔离,4:木马恢复隔离,5:木马信任,6:木马取消信任,7:查杀异常进程,8:加入白名单
                     * 
                     */
                    uint64_t GetOperate() const;

                    /**
                     * 设置操作-0:标记已处理,1:忽略,2:删除记录,3:木马隔离,4:木马恢复隔离,5:木马信任,6:木马取消信任,7:查杀异常进程,8:加入白名单
                     * @param _operate 操作-0:标记已处理,1:忽略,2:删除记录,3:木马隔离,4:木马恢复隔离,5:木马信任,6:木马取消信任,7:查杀异常进程,8:加入白名单
                     * 
                     */
                    void SetOperate(const uint64_t& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                    /**
                     * 获取操作事件类型，文件查杀：MALWARE，异常登录：HOST_LOGIN，密码破解：BRUTE_ATTACK，恶意请求：MALICIOUS_REQUEST，高危命令：BASH_EVENT，本地提权：PRIVILEGE_EVENT，反弹shell：REVERSE_SHELL. 异常进程:PROCESS
                     * @return RiskType 操作事件类型，文件查杀：MALWARE，异常登录：HOST_LOGIN，密码破解：BRUTE_ATTACK，恶意请求：MALICIOUS_REQUEST，高危命令：BASH_EVENT，本地提权：PRIVILEGE_EVENT，反弹shell：REVERSE_SHELL. 异常进程:PROCESS
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置操作事件类型，文件查杀：MALWARE，异常登录：HOST_LOGIN，密码破解：BRUTE_ATTACK，恶意请求：MALICIOUS_REQUEST，高危命令：BASH_EVENT，本地提权：PRIVILEGE_EVENT，反弹shell：REVERSE_SHELL. 异常进程:PROCESS
                     * @param _riskType 操作事件类型，文件查杀：MALWARE，异常登录：HOST_LOGIN，密码破解：BRUTE_ATTACK，恶意请求：MALICIOUS_REQUEST，高危命令：BASH_EVENT，本地提权：PRIVILEGE_EVENT，反弹shell：REVERSE_SHELL. 异常进程:PROCESS
                     * 
                     */
                    void SetRiskType(const std::string& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取需要修改的事件id 数组，支持批量
                     * @return Ids 需要修改的事件id 数组，支持批量
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置需要修改的事件id 数组，支持批量
                     * @param _ids 需要修改的事件id 数组，支持批量
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取是否更新全部，即是否对所有的事件进行操作，当ids 不为空时，此参数无效
                     * @return UpdateAll 是否更新全部，即是否对所有的事件进行操作，当ids 不为空时，此参数无效
                     * 
                     */
                    bool GetUpdateAll() const;

                    /**
                     * 设置是否更新全部，即是否对所有的事件进行操作，当ids 不为空时，此参数无效
                     * @param _updateAll 是否更新全部，即是否对所有的事件进行操作，当ids 不为空时，此参数无效
                     * 
                     */
                    void SetUpdateAll(const bool& _updateAll);

                    /**
                     * 判断参数 UpdateAll 是否已赋值
                     * @return UpdateAll 是否已赋值
                     * 
                     */
                    bool UpdateAllHasBeenSet() const;

                    /**
                     * 获取排除的事件id,当操作全部事件时，需要排除这次id
                     * @return ExcludeId 排除的事件id,当操作全部事件时，需要排除这次id
                     * 
                     */
                    std::vector<uint64_t> GetExcludeId() const;

                    /**
                     * 设置排除的事件id,当操作全部事件时，需要排除这次id
                     * @param _excludeId 排除的事件id,当操作全部事件时，需要排除这次id
                     * 
                     */
                    void SetExcludeId(const std::vector<uint64_t>& _excludeId);

                    /**
                     * 判断参数 ExcludeId 是否已赋值
                     * @return ExcludeId 是否已赋值
                     * 
                     */
                    bool ExcludeIdHasBeenSet() const;

                    /**
                     * 获取当Operate 是木马隔离时，表示是否要杀进程，其他操作无效
                     * @return KillProcess 当Operate 是木马隔离时，表示是否要杀进程，其他操作无效
                     * 
                     */
                    bool GetKillProcess() const;

                    /**
                     * 设置当Operate 是木马隔离时，表示是否要杀进程，其他操作无效
                     * @param _killProcess 当Operate 是木马隔离时，表示是否要杀进程，其他操作无效
                     * 
                     */
                    void SetKillProcess(const bool& _killProcess);

                    /**
                     * 判断参数 KillProcess 是否已赋值
                     * @return KillProcess 是否已赋值
                     * 
                     */
                    bool KillProcessHasBeenSet() const;

                    /**
                     * 获取当RiskType 为异地登录且ids为空时，可以修改所有来源ip的事件的状态
                     * @return Ip 当RiskType 为异地登录且ids为空时，可以修改所有来源ip的事件的状态
                     * 
                     */
                    std::vector<std::string> GetIp() const;

                    /**
                     * 设置当RiskType 为异地登录且ids为空时，可以修改所有来源ip的事件的状态
                     * @param _ip 当RiskType 为异地登录且ids为空时，可以修改所有来源ip的事件的状态
                     * 
                     */
                    void SetIp(const std::vector<std::string>& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取过滤条件。RiskType为 MALWARE时
1、当RiskType为 MALWARE时：
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>FilePath - String - 是否必填：否 - 路径筛选</li>
<li>VirusName - String - 是否必填：否 - 描述筛选</li>
<li>CreateBeginTime - String - 是否必填：否 - 创建时间筛选-开始时间</li>
<li>CreateEndTime - String - 是否必填：否 - 创建时间筛选-结束时间</li>
<li>Status - String - 是否必填：否 - 状态筛选 4待处理,5信任,6已隔离,10隔离中,11恢复隔离中</li>
RiskType 为PROCESS时:
过滤条件。
<li>IpOrName - String - 是否必填：否 - 主机IP或主机名</li>
<li>VirusName - String - 是否必填：否 - 病毒名</li>
<li>BeginTime - String - 是否必填：否 - 进程启动时间-开始</li>
<li>EndTime - String - 是否必填：否 - 进程启动时间-结束</li>
<li>Status - String - 是否必填：否 - 状态筛选 0待处理；1查杀中;2已查杀3已退出;4已信任</li>
                     * @return Filters 过滤条件。RiskType为 MALWARE时
1、当RiskType为 MALWARE时：
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>FilePath - String - 是否必填：否 - 路径筛选</li>
<li>VirusName - String - 是否必填：否 - 描述筛选</li>
<li>CreateBeginTime - String - 是否必填：否 - 创建时间筛选-开始时间</li>
<li>CreateEndTime - String - 是否必填：否 - 创建时间筛选-结束时间</li>
<li>Status - String - 是否必填：否 - 状态筛选 4待处理,5信任,6已隔离,10隔离中,11恢复隔离中</li>
RiskType 为PROCESS时:
过滤条件。
<li>IpOrName - String - 是否必填：否 - 主机IP或主机名</li>
<li>VirusName - String - 是否必填：否 - 病毒名</li>
<li>BeginTime - String - 是否必填：否 - 进程启动时间-开始</li>
<li>EndTime - String - 是否必填：否 - 进程启动时间-结束</li>
<li>Status - String - 是否必填：否 - 状态筛选 0待处理；1查杀中;2已查杀3已退出;4已信任</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤条件。RiskType为 MALWARE时
1、当RiskType为 MALWARE时：
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>FilePath - String - 是否必填：否 - 路径筛选</li>
<li>VirusName - String - 是否必填：否 - 描述筛选</li>
<li>CreateBeginTime - String - 是否必填：否 - 创建时间筛选-开始时间</li>
<li>CreateEndTime - String - 是否必填：否 - 创建时间筛选-结束时间</li>
<li>Status - String - 是否必填：否 - 状态筛选 4待处理,5信任,6已隔离,10隔离中,11恢复隔离中</li>
RiskType 为PROCESS时:
过滤条件。
<li>IpOrName - String - 是否必填：否 - 主机IP或主机名</li>
<li>VirusName - String - 是否必填：否 - 病毒名</li>
<li>BeginTime - String - 是否必填：否 - 进程启动时间-开始</li>
<li>EndTime - String - 是否必填：否 - 进程启动时间-结束</li>
<li>Status - String - 是否必填：否 - 状态筛选 0待处理；1查杀中;2已查杀3已退出;4已信任</li>
                     * @param _filters 过滤条件。RiskType为 MALWARE时
1、当RiskType为 MALWARE时：
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>FilePath - String - 是否必填：否 - 路径筛选</li>
<li>VirusName - String - 是否必填：否 - 描述筛选</li>
<li>CreateBeginTime - String - 是否必填：否 - 创建时间筛选-开始时间</li>
<li>CreateEndTime - String - 是否必填：否 - 创建时间筛选-结束时间</li>
<li>Status - String - 是否必填：否 - 状态筛选 4待处理,5信任,6已隔离,10隔离中,11恢复隔离中</li>
RiskType 为PROCESS时:
过滤条件。
<li>IpOrName - String - 是否必填：否 - 主机IP或主机名</li>
<li>VirusName - String - 是否必填：否 - 病毒名</li>
<li>BeginTime - String - 是否必填：否 - 进程启动时间-开始</li>
<li>EndTime - String - 是否必填：否 - 进程启动时间-结束</li>
<li>Status - String - 是否必填：否 - 状态筛选 0待处理；1查杀中;2已查杀3已退出;4已信任</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取当Operate 是木马隔离时
<li> 本操作会修复被篡改的系统命令，计划任务等系统文件，操作中请确保yum/apt 可用。</li>
                     * @return DoClean 当Operate 是木马隔离时
<li> 本操作会修复被篡改的系统命令，计划任务等系统文件，操作中请确保yum/apt 可用。</li>
                     * 
                     */
                    bool GetDoClean() const;

                    /**
                     * 设置当Operate 是木马隔离时
<li> 本操作会修复被篡改的系统命令，计划任务等系统文件，操作中请确保yum/apt 可用。</li>
                     * @param _doClean 当Operate 是木马隔离时
<li> 本操作会修复被篡改的系统命令，计划任务等系统文件，操作中请确保yum/apt 可用。</li>
                     * 
                     */
                    void SetDoClean(const bool& _doClean);

                    /**
                     * 判断参数 DoClean 是否已赋值
                     * @return DoClean 是否已赋值
                     * 
                     */
                    bool DoCleanHasBeenSet() const;

                private:

                    /**
                     * 操作-0:标记已处理,1:忽略,2:删除记录,3:木马隔离,4:木马恢复隔离,5:木马信任,6:木马取消信任,7:查杀异常进程,8:加入白名单
                     */
                    uint64_t m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * 操作事件类型，文件查杀：MALWARE，异常登录：HOST_LOGIN，密码破解：BRUTE_ATTACK，恶意请求：MALICIOUS_REQUEST，高危命令：BASH_EVENT，本地提权：PRIVILEGE_EVENT，反弹shell：REVERSE_SHELL. 异常进程:PROCESS
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * 需要修改的事件id 数组，支持批量
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * 是否更新全部，即是否对所有的事件进行操作，当ids 不为空时，此参数无效
                     */
                    bool m_updateAll;
                    bool m_updateAllHasBeenSet;

                    /**
                     * 排除的事件id,当操作全部事件时，需要排除这次id
                     */
                    std::vector<uint64_t> m_excludeId;
                    bool m_excludeIdHasBeenSet;

                    /**
                     * 当Operate 是木马隔离时，表示是否要杀进程，其他操作无效
                     */
                    bool m_killProcess;
                    bool m_killProcessHasBeenSet;

                    /**
                     * 当RiskType 为异地登录且ids为空时，可以修改所有来源ip的事件的状态
                     */
                    std::vector<std::string> m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 过滤条件。RiskType为 MALWARE时
1、当RiskType为 MALWARE时：
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>FilePath - String - 是否必填：否 - 路径筛选</li>
<li>VirusName - String - 是否必填：否 - 描述筛选</li>
<li>CreateBeginTime - String - 是否必填：否 - 创建时间筛选-开始时间</li>
<li>CreateEndTime - String - 是否必填：否 - 创建时间筛选-结束时间</li>
<li>Status - String - 是否必填：否 - 状态筛选 4待处理,5信任,6已隔离,10隔离中,11恢复隔离中</li>
RiskType 为PROCESS时:
过滤条件。
<li>IpOrName - String - 是否必填：否 - 主机IP或主机名</li>
<li>VirusName - String - 是否必填：否 - 病毒名</li>
<li>BeginTime - String - 是否必填：否 - 进程启动时间-开始</li>
<li>EndTime - String - 是否必填：否 - 进程启动时间-结束</li>
<li>Status - String - 是否必填：否 - 状态筛选 0待处理；1查杀中;2已查杀3已退出;4已信任</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 当Operate 是木马隔离时
<li> 本操作会修复被篡改的系统命令，计划任务等系统文件，操作中请确保yum/apt 可用。</li>
                     */
                    bool m_doClean;
                    bool m_doCleanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRISKEVENTSSTATUSREQUEST_H_
