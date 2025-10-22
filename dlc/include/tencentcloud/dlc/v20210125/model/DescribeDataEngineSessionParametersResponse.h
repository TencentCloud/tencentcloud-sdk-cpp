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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESESSIONPARAMETERSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESESSIONPARAMETERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DataEngineImageSessionParameter.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDataEngineSessionParameters返回参数结构体
                */
                class DescribeDataEngineSessionParametersResponse : public AbstractModel
                {
                public:
                    DescribeDataEngineSessionParametersResponse();
                    ~DescribeDataEngineSessionParametersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群Session配置列表
                     * @return DataEngineParameters 集群Session配置列表
                     * 
                     */
                    std::vector<DataEngineImageSessionParameter> GetDataEngineParameters() const;

                    /**
                     * 判断参数 DataEngineParameters 是否已赋值
                     * @return DataEngineParameters 是否已赋值
                     * 
                     */
                    bool DataEngineParametersHasBeenSet() const;

                private:

                    /**
                     * 集群Session配置列表
                     */
                    std::vector<DataEngineImageSessionParameter> m_dataEngineParameters;
                    bool m_dataEngineParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESESSIONPARAMETERSRESPONSE_H_
