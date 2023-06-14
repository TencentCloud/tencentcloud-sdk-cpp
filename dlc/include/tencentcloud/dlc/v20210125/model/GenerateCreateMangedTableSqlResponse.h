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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GENERATECREATEMANGEDTABLESQLRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GENERATECREATEMANGEDTABLESQLRESPONSE_H_

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
                * GenerateCreateMangedTableSql返回参数结构体
                */
                class GenerateCreateMangedTableSqlResponse : public AbstractModel
                {
                public:
                    GenerateCreateMangedTableSqlResponse();
                    ~GenerateCreateMangedTableSqlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建托管存储内表sql语句描述
                     * @return Execution 创建托管存储内表sql语句描述
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
                     * 创建托管存储内表sql语句描述
                     */
                    Execution m_execution;
                    bool m_executionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GENERATECREATEMANGEDTABLESQLRESPONSE_H_
