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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYSPARKAPPBATCHREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYSPARKAPPBATCHREQUEST_H_

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
                * ModifySparkAppBatch请求参数结构体
                */
                class ModifySparkAppBatchRequest : public AbstractModel
                {
                public:
                    ModifySparkAppBatchRequest();
                    ~ModifySparkAppBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要批量修改的Spark作业任务ID列表
                     * @return SparkAppId 需要批量修改的Spark作业任务ID列表
                     * 
                     */
                    std::vector<std::string> GetSparkAppId() const;

                    /**
                     * 设置需要批量修改的Spark作业任务ID列表
                     * @param _sparkAppId 需要批量修改的Spark作业任务ID列表
                     * 
                     */
                    void SetSparkAppId(const std::vector<std::string>& _sparkAppId);

                    /**
                     * 判断参数 SparkAppId 是否已赋值
                     * @return SparkAppId 是否已赋值
                     * 
                     */
                    bool SparkAppIdHasBeenSet() const;

                    /**
                     * 获取引擎ID
                     * @return DataEngine 引擎ID
                     * 
                     */
                    std::string GetDataEngine() const;

                    /**
                     * 设置引擎ID
                     * @param _dataEngine 引擎ID
                     * 
                     */
                    void SetDataEngine(const std::string& _dataEngine);

                    /**
                     * 判断参数 DataEngine 是否已赋值
                     * @return DataEngine 是否已赋值
                     * 
                     */
                    bool DataEngineHasBeenSet() const;

                    /**
                     * 获取driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * @return AppDriverSize driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * 
                     */
                    std::string GetAppDriverSize() const;

                    /**
                     * 设置driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * @param _appDriverSize driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * 
                     */
                    void SetAppDriverSize(const std::string& _appDriverSize);

                    /**
                     * 判断参数 AppDriverSize 是否已赋值
                     * @return AppDriverSize 是否已赋值
                     * 
                     */
                    bool AppDriverSizeHasBeenSet() const;

                    /**
                     * 获取executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * @return AppExecutorSize executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * 
                     */
                    std::string GetAppExecutorSize() const;

                    /**
                     * 设置executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * @param _appExecutorSize executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * 
                     */
                    void SetAppExecutorSize(const std::string& _appExecutorSize);

                    /**
                     * 判断参数 AppExecutorSize 是否已赋值
                     * @return AppExecutorSize 是否已赋值
                     * 
                     */
                    bool AppExecutorSizeHasBeenSet() const;

                    /**
                     * 获取指定executor数量，最小值为1，最大值小于集群规格
                     * @return AppExecutorNums 指定executor数量，最小值为1，最大值小于集群规格
                     * 
                     */
                    uint64_t GetAppExecutorNums() const;

                    /**
                     * 设置指定executor数量，最小值为1，最大值小于集群规格
                     * @param _appExecutorNums 指定executor数量，最小值为1，最大值小于集群规格
                     * 
                     */
                    void SetAppExecutorNums(const uint64_t& _appExecutorNums);

                    /**
                     * 判断参数 AppExecutorNums 是否已赋值
                     * @return AppExecutorNums 是否已赋值
                     * 
                     */
                    bool AppExecutorNumsHasBeenSet() const;

                    /**
                     * 获取指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）
                     * @return AppExecutorMaxNumbers 指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）
                     * 
                     */
                    uint64_t GetAppExecutorMaxNumbers() const;

                    /**
                     * 设置指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）
                     * @param _appExecutorMaxNumbers 指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）
                     * 
                     */
                    void SetAppExecutorMaxNumbers(const uint64_t& _appExecutorMaxNumbers);

                    /**
                     * 判断参数 AppExecutorMaxNumbers 是否已赋值
                     * @return AppExecutorMaxNumbers 是否已赋值
                     * 
                     */
                    bool AppExecutorMaxNumbersHasBeenSet() const;

                    /**
                     * 获取任务资源配置是否继承集群模板，0（默认）不继承，1：继承
                     * @return IsInherit 任务资源配置是否继承集群模板，0（默认）不继承，1：继承
                     * 
                     */
                    uint64_t GetIsInherit() const;

                    /**
                     * 设置任务资源配置是否继承集群模板，0（默认）不继承，1：继承
                     * @param _isInherit 任务资源配置是否继承集群模板，0（默认）不继承，1：继承
                     * 
                     */
                    void SetIsInherit(const uint64_t& _isInherit);

                    /**
                     * 判断参数 IsInherit 是否已赋值
                     * @return IsInherit 是否已赋值
                     * 
                     */
                    bool IsInheritHasBeenSet() const;

                private:

                    /**
                     * 需要批量修改的Spark作业任务ID列表
                     */
                    std::vector<std::string> m_sparkAppId;
                    bool m_sparkAppIdHasBeenSet;

                    /**
                     * 引擎ID
                     */
                    std::string m_dataEngine;
                    bool m_dataEngineHasBeenSet;

                    /**
                     * driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     */
                    std::string m_appDriverSize;
                    bool m_appDriverSizeHasBeenSet;

                    /**
                     * executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     */
                    std::string m_appExecutorSize;
                    bool m_appExecutorSizeHasBeenSet;

                    /**
                     * 指定executor数量，最小值为1，最大值小于集群规格
                     */
                    uint64_t m_appExecutorNums;
                    bool m_appExecutorNumsHasBeenSet;

                    /**
                     * 指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）
                     */
                    uint64_t m_appExecutorMaxNumbers;
                    bool m_appExecutorMaxNumbersHasBeenSet;

                    /**
                     * 任务资源配置是否继承集群模板，0（默认）不继承，1：继承
                     */
                    uint64_t m_isInherit;
                    bool m_isInheritHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYSPARKAPPBATCHREQUEST_H_
