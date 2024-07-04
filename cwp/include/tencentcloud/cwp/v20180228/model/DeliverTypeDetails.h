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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DELIVERTYPEDETAILS_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DELIVERTYPEDETAILS_H_

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
                * 日志投递类型细节
                */
                class DeliverTypeDetails : public AbstractModel
                {
                public:
                    DeliverTypeDetails();
                    ~DeliverTypeDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安全模块类型 1: 入侵检测 2: 漏洞管理 3: 基线管理 4: 高级防御 5:客户端相关 6: 资产指纹 7 主机列表 8 客户端上报
                     * @return SecurityType 安全模块类型 1: 入侵检测 2: 漏洞管理 3: 基线管理 4: 高级防御 5:客户端相关 6: 资产指纹 7 主机列表 8 客户端上报
                     * 
                     */
                    uint64_t GetSecurityType() const;

                    /**
                     * 设置安全模块类型 1: 入侵检测 2: 漏洞管理 3: 基线管理 4: 高级防御 5:客户端相关 6: 资产指纹 7 主机列表 8 客户端上报
                     * @param _securityType 安全模块类型 1: 入侵检测 2: 漏洞管理 3: 基线管理 4: 高级防御 5:客户端相关 6: 资产指纹 7 主机列表 8 客户端上报
                     * 
                     */
                    void SetSecurityType(const uint64_t& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     * 
                     */
                    bool SecurityTypeHasBeenSet() const;

                    /**
                     * 获取安全模块下的日志类型
                     * @return LogType 安全模块下的日志类型
                     * 
                     */
                    std::vector<int64_t> GetLogType() const;

                    /**
                     * 设置安全模块下的日志类型
                     * @param _logType 安全模块下的日志类型
                     * 
                     */
                    void SetLogType(const std::vector<int64_t>& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取主题ID
                     * @return TopicId 主题ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置主题ID
                     * @param _topicId 主题ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取主题名
                     * @return TopicName 主题名
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名
                     * @param _topicName 主题名
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取投递开关 0关闭 1开启
                     * @return Switch 投递开关 0关闭 1开启
                     * 
                     */
                    uint64_t GetSwitch() const;

                    /**
                     * 设置投递开关 0关闭 1开启
                     * @param _switch 投递开关 0关闭 1开启
                     * 
                     */
                    void SetSwitch(const uint64_t& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取投递状态，0未开启 1正常 2异常
                     * @return Status 投递状态，0未开启 1正常 2异常
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置投递状态，0未开启 1正常 2异常
                     * @param _status 投递状态，0未开启 1正常 2异常
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return ErrInfo 错误信息
                     * 
                     */
                    std::string GetErrInfo() const;

                    /**
                     * 设置错误信息
                     * @param _errInfo 错误信息
                     * 
                     */
                    void SetErrInfo(const std::string& _errInfo);

                    /**
                     * 判断参数 ErrInfo 是否已赋值
                     * @return ErrInfo 是否已赋值
                     * 
                     */
                    bool ErrInfoHasBeenSet() const;

                    /**
                     * 获取最近一次状态上报时间戳
                     * @return StatusTime 最近一次状态上报时间戳
                     * 
                     */
                    int64_t GetStatusTime() const;

                    /**
                     * 设置最近一次状态上报时间戳
                     * @param _statusTime 最近一次状态上报时间戳
                     * 
                     */
                    void SetStatusTime(const int64_t& _statusTime);

                    /**
                     * 判断参数 StatusTime 是否已赋值
                     * @return StatusTime 是否已赋值
                     * 
                     */
                    bool StatusTimeHasBeenSet() const;

                    /**
                     * 获取日志集名
                     * @return LogName 日志集名
                     * 
                     */
                    std::string GetLogName() const;

                    /**
                     * 设置日志集名
                     * @param _logName 日志集名
                     * 
                     */
                    void SetLogName(const std::string& _logName);

                    /**
                     * 判断参数 LogName 是否已赋值
                     * @return LogName 是否已赋值
                     * 
                     */
                    bool LogNameHasBeenSet() const;

                    /**
                     * 获取日志集ID
                     * @return LogSetId 日志集ID
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置日志集ID
                     * @param _logSetId 日志集ID
                     * 
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     * 
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取日志集所在地域
                     * @return Region 日志集所在地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置日志集所在地域
                     * @param _region 日志集所在地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 安全模块类型 1: 入侵检测 2: 漏洞管理 3: 基线管理 4: 高级防御 5:客户端相关 6: 资产指纹 7 主机列表 8 客户端上报
                     */
                    uint64_t m_securityType;
                    bool m_securityTypeHasBeenSet;

                    /**
                     * 安全模块下的日志类型
                     */
                    std::vector<int64_t> m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 主题名
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 投递开关 0关闭 1开启
                     */
                    uint64_t m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 投递状态，0未开启 1正常 2异常
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_errInfo;
                    bool m_errInfoHasBeenSet;

                    /**
                     * 最近一次状态上报时间戳
                     */
                    int64_t m_statusTime;
                    bool m_statusTimeHasBeenSet;

                    /**
                     * 日志集名
                     */
                    std::string m_logName;
                    bool m_logNameHasBeenSet;

                    /**
                     * 日志集ID
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * 日志集所在地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DELIVERTYPEDETAILS_H_
