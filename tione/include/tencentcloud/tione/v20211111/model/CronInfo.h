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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CRONINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CRONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 跑批任务周期描述
                */
                class CronInfo : public AbstractModel
                {
                public:
                    CronInfo();
                    ~CronInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cron配置
                     * @return CronConfig cron配置
                     * 
                     */
                    std::string GetCronConfig() const;

                    /**
                     * 设置cron配置
                     * @param _cronConfig cron配置
                     * 
                     */
                    void SetCronConfig(const std::string& _cronConfig);

                    /**
                     * 判断参数 CronConfig 是否已赋值
                     * @return CronConfig 是否已赋值
                     * 
                     */
                    bool CronConfigHasBeenSet() const;

                    /**
                     * 获取周期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 周期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置周期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 周期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取周期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 周期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置周期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 周期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * cron配置
                     */
                    std::string m_cronConfig;
                    bool m_cronConfigHasBeenSet;

                    /**
                     * 周期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 周期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CRONINFO_H_
