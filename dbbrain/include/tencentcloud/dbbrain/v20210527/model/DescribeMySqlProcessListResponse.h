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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMYSQLPROCESSLISTRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMYSQLPROCESSLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/MySqlProcess.h>
#include <tencentcloud/dbbrain/v20210527/model/StatisticInfo.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeMySqlProcessList返回参数结构体
                */
                class DescribeMySqlProcessListResponse : public AbstractModel
                {
                public:
                    DescribeMySqlProcessListResponse();
                    ~DescribeMySqlProcessListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实时线程列表。
                     * @return ProcessList 实时线程列表。
                     * 
                     */
                    std::vector<MySqlProcess> GetProcessList() const;

                    /**
                     * 判断参数 ProcessList 是否已赋值
                     * @return ProcessList 是否已赋值
                     * 
                     */
                    bool ProcessListHasBeenSet() const;

                    /**
                     * 获取sql会话统计信息。
                     * @return Statistics sql会话统计信息。
                     * 
                     */
                    std::vector<StatisticInfo> GetStatistics() const;

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     * 
                     */
                    bool StatisticsHasBeenSet() const;

                private:

                    /**
                     * 实时线程列表。
                     */
                    std::vector<MySqlProcess> m_processList;
                    bool m_processListHasBeenSet;

                    /**
                     * sql会话统计信息。
                     */
                    std::vector<StatisticInfo> m_statistics;
                    bool m_statisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMYSQLPROCESSLISTRESPONSE_H_
