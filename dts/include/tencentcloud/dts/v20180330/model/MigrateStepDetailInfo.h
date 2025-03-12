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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATESTEPDETAILINFO_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATESTEPDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * 迁移中的步骤信息
                */
                class MigrateStepDetailInfo : public AbstractModel
                {
                public:
                    MigrateStepDetailInfo();
                    ~MigrateStepDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取步骤序列
                     * @return StepNo 步骤序列
                     * 
                     */
                    int64_t GetStepNo() const;

                    /**
                     * 设置步骤序列
                     * @param _stepNo 步骤序列
                     * 
                     */
                    void SetStepNo(const int64_t& _stepNo);

                    /**
                     * 判断参数 StepNo 是否已赋值
                     * @return StepNo 是否已赋值
                     * 
                     */
                    bool StepNoHasBeenSet() const;

                    /**
                     * 获取步骤展现名称
                     * @return StepName 步骤展现名称
                     * 
                     */
                    std::string GetStepName() const;

                    /**
                     * 设置步骤展现名称
                     * @param _stepName 步骤展现名称
                     * 
                     */
                    void SetStepName(const std::string& _stepName);

                    /**
                     * 判断参数 StepName 是否已赋值
                     * @return StepName 是否已赋值
                     * 
                     */
                    bool StepNameHasBeenSet() const;

                    /**
                     * 获取步骤英文标识
                     * @return StepId 步骤英文标识
                     * 
                     */
                    std::string GetStepId() const;

                    /**
                     * 设置步骤英文标识
                     * @param _stepId 步骤英文标识
                     * 
                     */
                    void SetStepId(const std::string& _stepId);

                    /**
                     * 判断参数 StepId 是否已赋值
                     * @return StepId 是否已赋值
                     * 
                     */
                    bool StepIdHasBeenSet() const;

                    /**
                     * 获取步骤状态:0-默认值,1-成功,2-失败,3-执行中,4-未执行
                     * @return Status 步骤状态:0-默认值,1-成功,2-失败,3-执行中,4-未执行
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置步骤状态:0-默认值,1-成功,2-失败,3-执行中,4-未执行
                     * @param _status 步骤状态:0-默认值,1-成功,2-失败,3-执行中,4-未执行
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取当前步骤开始的时间，格式为"yyyy-mm-dd hh:mm:ss"，该字段不存在或者为空是无意义
                     * @return StartTime 当前步骤开始的时间，格式为"yyyy-mm-dd hh:mm:ss"，该字段不存在或者为空是无意义
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置当前步骤开始的时间，格式为"yyyy-mm-dd hh:mm:ss"，该字段不存在或者为空是无意义
                     * @param _startTime 当前步骤开始的时间，格式为"yyyy-mm-dd hh:mm:ss"，该字段不存在或者为空是无意义
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * 步骤序列
                     */
                    int64_t m_stepNo;
                    bool m_stepNoHasBeenSet;

                    /**
                     * 步骤展现名称
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * 步骤英文标识
                     */
                    std::string m_stepId;
                    bool m_stepIdHasBeenSet;

                    /**
                     * 步骤状态:0-默认值,1-成功,2-失败,3-执行中,4-未执行
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当前步骤开始的时间，格式为"yyyy-mm-dd hh:mm:ss"，该字段不存在或者为空是无意义
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATESTEPDETAILINFO_H_
