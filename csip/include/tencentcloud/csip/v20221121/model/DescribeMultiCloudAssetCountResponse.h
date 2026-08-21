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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEMULTICLOUDASSETCOUNTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEMULTICLOUDASSETCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CloudAssetInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeMultiCloudAssetCount返回参数结构体
                */
                class DescribeMultiCloudAssetCountResponse : public AbstractModel
                {
                public:
                    DescribeMultiCloudAssetCountResponse();
                    ~DescribeMultiCloudAssetCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>云上资产总数<br>取值范围：[0, +∞)</p>
                     * @return TotalCount <p>云上资产总数<br>取值范围：[0, +∞)</p>
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
                     * 获取<p>各云厂商资产数量明细</p>
                     * @return CloudAssetInfos <p>各云厂商资产数量明细</p>
                     * 
                     */
                    std::vector<CloudAssetInfo> GetCloudAssetInfos() const;

                    /**
                     * 判断参数 CloudAssetInfos 是否已赋值
                     * @return CloudAssetInfos 是否已赋值
                     * 
                     */
                    bool CloudAssetInfosHasBeenSet() const;

                private:

                    /**
                     * <p>云上资产总数<br>取值范围：[0, +∞)</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>各云厂商资产数量明细</p>
                     */
                    std::vector<CloudAssetInfo> m_cloudAssetInfos;
                    bool m_cloudAssetInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEMULTICLOUDASSETCOUNTRESPONSE_H_
