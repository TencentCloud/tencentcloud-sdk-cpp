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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_CREATESTRUCTURETASKRESPONSE_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_CREATESTRUCTURETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * CreateStructureTask返回参数结构体
                */
                class CreateStructureTaskResponse : public AbstractModel
                {
                public:
                    CreateStructureTaskResponse();
                    ~CreateStructureTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建的主任务号，用于查询结果
                     * @return MainTaskId 创建的主任务号，用于查询结果
                     * 
                     */
                    std::string GetMainTaskId() const;

                    /**
                     * 判断参数 MainTaskId 是否已赋值
                     * @return MainTaskId 是否已赋值
                     * 
                     */
                    bool MainTaskIdHasBeenSet() const;

                private:

                    /**
                     * 创建的主任务号，用于查询结果
                     */
                    std::string m_mainTaskId;
                    bool m_mainTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_CREATESTRUCTURETASKRESPONSE_H_
