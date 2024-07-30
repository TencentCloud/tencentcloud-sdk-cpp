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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUPDATABLEDATAENGINESREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUPDATABLEDATAENGINESREQUEST_H_

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
                * DescribeUpdatableDataEngines请求参数结构体
                */
                class DescribeUpdatableDataEnginesRequest : public AbstractModel
                {
                public:
                    DescribeUpdatableDataEnginesRequest();
                    ~DescribeUpdatableDataEnginesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎配置操作命令，UpdateSparkSQLLakefsPath 更新托管表路径，UpdateSparkSQLResultPath 更新结果桶路径
                     * @return DataEngineConfigCommand 引擎配置操作命令，UpdateSparkSQLLakefsPath 更新托管表路径，UpdateSparkSQLResultPath 更新结果桶路径
                     * 
                     */
                    std::string GetDataEngineConfigCommand() const;

                    /**
                     * 设置引擎配置操作命令，UpdateSparkSQLLakefsPath 更新托管表路径，UpdateSparkSQLResultPath 更新结果桶路径
                     * @param _dataEngineConfigCommand 引擎配置操作命令，UpdateSparkSQLLakefsPath 更新托管表路径，UpdateSparkSQLResultPath 更新结果桶路径
                     * 
                     */
                    void SetDataEngineConfigCommand(const std::string& _dataEngineConfigCommand);

                    /**
                     * 判断参数 DataEngineConfigCommand 是否已赋值
                     * @return DataEngineConfigCommand 是否已赋值
                     * 
                     */
                    bool DataEngineConfigCommandHasBeenSet() const;

                    /**
                     * 获取是否使用托管存储作为结果存储
                     * @return UseLakeFs 是否使用托管存储作为结果存储
                     * 
                     */
                    bool GetUseLakeFs() const;

                    /**
                     * 设置是否使用托管存储作为结果存储
                     * @param _useLakeFs 是否使用托管存储作为结果存储
                     * 
                     */
                    void SetUseLakeFs(const bool& _useLakeFs);

                    /**
                     * 判断参数 UseLakeFs 是否已赋值
                     * @return UseLakeFs 是否已赋值
                     * 
                     */
                    bool UseLakeFsHasBeenSet() const;

                    /**
                     * 获取用户自定义结果存储路径
                     * @return CustomResultPath 用户自定义结果存储路径
                     * 
                     */
                    std::string GetCustomResultPath() const;

                    /**
                     * 设置用户自定义结果存储路径
                     * @param _customResultPath 用户自定义结果存储路径
                     * 
                     */
                    void SetCustomResultPath(const std::string& _customResultPath);

                    /**
                     * 判断参数 CustomResultPath 是否已赋值
                     * @return CustomResultPath 是否已赋值
                     * 
                     */
                    bool CustomResultPathHasBeenSet() const;

                private:

                    /**
                     * 引擎配置操作命令，UpdateSparkSQLLakefsPath 更新托管表路径，UpdateSparkSQLResultPath 更新结果桶路径
                     */
                    std::string m_dataEngineConfigCommand;
                    bool m_dataEngineConfigCommandHasBeenSet;

                    /**
                     * 是否使用托管存储作为结果存储
                     */
                    bool m_useLakeFs;
                    bool m_useLakeFsHasBeenSet;

                    /**
                     * 用户自定义结果存储路径
                     */
                    std::string m_customResultPath;
                    bool m_customResultPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUPDATABLEDATAENGINESREQUEST_H_
