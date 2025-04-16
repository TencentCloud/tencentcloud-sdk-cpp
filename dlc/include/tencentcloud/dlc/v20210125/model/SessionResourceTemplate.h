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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SESSIONRESOURCETEMPLATE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SESSIONRESOURCETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DataEngineConfigPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Spark批作业集群Session资源配置模板；
                */
                class SessionResourceTemplate : public AbstractModel
                {
                public:
                    SessionResourceTemplate();
                    ~SessionResourceTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * @return DriverSize driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * 
                     */
                    std::string GetDriverSize() const;

                    /**
                     * 设置driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * @param _driverSize driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * 
                     */
                    void SetDriverSize(const std::string& _driverSize);

                    /**
                     * 判断参数 DriverSize 是否已赋值
                     * @return DriverSize 是否已赋值
                     * 
                     */
                    bool DriverSizeHasBeenSet() const;

                    /**
                     * 获取executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * @return ExecutorSize executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * 
                     */
                    std::string GetExecutorSize() const;

                    /**
                     * 设置executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * @param _executorSize executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * 
                     */
                    void SetExecutorSize(const std::string& _executorSize);

                    /**
                     * 判断参数 ExecutorSize 是否已赋值
                     * @return ExecutorSize 是否已赋值
                     * 
                     */
                    bool ExecutorSizeHasBeenSet() const;

                    /**
                     * 获取指定executor数量，最小值为1，最大值小于集群规格
                     * @return ExecutorNums 指定executor数量，最小值为1，最大值小于集群规格
                     * 
                     */
                    uint64_t GetExecutorNums() const;

                    /**
                     * 设置指定executor数量，最小值为1，最大值小于集群规格
                     * @param _executorNums 指定executor数量，最小值为1，最大值小于集群规格
                     * 
                     */
                    void SetExecutorNums(const uint64_t& _executorNums);

                    /**
                     * 判断参数 ExecutorNums 是否已赋值
                     * @return ExecutorNums 是否已赋值
                     * 
                     */
                    bool ExecutorNumsHasBeenSet() const;

                    /**
                     * 获取指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）
                     * @return ExecutorMaxNumbers 指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）
                     * 
                     */
                    uint64_t GetExecutorMaxNumbers() const;

                    /**
                     * 设置指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）
                     * @param _executorMaxNumbers 指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）
                     * 
                     */
                    void SetExecutorMaxNumbers(const uint64_t& _executorMaxNumbers);

                    /**
                     * 判断参数 ExecutorMaxNumbers 是否已赋值
                     * @return ExecutorMaxNumbers 是否已赋值
                     * 
                     */
                    bool ExecutorMaxNumbersHasBeenSet() const;

                    /**
                     * 获取运行时参数
                     * @return RunningTimeParameters 运行时参数
                     * 
                     */
                    std::vector<DataEngineConfigPair> GetRunningTimeParameters() const;

                    /**
                     * 设置运行时参数
                     * @param _runningTimeParameters 运行时参数
                     * 
                     */
                    void SetRunningTimeParameters(const std::vector<DataEngineConfigPair>& _runningTimeParameters);

                    /**
                     * 判断参数 RunningTimeParameters 是否已赋值
                     * @return RunningTimeParameters 是否已赋值
                     * 
                     */
                    bool RunningTimeParametersHasBeenSet() const;

                private:

                    /**
                     * driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     */
                    std::string m_driverSize;
                    bool m_driverSizeHasBeenSet;

                    /**
                     * executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     */
                    std::string m_executorSize;
                    bool m_executorSizeHasBeenSet;

                    /**
                     * 指定executor数量，最小值为1，最大值小于集群规格
                     */
                    uint64_t m_executorNums;
                    bool m_executorNumsHasBeenSet;

                    /**
                     * 指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）
                     */
                    uint64_t m_executorMaxNumbers;
                    bool m_executorMaxNumbersHasBeenSet;

                    /**
                     * 运行时参数
                     */
                    std::vector<DataEngineConfigPair> m_runningTimeParameters;
                    bool m_runningTimeParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SESSIONRESOURCETEMPLATE_H_
