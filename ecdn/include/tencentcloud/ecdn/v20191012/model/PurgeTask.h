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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_PURGETASK_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_PURGETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * 刷新任务日志详情
                */
                class PurgeTask : public AbstractModel
                {
                public:
                    PurgeTask();
                    ~PurgeTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取刷新任务ID。
                     * @return TaskId 刷新任务ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置刷新任务ID。
                     * @param _taskId 刷新任务ID。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取刷新Url。
                     * @return Url 刷新Url。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置刷新Url。
                     * @param _url 刷新Url。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取刷新任务状态，fail表示失败，done表示成功，process表示刷新中。
                     * @return Status 刷新任务状态，fail表示失败，done表示成功，process表示刷新中。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置刷新任务状态，fail表示失败，done表示成功，process表示刷新中。
                     * @param _status 刷新任务状态，fail表示失败，done表示成功，process表示刷新中。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取刷新类型，url表示url刷新，path表示目录刷新。
                     * @return PurgeType 刷新类型，url表示url刷新，path表示目录刷新。
                     * 
                     */
                    std::string GetPurgeType() const;

                    /**
                     * 设置刷新类型，url表示url刷新，path表示目录刷新。
                     * @param _purgeType 刷新类型，url表示url刷新，path表示目录刷新。
                     * 
                     */
                    void SetPurgeType(const std::string& _purgeType);

                    /**
                     * 判断参数 PurgeType 是否已赋值
                     * @return PurgeType 是否已赋值
                     * 
                     */
                    bool PurgeTypeHasBeenSet() const;

                    /**
                     * 获取刷新资源方式，flush代表刷新更新资源，delete代表刷新全部资源。
                     * @return FlushType 刷新资源方式，flush代表刷新更新资源，delete代表刷新全部资源。
                     * 
                     */
                    std::string GetFlushType() const;

                    /**
                     * 设置刷新资源方式，flush代表刷新更新资源，delete代表刷新全部资源。
                     * @param _flushType 刷新资源方式，flush代表刷新更新资源，delete代表刷新全部资源。
                     * 
                     */
                    void SetFlushType(const std::string& _flushType);

                    /**
                     * 判断参数 FlushType 是否已赋值
                     * @return FlushType 是否已赋值
                     * 
                     */
                    bool FlushTypeHasBeenSet() const;

                    /**
                     * 获取刷新任务提交时间
                     * @return CreateTime 刷新任务提交时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置刷新任务提交时间
                     * @param _createTime 刷新任务提交时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 刷新任务ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 刷新Url。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 刷新任务状态，fail表示失败，done表示成功，process表示刷新中。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 刷新类型，url表示url刷新，path表示目录刷新。
                     */
                    std::string m_purgeType;
                    bool m_purgeTypeHasBeenSet;

                    /**
                     * 刷新资源方式，flush代表刷新更新资源，delete代表刷新全部资源。
                     */
                    std::string m_flushType;
                    bool m_flushTypeHasBeenSet;

                    /**
                     * 刷新任务提交时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_PURGETASK_H_
