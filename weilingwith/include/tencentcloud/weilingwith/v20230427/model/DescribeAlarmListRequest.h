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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEALARMLISTREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEALARMLISTREQUEST_H_

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
                * DescribeAlarmList请求参数结构体
                */
                class DescribeAlarmListRequest : public AbstractModel
                {
                public:
                    DescribeAlarmListRequest();
                    ~DescribeAlarmListRequest() = default;
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
                     * 获取分页查询，第几页
                     * @return PageNumber 分页查询，第几页
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页查询，第几页
                     * @param _pageNumber 分页查询，第几页
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页条数
                     * @return PageSize 每页条数
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页条数
                     * @param _pageSize 每页条数
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

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
                     * 获取告警状态
                     * @return Statuses 告警状态
                     * 
                     */
                    std::vector<std::string> GetStatuses() const;

                    /**
                     * 设置告警状态
                     * @param _statuses 告警状态
                     * 
                     */
                    void SetStatuses(const std::vector<std::string>& _statuses);

                    /**
                     * 判断参数 Statuses 是否已赋值
                     * @return Statuses 是否已赋值
                     * 
                     */
                    bool StatusesHasBeenSet() const;

                    /**
                     * 获取告警类型
                     * @return AlarmTypeSet 告警类型
                     * 
                     */
                    std::vector<AlarmTypeInfo> GetAlarmTypeSet() const;

                    /**
                     * 设置告警类型
                     * @param _alarmTypeSet 告警类型
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
                     * 获取告警级别id
                     * @return LevelSet 告警级别id
                     * 
                     */
                    std::vector<int64_t> GetLevelSet() const;

                    /**
                     * 设置告警级别id
                     * @param _levelSet 告警级别id
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
                     * 获取应用id
                     * @return AppIdSet 应用id
                     * 
                     */
                    std::vector<int64_t> GetAppIdSet() const;

                    /**
                     * 设置应用id
                     * @param _appIdSet 应用id
                     * 
                     */
                    void SetAppIdSet(const std::vector<int64_t>& _appIdSet);

                    /**
                     * 判断参数 AppIdSet 是否已赋值
                     * @return AppIdSet 是否已赋值
                     * 
                     */
                    bool AppIdSetHasBeenSet() const;

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
                     * 获取空间层级
                     * @return SpaceCodeSet 空间层级
                     * 
                     */
                    std::vector<std::string> GetSpaceCodeSet() const;

                    /**
                     * 设置空间层级
                     * @param _spaceCodeSet 空间层级
                     * 
                     */
                    void SetSpaceCodeSet(const std::vector<std::string>& _spaceCodeSet);

                    /**
                     * 判断参数 SpaceCodeSet 是否已赋值
                     * @return SpaceCodeSet 是否已赋值
                     * 
                     */
                    bool SpaceCodeSetHasBeenSet() const;

                    /**
                     * 获取应用扩展字段1
                     * @return ExtendOne 应用扩展字段1
                     * 
                     */
                    std::vector<std::string> GetExtendOne() const;

                    /**
                     * 设置应用扩展字段1
                     * @param _extendOne 应用扩展字段1
                     * 
                     */
                    void SetExtendOne(const std::vector<std::string>& _extendOne);

                    /**
                     * 判断参数 ExtendOne 是否已赋值
                     * @return ExtendOne 是否已赋值
                     * 
                     */
                    bool ExtendOneHasBeenSet() const;

                    /**
                     * 获取应用扩展字段2
                     * @return ExtendTwo 应用扩展字段2
                     * 
                     */
                    std::vector<std::string> GetExtendTwo() const;

                    /**
                     * 设置应用扩展字段2
                     * @param _extendTwo 应用扩展字段2
                     * 
                     */
                    void SetExtendTwo(const std::vector<std::string>& _extendTwo);

                    /**
                     * 判断参数 ExtendTwo 是否已赋值
                     * @return ExtendTwo 是否已赋值
                     * 
                     */
                    bool ExtendTwoHasBeenSet() const;

                    /**
                     * 获取当前告警处理人，填孪生中台的用户id
                     * @return ProcessorSet 当前告警处理人，填孪生中台的用户id
                     * 
                     */
                    std::vector<std::string> GetProcessorSet() const;

                    /**
                     * 设置当前告警处理人，填孪生中台的用户id
                     * @param _processorSet 当前告警处理人，填孪生中台的用户id
                     * 
                     */
                    void SetProcessorSet(const std::vector<std::string>& _processorSet);

                    /**
                     * 判断参数 ProcessorSet 是否已赋值
                     * @return ProcessorSet 是否已赋值
                     * 
                     */
                    bool ProcessorSetHasBeenSet() const;

                    /**
                     * 获取分组id
                     * @return GroupIdSet 分组id
                     * 
                     */
                    std::vector<int64_t> GetGroupIdSet() const;

                    /**
                     * 设置分组id
                     * @param _groupIdSet 分组id
                     * 
                     */
                    void SetGroupIdSet(const std::vector<int64_t>& _groupIdSet);

                    /**
                     * 判断参数 GroupIdSet 是否已赋值
                     * @return GroupIdSet 是否已赋值
                     * 
                     */
                    bool GroupIdSetHasBeenSet() const;

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
                     * 分页查询，第几页
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页条数
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 工作空间id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                    /**
                     * 告警状态
                     */
                    std::vector<std::string> m_statuses;
                    bool m_statusesHasBeenSet;

                    /**
                     * 告警类型
                     */
                    std::vector<AlarmTypeInfo> m_alarmTypeSet;
                    bool m_alarmTypeSetHasBeenSet;

                    /**
                     * 告警级别id
                     */
                    std::vector<int64_t> m_levelSet;
                    bool m_levelSetHasBeenSet;

                    /**
                     * 告警id
                     */
                    std::vector<std::string> m_idSet;
                    bool m_idSetHasBeenSet;

                    /**
                     * 应用id
                     */
                    std::vector<int64_t> m_appIdSet;
                    bool m_appIdSetHasBeenSet;

                    /**
                     * 设备id
                     */
                    std::vector<std::string> m_wIDSet;
                    bool m_wIDSetHasBeenSet;

                    /**
                     * 空间层级
                     */
                    std::vector<std::string> m_spaceCodeSet;
                    bool m_spaceCodeSetHasBeenSet;

                    /**
                     * 应用扩展字段1
                     */
                    std::vector<std::string> m_extendOne;
                    bool m_extendOneHasBeenSet;

                    /**
                     * 应用扩展字段2
                     */
                    std::vector<std::string> m_extendTwo;
                    bool m_extendTwoHasBeenSet;

                    /**
                     * 当前告警处理人，填孪生中台的用户id
                     */
                    std::vector<std::string> m_processorSet;
                    bool m_processorSetHasBeenSet;

                    /**
                     * 分组id
                     */
                    std::vector<int64_t> m_groupIdSet;
                    bool m_groupIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEALARMLISTREQUEST_H_
