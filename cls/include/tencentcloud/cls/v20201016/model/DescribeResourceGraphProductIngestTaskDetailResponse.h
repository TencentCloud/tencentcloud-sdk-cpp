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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHPRODUCTINGESTTASKDETAILRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHPRODUCTINGESTTASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ProductIngestTaskDetail.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeResourceGraphProductIngestTaskDetail返回参数结构体
                */
                class DescribeResourceGraphProductIngestTaskDetailResponse : public AbstractModel
                {
                public:
                    DescribeResourceGraphProductIngestTaskDetailResponse();
                    ~DescribeResourceGraphProductIngestTaskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>接入任务详情</p>
                     * @return ProductIngestTaskDetail <p>接入任务详情</p>
                     * 
                     */
                    ProductIngestTaskDetail GetProductIngestTaskDetail() const;

                    /**
                     * 判断参数 ProductIngestTaskDetail 是否已赋值
                     * @return ProductIngestTaskDetail 是否已赋值
                     * 
                     */
                    bool ProductIngestTaskDetailHasBeenSet() const;

                private:

                    /**
                     * <p>接入任务详情</p>
                     */
                    ProductIngestTaskDetail m_productIngestTaskDetail;
                    bool m_productIngestTaskDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHPRODUCTINGESTTASKDETAILRESPONSE_H_
