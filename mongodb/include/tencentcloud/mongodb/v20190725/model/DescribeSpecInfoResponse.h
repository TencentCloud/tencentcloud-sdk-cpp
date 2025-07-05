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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBESPECINFORESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBESPECINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/SpecificationInfo.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeSpecInfo返回参数结构体
                */
                class DescribeSpecInfoResponse : public AbstractModel
                {
                public:
                    DescribeSpecInfoResponse();
                    ~DescribeSpecInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例售卖规格信息列表
                     * @return SpecInfoList 实例售卖规格信息列表
                     * 
                     */
                    std::vector<SpecificationInfo> GetSpecInfoList() const;

                    /**
                     * 判断参数 SpecInfoList 是否已赋值
                     * @return SpecInfoList 是否已赋值
                     * 
                     */
                    bool SpecInfoListHasBeenSet() const;

                private:

                    /**
                     * 实例售卖规格信息列表
                     */
                    std::vector<SpecificationInfo> m_specInfoList;
                    bool m_specInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBESPECINFORESPONSE_H_
