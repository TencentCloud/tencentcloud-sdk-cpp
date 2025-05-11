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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DEALPRICEDETAIL_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DEALPRICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/partners/v20180321/model/SubProductPriceDetail.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * 订单价格详情
                */
                class DealPriceDetail : public AbstractModel
                {
                public:
                    DealPriceDetail();
                    ~DealPriceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子订单号
                     * @return DealName 子订单号
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置子订单号
                     * @param _dealName 子订单号
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取订单归属人uin（代客uin）
                     * @return OwnerUin 订单归属人uin（代客uin）
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置订单归属人uin（代客uin）
                     * @param _ownerUin 订单归属人uin（代客uin）
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取子产品价格详情列表
                     * @return SubProductPriceDetail 子产品价格详情列表
                     * 
                     */
                    std::vector<SubProductPriceDetail> GetSubProductPriceDetail() const;

                    /**
                     * 设置子产品价格详情列表
                     * @param _subProductPriceDetail 子产品价格详情列表
                     * 
                     */
                    void SetSubProductPriceDetail(const std::vector<SubProductPriceDetail>& _subProductPriceDetail);

                    /**
                     * 判断参数 SubProductPriceDetail 是否已赋值
                     * @return SubProductPriceDetail 是否已赋值
                     * 
                     */
                    bool SubProductPriceDetailHasBeenSet() const;

                private:

                    /**
                     * 子订单号
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * 订单归属人uin（代客uin）
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 子产品价格详情列表
                     */
                    std::vector<SubProductPriceDetail> m_subProductPriceDetail;
                    bool m_subProductPriceDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DEALPRICEDETAIL_H_
