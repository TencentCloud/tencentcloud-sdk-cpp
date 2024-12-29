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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATIONDETAIL_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrationStep.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 冷备导入任务迁移细节
                */
                class MigrationDetail : public AbstractModel
                {
                public:
                    MigrationDetail();
                    ~MigrationDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总步骤数
                     * @return StepAll 总步骤数
                     * 
                     */
                    int64_t GetStepAll() const;

                    /**
                     * 设置总步骤数
                     * @param _stepAll 总步骤数
                     * 
                     */
                    void SetStepAll(const int64_t& _stepAll);

                    /**
                     * 判断参数 StepAll 是否已赋值
                     * @return StepAll 是否已赋值
                     * 
                     */
                    bool StepAllHasBeenSet() const;

                    /**
                     * 获取当前步骤
                     * @return StepNow 当前步骤
                     * 
                     */
                    int64_t GetStepNow() const;

                    /**
                     * 设置当前步骤
                     * @param _stepNow 当前步骤
                     * 
                     */
                    void SetStepNow(const int64_t& _stepNow);

                    /**
                     * 判断参数 StepNow 是否已赋值
                     * @return StepNow 是否已赋值
                     * 
                     */
                    bool StepNowHasBeenSet() const;

                    /**
                     * 获取总进度,如："30"表示30%
                     * @return Progress 总进度,如："30"表示30%
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置总进度,如："30"表示30%
                     * @param _progress 总进度,如："30"表示30%
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取步骤信息，null表示还未开始迁移
                     * @return StepInfo 步骤信息，null表示还未开始迁移
                     * 
                     */
                    std::vector<MigrationStep> GetStepInfo() const;

                    /**
                     * 设置步骤信息，null表示还未开始迁移
                     * @param _stepInfo 步骤信息，null表示还未开始迁移
                     * 
                     */
                    void SetStepInfo(const std::vector<MigrationStep>& _stepInfo);

                    /**
                     * 判断参数 StepInfo 是否已赋值
                     * @return StepInfo 是否已赋值
                     * 
                     */
                    bool StepInfoHasBeenSet() const;

                private:

                    /**
                     * 总步骤数
                     */
                    int64_t m_stepAll;
                    bool m_stepAllHasBeenSet;

                    /**
                     * 当前步骤
                     */
                    int64_t m_stepNow;
                    bool m_stepNowHasBeenSet;

                    /**
                     * 总进度,如："30"表示30%
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 步骤信息，null表示还未开始迁移
                     */
                    std::vector<MigrationStep> m_stepInfo;
                    bool m_stepInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATIONDETAIL_H_
