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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_PROMOTIONACTIVITYCONTENT_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_PROMOTIONACTIVITYCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 促销活动内容
                */
                class PromotionActivityContent : public AbstractModel
                {
                public:
                    PromotionActivityContent();
                    ~PromotionActivityContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取月数
                     * @return MonthNum 月数
                     * 
                     */
                    uint64_t GetMonthNum() const;

                    /**
                     * 设置月数
                     * @param _monthNum 月数
                     * 
                     */
                    void SetMonthNum(const uint64_t& _monthNum);

                    /**
                     * 判断参数 MonthNum 是否已赋值
                     * @return MonthNum 是否已赋值
                     * 
                     */
                    bool MonthNumHasBeenSet() const;

                    /**
                     * 获取核数最低限量
                     * @return CoresCountLimit 核数最低限量
                     * 
                     */
                    uint64_t GetCoresCountLimit() const;

                    /**
                     * 设置核数最低限量
                     * @param _coresCountLimit 核数最低限量
                     * 
                     */
                    void SetCoresCountLimit(const uint64_t& _coresCountLimit);

                    /**
                     * 判断参数 CoresCountLimit 是否已赋值
                     * @return CoresCountLimit 是否已赋值
                     * 
                     */
                    bool CoresCountLimitHasBeenSet() const;

                    /**
                     * 获取专业版折扣
                     * @return ProfessionalDiscount 专业版折扣
                     * 
                     */
                    uint64_t GetProfessionalDiscount() const;

                    /**
                     * 设置专业版折扣
                     * @param _professionalDiscount 专业版折扣
                     * 
                     */
                    void SetProfessionalDiscount(const uint64_t& _professionalDiscount);

                    /**
                     * 判断参数 ProfessionalDiscount 是否已赋值
                     * @return ProfessionalDiscount 是否已赋值
                     * 
                     */
                    bool ProfessionalDiscountHasBeenSet() const;

                    /**
                     * 获取附赠镜像数
                     * @return ImageAuthorizationNum 附赠镜像数
                     * 
                     */
                    uint64_t GetImageAuthorizationNum() const;

                    /**
                     * 设置附赠镜像数
                     * @param _imageAuthorizationNum 附赠镜像数
                     * 
                     */
                    void SetImageAuthorizationNum(const uint64_t& _imageAuthorizationNum);

                    /**
                     * 判断参数 ImageAuthorizationNum 是否已赋值
                     * @return ImageAuthorizationNum 是否已赋值
                     * 
                     */
                    bool ImageAuthorizationNumHasBeenSet() const;

                private:

                    /**
                     * 月数
                     */
                    uint64_t m_monthNum;
                    bool m_monthNumHasBeenSet;

                    /**
                     * 核数最低限量
                     */
                    uint64_t m_coresCountLimit;
                    bool m_coresCountLimitHasBeenSet;

                    /**
                     * 专业版折扣
                     */
                    uint64_t m_professionalDiscount;
                    bool m_professionalDiscountHasBeenSet;

                    /**
                     * 附赠镜像数
                     */
                    uint64_t m_imageAuthorizationNum;
                    bool m_imageAuthorizationNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_PROMOTIONACTIVITYCONTENT_H_
