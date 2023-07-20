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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDRINSTANCESCRIPTCONTENTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDRINSTANCESCRIPTCONTENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeDrInstanceScriptContent请求参数结构体
                */
                class DescribeDrInstanceScriptContentRequest : public AbstractModel
                {
                public:
                    DescribeDrInstanceScriptContentRequest();
                    ~DescribeDrInstanceScriptContentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务来源 ADHOC || WORKFLOW
                     * @return TaskSource 任务来源 ADHOC || WORKFLOW
                     * 
                     */
                    std::string GetTaskSource() const;

                    /**
                     * 设置任务来源 ADHOC || WORKFLOW
                     * @param _taskSource 任务来源 ADHOC || WORKFLOW
                     * 
                     */
                    void SetTaskSource(const std::string& _taskSource);

                    /**
                     * 判断参数 TaskSource 是否已赋值
                     * @return TaskSource 是否已赋值
                     * 
                     */
                    bool TaskSourceHasBeenSet() const;

                    /**
                     * 获取试运行记录id
                     * @return RecordId 试运行记录id
                     * 
                     */
                    uint64_t GetRecordId() const;

                    /**
                     * 设置试运行记录id
                     * @param _recordId 试运行记录id
                     * 
                     */
                    void SetRecordId(const uint64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取试运行子记录id
                     * @return SonRecordId 试运行子记录id
                     * 
                     */
                    uint64_t GetSonRecordId() const;

                    /**
                     * 设置试运行子记录id
                     * @param _sonRecordId 试运行子记录id
                     * 
                     */
                    void SetSonRecordId(const uint64_t& _sonRecordId);

                    /**
                     * 判断参数 SonRecordId 是否已赋值
                     * @return SonRecordId 是否已赋值
                     * 
                     */
                    bool SonRecordIdHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务来源 ADHOC || WORKFLOW
                     */
                    std::string m_taskSource;
                    bool m_taskSourceHasBeenSet;

                    /**
                     * 试运行记录id
                     */
                    uint64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 试运行子记录id
                     */
                    uint64_t m_sonRecordId;
                    bool m_sonRecordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDRINSTANCESCRIPTCONTENTREQUEST_H_
