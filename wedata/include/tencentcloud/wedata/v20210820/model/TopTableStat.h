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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TOPTABLESTAT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TOPTABLESTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TopTableStatItem.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 质量概览表排行结果
                */
                class TopTableStat : public AbstractModel
                {
                public:
                    TopTableStat();
                    ~TopTableStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警表列表
                     * @return AlarmTables 告警表列表
                     * 
                     */
                    std::vector<TopTableStatItem> GetAlarmTables() const;

                    /**
                     * 设置告警表列表
                     * @param _alarmTables 告警表列表
                     * 
                     */
                    void SetAlarmTables(const std::vector<TopTableStatItem>& _alarmTables);

                    /**
                     * 判断参数 AlarmTables 是否已赋值
                     * @return AlarmTables 是否已赋值
                     * 
                     */
                    bool AlarmTablesHasBeenSet() const;

                    /**
                     * 获取阻塞表列表
                     * @return PipelineTables 阻塞表列表
                     * 
                     */
                    std::vector<TopTableStatItem> GetPipelineTables() const;

                    /**
                     * 设置阻塞表列表
                     * @param _pipelineTables 阻塞表列表
                     * 
                     */
                    void SetPipelineTables(const std::vector<TopTableStatItem>& _pipelineTables);

                    /**
                     * 判断参数 PipelineTables 是否已赋值
                     * @return PipelineTables 是否已赋值
                     * 
                     */
                    bool PipelineTablesHasBeenSet() const;

                private:

                    /**
                     * 告警表列表
                     */
                    std::vector<TopTableStatItem> m_alarmTables;
                    bool m_alarmTablesHasBeenSet;

                    /**
                     * 阻塞表列表
                     */
                    std::vector<TopTableStatItem> m_pipelineTables;
                    bool m_pipelineTablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TOPTABLESTAT_H_
