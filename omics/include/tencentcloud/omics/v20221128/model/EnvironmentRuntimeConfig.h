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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_ENVIRONMENTRUNTIMECONFIG_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_ENVIRONMENTRUNTIMECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/CromwellConfig.h>
#include <tencentcloud/omics/v20221128/model/NextflowConfig.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 环境运行时配置
                */
                class EnvironmentRuntimeConfig : public AbstractModel
                {
                public:
                    EnvironmentRuntimeConfig();
                    ~EnvironmentRuntimeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cromwell工作流引擎设置
                     * @return CromwellConfig Cromwell工作流引擎设置
                     * 
                     */
                    CromwellConfig GetCromwellConfig() const;

                    /**
                     * 设置Cromwell工作流引擎设置
                     * @param _cromwellConfig Cromwell工作流引擎设置
                     * 
                     */
                    void SetCromwellConfig(const CromwellConfig& _cromwellConfig);

                    /**
                     * 判断参数 CromwellConfig 是否已赋值
                     * @return CromwellConfig 是否已赋值
                     * 
                     */
                    bool CromwellConfigHasBeenSet() const;

                    /**
                     * 获取Nextflow工作流引擎设置
                     * @return NextflowConfig Nextflow工作流引擎设置
                     * 
                     */
                    NextflowConfig GetNextflowConfig() const;

                    /**
                     * 设置Nextflow工作流引擎设置
                     * @param _nextflowConfig Nextflow工作流引擎设置
                     * 
                     */
                    void SetNextflowConfig(const NextflowConfig& _nextflowConfig);

                    /**
                     * 判断参数 NextflowConfig 是否已赋值
                     * @return NextflowConfig 是否已赋值
                     * 
                     */
                    bool NextflowConfigHasBeenSet() const;

                private:

                    /**
                     * Cromwell工作流引擎设置
                     */
                    CromwellConfig m_cromwellConfig;
                    bool m_cromwellConfigHasBeenSet;

                    /**
                     * Nextflow工作流引擎设置
                     */
                    NextflowConfig m_nextflowConfig;
                    bool m_nextflowConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_ENVIRONMENTRUNTIMECONFIG_H_
