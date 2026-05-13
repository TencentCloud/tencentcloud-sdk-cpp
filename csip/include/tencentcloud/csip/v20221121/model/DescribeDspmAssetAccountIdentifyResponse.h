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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMASSETACCOUNTIDENTIFYRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMASSETACCOUNTIDENTIFYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmAssetAccountIdentify.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmAssetAccountIdentify返回参数结构体
                */
                class DescribeDspmAssetAccountIdentifyResponse : public AbstractModel
                {
                public:
                    DescribeDspmAssetAccountIdentifyResponse();
                    ~DescribeDspmAssetAccountIdentifyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资产账号身份总数
                     * @return TotalCount 资产账号身份总数
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
                     * 获取资产账号身份信息
                     * @return IdentifySet 资产账号身份信息
                     * 
                     */
                    std::vector<DspmAssetAccountIdentify> GetIdentifySet() const;

                    /**
                     * 判断参数 IdentifySet 是否已赋值
                     * @return IdentifySet 是否已赋值
                     * 
                     */
                    bool IdentifySetHasBeenSet() const;

                private:

                    /**
                     * 资产账号身份总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 资产账号身份信息
                     */
                    std::vector<DspmAssetAccountIdentify> m_identifySet;
                    bool m_identifySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMASSETACCOUNTIDENTIFYRESPONSE_H_
