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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IMPORTZONECONFIGRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IMPORTZONECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ImportZoneConfig返回参数结构体
                */
                class ImportZoneConfigResponse : public AbstractModel
                {
                public:
                    ImportZoneConfigResponse();
                    ~ImportZoneConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取表示该次导入配置的任务 Id，通过查询站点配置导入结果接口（DescribeZoneConfigImportResult）获取本次导入任务执行的结果。注意：导入任务 Id 仅支持查询最近 7 天的导入任务。
                     * @return TaskId 表示该次导入配置的任务 Id，通过查询站点配置导入结果接口（DescribeZoneConfigImportResult）获取本次导入任务执行的结果。注意：导入任务 Id 仅支持查询最近 7 天的导入任务。
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
                     * 表示该次导入配置的任务 Id，通过查询站点配置导入结果接口（DescribeZoneConfigImportResult）获取本次导入任务执行的结果。注意：导入任务 Id 仅支持查询最近 7 天的导入任务。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IMPORTZONECONFIGRESPONSE_H_
