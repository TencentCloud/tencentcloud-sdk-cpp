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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEAUTOAUTHORIZEDTASK_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEAUTOAUTHORIZEDTASK_H_

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
                * 镜像自动授权任务信息
                */
                class ImageAutoAuthorizedTask : public AbstractModel
                {
                public:
                    ImageAutoAuthorizedTask();
                    ~ImageAutoAuthorizedTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取授权方式，AUTO:自动授权，MANUAL:手动授权
                     * @return Type 授权方式，AUTO:自动授权，MANUAL:手动授权
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置授权方式，AUTO:自动授权，MANUAL:手动授权
                     * @param _type 授权方式，AUTO:自动授权，MANUAL:手动授权
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取任务日期
                     * @return AuthorizedDate 任务日期
                     * 
                     */
                    std::string GetAuthorizedDate() const;

                    /**
                     * 设置任务日期
                     * @param _authorizedDate 任务日期
                     * 
                     */
                    void SetAuthorizedDate(const std::string& _authorizedDate);

                    /**
                     * 判断参数 AuthorizedDate 是否已赋值
                     * @return AuthorizedDate 是否已赋值
                     * 
                     */
                    bool AuthorizedDateHasBeenSet() const;

                    /**
                     * 获取镜像来源，LOCAL:本地镜像，REGISTRY:仓库镜像
                     * @return Source 镜像来源，LOCAL:本地镜像，REGISTRY:仓库镜像
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置镜像来源，LOCAL:本地镜像，REGISTRY:仓库镜像
                     * @param _source 镜像来源，LOCAL:本地镜像，REGISTRY:仓库镜像
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取最近授权时间
                     * @return LastAuthorizedTime 最近授权时间
                     * 
                     */
                    std::string GetLastAuthorizedTime() const;

                    /**
                     * 设置最近授权时间
                     * @param _lastAuthorizedTime 最近授权时间
                     * 
                     */
                    void SetLastAuthorizedTime(const std::string& _lastAuthorizedTime);

                    /**
                     * 判断参数 LastAuthorizedTime 是否已赋值
                     * @return LastAuthorizedTime 是否已赋值
                     * 
                     */
                    bool LastAuthorizedTimeHasBeenSet() const;

                    /**
                     * 获取自动授权成功数
                     * @return SuccessCount 自动授权成功数
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置自动授权成功数
                     * @param _successCount 自动授权成功数
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取自动授权失败数
                     * @return FailCount 自动授权失败数
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 设置自动授权失败数
                     * @param _failCount 自动授权失败数
                     * 
                     */
                    void SetFailCount(const int64_t& _failCount);

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取最近任务失败码，REACH_LIMIT:达到授权上限，LICENSE_INSUFFICIENT:授权数不足
                     * @return LatestFailCode 最近任务失败码，REACH_LIMIT:达到授权上限，LICENSE_INSUFFICIENT:授权数不足
                     * 
                     */
                    std::string GetLatestFailCode() const;

                    /**
                     * 设置最近任务失败码，REACH_LIMIT:达到授权上限，LICENSE_INSUFFICIENT:授权数不足
                     * @param _latestFailCode 最近任务失败码，REACH_LIMIT:达到授权上限，LICENSE_INSUFFICIENT:授权数不足
                     * 
                     */
                    void SetLatestFailCode(const std::string& _latestFailCode);

                    /**
                     * 判断参数 LatestFailCode 是否已赋值
                     * @return LatestFailCode 是否已赋值
                     * 
                     */
                    bool LatestFailCodeHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 授权方式，AUTO:自动授权，MANUAL:手动授权
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 任务日期
                     */
                    std::string m_authorizedDate;
                    bool m_authorizedDateHasBeenSet;

                    /**
                     * 镜像来源，LOCAL:本地镜像，REGISTRY:仓库镜像
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 最近授权时间
                     */
                    std::string m_lastAuthorizedTime;
                    bool m_lastAuthorizedTimeHasBeenSet;

                    /**
                     * 自动授权成功数
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 自动授权失败数
                     */
                    int64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * 最近任务失败码，REACH_LIMIT:达到授权上限，LICENSE_INSUFFICIENT:授权数不足
                     */
                    std::string m_latestFailCode;
                    bool m_latestFailCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEAUTOAUTHORIZEDTASK_H_
