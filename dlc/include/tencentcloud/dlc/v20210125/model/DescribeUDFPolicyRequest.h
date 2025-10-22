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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUDFPOLICYREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUDFPOLICYREQUEST_H_

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
                * DescribeUDFPolicy请求参数结构体
                */
                class DescribeUDFPolicyRequest : public AbstractModel
                {
                public:
                    DescribeUDFPolicyRequest();
                    ~DescribeUDFPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取udf名称
                     * @return Name udf名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置udf名称
                     * @param _name udf名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取数据库名(全局UDF：global-function)
                     * @return DatabaseName 数据库名(全局UDF：global-function)
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名(全局UDF：global-function)
                     * @param _databaseName 数据库名(全局UDF：global-function)
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取数据目录名
                     * @return CatalogName 数据目录名
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置数据目录名
                     * @param _catalogName 数据目录名
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                private:

                    /**
                     * udf名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据库名(全局UDF：global-function)
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 数据目录名
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUDFPOLICYREQUEST_H_
