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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDATABACKUPOVERVIEWREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDATABACKUPOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeDataBackupOverview请求参数结构体
                */
                class DescribeDataBackupOverviewRequest : public AbstractModel
                {
                public:
                    DescribeDataBackupOverviewRequest();
                    ~DescribeDataBackupOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查询的云数据库产品类型，目前仅支持 "mysql"。
                     * @return Product 需要查询的云数据库产品类型，目前仅支持 "mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置需要查询的云数据库产品类型，目前仅支持 "mysql"。
                     * @param _product 需要查询的云数据库产品类型，目前仅支持 "mysql"。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * 需要查询的云数据库产品类型，目前仅支持 "mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDATABACKUPOVERVIEWREQUEST_H_
