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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DOCKERACTIVITY_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DOCKERACTIVITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Docker活动信息
                */
                class DockerActivity : public AbstractModel
                {
                public:
                    DockerActivity();
                    ~DockerActivity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取活动ID。
                     * @return ActivityId 活动ID。
                     * 
                     */
                    std::string GetActivityId() const;

                    /**
                     * 设置活动ID。
                     * @param _activityId 活动ID。
                     * 
                     */
                    void SetActivityId(const std::string& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取活动名称。
                     * @return ActivityName 活动名称。
                     * 
                     */
                    std::string GetActivityName() const;

                    /**
                     * 设置活动名称。
                     * @param _activityName 活动名称。
                     * 
                     */
                    void SetActivityName(const std::string& _activityName);

                    /**
                     * 判断参数 ActivityName 是否已赋值
                     * @return ActivityName 是否已赋值
                     * 
                     */
                    bool ActivityNameHasBeenSet() const;

                    /**
                     * 获取活动状态。取值范围： 
<li>INIT：表示初始化，活动尚未执行</li>
<li>OPERATING：表示活动执行中</li>
<li>SUCCESS：表示活动执行成功</li>
<li>FAILED：表示活动执行失败</li>
                     * @return ActivityState 活动状态。取值范围： 
<li>INIT：表示初始化，活动尚未执行</li>
<li>OPERATING：表示活动执行中</li>
<li>SUCCESS：表示活动执行成功</li>
<li>FAILED：表示活动执行失败</li>
                     * 
                     */
                    std::string GetActivityState() const;

                    /**
                     * 设置活动状态。取值范围： 
<li>INIT：表示初始化，活动尚未执行</li>
<li>OPERATING：表示活动执行中</li>
<li>SUCCESS：表示活动执行成功</li>
<li>FAILED：表示活动执行失败</li>
                     * @param _activityState 活动状态。取值范围： 
<li>INIT：表示初始化，活动尚未执行</li>
<li>OPERATING：表示活动执行中</li>
<li>SUCCESS：表示活动执行成功</li>
<li>FAILED：表示活动执行失败</li>
                     * 
                     */
                    void SetActivityState(const std::string& _activityState);

                    /**
                     * 判断参数 ActivityState 是否已赋值
                     * @return ActivityState 是否已赋值
                     * 
                     */
                    bool ActivityStateHasBeenSet() const;

                    /**
                     * 获取活动执行的命令输出，以base64编码。
                     * @return ActivityCommandOutput 活动执行的命令输出，以base64编码。
                     * 
                     */
                    std::string GetActivityCommandOutput() const;

                    /**
                     * 设置活动执行的命令输出，以base64编码。
                     * @param _activityCommandOutput 活动执行的命令输出，以base64编码。
                     * 
                     */
                    void SetActivityCommandOutput(const std::string& _activityCommandOutput);

                    /**
                     * 判断参数 ActivityCommandOutput 是否已赋值
                     * @return ActivityCommandOutput 是否已赋值
                     * 
                     */
                    bool ActivityCommandOutputHasBeenSet() const;

                    /**
                     * 获取容器ID列表。
                     * @return ContainerIds 容器ID列表。
                     * 
                     */
                    std::vector<std::string> GetContainerIds() const;

                    /**
                     * 设置容器ID列表。
                     * @param _containerIds 容器ID列表。
                     * 
                     */
                    void SetContainerIds(const std::vector<std::string>& _containerIds);

                    /**
                     * 判断参数 ContainerIds 是否已赋值
                     * @return ContainerIds 是否已赋值
                     * 
                     */
                    bool ContainerIdsHasBeenSet() const;

                    /**
                     * 获取创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。
                     * @return CreatedTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。
                     * @param _createdTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取结束时间。按照 ISO8601 标准表示，并且使用 UTC 时间。
                     * @return EndTime 结束时间。按照 ISO8601 标准表示，并且使用 UTC 时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。按照 ISO8601 标准表示，并且使用 UTC 时间。
                     * @param _endTime 结束时间。按照 ISO8601 标准表示，并且使用 UTC 时间。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 活动ID。
                     */
                    std::string m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 活动名称。
                     */
                    std::string m_activityName;
                    bool m_activityNameHasBeenSet;

                    /**
                     * 活动状态。取值范围： 
<li>INIT：表示初始化，活动尚未执行</li>
<li>OPERATING：表示活动执行中</li>
<li>SUCCESS：表示活动执行成功</li>
<li>FAILED：表示活动执行失败</li>
                     */
                    std::string m_activityState;
                    bool m_activityStateHasBeenSet;

                    /**
                     * 活动执行的命令输出，以base64编码。
                     */
                    std::string m_activityCommandOutput;
                    bool m_activityCommandOutputHasBeenSet;

                    /**
                     * 容器ID列表。
                     */
                    std::vector<std::string> m_containerIds;
                    bool m_containerIdsHasBeenSet;

                    /**
                     * 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 结束时间。按照 ISO8601 标准表示，并且使用 UTC 时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DOCKERACTIVITY_H_
