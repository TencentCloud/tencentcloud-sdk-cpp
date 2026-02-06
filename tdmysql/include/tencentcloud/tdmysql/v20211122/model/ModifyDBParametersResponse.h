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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBPARAMETERSRESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBPARAMETERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * ModifyDBParameters返回参数结构体
                */
                class ModifyDBParametersResponse : public AbstractModel
                {
                public:
                    ModifyDBParametersResponse();
                    ~ModifyDBParametersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取123
                     * @return TaskID 123
                     * 
                     */
                    int64_t GetTaskID() const;

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                private:

                    /**
                     * 123
                     */
                    int64_t m_taskID;
                    bool m_taskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBPARAMETERSRESPONSE_H_
