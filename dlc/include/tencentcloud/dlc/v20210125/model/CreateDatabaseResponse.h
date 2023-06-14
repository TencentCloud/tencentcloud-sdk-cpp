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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDATABASERESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDATABASERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Execution.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateDatabase返回参数结构体
                */
                class CreateDatabaseResponse : public AbstractModel
                {
                public:
                    CreateDatabaseResponse();
                    ~CreateDatabaseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取生成的建库执行语句对象。
                     * @return Execution 生成的建库执行语句对象。
                     * 
                     */
                    Execution GetExecution() const;

                    /**
                     * 判断参数 Execution 是否已赋值
                     * @return Execution 是否已赋值
                     * 
                     */
                    bool ExecutionHasBeenSet() const;

                private:

                    /**
                     * 生成的建库执行语句对象。
                     */
                    Execution m_execution;
                    bool m_executionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDATABASERESPONSE_H_
