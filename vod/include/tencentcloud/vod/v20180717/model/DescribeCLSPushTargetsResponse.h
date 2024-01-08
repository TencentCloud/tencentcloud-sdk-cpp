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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECLSPUSHTARGETSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECLSPUSHTARGETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/DomainCLSTargetInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeCLSPushTargets返回参数结构体
                */
                class DescribeCLSPushTargetsResponse : public AbstractModel
                {
                public:
                    DescribeCLSPushTargetsResponse();
                    ~DescribeCLSPushTargetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取域名推送总数量。
                     * @return TotalCount 域名推送总数量。
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
                     * 获取域名推送 CLS 目标列表。
                     * @return DomainCLSTargets 域名推送 CLS 目标列表。
                     * 
                     */
                    std::vector<DomainCLSTargetInfo> GetDomainCLSTargets() const;

                    /**
                     * 判断参数 DomainCLSTargets 是否已赋值
                     * @return DomainCLSTargets 是否已赋值
                     * 
                     */
                    bool DomainCLSTargetsHasBeenSet() const;

                private:

                    /**
                     * 域名推送总数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 域名推送 CLS 目标列表。
                     */
                    std::vector<DomainCLSTargetInfo> m_domainCLSTargets;
                    bool m_domainCLSTargetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECLSPUSHTARGETSRESPONSE_H_
