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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEDOMAINERRORPAGEINFOBYIDSRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEDOMAINERRORPAGEINFOBYIDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/DomainErrorPageInfo.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeDomainErrorPageInfoByIds返回参数结构体
                */
                class DescribeDomainErrorPageInfoByIdsResponse : public AbstractModel
                {
                public:
                    DescribeDomainErrorPageInfoByIdsResponse();
                    ~DescribeDomainErrorPageInfoByIdsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取定制错误响应配置集
                     * @return ErrorPageSet 定制错误响应配置集
                     * 
                     */
                    std::vector<DomainErrorPageInfo> GetErrorPageSet() const;

                    /**
                     * 判断参数 ErrorPageSet 是否已赋值
                     * @return ErrorPageSet 是否已赋值
                     * 
                     */
                    bool ErrorPageSetHasBeenSet() const;

                private:

                    /**
                     * 定制错误响应配置集
                     */
                    std::vector<DomainErrorPageInfo> m_errorPageSet;
                    bool m_errorPageSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEDOMAINERRORPAGEINFOBYIDSRESPONSE_H_
