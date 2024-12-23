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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEMONGOASSETSENSITIVEDISTRIBUTIONRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEMONGOASSETSENSITIVEDISTRIBUTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/MongoAsset.h>
#include <tencentcloud/dsgc/v20190723/model/TopAsset.h>
#include <tencentcloud/dsgc/v20190723/model/MongoAssetDBDetail.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeMongoAssetSensitiveDistribution返回参数结构体
                */
                class DescribeMongoAssetSensitiveDistributionResponse : public AbstractModel
                {
                public:
                    DescribeMongoAssetSensitiveDistributionResponse();
                    ~DescribeMongoAssetSensitiveDistributionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取mongo的资产统计数据
                     * @return MongoAsset mongo的资产统计数据
                     * 
                     */
                    MongoAsset GetMongoAsset() const;

                    /**
                     * 判断参数 MongoAsset 是否已赋值
                     * @return MongoAsset 是否已赋值
                     * 
                     */
                    bool MongoAssetHasBeenSet() const;

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
                     * 获取mongo的详情列表
                     * @return MongoDetail mongo的详情列表
                     * 
                     */
                    std::vector<MongoAssetDBDetail> GetMongoDetail() const;

                    /**
                     * 判断参数 MongoDetail 是否已赋值
                     * @return MongoDetail 是否已赋值
                     * 
                     */
                    bool MongoDetailHasBeenSet() const;

                private:

                    /**
                     * mongo的资产统计数据
                     */
                    MongoAsset m_mongoAsset;
                    bool m_mongoAssetHasBeenSet;

                    /**
                     * 涉敏top数据
                     */
                    std::vector<TopAsset> m_topAsset;
                    bool m_topAssetHasBeenSet;

                    /**
                     * mongo的详情列表
                     */
                    std::vector<MongoAssetDBDetail> m_mongoDetail;
                    bool m_mongoDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEMONGOASSETSENSITIVEDISTRIBUTIONRESPONSE_H_
