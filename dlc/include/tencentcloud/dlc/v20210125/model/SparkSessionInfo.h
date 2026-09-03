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
                     * 获取<p>spark session id</p>
                     * @return SparkSessionId <p>spark session id</p>
                     * 
                     */
                    std::string GetSparkSessionId() const;

                    /**
                     * 设置<p>spark session id</p>
                     * @param _sparkSessionId <p>spark session id</p>
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
                     * 获取<p>spark session名称</p>
                     * @return SparkSessionName <p>spark session名称</p>
                     * 
                     */
                    std::string GetSparkSessionName() const;

                    /**
                     * 设置<p>spark session名称</p>
                     * @param _sparkSessionName <p>spark session名称</p>
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
                     * 获取<p>资源组id</p>
                     * @return ResourceGroupId <p>资源组id</p>
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>资源组id</p>
                     * @param _resourceGroupId <p>资源组id</p>
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
                     * 获取<p>engine session id</p>
                     * @return EngineSessionId <p>engine session id</p>
                     * 
                     */
                    std::string GetEngineSessionId() const;

                    /**
                     * 设置<p>engine session id</p>
                     * @param _engineSessionId <p>engine session id</p>
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
                     * 获取<p>engine session<br>name</p>
                     * @return EngineSessionName <p>engine session<br>name</p>
                     * 
                     */
                    std::string GetEngineSessionName() const;

                    /**
                     * 设置<p>engine session<br>name</p>
                     * @param _engineSessionName <p>engine session<br>name</p>
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
                     * 获取<p>自动销毁时间</p>
                     * @return IdleTimeoutMin <p>自动销毁时间</p>
                     * 
                     */
                    int64_t GetIdleTimeoutMin() const;

                    /**
                     * 设置<p>自动销毁时间</p>
                     * @param _idleTimeoutMin <p>自动销毁时间</p>
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
                     * 获取<p>driver规格</p>
                     * @return DriverSpec <p>driver规格</p>
                     * 
                     */
                    std::string GetDriverSpec() const;

                    /**
                     * 设置<p>driver规格</p>
                     * @param _driverSpec <p>driver规格</p>
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
                     * 获取<p>executor规格</p>
                     * @return ExecutorSpec <p>executor规格</p>
                     * 
                     */
                    std::string GetExecutorSpec() const;

                    /**
                     * 设置<p>executor规格</p>
                     * @param _executorSpec <p>executor规格</p>
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
                     * 获取<p>executor最小数量</p>
                     * @return ExecutorNumMin <p>executor最小数量</p>
                     * 
                     */
                    int64_t GetExecutorNumMin() const;

                    /**
                     * 设置<p>executor最小数量</p>
                     * @param _executorNumMin <p>executor最小数量</p>
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
                     * 获取<p>executor最大数量</p>
                     * @return ExecutorNumMax <p>executor最大数量</p>
                     * 
                     */
                    int64_t GetExecutorNumMax() const;

                    /**
                     * 设置<p>executor最大数量</p>
                     * @param _executorNumMax <p>executor最大数量</p>
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
                     * 获取<p>总规格最小</p>
                     * @return TotalSpecMin <p>总规格最小</p>
                     * 
                     */
                    int64_t GetTotalSpecMin() const;

                    /**
                     * 设置<p>总规格最小</p>
                     * @param _totalSpecMin <p>总规格最小</p>
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
                     * 获取<p>总规格最大</p>
                     * @return TotalSpecMax <p>总规格最大</p>
                     * 
                     */
                    int64_t GetTotalSpecMax() const;

                    /**
                     * 设置<p>总规格最大</p>
                     * @param _totalSpecMax <p>总规格最大</p>
                     * 
                     */
                    void SetTotalSpecMax(const int64_t& _totalSpecMax);

                    /**
                     * 判断参数 TotalSpecMax 是否已赋值
                     * @return TotalSpecMax 是否已赋值
                     * 
                     */
                    bool TotalSpecMaxHasBeenSet() const;

                    /**
                     * 获取<p>状态，STARTING、RUNNING、TERMINATED</p>
                     * @return State <p>状态，STARTING、RUNNING、TERMINATED</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>状态，STARTING、RUNNING、TERMINATED</p>
                     * @param _state <p>状态，STARTING、RUNNING、TERMINATED</p>
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>应用 ID</p>
                     * @return ApplicationId <p>应用 ID</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置<p>应用 ID</p>
                     * @param _applicationId <p>应用 ID</p>
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取<p>应用启动时间</p>
                     * @return ApplicationStartTime <p>应用启动时间</p>
                     * 
                     */
                    int64_t GetApplicationStartTime() const;

                    /**
                     * 设置<p>应用启动时间</p>
                     * @param _applicationStartTime <p>应用启动时间</p>
                     * 
                     */
                    void SetApplicationStartTime(const int64_t& _applicationStartTime);

                    /**
                     * 判断参数 ApplicationStartTime 是否已赋值
                     * @return ApplicationStartTime 是否已赋值
                     * 
                     */
                    bool ApplicationStartTimeHasBeenSet() const;

                private:

                    /**
                     * <p>spark session id</p>
                     */
                    std::string m_sparkSessionId;
                    bool m_sparkSessionIdHasBeenSet;

                    /**
                     * <p>spark session名称</p>
                     */
                    std::string m_sparkSessionName;
                    bool m_sparkSessionNameHasBeenSet;

                    /**
                     * <p>资源组id</p>
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>engine session id</p>
                     */
                    std::string m_engineSessionId;
                    bool m_engineSessionIdHasBeenSet;

                    /**
                     * <p>engine session<br>name</p>
                     */
                    std::string m_engineSessionName;
                    bool m_engineSessionNameHasBeenSet;

                    /**
                     * <p>自动销毁时间</p>
                     */
                    int64_t m_idleTimeoutMin;
                    bool m_idleTimeoutMinHasBeenSet;

                    /**
                     * <p>driver规格</p>
                     */
                    std::string m_driverSpec;
                    bool m_driverSpecHasBeenSet;

                    /**
                     * <p>executor规格</p>
                     */
                    std::string m_executorSpec;
                    bool m_executorSpecHasBeenSet;

                    /**
                     * <p>executor最小数量</p>
                     */
                    int64_t m_executorNumMin;
                    bool m_executorNumMinHasBeenSet;

                    /**
                     * <p>executor最大数量</p>
                     */
                    int64_t m_executorNumMax;
                    bool m_executorNumMaxHasBeenSet;

                    /**
                     * <p>总规格最小</p>
                     */
                    int64_t m_totalSpecMin;
                    bool m_totalSpecMinHasBeenSet;

                    /**
                     * <p>总规格最大</p>
                     */
                    int64_t m_totalSpecMax;
                    bool m_totalSpecMaxHasBeenSet;

                    /**
                     * <p>状态，STARTING、RUNNING、TERMINATED</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>应用启动时间</p>
                     */
                    int64_t m_applicationStartTime;
                    bool m_applicationStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SPARKSESSIONINFO_H_
