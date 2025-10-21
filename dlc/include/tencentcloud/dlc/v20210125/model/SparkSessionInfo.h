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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SPARKSESSIONINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SPARKSESSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * spark session详细信息
                */
                class SparkSessionInfo : public AbstractModel
                {
                public:
                    SparkSessionInfo();
                    ~SparkSessionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取spark session id
                     * @return SparkSessionId spark session id
                     * 
                     */
                    std::string GetSparkSessionId() const;

                    /**
                     * 设置spark session id
                     * @param _sparkSessionId spark session id
                     * 
                     */
                    void SetSparkSessionId(const std::string& _sparkSessionId);

                    /**
                     * 判断参数 SparkSessionId 是否已赋值
                     * @return SparkSessionId 是否已赋值
                     * 
                     */
                    bool SparkSessionIdHasBeenSet() const;

                    /**
                     * 获取spark session名称
                     * @return SparkSessionName spark session名称
                     * 
                     */
                    std::string GetSparkSessionName() const;

                    /**
                     * 设置spark session名称
                     * @param _sparkSessionName spark session名称
                     * 
                     */
                    void SetSparkSessionName(const std::string& _sparkSessionName);

                    /**
                     * 判断参数 SparkSessionName 是否已赋值
                     * @return SparkSessionName 是否已赋值
                     * 
                     */
                    bool SparkSessionNameHasBeenSet() const;

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
                     * 获取engine session id
                     * @return EngineSessionId engine session id
                     * 
                     */
                    std::string GetEngineSessionId() const;

                    /**
                     * 设置engine session id
                     * @param _engineSessionId engine session id
                     * 
                     */
                    void SetEngineSessionId(const std::string& _engineSessionId);

                    /**
                     * 判断参数 EngineSessionId 是否已赋值
                     * @return EngineSessionId 是否已赋值
                     * 
                     */
                    bool EngineSessionIdHasBeenSet() const;

                    /**
                     * 获取engine session   
name
                     * @return EngineSessionName engine session   
name
                     * 
                     */
                    std::string GetEngineSessionName() const;

                    /**
                     * 设置engine session   
name
                     * @param _engineSessionName engine session   
name
                     * 
                     */
                    void SetEngineSessionName(const std::string& _engineSessionName);

                    /**
                     * 判断参数 EngineSessionName 是否已赋值
                     * @return EngineSessionName 是否已赋值
                     * 
                     */
                    bool EngineSessionNameHasBeenSet() const;

                    /**
                     * 获取自动销毁时间
                     * @return IdleTimeoutMin 自动销毁时间
                     * 
                     */
                    int64_t GetIdleTimeoutMin() const;

                    /**
                     * 设置自动销毁时间
                     * @param _idleTimeoutMin 自动销毁时间
                     * 
                     */
                    void SetIdleTimeoutMin(const int64_t& _idleTimeoutMin);

                    /**
                     * 判断参数 IdleTimeoutMin 是否已赋值
                     * @return IdleTimeoutMin 是否已赋值
                     * 
                     */
                    bool IdleTimeoutMinHasBeenSet() const;

                    /**
                     * 获取driver规格
                     * @return DriverSpec driver规格
                     * 
                     */
                    std::string GetDriverSpec() const;

                    /**
                     * 设置driver规格
                     * @param _driverSpec driver规格
                     * 
                     */
                    void SetDriverSpec(const std::string& _driverSpec);

                    /**
                     * 判断参数 DriverSpec 是否已赋值
                     * @return DriverSpec 是否已赋值
                     * 
                     */
                    bool DriverSpecHasBeenSet() const;

                    /**
                     * 获取executor规格
                     * @return ExecutorSpec executor规格
                     * 
                     */
                    std::string GetExecutorSpec() const;

                    /**
                     * 设置executor规格
                     * @param _executorSpec executor规格
                     * 
                     */
                    void SetExecutorSpec(const std::string& _executorSpec);

                    /**
                     * 判断参数 ExecutorSpec 是否已赋值
                     * @return ExecutorSpec 是否已赋值
                     * 
                     */
                    bool ExecutorSpecHasBeenSet() const;

                    /**
                     * 获取executor最小数量
                     * @return ExecutorNumMin executor最小数量
                     * 
                     */
                    int64_t GetExecutorNumMin() const;

                    /**
                     * 设置executor最小数量
                     * @param _executorNumMin executor最小数量
                     * 
                     */
                    void SetExecutorNumMin(const int64_t& _executorNumMin);

                    /**
                     * 判断参数 ExecutorNumMin 是否已赋值
                     * @return ExecutorNumMin 是否已赋值
                     * 
                     */
                    bool ExecutorNumMinHasBeenSet() const;

                    /**
                     * 获取executor最大数量
                     * @return ExecutorNumMax executor最大数量
                     * 
                     */
                    int64_t GetExecutorNumMax() const;

                    /**
                     * 设置executor最大数量
                     * @param _executorNumMax executor最大数量
                     * 
                     */
                    void SetExecutorNumMax(const int64_t& _executorNumMax);

                    /**
                     * 判断参数 ExecutorNumMax 是否已赋值
                     * @return ExecutorNumMax 是否已赋值
                     * 
                     */
                    bool ExecutorNumMaxHasBeenSet() const;

                    /**
                     * 获取总规格最小
                     * @return TotalSpecMin 总规格最小
                     * 
                     */
                    int64_t GetTotalSpecMin() const;

                    /**
                     * 设置总规格最小
                     * @param _totalSpecMin 总规格最小
                     * 
                     */
                    void SetTotalSpecMin(const int64_t& _totalSpecMin);

                    /**
                     * 判断参数 TotalSpecMin 是否已赋值
                     * @return TotalSpecMin 是否已赋值
                     * 
                     */
                    bool TotalSpecMinHasBeenSet() const;

                    /**
                     * 获取总规格最大
                     * @return TotalSpecMax 总规格最大
                     * 
                     */
                    int64_t GetTotalSpecMax() const;

                    /**
                     * 设置总规格最大
                     * @param _totalSpecMax 总规格最大
                     * 
                     */
                    void SetTotalSpecMax(const int64_t& _totalSpecMax);

                    /**
                     * 判断参数 TotalSpecMax 是否已赋值
                     * @return TotalSpecMax 是否已赋值
                     * 
                     */
                    bool TotalSpecMaxHasBeenSet() const;

                private:

                    /**
                     * spark session id
                     */
                    std::string m_sparkSessionId;
                    bool m_sparkSessionIdHasBeenSet;

                    /**
                     * spark session名称
                     */
                    std::string m_sparkSessionName;
                    bool m_sparkSessionNameHasBeenSet;

                    /**
                     * 资源组id
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * engine session id
                     */
                    std::string m_engineSessionId;
                    bool m_engineSessionIdHasBeenSet;

                    /**
                     * engine session   
name
                     */
                    std::string m_engineSessionName;
                    bool m_engineSessionNameHasBeenSet;

                    /**
                     * 自动销毁时间
                     */
                    int64_t m_idleTimeoutMin;
                    bool m_idleTimeoutMinHasBeenSet;

                    /**
                     * driver规格
                     */
                    std::string m_driverSpec;
                    bool m_driverSpecHasBeenSet;

                    /**
                     * executor规格
                     */
                    std::string m_executorSpec;
                    bool m_executorSpecHasBeenSet;

                    /**
                     * executor最小数量
                     */
                    int64_t m_executorNumMin;
                    bool m_executorNumMinHasBeenSet;

                    /**
                     * executor最大数量
                     */
                    int64_t m_executorNumMax;
                    bool m_executorNumMaxHasBeenSet;

                    /**
                     * 总规格最小
                     */
                    int64_t m_totalSpecMin;
                    bool m_totalSpecMinHasBeenSet;

                    /**
                     * 总规格最大
                     */
                    int64_t m_totalSpecMax;
                    bool m_totalSpecMaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SPARKSESSIONINFO_H_
