/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEAVATARCLONEFIGURERESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEAVATARCLONEFIGURERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateLiveAvatarCloneFigure返回参数结构体
                */
                class CreateLiveAvatarCloneFigureResponse : public AbstractModel
                {
                public:
                    CreateLiveAvatarCloneFigureResponse();
                    ~CreateLiveAvatarCloneFigureResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>该图克隆形象生成的任务id</p>
                     * @return TaskId <p>该图克隆形象生成的任务id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>该克隆形象返回的状态</p><p>枚举值：</p><ul><li>SUBMITTING： 已受理</li><li>CHECKING： 检查中</li><li>QUEUE： 排队中</li><li>MAKING： 训练中</li><li>CONFIRMING： 效果确认</li><li>SUCCESS： 成功</li><li>FAIL： 失败</li></ul>
                     * @return Status <p>该克隆形象返回的状态</p><p>枚举值：</p><ul><li>SUBMITTING： 已受理</li><li>CHECKING： 检查中</li><li>QUEUE： 排队中</li><li>MAKING： 训练中</li><li>CONFIRMING： 效果确认</li><li>SUCCESS： 成功</li><li>FAIL： 失败</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>该图克隆形象生成的任务id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>该克隆形象返回的状态</p><p>枚举值：</p><ul><li>SUBMITTING： 已受理</li><li>CHECKING： 检查中</li><li>QUEUE： 排队中</li><li>MAKING： 训练中</li><li>CONFIRMING： 效果确认</li><li>SUCCESS： 成功</li><li>FAIL： 失败</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEAVATARCLONEFIGURERESPONSE_H_
