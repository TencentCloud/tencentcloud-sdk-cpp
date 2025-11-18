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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMSAMPLECONFIGRESPONSE_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMSAMPLECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmSampleConfig.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateApmSampleConfig返回参数结构体
                */
                class CreateApmSampleConfigResponse : public AbstractModel
                {
                public:
                    CreateApmSampleConfigResponse();
                    ~CreateApmSampleConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取采样配置参数
                     * @return ApmSampleConfig 采样配置参数
                     * 
                     */
                    ApmSampleConfig GetApmSampleConfig() const;

                    /**
                     * 判断参数 ApmSampleConfig 是否已赋值
                     * @return ApmSampleConfig 是否已赋值
                     * 
                     */
                    bool ApmSampleConfigHasBeenSet() const;

                private:

                    /**
                     * 采样配置参数
                     */
                    ApmSampleConfig m_apmSampleConfig;
                    bool m_apmSampleConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMSAMPLECONFIGRESPONSE_H_
