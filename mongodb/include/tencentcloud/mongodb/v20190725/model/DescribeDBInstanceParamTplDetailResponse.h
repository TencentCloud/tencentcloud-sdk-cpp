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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLDETAILRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/InstanceEnumParam.h>
#include <tencentcloud/mongodb/v20190725/model/InstanceIntegerParam.h>
#include <tencentcloud/mongodb/v20190725/model/InstanceTextParam.h>
#include <tencentcloud/mongodb/v20190725/model/InstanceMultiParam.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceParamTplDetail返回参数结构体
                */
                class DescribeDBInstanceParamTplDetailResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceParamTplDetailResponse();
                    ~DescribeDBInstanceParamTplDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取枚举类参数详情列表。
                     * @return InstanceEnumParams 枚举类参数详情列表。
                     * 
                     */
                    std::vector<InstanceEnumParam> GetInstanceEnumParams() const;

                    /**
                     * 判断参数 InstanceEnumParams 是否已赋值
                     * @return InstanceEnumParams 是否已赋值
                     * 
                     */
                    bool InstanceEnumParamsHasBeenSet() const;

                    /**
                     * 获取整形参数详情列表。
                     * @return InstanceIntegerParams 整形参数详情列表。
                     * 
                     */
                    std::vector<InstanceIntegerParam> GetInstanceIntegerParams() const;

                    /**
                     * 判断参数 InstanceIntegerParams 是否已赋值
                     * @return InstanceIntegerParams 是否已赋值
                     * 
                     */
                    bool InstanceIntegerParamsHasBeenSet() const;

                    /**
                     * 获取文本参数详情列表。
                     * @return InstanceTextParams 文本参数详情列表。
                     * 
                     */
                    std::vector<InstanceTextParam> GetInstanceTextParams() const;

                    /**
                     * 判断参数 InstanceTextParams 是否已赋值
                     * @return InstanceTextParams 是否已赋值
                     * 
                     */
                    bool InstanceTextParamsHasBeenSet() const;

                    /**
                     * 获取多值参数详情列表。
                     * @return InstanceMultiParams 多值参数详情列表。
                     * 
                     */
                    std::vector<InstanceMultiParam> GetInstanceMultiParams() const;

                    /**
                     * 判断参数 InstanceMultiParams 是否已赋值
                     * @return InstanceMultiParams 是否已赋值
                     * 
                     */
                    bool InstanceMultiParamsHasBeenSet() const;

                    /**
                     * 获取参数总个数。
                     * @return TotalCount 参数总个数。
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
                     * 获取模板适配实例版本。
                     * @return MongoVersion 模板适配实例版本。
                     * 
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 判断参数 MongoVersion 是否已赋值
                     * @return MongoVersion 是否已赋值
                     * 
                     */
                    bool MongoVersionHasBeenSet() const;

                    /**
                     * 获取模板适配集群类型，副本集或分片。。
                     * @return ClusterType 模板适配集群类型，副本集或分片。。
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取参数模板名称。
                     * @return TplName 参数模板名称。
                     * 
                     */
                    std::string GetTplName() const;

                    /**
                     * 判断参数 TplName 是否已赋值
                     * @return TplName 是否已赋值
                     * 
                     */
                    bool TplNameHasBeenSet() const;

                private:

                    /**
                     * 枚举类参数详情列表。
                     */
                    std::vector<InstanceEnumParam> m_instanceEnumParams;
                    bool m_instanceEnumParamsHasBeenSet;

                    /**
                     * 整形参数详情列表。
                     */
                    std::vector<InstanceIntegerParam> m_instanceIntegerParams;
                    bool m_instanceIntegerParamsHasBeenSet;

                    /**
                     * 文本参数详情列表。
                     */
                    std::vector<InstanceTextParam> m_instanceTextParams;
                    bool m_instanceTextParamsHasBeenSet;

                    /**
                     * 多值参数详情列表。
                     */
                    std::vector<InstanceMultiParam> m_instanceMultiParams;
                    bool m_instanceMultiParamsHasBeenSet;

                    /**
                     * 参数总个数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 模板适配实例版本。
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * 模板适配集群类型，副本集或分片。。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 参数模板名称。
                     */
                    std::string m_tplName;
                    bool m_tplNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLDETAILRESPONSE_H_
