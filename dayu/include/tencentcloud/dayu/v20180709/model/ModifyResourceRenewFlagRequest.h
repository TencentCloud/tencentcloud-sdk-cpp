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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYRESOURCERENEWFLAGREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYRESOURCERENEWFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * ModifyResourceRenewFlag请求参数结构体
                */
                class ModifyResourceRenewFlagRequest : public AbstractModel
                {
                public:
                    ModifyResourceRenewFlagRequest();
                    ~ModifyResourceRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版；shield表示棋牌盾；bgp表示独享包；bgp-multip表示共享包；insurance表示保险包；staticpack表示三网套餐包）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版；shield表示棋牌盾；bgp表示独享包；bgp-multip表示共享包；insurance表示保险包；staticpack表示三网套餐包）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版；shield表示棋牌盾；bgp表示独享包；bgp-multip表示共享包；insurance表示保险包；staticpack表示三网套餐包）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版；shield表示棋牌盾；bgp表示独享包；bgp-multip表示共享包；insurance表示保险包；staticpack表示三网套餐包）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源Id
                     * @return Id 资源Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源Id
                     * @param _id 资源Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取自动续费标记（0手动续费；1自动续费；2到期不续费）
                     * @return RenewFlag 自动续费标记（0手动续费；1自动续费；2到期不续费）
                     * 
                     */
                    uint64_t GetRenewFlag() const;

                    /**
                     * 设置自动续费标记（0手动续费；1自动续费；2到期不续费）
                     * @param _renewFlag 自动续费标记（0手动续费；1自动续费；2到期不续费）
                     * 
                     */
                    void SetRenewFlag(const uint64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版；shield表示棋牌盾；bgp表示独享包；bgp-multip表示共享包；insurance表示保险包；staticpack表示三网套餐包）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 自动续费标记（0手动续费；1自动续费；2到期不续费）
                     */
                    uint64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYRESOURCERENEWFLAGREQUEST_H_
