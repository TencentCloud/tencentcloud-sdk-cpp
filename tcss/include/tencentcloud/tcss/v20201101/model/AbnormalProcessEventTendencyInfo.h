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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSEVENTTENDENCYINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSEVENTTENDENCYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 待处理异常进程事件趋势
                */
                class AbnormalProcessEventTendencyInfo : public AbstractModel
                {
                public:
                    AbnormalProcessEventTendencyInfo();
                    ~AbnormalProcessEventTendencyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日期
                     * @return Date 日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日期
                     * @param _date 日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取待处理代理软件事件数
                     * @return ProxyToolEventCount 待处理代理软件事件数
                     * 
                     */
                    int64_t GetProxyToolEventCount() const;

                    /**
                     * 设置待处理代理软件事件数
                     * @param _proxyToolEventCount 待处理代理软件事件数
                     * 
                     */
                    void SetProxyToolEventCount(const int64_t& _proxyToolEventCount);

                    /**
                     * 判断参数 ProxyToolEventCount 是否已赋值
                     * @return ProxyToolEventCount 是否已赋值
                     * 
                     */
                    bool ProxyToolEventCountHasBeenSet() const;

                    /**
                     * 获取待处理横向参透事件数
                     * @return TransferControlEventCount 待处理横向参透事件数
                     * 
                     */
                    int64_t GetTransferControlEventCount() const;

                    /**
                     * 设置待处理横向参透事件数
                     * @param _transferControlEventCount 待处理横向参透事件数
                     * 
                     */
                    void SetTransferControlEventCount(const int64_t& _transferControlEventCount);

                    /**
                     * 判断参数 TransferControlEventCount 是否已赋值
                     * @return TransferControlEventCount 是否已赋值
                     * 
                     */
                    bool TransferControlEventCountHasBeenSet() const;

                    /**
                     * 获取待处理恶意命令事件数
                     * @return AttackCmdEventCount 待处理恶意命令事件数
                     * 
                     */
                    int64_t GetAttackCmdEventCount() const;

                    /**
                     * 设置待处理恶意命令事件数
                     * @param _attackCmdEventCount 待处理恶意命令事件数
                     * 
                     */
                    void SetAttackCmdEventCount(const int64_t& _attackCmdEventCount);

                    /**
                     * 判断参数 AttackCmdEventCount 是否已赋值
                     * @return AttackCmdEventCount 是否已赋值
                     * 
                     */
                    bool AttackCmdEventCountHasBeenSet() const;

                    /**
                     * 获取待处理反弹shell事件数
                     * @return ReverseShellEventCount 待处理反弹shell事件数
                     * 
                     */
                    int64_t GetReverseShellEventCount() const;

                    /**
                     * 设置待处理反弹shell事件数
                     * @param _reverseShellEventCount 待处理反弹shell事件数
                     * 
                     */
                    void SetReverseShellEventCount(const int64_t& _reverseShellEventCount);

                    /**
                     * 判断参数 ReverseShellEventCount 是否已赋值
                     * @return ReverseShellEventCount 是否已赋值
                     * 
                     */
                    bool ReverseShellEventCountHasBeenSet() const;

                    /**
                     * 获取待处理无文件程序执行事件数
                     * @return FilelessEventCount 待处理无文件程序执行事件数
                     * 
                     */
                    int64_t GetFilelessEventCount() const;

                    /**
                     * 设置待处理无文件程序执行事件数
                     * @param _filelessEventCount 待处理无文件程序执行事件数
                     * 
                     */
                    void SetFilelessEventCount(const int64_t& _filelessEventCount);

                    /**
                     * 判断参数 FilelessEventCount 是否已赋值
                     * @return FilelessEventCount 是否已赋值
                     * 
                     */
                    bool FilelessEventCountHasBeenSet() const;

                    /**
                     * 获取待处理高危命令事件数
                     * @return RiskCmdEventCount 待处理高危命令事件数
                     * 
                     */
                    int64_t GetRiskCmdEventCount() const;

                    /**
                     * 设置待处理高危命令事件数
                     * @param _riskCmdEventCount 待处理高危命令事件数
                     * 
                     */
                    void SetRiskCmdEventCount(const int64_t& _riskCmdEventCount);

                    /**
                     * 判断参数 RiskCmdEventCount 是否已赋值
                     * @return RiskCmdEventCount 是否已赋值
                     * 
                     */
                    bool RiskCmdEventCountHasBeenSet() const;

                    /**
                     * 获取待处理敏感服务异常子进程启动事件数
                     * @return AbnormalChildProcessEventCount 待处理敏感服务异常子进程启动事件数
                     * 
                     */
                    int64_t GetAbnormalChildProcessEventCount() const;

                    /**
                     * 设置待处理敏感服务异常子进程启动事件数
                     * @param _abnormalChildProcessEventCount 待处理敏感服务异常子进程启动事件数
                     * 
                     */
                    void SetAbnormalChildProcessEventCount(const int64_t& _abnormalChildProcessEventCount);

                    /**
                     * 判断参数 AbnormalChildProcessEventCount 是否已赋值
                     * @return AbnormalChildProcessEventCount 是否已赋值
                     * 
                     */
                    bool AbnormalChildProcessEventCountHasBeenSet() const;

                    /**
                     * 获取待处理自定义规则事件数
                     * @return UserDefinedRuleEventCount 待处理自定义规则事件数
                     * 
                     */
                    int64_t GetUserDefinedRuleEventCount() const;

                    /**
                     * 设置待处理自定义规则事件数
                     * @param _userDefinedRuleEventCount 待处理自定义规则事件数
                     * 
                     */
                    void SetUserDefinedRuleEventCount(const int64_t& _userDefinedRuleEventCount);

                    /**
                     * 判断参数 UserDefinedRuleEventCount 是否已赋值
                     * @return UserDefinedRuleEventCount 是否已赋值
                     * 
                     */
                    bool UserDefinedRuleEventCountHasBeenSet() const;

                private:

                    /**
                     * 日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 待处理代理软件事件数
                     */
                    int64_t m_proxyToolEventCount;
                    bool m_proxyToolEventCountHasBeenSet;

                    /**
                     * 待处理横向参透事件数
                     */
                    int64_t m_transferControlEventCount;
                    bool m_transferControlEventCountHasBeenSet;

                    /**
                     * 待处理恶意命令事件数
                     */
                    int64_t m_attackCmdEventCount;
                    bool m_attackCmdEventCountHasBeenSet;

                    /**
                     * 待处理反弹shell事件数
                     */
                    int64_t m_reverseShellEventCount;
                    bool m_reverseShellEventCountHasBeenSet;

                    /**
                     * 待处理无文件程序执行事件数
                     */
                    int64_t m_filelessEventCount;
                    bool m_filelessEventCountHasBeenSet;

                    /**
                     * 待处理高危命令事件数
                     */
                    int64_t m_riskCmdEventCount;
                    bool m_riskCmdEventCountHasBeenSet;

                    /**
                     * 待处理敏感服务异常子进程启动事件数
                     */
                    int64_t m_abnormalChildProcessEventCount;
                    bool m_abnormalChildProcessEventCountHasBeenSet;

                    /**
                     * 待处理自定义规则事件数
                     */
                    int64_t m_userDefinedRuleEventCount;
                    bool m_userDefinedRuleEventCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSEVENTTENDENCYINFO_H_
