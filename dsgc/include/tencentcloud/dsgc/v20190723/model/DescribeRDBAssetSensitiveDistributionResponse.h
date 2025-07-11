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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBERDBASSETSENSITIVEDISTRIBUTIONRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBERDBASSETSENSITIVEDISTRIBUTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/RDBAsset.h>
#include <tencentcloud/dsgc/v20190723/model/TopAsset.h>
#include <tencentcloud/dsgc/v20190723/model/AssetDBDetail.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeRDBAssetSensitiveDistribution返回参数结构体
                */
                class DescribeRDBAssetSensitiveDistributionResponse : public AbstractModel
                {
                public:
                    DescribeRDBAssetSensitiveDistributionResponse();
                    ~DescribeRDBAssetSensitiveDistributionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取rdb的资产统计数据
                     * @return RDBAsset rdb的资产统计数据
                     * 
                     */
                    RDBAsset GetRDBAsset() const;

                    /**
                     * 判断参数 RDBAsset 是否已赋值
                     * @return RDBAsset 是否已赋值
                     * 
                     */
                    bool RDBAssetHasBeenSet() const;

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
                     * 获取rdb的详情列表
                     * @return RDBDetail rdb的详情列表
                     * 
                     */
                    std::vector<AssetDBDetail> GetRDBDetail() const;

                    /**
                     * 判断参数 RDBDetail 是否已赋值
                     * @return RDBDetail 是否已赋值
                     * 
                     */
                    bool RDBDetailHasBeenSet() const;

                private:

                    /**
                     * rdb的资产统计数据
                     */
                    RDBAsset m_rDBAsset;
                    bool m_rDBAssetHasBeenSet;

                    /**
                     * 涉敏top数据
                     */
                    std::vector<TopAsset> m_topAsset;
                    bool m_topAssetHasBeenSet;

                    /**
                     * rdb的详情列表
                     */
                    std::vector<AssetDBDetail> m_rDBDetail;
                    bool m_rDBDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBERDBASSETSENSITIVEDISTRIBUTIONRESPONSE_H_
