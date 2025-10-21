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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBINSTANCESPECSRESPONSE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBINSTANCESPECSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/InstanceSpec.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceSpecs返回参数结构体
                */
                class DescribeDBInstanceSpecsResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceSpecsResponse();
                    ~DescribeDBInstanceSpecsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取按机型分类的可售卖规格列表
                     * @return Specs 按机型分类的可售卖规格列表
                     * 
                     */
                    std::vector<InstanceSpec> GetSpecs() const;

                    /**
                     * 判断参数 Specs 是否已赋值
                     * @return Specs 是否已赋值
                     * 
                     */
                    bool SpecsHasBeenSet() const;

                private:

                    /**
                     * 按机型分类的可售卖规格列表
                     */
                    std::vector<InstanceSpec> m_specs;
                    bool m_specsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBINSTANCESPECSRESPONSE_H_
