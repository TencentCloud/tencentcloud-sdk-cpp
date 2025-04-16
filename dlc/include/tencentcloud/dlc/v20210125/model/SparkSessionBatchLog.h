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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SPARKSESSIONBATCHLOG_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SPARKSESSIONBATCHLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/SparkSessionBatchLogOperate.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * SparkSQL批任务运行日志
                */
                class SparkSessionBatchLog : public AbstractModel
                {
                public:
                    SparkSessionBatchLog();
                    ~SparkSessionBatchLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志步骤：BEG/CS/DS/DSS/DSF/FINF/RTO/CANCEL/CT/DT/DTS/DTF/FINT/EXCE
                     * @return Step 日志步骤：BEG/CS/DS/DSS/DSF/FINF/RTO/CANCEL/CT/DT/DTS/DTF/FINT/EXCE
                     * 
                     */
                    std::string GetStep() const;

                    /**
                     * 设置日志步骤：BEG/CS/DS/DSS/DSF/FINF/RTO/CANCEL/CT/DT/DTS/DTF/FINT/EXCE
                     * @param _step 日志步骤：BEG/CS/DS/DSS/DSF/FINF/RTO/CANCEL/CT/DT/DTS/DTF/FINT/EXCE
                     * 
                     */
                    void SetStep(const std::string& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                    /**
                     * 获取时间
                     * @return Time 时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置时间
                     * @param _time 时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取日志提示
                     * @return Message 日志提示
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置日志提示
                     * @param _message 日志提示
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取日志操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operate 日志操作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SparkSessionBatchLogOperate> GetOperate() const;

                    /**
                     * 设置日志操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operate 日志操作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperate(const std::vector<SparkSessionBatchLogOperate>& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                private:

                    /**
                     * 日志步骤：BEG/CS/DS/DSS/DSF/FINF/RTO/CANCEL/CT/DT/DTS/DTF/FINT/EXCE
                     */
                    std::string m_step;
                    bool m_stepHasBeenSet;

                    /**
                     * 时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 日志提示
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 日志操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SparkSessionBatchLogOperate> m_operate;
                    bool m_operateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SPARKSESSIONBATCHLOG_H_
