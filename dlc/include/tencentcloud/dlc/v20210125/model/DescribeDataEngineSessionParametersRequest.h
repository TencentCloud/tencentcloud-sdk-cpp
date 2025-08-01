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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESESSIONPARAMETERSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESESSIONPARAMETERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDataEngineSessionParameters请求参数结构体
                */
                class DescribeDataEngineSessionParametersRequest : public AbstractModel
                {
                public:
                    DescribeDataEngineSessionParametersRequest();
                    ~DescribeDataEngineSessionParametersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎id
                     * @return DataEngineId 引擎id
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置引擎id
                     * @param _dataEngineId 引擎id
                     * 
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     * 
                     */
                    bool DataEngineIdHasBeenSet() const;

                    /**
                     * 获取引擎名称，当指定引擎名称后优先使用名称获取配置
                     * @return DataEngineName 引擎名称，当指定引擎名称后优先使用名称获取配置
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置引擎名称，当指定引擎名称后优先使用名称获取配置
                     * @param _dataEngineName 引擎名称，当指定引擎名称后优先使用名称获取配置
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                private:

                    /**
                     * 引擎id
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * 引擎名称，当指定引擎名称后优先使用名称获取配置
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESESSIONPARAMETERSREQUEST_H_
