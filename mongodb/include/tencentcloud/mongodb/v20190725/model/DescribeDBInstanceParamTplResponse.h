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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/ParamTpl.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceParamTpl返回参数结构体
                */
                class DescribeDBInstanceParamTplResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceParamTplResponse();
                    ~DescribeDBInstanceParamTplResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取参数模板列表信息。
                     * @return ParamTpls 参数模板列表信息。
                     * 
                     */
                    std::vector<ParamTpl> GetParamTpls() const;

                    /**
                     * 判断参数 ParamTpls 是否已赋值
                     * @return ParamTpls 是否已赋值
                     * 
                     */
                    bool ParamTplsHasBeenSet() const;

                    /**
                     * 获取参数模板总数。
                     * @return TotalCount 参数模板总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 参数模板列表信息。
                     */
                    std::vector<ParamTpl> m_paramTpls;
                    bool m_paramTplsHasBeenSet;

                    /**
                     * 参数模板总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLRESPONSE_H_
