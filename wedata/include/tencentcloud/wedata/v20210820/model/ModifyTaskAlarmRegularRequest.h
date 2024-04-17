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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKALARMREGULARREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKALARMREGULARREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskAlarmInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyTaskAlarmRegular请求参数结构体
                */
                class ModifyTaskAlarmRegularRequest : public AbstractModel
                {
                public:
                    ModifyTaskAlarmRegularRequest();
                    ~ModifyTaskAlarmRegularRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则ID
                     * @return Id 规则ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置规则ID
                     * @param _id 规则ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取规则信息
                     * @return TaskAlarmInfo 规则信息
                     * 
                     */
                    TaskAlarmInfo GetTaskAlarmInfo() const;

                    /**
                     * 设置规则信息
                     * @param _taskAlarmInfo 规则信息
                     * 
                     */
                    void SetTaskAlarmInfo(const TaskAlarmInfo& _taskAlarmInfo);

                    /**
                     * 判断参数 TaskAlarmInfo 是否已赋值
                     * @return TaskAlarmInfo 是否已赋值
                     * 
                     */
                    bool TaskAlarmInfoHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 规则ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 规则信息
                     */
                    TaskAlarmInfo m_taskAlarmInfo;
                    bool m_taskAlarmInfoHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKALARMREGULARREQUEST_H_
