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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SETTASKALARMNEWREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SETTASKALARMNEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/AlarmInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * SetTaskAlarmNew请求参数结构体
                */
                class SetTaskAlarmNewRequest : public AbstractModel
                {
                public:
                    SetTaskAlarmNewRequest();
                    ~SetTaskAlarmNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设置任务超时告警和失败告警信息
                     * @return AlarmInfoList 设置任务超时告警和失败告警信息
                     * 
                     */
                    std::vector<AlarmInfo> GetAlarmInfoList() const;

                    /**
                     * 设置设置任务超时告警和失败告警信息
                     * @param _alarmInfoList 设置任务超时告警和失败告警信息
                     * 
                     */
                    void SetAlarmInfoList(const std::vector<AlarmInfo>& _alarmInfoList);

                    /**
                     * 判断参数 AlarmInfoList 是否已赋值
                     * @return AlarmInfoList 是否已赋值
                     * 
                     */
                    bool AlarmInfoListHasBeenSet() const;

                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 设置任务超时告警和失败告警信息
                     */
                    std::vector<AlarmInfo> m_alarmInfoList;
                    bool m_alarmInfoListHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SETTASKALARMNEWREQUEST_H_
