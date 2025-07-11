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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEHIVETABLEBYDDLRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEHIVETABLEBYDDLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateHiveTableByDDL返回参数结构体
                */
                class CreateHiveTableByDDLResponse : public AbstractModel
                {
                public:
                    CreateHiveTableByDDLResponse();
                    ~CreateHiveTableByDDLResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回表名称，无论是否异步都有值
                     * @return Data 返回表名称，无论是否异步都有值
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取异步任务轮询 id，只有异步才有值
                     * @return TaskId 异步任务轮询 id，只有异步才有值
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 返回表名称，无论是否异步都有值
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 异步任务轮询 id，只有异步才有值
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEHIVETABLEBYDDLRESPONSE_H_
