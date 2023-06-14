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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_MODIFYPERSONTYPEREQUEST_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_MODIFYPERSONTYPEREQUEST_H_

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
                * ModifyPersonType请求参数结构体
                */
                class ModifyPersonTypeRequest : public AbstractModel
                {
                public:
                    ModifyPersonTypeRequest();
                    ~ModifyPersonTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团ID
                     * @return CompanyId 集团ID
                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 设置集团ID
                     * @param _companyId 集团ID
                     * 
                     */
                    void SetCompanyId(const std::string& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取门店ID
                     * @return ShopId 门店ID
                     * 
                     */
                    uint64_t GetShopId() const;

                    /**
                     * 设置门店ID
                     * @param _shopId 门店ID
                     * 
                     */
                    void SetShopId(const uint64_t& _shopId);

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取顾客ID
                     * @return PersonId 顾客ID
                     * 
                     */
                    uint64_t GetPersonId() const;

                    /**
                     * 设置顾客ID
                     * @param _personId 顾客ID
                     * 
                     */
                    void SetPersonId(const uint64_t& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取身份类型(0表示普通顾客，1 白名单，2 表示黑名单）
                     * @return PersonType 身份类型(0表示普通顾客，1 白名单，2 表示黑名单）
                     * 
                     */
                    uint64_t GetPersonType() const;

                    /**
                     * 设置身份类型(0表示普通顾客，1 白名单，2 表示黑名单）
                     * @param _personType 身份类型(0表示普通顾客，1 白名单，2 表示黑名单）
                     * 
                     */
                    void SetPersonType(const uint64_t& _personType);

                    /**
                     * 判断参数 PersonType 是否已赋值
                     * @return PersonType 是否已赋值
                     * 
                     */
                    bool PersonTypeHasBeenSet() const;

                    /**
                     * 获取身份子类型:
PersonType=0时(普通顾客)，0普通顾客
PersonType=1时(白名单)，0店员，1商场人员，2其他类型人员，3区域经理，4注册会员，5VIP用户
PersonType=2时(黑名单)，0普通黑名单，1小偷)
                     * @return PersonSubType 身份子类型:
PersonType=0时(普通顾客)，0普通顾客
PersonType=1时(白名单)，0店员，1商场人员，2其他类型人员，3区域经理，4注册会员，5VIP用户
PersonType=2时(黑名单)，0普通黑名单，1小偷)
                     * 
                     */
                    uint64_t GetPersonSubType() const;

                    /**
                     * 设置身份子类型:
PersonType=0时(普通顾客)，0普通顾客
PersonType=1时(白名单)，0店员，1商场人员，2其他类型人员，3区域经理，4注册会员，5VIP用户
PersonType=2时(黑名单)，0普通黑名单，1小偷)
                     * @param _personSubType 身份子类型:
PersonType=0时(普通顾客)，0普通顾客
PersonType=1时(白名单)，0店员，1商场人员，2其他类型人员，3区域经理，4注册会员，5VIP用户
PersonType=2时(黑名单)，0普通黑名单，1小偷)
                     * 
                     */
                    void SetPersonSubType(const uint64_t& _personSubType);

                    /**
                     * 判断参数 PersonSubType 是否已赋值
                     * @return PersonSubType 是否已赋值
                     * 
                     */
                    bool PersonSubTypeHasBeenSet() const;

                private:

                    /**
                     * 集团ID
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 门店ID
                     */
                    uint64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 顾客ID
                     */
                    uint64_t m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 身份类型(0表示普通顾客，1 白名单，2 表示黑名单）
                     */
                    uint64_t m_personType;
                    bool m_personTypeHasBeenSet;

                    /**
                     * 身份子类型:
PersonType=0时(普通顾客)，0普通顾客
PersonType=1时(白名单)，0店员，1商场人员，2其他类型人员，3区域经理，4注册会员，5VIP用户
PersonType=2时(黑名单)，0普通黑名单，1小偷)
                     */
                    uint64_t m_personSubType;
                    bool m_personSubTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_MODIFYPERSONTYPEREQUEST_H_
