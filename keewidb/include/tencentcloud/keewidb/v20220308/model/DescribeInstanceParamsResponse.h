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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCEPARAMSRESPONSE_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCEPARAMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/keewidb/v20220308/model/InstanceEnumParam.h>
#include <tencentcloud/keewidb/v20220308/model/InstanceIntegerParam.h>
#include <tencentcloud/keewidb/v20220308/model/InstanceTextParam.h>
#include <tencentcloud/keewidb/v20220308/model/InstanceMultiParam.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * DescribeInstanceParams返回参数结构体
                */
                class DescribeInstanceParamsResponse : public AbstractModel
                {
                public:
                    DescribeInstanceParamsResponse();
                    ~DescribeInstanceParamsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例参数总数量。
                     * @return TotalCount 实例参数总数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取实例枚举类型参数数组。
                     * @return InstanceEnumParam 实例枚举类型参数数组。
                     * 
                     */
                    std::vector<InstanceEnumParam> GetInstanceEnumParam() const;

                    /**
                     * 判断参数 InstanceEnumParam 是否已赋值
                     * @return InstanceEnumParam 是否已赋值
                     * 
                     */
                    bool InstanceEnumParamHasBeenSet() const;

                    /**
                     * 获取实例整型参数数组。
                     * @return InstanceIntegerParam 实例整型参数数组。
                     * 
                     */
                    std::vector<InstanceIntegerParam> GetInstanceIntegerParam() const;

                    /**
                     * 判断参数 InstanceIntegerParam 是否已赋值
                     * @return InstanceIntegerParam 是否已赋值
                     * 
                     */
                    bool InstanceIntegerParamHasBeenSet() const;

                    /**
                     * 获取实例字符型参数数组。
                     * @return InstanceTextParam 实例字符型参数数组。
                     * 
                     */
                    std::vector<InstanceTextParam> GetInstanceTextParam() const;

                    /**
                     * 判断参数 InstanceTextParam 是否已赋值
                     * @return InstanceTextParam 是否已赋值
                     * 
                     */
                    bool InstanceTextParamHasBeenSet() const;

                    /**
                     * 获取实例多选项型参数数组。
                     * @return InstanceMultiParam 实例多选项型参数数组。
                     * 
                     */
                    std::vector<InstanceMultiParam> GetInstanceMultiParam() const;

                    /**
                     * 判断参数 InstanceMultiParam 是否已赋值
                     * @return InstanceMultiParam 是否已赋值
                     * 
                     */
                    bool InstanceMultiParamHasBeenSet() const;

                private:

                    /**
                     * 实例参数总数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 实例枚举类型参数数组。
                     */
                    std::vector<InstanceEnumParam> m_instanceEnumParam;
                    bool m_instanceEnumParamHasBeenSet;

                    /**
                     * 实例整型参数数组。
                     */
                    std::vector<InstanceIntegerParam> m_instanceIntegerParam;
                    bool m_instanceIntegerParamHasBeenSet;

                    /**
                     * 实例字符型参数数组。
                     */
                    std::vector<InstanceTextParam> m_instanceTextParam;
                    bool m_instanceTextParamHasBeenSet;

                    /**
                     * 实例多选项型参数数组。
                     */
                    std::vector<InstanceMultiParam> m_instanceMultiParam;
                    bool m_instanceMultiParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCEPARAMSRESPONSE_H_
