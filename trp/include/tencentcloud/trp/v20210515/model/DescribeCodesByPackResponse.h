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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBECODESBYPACKRESPONSE_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBECODESBYPACKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/CodeItem.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * DescribeCodesByPack返回参数结构体
                */
                class DescribeCodesByPackResponse : public AbstractModel
                {
                public:
                    DescribeCodesByPackResponse();
                    ~DescribeCodesByPackResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取码列表
                     * @return Codes 码列表
                     * 
                     */
                    std::vector<CodeItem> GetCodes() const;

                    /**
                     * 判断参数 Codes 是否已赋值
                     * @return Codes 是否已赋值
                     * 
                     */
                    bool CodesHasBeenSet() const;

                private:

                    /**
                     * 码列表
                     */
                    std::vector<CodeItem> m_codes;
                    bool m_codesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBECODESBYPACKRESPONSE_H_
