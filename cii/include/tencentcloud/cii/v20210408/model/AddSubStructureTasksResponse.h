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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_ADDSUBSTRUCTURETASKSRESPONSE_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_ADDSUBSTRUCTURETASKSRESPONSE_H_

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
                * AddSubStructureTasks返回参数结构体
                */
                class AddSubStructureTasksResponse : public AbstractModel
                {
                public:
                    AddSubStructureTasksResponse();
                    ~AddSubStructureTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取增量子任务id数组
                     * @return SubTaskIds 增量子任务id数组
                     * 
                     */
                    std::vector<std::string> GetSubTaskIds() const;

                    /**
                     * 判断参数 SubTaskIds 是否已赋值
                     * @return SubTaskIds 是否已赋值
                     * 
                     */
                    bool SubTaskIdsHasBeenSet() const;

                private:

                    /**
                     * 增量子任务id数组
                     */
                    std::vector<std::string> m_subTaskIds;
                    bool m_subTaskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_ADDSUBSTRUCTURETASKSRESPONSE_H_
