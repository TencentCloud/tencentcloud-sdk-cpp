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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPRODUCTCONFIGRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPRODUCTCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/SpecInfo.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeProductConfig返回参数结构体
                */
                class DescribeProductConfigResponse : public AbstractModel
                {
                public:
                    DescribeProductConfigResponse();
                    ~DescribeProductConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取售卖规格列表。
                     * @return SpecInfoList 售卖规格列表。
                     * 
                     */
                    std::vector<SpecInfo> GetSpecInfoList() const;

                    /**
                     * 判断参数 SpecInfoList 是否已赋值
                     * @return SpecInfoList 是否已赋值
                     * 
                     */
                    bool SpecInfoListHasBeenSet() const;

                private:

                    /**
                     * 售卖规格列表。
                     */
                    std::vector<SpecInfo> m_specInfoList;
                    bool m_specInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPRODUCTCONFIGRESPONSE_H_
