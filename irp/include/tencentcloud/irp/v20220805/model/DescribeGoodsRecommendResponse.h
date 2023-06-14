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

#ifndef TENCENTCLOUD_IRP_V20220805_MODEL_DESCRIBEGOODSRECOMMENDRESPONSE_H_
#define TENCENTCLOUD_IRP_V20220805_MODEL_DESCRIBEGOODSRECOMMENDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/irp/v20220805/model/RecGoodsData.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220805
        {
            namespace Model
            {
                /**
                * DescribeGoodsRecommend返回参数结构体
                */
                class DescribeGoodsRecommendResponse : public AbstractModel
                {
                public:
                    DescribeGoodsRecommendResponse();
                    ~DescribeGoodsRecommendResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取推荐返回的商品信息列表
                     * @return DataList 推荐返回的商品信息列表
                     * 
                     */
                    std::vector<RecGoodsData> GetDataList() const;

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                private:

                    /**
                     * 推荐返回的商品信息列表
                     */
                    std::vector<RecGoodsData> m_dataList;
                    bool m_dataListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220805_MODEL_DESCRIBEGOODSRECOMMENDRESPONSE_H_
