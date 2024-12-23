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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPARDBDATAASSETDETAILRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPARDBDATAASSETDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DspaRDBDataAssetDetail.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPARDBDataAssetDetail返回参数结构体
                */
                class DescribeDSPARDBDataAssetDetailResponse : public AbstractModel
                {
                public:
                    DescribeDSPARDBDataAssetDetailResponse();
                    ~DescribeDSPARDBDataAssetDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取RDB关系数据库敏感数据资产详情列表
                     * @return Details RDB关系数据库敏感数据资产详情列表
                     * 
                     */
                    std::vector<DspaRDBDataAssetDetail> GetDetails() const;

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                    /**
                     * 获取符合条件的RDB关系数据库敏感数据资产数量
                     * @return TotalCount 符合条件的RDB关系数据库敏感数据资产数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * RDB关系数据库敏感数据资产详情列表
                     */
                    std::vector<DspaRDBDataAssetDetail> m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * 符合条件的RDB关系数据库敏感数据资产数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPARDBDATAASSETDETAILRESPONSE_H_
