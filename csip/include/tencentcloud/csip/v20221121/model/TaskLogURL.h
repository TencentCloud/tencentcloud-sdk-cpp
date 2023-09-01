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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TASKLOGURL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TASKLOGURL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 报告pdf下载的临时链接
                */
                class TaskLogURL : public AbstractModel
                {
                public:
                    TaskLogURL();
                    ~TaskLogURL() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取报告下载临时链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return URL 报告下载临时链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置报告下载临时链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uRL 报告下载临时链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取任务报告id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogId 任务报告id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置任务报告id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logId 任务报告id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogId(const std::string& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取任务报告名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskLogName 任务报告名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskLogName() const;

                    /**
                     * 设置任务报告名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskLogName 任务报告名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskLogName(const std::string& _taskLogName);

                    /**
                     * 判断参数 TaskLogName 是否已赋值
                     * @return TaskLogName 是否已赋值
                     * 
                     */
                    bool TaskLogNameHasBeenSet() const;

                    /**
                     * 获取APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * 报告下载临时链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * 任务报告id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * 任务报告名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskLogName;
                    bool m_taskLogNameHasBeenSet;

                    /**
                     * APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TASKLOGURL_H_
