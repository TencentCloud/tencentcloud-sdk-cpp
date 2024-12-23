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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBECOSASSETSENSITIVEDISTRIBUTIONRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBECOSASSETSENSITIVEDISTRIBUTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/CosAsset.h>
#include <tencentcloud/dsgc/v20190723/model/TopAsset.h>
#include <tencentcloud/dsgc/v20190723/model/AssetCosDetail.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeCOSAssetSensitiveDistribution返回参数结构体
                */
                class DescribeCOSAssetSensitiveDistributionResponse : public AbstractModel
                {
                public:
                    DescribeCOSAssetSensitiveDistributionResponse();
                    ~DescribeCOSAssetSensitiveDistributionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取cos的涉敏资产
                     * @return CosAsset cos的涉敏资产
                     * 
                     */
                    CosAsset GetCosAsset() const;

                    /**
                     * 判断参数 CosAsset 是否已赋值
                     * @return CosAsset 是否已赋值
                     * 
                     */
                    bool CosAssetHasBeenSet() const;

                    /**
                     * 获取涉敏top
                     * @return TopAsset 涉敏top
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
                     * 获取cos资产详情列表
                     * @return CosDetail cos资产详情列表
                     * 
                     */
                    std::vector<AssetCosDetail> GetCosDetail() const;

                    /**
                     * 判断参数 CosDetail 是否已赋值
                     * @return CosDetail 是否已赋值
                     * 
                     */
                    bool CosDetailHasBeenSet() const;

                private:

                    /**
                     * cos的涉敏资产
                     */
                    CosAsset m_cosAsset;
                    bool m_cosAssetHasBeenSet;

                    /**
                     * 涉敏top
                     */
                    std::vector<TopAsset> m_topAsset;
                    bool m_topAssetHasBeenSet;

                    /**
                     * cos资产详情列表
                     */
                    std::vector<AssetCosDetail> m_cosDetail;
                    bool m_cosDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBECOSASSETSENSITIVEDISTRIBUTIONRESPONSE_H_
