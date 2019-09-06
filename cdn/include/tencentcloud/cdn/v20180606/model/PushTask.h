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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_PUSHTASK_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_PUSHTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 预热任务日志详情。
                */
                class PushTask : public AbstractModel
                {
                public:
                    PushTask();
                    ~PushTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预热任务Id，前十位为时间戳。
                     * @return TaskId 预热任务Id，前十位为时间戳。
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置预热任务Id，前十位为时间戳。
                     * @param TaskId 预热任务Id，前十位为时间戳。
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取预热Url。
                     * @return Url 预热Url。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置预热Url。
                     * @param Url 预热Url。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取预热任务状态，fail表示失败，done表示成功，process表示预热中。
                     * @return Status 预热任务状态，fail表示失败，done表示成功，process表示预热中。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置预热任务状态，fail表示失败，done表示成功，process表示预热中。
                     * @param Status 预热任务状态，fail表示失败，done表示成功，process表示预热中。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取预热百分比。
                     * @return Percent 预热百分比。
                     */
                    int64_t GetPercent() const;

                    /**
                     * 设置预热百分比。
                     * @param Percent 预热百分比。
                     */
                    void SetPercent(const int64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取预热任务提交时间。
                     * @return CreateTime 预热任务提交时间。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置预热任务提交时间。
                     * @param CreateTime 预热任务提交时间。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 预热任务Id，前十位为时间戳。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 预热Url。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 预热任务状态，fail表示失败，done表示成功，process表示预热中。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 预热百分比。
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 预热任务提交时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_PUSHTASK_H_
