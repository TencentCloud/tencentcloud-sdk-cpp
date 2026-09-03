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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RESUMETRAININGJOBINSTANCERESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RESUMETRAININGJOBINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TrainingJobInstance.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ResumeTrainingJobInstance返回参数结构体
                */
                class ResumeTrainingJobInstanceResponse : public AbstractModel
                {
                public:
                    ResumeTrainingJobInstanceResponse();
                    ~ResumeTrainingJobInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>训练实例详情</p>
                     * @return Instance <p>训练实例详情</p>
                     * 
                     */
                    TrainingJobInstance GetInstance() const;

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                private:

                    /**
                     * <p>训练实例详情</p>
                     */
                    TrainingJobInstance m_instance;
                    bool m_instanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RESUMETRAININGJOBINSTANCERESPONSE_H_
