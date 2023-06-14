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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_MODIFYPERSONFEATUREINFORESPONSE_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_MODIFYPERSONFEATUREINFORESPONSE_H_

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
                * ModifyPersonFeatureInfo返回参数结构体
                */
                class ModifyPersonFeatureInfoResponse : public AbstractModel
                {
                public:
                    ModifyPersonFeatureInfoResponse();
                    ~ModifyPersonFeatureInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集团ID
                     * @return CompanyId 集团ID
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
                     * 获取店铺ID，如果不填表示操作集团身份库
                     * @return ShopId 店铺ID，如果不填表示操作集团身份库
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
                     * 获取请求的顾客id
                     * @return PersonId 请求的顾客id
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
                     * 获取图片实际绑定person_id，可能与请求的person_id不同，以此id为准
                     * @return PersonIdBind 图片实际绑定person_id，可能与请求的person_id不同，以此id为准
                     * 
                     */
                    int64_t GetPersonIdBind() const;

                    /**
                     * 判断参数 PersonIdBind 是否已赋值
                     * @return PersonIdBind 是否已赋值
                     * 
                     */
                    bool PersonIdBindHasBeenSet() const;

                    /**
                     * 获取请求的顾客类型
                     * @return PersonType 请求的顾客类型
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
                     * 获取与请求的person_id类型相同、与请求图片特征相似的一个或多个person_id，需要额外确认这些id是否是同一个人
                     * @return SimilarPersonIds 与请求的person_id类型相同、与请求图片特征相似的一个或多个person_id，需要额外确认这些id是否是同一个人
                     * 
                     */
                    std::vector<int64_t> GetSimilarPersonIds() const;

                    /**
                     * 判断参数 SimilarPersonIds 是否已赋值
                     * @return SimilarPersonIds 是否已赋值
                     * 
                     */
                    bool SimilarPersonIdsHasBeenSet() const;

                private:

                    /**
                     * 集团ID
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 店铺ID，如果不填表示操作集团身份库
                     */
                    int64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 请求的顾客id
                     */
                    int64_t m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 图片实际绑定person_id，可能与请求的person_id不同，以此id为准
                     */
                    int64_t m_personIdBind;
                    bool m_personIdBindHasBeenSet;

                    /**
                     * 请求的顾客类型
                     */
                    int64_t m_personType;
                    bool m_personTypeHasBeenSet;

                    /**
                     * 与请求的person_id类型相同、与请求图片特征相似的一个或多个person_id，需要额外确认这些id是否是同一个人
                     */
                    std::vector<int64_t> m_similarPersonIds;
                    bool m_similarPersonIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_MODIFYPERSONFEATUREINFORESPONSE_H_
