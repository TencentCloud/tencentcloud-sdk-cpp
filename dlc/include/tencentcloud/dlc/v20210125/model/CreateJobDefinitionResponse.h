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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEJOBDEFINITIONRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEJOBDEFINITIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateJobDefinition返回参数结构体
                */
                class CreateJobDefinitionResponse : public AbstractModel
                {
                public:
                    CreateJobDefinitionResponse();
                    ~CreateJobDefinitionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>作业定义唯一标识符（ID）。</p>
                     * @return JobDefinitionId <p>作业定义唯一标识符（ID）。</p>
                     * 
                     */
                    std::string GetJobDefinitionId() const;

                    /**
                     * 判断参数 JobDefinitionId 是否已赋值
                     * @return JobDefinitionId 是否已赋值
                     * 
                     */
                    bool JobDefinitionIdHasBeenSet() const;

                private:

                    /**
                     * <p>作业定义唯一标识符（ID）。</p>
                     */
                    std::string m_jobDefinitionId;
                    bool m_jobDefinitionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEJOBDEFINITIONRESPONSE_H_
