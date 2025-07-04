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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEESASSETSENSITIVEDISTRIBUTIONRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEESASSETSENSITIVEDISTRIBUTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/ESAsset.h>
#include <tencentcloud/dsgc/v20190723/model/TopAsset.h>
#include <tencentcloud/dsgc/v20190723/model/ESAssetDBDetail.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeESAssetSensitiveDistribution返回参数结构体
                */
                class DescribeESAssetSensitiveDistributionResponse : public AbstractModel
                {
                public:
                    DescribeESAssetSensitiveDistributionResponse();
                    ~DescribeESAssetSensitiveDistributionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ES的资产统计数据
                     * @return ESAsset ES的资产统计数据
                     * 
                     */
                    ESAsset GetESAsset() const;

                    /**
                     * 判断参数 ESAsset 是否已赋值
                     * @return ESAsset 是否已赋值
                     * 
                     */
                    bool ESAssetHasBeenSet() const;

                    /**
                     * 获取涉敏top数据
                     * @return TopAsset 涉敏top数据
                     * 
                     */
                    std::vector<TopAsset> GetTopAsset() const;

                    /**
                     * 判断参数 TopAsset 是否已赋值
                     * @return TopAsset 是否已赋值
                     * 
                     */
                    bool TopAssetHasBeenSet() const;

                    /**
                     * 获取ES的详情列表
                     * @return ESDetail ES的详情列表
                     * 
                     */
                    std::vector<ESAssetDBDetail> GetESDetail() const;

                    /**
                     * 判断参数 ESDetail 是否已赋值
                     * @return ESDetail 是否已赋值
                     * 
                     */
                    bool ESDetailHasBeenSet() const;

                private:

                    /**
                     * ES的资产统计数据
                     */
                    ESAsset m_eSAsset;
                    bool m_eSAssetHasBeenSet;

                    /**
                     * 涉敏top数据
                     */
                    std::vector<TopAsset> m_topAsset;
                    bool m_topAssetHasBeenSet;

                    /**
                     * ES的详情列表
                     */
                    std::vector<ESAssetDBDetail> m_eSDetail;
                    bool m_eSDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEESASSETSENSITIVEDISTRIBUTIONRESPONSE_H_
