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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_MODIFYPERSONTAGINFOREQUEST_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_MODIFYPERSONTAGINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/youmall/v20180228/model/PersonTagInfo.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyPersonTagInfo请求参数结构体
                */
                class ModifyPersonTagInfoRequest : public AbstractModel
                {
                public:
                    ModifyPersonTagInfoRequest();
                    ~ModifyPersonTagInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
                     * @return CompanyId 优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 设置优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
                     * @param _companyId 优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
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
                     * 获取优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取，为0则拉取集团全部店铺当前
                     * @return ShopId 优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取，为0则拉取集团全部店铺当前
                     * 
                     */
                    int64_t GetShopId() const;

                    /**
                     * 设置优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取，为0则拉取集团全部店铺当前
                     * @param _shopId 优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取，为0则拉取集团全部店铺当前
                     * 
                     */
                    void SetShopId(const int64_t& _shopId);

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取需要设置的顾客信息，批量设置最大为10个
                     * @return Tags 需要设置的顾客信息，批量设置最大为10个
                     * 
                     */
                    std::vector<PersonTagInfo> GetTags() const;

                    /**
                     * 设置需要设置的顾客信息，批量设置最大为10个
                     * @param _tags 需要设置的顾客信息，批量设置最大为10个
                     * 
                     */
                    void SetTags(const std::vector<PersonTagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取，为0则拉取集团全部店铺当前
                     */
                    int64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 需要设置的顾客信息，批量设置最大为10个
                     */
                    std::vector<PersonTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_MODIFYPERSONTAGINFOREQUEST_H_
