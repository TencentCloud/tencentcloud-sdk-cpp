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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DELETENATIVESPARKSESSIONREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DELETENATIVESPARKSESSIONREQUEST_H_

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
                * DeleteNativeSparkSession请求参数结构体
                */
                class DeleteNativeSparkSessionRequest : public AbstractModel
                {
                public:
                    DeleteNativeSparkSessionRequest();
                    ~DeleteNativeSparkSessionRequest() = default;
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
                     * 获取资源组id
                     * @return ResourceGroupId 资源组id
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置资源组id
                     * @param _resourceGroupId 资源组id
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取spark session名称
                     * @return EngineSessionName spark session名称
                     * 
                     */
                    std::string GetEngineSessionName() const;

                    /**
                     * 设置spark session名称
                     * @param _engineSessionName spark session名称
                     * 
                     */
                    void SetEngineSessionName(const std::string& _engineSessionName);

                    /**
                     * 判断参数 EngineSessionName 是否已赋值
                     * @return EngineSessionName 是否已赋值
                     * 
                     */
                    bool EngineSessionNameHasBeenSet() const;

                private:

                    /**
                     * 引擎id
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * 资源组id
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * spark session名称
                     */
                    std::string m_engineSessionName;
                    bool m_engineSessionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DELETENATIVESPARKSESSIONREQUEST_H_
