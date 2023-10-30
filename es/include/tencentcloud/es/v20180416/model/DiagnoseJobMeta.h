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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DIAGNOSEJOBMETA_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DIAGNOSEJOBMETA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 智能运维支持的诊断项和元信息
                */
                class DiagnoseJobMeta : public AbstractModel
                {
                public:
                    DiagnoseJobMeta();
                    ~DiagnoseJobMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能运维诊断项英文名
                     * @return JobName 智能运维诊断项英文名
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置智能运维诊断项英文名
                     * @param _jobName 智能运维诊断项英文名
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取智能运维诊断项中文名
                     * @return JobZhName 智能运维诊断项中文名
                     * 
                     */
                    std::string GetJobZhName() const;

                    /**
                     * 设置智能运维诊断项中文名
                     * @param _jobZhName 智能运维诊断项中文名
                     * 
                     */
                    void SetJobZhName(const std::string& _jobZhName);

                    /**
                     * 判断参数 JobZhName 是否已赋值
                     * @return JobZhName 是否已赋值
                     * 
                     */
                    bool JobZhNameHasBeenSet() const;

                    /**
                     * 获取智能运维诊断项描述
                     * @return JobDescription 智能运维诊断项描述
                     * 
                     */
                    std::string GetJobDescription() const;

                    /**
                     * 设置智能运维诊断项描述
                     * @param _jobDescription 智能运维诊断项描述
                     * 
                     */
                    void SetJobDescription(const std::string& _jobDescription);

                    /**
                     * 判断参数 JobDescription 是否已赋值
                     * @return JobDescription 是否已赋值
                     * 
                     */
                    bool JobDescriptionHasBeenSet() const;

                private:

                    /**
                     * 智能运维诊断项英文名
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 智能运维诊断项中文名
                     */
                    std::string m_jobZhName;
                    bool m_jobZhNameHasBeenSet;

                    /**
                     * 智能运维诊断项描述
                     */
                    std::string m_jobDescription;
                    bool m_jobDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DIAGNOSEJOBMETA_H_
