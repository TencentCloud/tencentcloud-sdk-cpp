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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATEDETAIL_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 迁移的进度详情类型
                */
                class MigrateDetail : public AbstractModel
                {
                public:
                    MigrateDetail();
                    ~MigrateDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前环节的名称
                     * @return StepName 当前环节的名称
                     * 
                     */
                    std::string GetStepName() const;

                    /**
                     * 设置当前环节的名称
                     * @param _stepName 当前环节的名称
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
                     * 获取当前环节的进度（单位是%）
                     * @return Progress 当前环节的进度（单位是%）
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置当前环节的进度（单位是%）
                     * @param _progress 当前环节的进度（单位是%）
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * 当前环节的名称
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * 当前环节的进度（单位是%）
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATEDETAIL_H_
