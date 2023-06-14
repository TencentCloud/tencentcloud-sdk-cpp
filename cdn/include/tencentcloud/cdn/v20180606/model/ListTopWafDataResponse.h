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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPWAFDATARESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPWAFDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnTypeData.h>
#include <tencentcloud/cdn/v20180606/model/ScdnTopData.h>
#include <tencentcloud/cdn/v20180606/model/ScdnTopUrlData.h>
#include <tencentcloud/cdn/v20180606/model/ScdnTopDomainData.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * ListTopWafData返回参数结构体
                */
                class ListTopWafDataResponse : public AbstractModel
                {
                public:
                    ListTopWafDataResponse();
                    ~ListTopWafDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取攻击类型统计
                     * @return TopTypeData 攻击类型统计
                     * 
                     */
                    std::vector<ScdnTypeData> GetTopTypeData() const;

                    /**
                     * 判断参数 TopTypeData 是否已赋值
                     * @return TopTypeData 是否已赋值
                     * 
                     */
                    bool TopTypeDataHasBeenSet() const;

                    /**
                     * 获取IP统计
                     * @return TopIpData IP统计
                     * 
                     */
                    std::vector<ScdnTopData> GetTopIpData() const;

                    /**
                     * 判断参数 TopIpData 是否已赋值
                     * @return TopIpData 是否已赋值
                     * 
                     */
                    bool TopIpDataHasBeenSet() const;

                    /**
                     * 获取URL统计
                     * @return TopUrlData URL统计
                     * 
                     */
                    std::vector<ScdnTopUrlData> GetTopUrlData() const;

                    /**
                     * 判断参数 TopUrlData 是否已赋值
                     * @return TopUrlData 是否已赋值
                     * 
                     */
                    bool TopUrlDataHasBeenSet() const;

                    /**
                     * 获取域名统计
                     * @return TopDomainData 域名统计
                     * 
                     */
                    std::vector<ScdnTopDomainData> GetTopDomainData() const;

                    /**
                     * 判断参数 TopDomainData 是否已赋值
                     * @return TopDomainData 是否已赋值
                     * 
                     */
                    bool TopDomainDataHasBeenSet() const;

                private:

                    /**
                     * 攻击类型统计
                     */
                    std::vector<ScdnTypeData> m_topTypeData;
                    bool m_topTypeDataHasBeenSet;

                    /**
                     * IP统计
                     */
                    std::vector<ScdnTopData> m_topIpData;
                    bool m_topIpDataHasBeenSet;

                    /**
                     * URL统计
                     */
                    std::vector<ScdnTopUrlData> m_topUrlData;
                    bool m_topUrlDataHasBeenSet;

                    /**
                     * 域名统计
                     */
                    std::vector<ScdnTopDomainData> m_topDomainData;
                    bool m_topDomainDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPWAFDATARESPONSE_H_
