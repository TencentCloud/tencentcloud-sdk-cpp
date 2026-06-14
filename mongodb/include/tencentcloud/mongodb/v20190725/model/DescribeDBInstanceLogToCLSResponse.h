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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCELOGTOCLSRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCELOGTOCLSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/LogToCLSConfig.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceLogToCLS返回参数结构体
                */
                class DescribeDBInstanceLogToCLSResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceLogToCLSResponse();
                    ~DescribeDBInstanceLogToCLSResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例错误日志投递配置</p>
                     * @return ErrorLog <p>实例错误日志投递配置</p>
                     * 
                     */
                    LogToCLSConfig GetErrorLog() const;

                    /**
                     * 判断参数 ErrorLog 是否已赋值
                     * @return ErrorLog 是否已赋值
                     * 
                     */
                    bool ErrorLogHasBeenSet() const;

                    /**
                     * 获取<p>实例慢日志投递配置</p>
                     * @return SlowLog <p>实例慢日志投递配置</p>
                     * 
                     */
                    LogToCLSConfig GetSlowLog() const;

                    /**
                     * 判断参数 SlowLog 是否已赋值
                     * @return SlowLog 是否已赋值
                     * 
                     */
                    bool SlowLogHasBeenSet() const;

                    /**
                     * 获取<p>实例操作日志投递配置</p>
                     * @return OperationLog <p>实例操作日志投递配置</p>
                     * 
                     */
                    LogToCLSConfig GetOperationLog() const;

                    /**
                     * 判断参数 OperationLog 是否已赋值
                     * @return OperationLog 是否已赋值
                     * 
                     */
                    bool OperationLogHasBeenSet() const;

                private:

                    /**
                     * <p>实例错误日志投递配置</p>
                     */
                    LogToCLSConfig m_errorLog;
                    bool m_errorLogHasBeenSet;

                    /**
                     * <p>实例慢日志投递配置</p>
                     */
                    LogToCLSConfig m_slowLog;
                    bool m_slowLogHasBeenSet;

                    /**
                     * <p>实例操作日志投递配置</p>
                     */
                    LogToCLSConfig m_operationLog;
                    bool m_operationLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCELOGTOCLSRESPONSE_H_
