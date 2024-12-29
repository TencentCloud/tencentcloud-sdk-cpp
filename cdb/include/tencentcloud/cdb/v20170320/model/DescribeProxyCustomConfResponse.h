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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPROXYCUSTOMCONFRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPROXYCUSTOMCONFRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/CustomConfig.h>
#include <tencentcloud/cdb/v20170320/model/Rule.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeProxyCustomConf返回参数结构体
                */
                class DescribeProxyCustomConfResponse : public AbstractModel
                {
                public:
                    DescribeProxyCustomConfResponse();
                    ~DescribeProxyCustomConfResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取代理配置数
                     * @return Count 代理配置数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取代理配置
                     * @return CustomConf 代理配置
                     * 
                     */
                    CustomConfig GetCustomConf() const;

                    /**
                     * 判断参数 CustomConf 是否已赋值
                     * @return CustomConf 是否已赋值
                     * 
                     */
                    bool CustomConfHasBeenSet() const;

                    /**
                     * 获取权重限制
                     * @return WeightRule 权重限制
                     * 
                     */
                    Rule GetWeightRule() const;

                    /**
                     * 判断参数 WeightRule 是否已赋值
                     * @return WeightRule 是否已赋值
                     * 
                     */
                    bool WeightRuleHasBeenSet() const;

                private:

                    /**
                     * 代理配置数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 代理配置
                     */
                    CustomConfig m_customConf;
                    bool m_customConfHasBeenSet;

                    /**
                     * 权重限制
                     */
                    Rule m_weightRule;
                    bool m_weightRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPROXYCUSTOMCONFRESPONSE_H_
