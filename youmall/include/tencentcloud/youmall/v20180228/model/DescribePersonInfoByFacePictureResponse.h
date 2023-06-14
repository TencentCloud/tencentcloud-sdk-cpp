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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONINFOBYFACEPICTURERESPONSE_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONINFOBYFACEPICTURERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribePersonInfoByFacePicture返回参数结构体
                */
                class DescribePersonInfoByFacePictureResponse : public AbstractModel
                {
                public:
                    DescribePersonInfoByFacePictureResponse();
                    ~DescribePersonInfoByFacePictureResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集团id
                     * @return CompanyId 集团id
                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取店铺id
                     * @return ShopId 店铺id
                     * 
                     */
                    int64_t GetShopId() const;

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取顾客face id
                     * @return PersonId 顾客face id
                     * 
                     */
                    int64_t GetPersonId() const;

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取顾客底图url
                     * @return PictureUrl 顾客底图url
                     * 
                     */
                    std::string GetPictureUrl() const;

                    /**
                     * 判断参数 PictureUrl 是否已赋值
                     * @return PictureUrl 是否已赋值
                     * 
                     */
                    bool PictureUrlHasBeenSet() const;

                    /**
                     * 获取顾客类型（0表示普通顾客，1 白名单，2 表示黑名单，101表示集团白名单，102表示集团黑名单）
                     * @return PersonType 顾客类型（0表示普通顾客，1 白名单，2 表示黑名单，101表示集团白名单，102表示集团黑名单）
                     * 
                     */
                    int64_t GetPersonType() const;

                    /**
                     * 判断参数 PersonType 是否已赋值
                     * @return PersonType 是否已赋值
                     * 
                     */
                    bool PersonTypeHasBeenSet() const;

                    /**
                     * 获取顾客首次进店时间
                     * @return FirstVisitTime 顾客首次进店时间
                     * 
                     */
                    std::string GetFirstVisitTime() const;

                    /**
                     * 判断参数 FirstVisitTime 是否已赋值
                     * @return FirstVisitTime 是否已赋值
                     * 
                     */
                    bool FirstVisitTimeHasBeenSet() const;

                    /**
                     * 获取顾客历史到访次数
                     * @return VisitTimes 顾客历史到访次数
                     * 
                     */
                    int64_t GetVisitTimes() const;

                    /**
                     * 判断参数 VisitTimes 是否已赋值
                     * @return VisitTimes 是否已赋值
                     * 
                     */
                    bool VisitTimesHasBeenSet() const;

                private:

                    /**
                     * 集团id
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 店铺id
                     */
                    int64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 顾客face id
                     */
                    int64_t m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 顾客底图url
                     */
                    std::string m_pictureUrl;
                    bool m_pictureUrlHasBeenSet;

                    /**
                     * 顾客类型（0表示普通顾客，1 白名单，2 表示黑名单，101表示集团白名单，102表示集团黑名单）
                     */
                    int64_t m_personType;
                    bool m_personTypeHasBeenSet;

                    /**
                     * 顾客首次进店时间
                     */
                    std::string m_firstVisitTime;
                    bool m_firstVisitTimeHasBeenSet;

                    /**
                     * 顾客历史到访次数
                     */
                    int64_t m_visitTimes;
                    bool m_visitTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONINFOBYFACEPICTURERESPONSE_H_
