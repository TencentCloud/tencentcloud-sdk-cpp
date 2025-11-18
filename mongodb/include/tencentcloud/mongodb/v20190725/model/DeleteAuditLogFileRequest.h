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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DELETEAUDITLOGFILEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DELETEAUDITLOGFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DeleteAuditLogFile请求参数结构体
                */
                class DeleteAuditLogFileRequest : public AbstractModel
                {
                public:
                    DeleteAuditLogFileRequest();
                    ~DeleteAuditLogFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，格式如：cmgo-test1234，与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例ID，格式如：cmgo-test1234，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，格式如：cmgo-test1234，与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例ID，格式如：cmgo-test1234，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取审计日志文件名称，须保证文件名的准确性。
                     * @return FileName 审计日志文件名称，须保证文件名的准确性。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置审计日志文件名称，须保证文件名的准确性。
                     * @param _fileName 审计日志文件名称，须保证文件名的准确性。
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                private:

                    /**
                     * 实例ID，格式如：cmgo-test1234，与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 审计日志文件名称，须保证文件名的准确性。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DELETEAUDITLOGFILEREQUEST_H_
