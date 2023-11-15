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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BATCHKILLALARMREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BATCHKILLALARMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/AlarmTypeInfo.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * BatchKillAlarm请求参数结构体
                */
                class BatchKillAlarmRequest : public AbstractModel
                {
                public:
                    BatchKillAlarmRequest();
                    ~BatchKillAlarmRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警开始时间，必填,时间戳秒
                     * @return BeginTime 告警开始时间，必填,时间戳秒
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置告警开始时间，必填,时间戳秒
                     * @param _beginTime 告警开始时间，必填,时间戳秒
                     * 
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取告警结束时间，必填，时间戳秒
                     * @return EndTime 告警结束时间，必填，时间戳秒
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置告警结束时间，必填，时间戳秒
                     * @param _endTime 告警结束时间，必填，时间戳秒
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取告警状态: unprocessed processing

                     * @return StatusSet 告警状态: unprocessed processing

                     * 
                     */
                    std::vector<std::string> GetStatusSet() const;

                    /**
                     * 设置告警状态: unprocessed processing

                     * @param _statusSet 告警状态: unprocessed processing

                     * 
                     */
                    void SetStatusSet(const std::vector<std::string>& _statusSet);

                    /**
                     * 判断参数 StatusSet 是否已赋值
                     * @return StatusSet 是否已赋值
                     * 
                     */
                    bool StatusSetHasBeenSet() const;

                    /**
                     * 获取工作空间id
                     * @return WorkspaceId 工作空间id
                     * 
                     */
                    int64_t GetWorkspaceId() const;

                    /**
                     * 设置工作空间id
                     * @param _workspaceId 工作空间id
                     * 
                     */
                    void SetWorkspaceId(const int64_t& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取当前操作用户id
                     * @return UserId 当前操作用户id
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置当前操作用户id
                     * @param _userId 当前操作用户id
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取当前操作用户名称
                     * @return UserName 当前操作用户名称
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置当前操作用户名称
                     * @param _userName 当前操作用户名称
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取应用token
                     * @return ApplicationToken 应用token
                     * 
                     */
                    std::string GetApplicationToken() const;

                    /**
                     * 设置应用token
                     * @param _applicationToken 应用token
                     * 
                     */
                    void SetApplicationToken(const std::string& _applicationToken);

                    /**
                     * 判断参数 ApplicationToken 是否已赋值
                     * @return ApplicationToken 是否已赋值
                     * 
                     */
                    bool ApplicationTokenHasBeenSet() const;

                    /**
                     * 获取当前告警处理人，填孪生中台用户id,多个用逗号分隔

                     * @return ProcessorId 当前告警处理人，填孪生中台用户id,多个用逗号分隔

                     * 
                     */
                    std::string GetProcessorId() const;

                    /**
                     * 设置当前告警处理人，填孪生中台用户id,多个用逗号分隔

                     * @param _processorId 当前告警处理人，填孪生中台用户id,多个用逗号分隔

                     * 
                     */
                    void SetProcessorId(const std::string& _processorId);

                    /**
                     * 判断参数 ProcessorId 是否已赋值
                     * @return ProcessorId 是否已赋值
                     * 
                     */
                    bool ProcessorIdHasBeenSet() const;

                    /**
                     * 获取告警子类型(如果传告警子类型，则必传父类型)

                     * @return AlarmTypeSet 告警子类型(如果传告警子类型，则必传父类型)

                     * 
                     */
                    std::vector<AlarmTypeInfo> GetAlarmTypeSet() const;

                    /**
                     * 设置告警子类型(如果传告警子类型，则必传父类型)

                     * @param _alarmTypeSet 告警子类型(如果传告警子类型，则必传父类型)

                     * 
                     */
                    void SetAlarmTypeSet(const std::vector<AlarmTypeInfo>& _alarmTypeSet);

                    /**
                     * 判断参数 AlarmTypeSet 是否已赋值
                     * @return AlarmTypeSet 是否已赋值
                     * 
                     */
                    bool AlarmTypeSetHasBeenSet() const;

                    /**
                     * 获取告警级别,包括1~5
                     * @return LevelSet 告警级别,包括1~5
                     * 
                     */
                    std::vector<int64_t> GetLevelSet() const;

                    /**
                     * 设置告警级别,包括1~5
                     * @param _levelSet 告警级别,包括1~5
                     * 
                     */
                    void SetLevelSet(const std::vector<int64_t>& _levelSet);

                    /**
                     * 判断参数 LevelSet 是否已赋值
                     * @return LevelSet 是否已赋值
                     * 
                     */
                    bool LevelSetHasBeenSet() const;

                    /**
                     * 获取设备id
                     * @return WIDSet 设备id
                     * 
                     */
                    std::vector<std::string> GetWIDSet() const;

                    /**
                     * 设置设备id
                     * @param _wIDSet 设备id
                     * 
                     */
                    void SetWIDSet(const std::vector<std::string>& _wIDSet);

                    /**
                     * 判断参数 WIDSet 是否已赋值
                     * @return WIDSet 是否已赋值
                     * 
                     */
                    bool WIDSetHasBeenSet() const;

                    /**
                     * 获取告警id
                     * @return IdSet 告警id
                     * 
                     */
                    std::vector<std::string> GetIdSet() const;

                    /**
                     * 设置告警id
                     * @param _idSet 告警id
                     * 
                     */
                    void SetIdSet(const std::vector<std::string>& _idSet);

                    /**
                     * 判断参数 IdSet 是否已赋值
                     * @return IdSet 是否已赋值
                     * 
                     */
                    bool IdSetHasBeenSet() const;

                    /**
                     * 获取告警处理的说明
                     * @return Desc 告警处理的说明
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置告警处理的说明
                     * @param _desc 告警处理的说明
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * 告警开始时间，必填,时间戳秒
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 告警结束时间，必填，时间戳秒
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 告警状态: unprocessed processing

                     */
                    std::vector<std::string> m_statusSet;
                    bool m_statusSetHasBeenSet;

                    /**
                     * 工作空间id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 当前操作用户id
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 当前操作用户名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                    /**
                     * 当前告警处理人，填孪生中台用户id,多个用逗号分隔

                     */
                    std::string m_processorId;
                    bool m_processorIdHasBeenSet;

                    /**
                     * 告警子类型(如果传告警子类型，则必传父类型)

                     */
                    std::vector<AlarmTypeInfo> m_alarmTypeSet;
                    bool m_alarmTypeSetHasBeenSet;

                    /**
                     * 告警级别,包括1~5
                     */
                    std::vector<int64_t> m_levelSet;
                    bool m_levelSetHasBeenSet;

                    /**
                     * 设备id
                     */
                    std::vector<std::string> m_wIDSet;
                    bool m_wIDSetHasBeenSet;

                    /**
                     * 告警id
                     */
                    std::vector<std::string> m_idSet;
                    bool m_idSetHasBeenSet;

                    /**
                     * 告警处理的说明
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BATCHKILLALARMREQUEST_H_
