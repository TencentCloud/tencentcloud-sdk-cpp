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

#ifndef TENCENTCLOUD_CDS_V20180420_MODEL_DESCRIBEDBAUDITINSTANCETYPERESPONSE_H_
#define TENCENTCLOUD_CDS_V20180420_MODEL_DESCRIBEDBAUDITINSTANCETYPERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cds/v20180420/model/DbauditTypesInfo.h>


namespace TencentCloud
{
    namespace Cds
    {
        namespace V20180420
        {
            namespace Model
            {
                /**
                * DescribeDbauditInstanceType返回参数结构体
                */
                class DescribeDbauditInstanceTypeResponse : public AbstractModel
                {
                public:
                    DescribeDbauditInstanceTypeResponse();
                    ~DescribeDbauditInstanceTypeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据安全审计产品规格信息列表
                     * @return DbauditTypesSet 数据安全审计产品规格信息列表
                     * 
                     */
                    std::vector<DbauditTypesInfo> GetDbauditTypesSet() const;

                    /**
                     * 判断参数 DbauditTypesSet 是否已赋值
                     * @return DbauditTypesSet 是否已赋值
                     * 
                     */
                    bool DbauditTypesSetHasBeenSet() const;

                private:

                    /**
                     * 数据安全审计产品规格信息列表
                     */
                    std::vector<DbauditTypesInfo> m_dbauditTypesSet;
                    bool m_dbauditTypesSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_MODEL_DESCRIBEDBAUDITINSTANCETYPERESPONSE_H_
