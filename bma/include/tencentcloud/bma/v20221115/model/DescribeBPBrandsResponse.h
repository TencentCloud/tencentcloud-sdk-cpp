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

#ifndef TENCENTCLOUD_BMA_V20221115_MODEL_DESCRIBEBPBRANDSRESPONSE_H_
#define TENCENTCLOUD_BMA_V20221115_MODEL_DESCRIBEBPBRANDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bma/v20221115/model/BrandData.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20221115
        {
            namespace Model
            {
                /**
                * DescribeBPBrands返回参数结构体
                */
                class DescribeBPBrandsResponse : public AbstractModel
                {
                public:
                    DescribeBPBrandsResponse();
                    ~DescribeBPBrandsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取品牌信息
                     * @return Brands 品牌信息
                     * 
                     */
                    std::vector<BrandData> GetBrands() const;

                    /**
                     * 判断参数 Brands 是否已赋值
                     * @return Brands 是否已赋值
                     * 
                     */
                    bool BrandsHasBeenSet() const;

                    /**
                     * 获取品牌审核通知栏状态：0 不显示 1 显示
                     * @return NoticeStatus 品牌审核通知栏状态：0 不显示 1 显示
                     * 
                     */
                    int64_t GetNoticeStatus() const;

                    /**
                     * 判断参数 NoticeStatus 是否已赋值
                     * @return NoticeStatus 是否已赋值
                     * 
                     */
                    bool NoticeStatusHasBeenSet() const;

                private:

                    /**
                     * 品牌信息
                     */
                    std::vector<BrandData> m_brands;
                    bool m_brandsHasBeenSet;

                    /**
                     * 品牌审核通知栏状态：0 不显示 1 显示
                     */
                    int64_t m_noticeStatus;
                    bool m_noticeStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20221115_MODEL_DESCRIBEBPBRANDSRESPONSE_H_
