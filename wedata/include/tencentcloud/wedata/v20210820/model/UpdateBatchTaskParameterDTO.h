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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKPARAMETERDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKPARAMETERDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 批量修改任务参数
                */
                class UpdateBatchTaskParameterDTO : public AbstractModel
                {
                public:
                    UpdateBatchTaskParameterDTO();
                    ~UpdateBatchTaskParameterDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取spark作业driver资源规格大小, 可取small,medium,large,xlarge
                     * @return DriverSize spark作业driver资源规格大小, 可取small,medium,large,xlarge
                     * 
                     */
                    std::string GetDriverSize() const;

                    /**
                     * 设置spark作业driver资源规格大小, 可取small,medium,large,xlarge
                     * @param _driverSize spark作业driver资源规格大小, 可取small,medium,large,xlarge
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
                     * 获取指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums
                     * @return ExecutorMaxNumbers 指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums
                     * 
                     */
                    std::string GetExecutorMaxNumbers() const;

                    /**
                     * 设置指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums
                     * @param _executorMaxNumbers 指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums
                     * 
                     */
                    void SetExecutorMaxNumbers(const std::string& _executorMaxNumbers);

                    /**
                     * 判断参数 ExecutorMaxNumbers 是否已赋值
                     * @return ExecutorMaxNumbers 是否已赋值
                     * 
                     */
                    bool ExecutorMaxNumbersHasBeenSet() const;

                    /**
                     * 获取spark作业executor个数
                     * @return ExecutorNumbers spark作业executor个数
                     * 
                     */
                    std::string GetExecutorNumbers() const;

                    /**
                     * 设置spark作业executor个数
                     * @param _executorNumbers spark作业executor个数
                     * 
                     */
                    void SetExecutorNumbers(const std::string& _executorNumbers);

                    /**
                     * 判断参数 ExecutorNumbers 是否已赋值
                     * @return ExecutorNumbers 是否已赋值
                     * 
                     */
                    bool ExecutorNumbersHasBeenSet() const;

                    /**
                     * 获取spark作业executor资源规格大小, 可取small,medium,large,xlarge
                     * @return ExecutorSize spark作业executor资源规格大小, 可取small,medium,large,xlarge
                     * 
                     */
                    std::string GetExecutorSize() const;

                    /**
                     * 设置spark作业executor资源规格大小, 可取small,medium,large,xlarge
                     * @param _executorSize spark作业executor资源规格大小, 可取small,medium,large,xlarge
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
                     * 获取sparksql和presto引擎参数
                     * @return RunConfParams sparksql和presto引擎参数
                     * 
                     */
                    std::string GetRunConfParams() const;

                    /**
                     * 设置sparksql和presto引擎参数
                     * @param _runConfParams sparksql和presto引擎参数
                     * 
                     */
                    void SetRunConfParams(const std::string& _runConfParams);

                    /**
                     * 判断参数 RunConfParams 是否已赋值
                     * @return RunConfParams 是否已赋值
                     * 
                     */
                    bool RunConfParamsHasBeenSet() const;

                    /**
                     * 获取任务资源配置是否继承集群模板，0（默认）不继承，1：继承
                     * @return IsInherit 任务资源配置是否继承集群模板，0（默认）不继承，1：继承
                     * 
                     */
                    std::string GetIsInherit() const;

                    /**
                     * 设置任务资源配置是否继承集群模板，0（默认）不继承，1：继承
                     * @param _isInherit 任务资源配置是否继承集群模板，0（默认）不继承，1：继承
                     * 
                     */
                    void SetIsInherit(const std::string& _isInherit);

                    /**
                     * 判断参数 IsInherit 是否已赋值
                     * @return IsInherit 是否已赋值
                     * 
                     */
                    bool IsInheritHasBeenSet() const;

                private:

                    /**
                     * spark作业driver资源规格大小, 可取small,medium,large,xlarge
                     */
                    std::string m_driverSize;
                    bool m_driverSizeHasBeenSet;

                    /**
                     * 指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums
                     */
                    std::string m_executorMaxNumbers;
                    bool m_executorMaxNumbersHasBeenSet;

                    /**
                     * spark作业executor个数
                     */
                    std::string m_executorNumbers;
                    bool m_executorNumbersHasBeenSet;

                    /**
                     * spark作业executor资源规格大小, 可取small,medium,large,xlarge
                     */
                    std::string m_executorSize;
                    bool m_executorSizeHasBeenSet;

                    /**
                     * sparksql和presto引擎参数
                     */
                    std::string m_runConfParams;
                    bool m_runConfParamsHasBeenSet;

                    /**
                     * 任务资源配置是否继承集群模板，0（默认）不继承，1：继承
                     */
                    std::string m_isInherit;
                    bool m_isInheritHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKPARAMETERDTO_H_
