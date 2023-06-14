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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_CREATESUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_CREATESUBSCRIBEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/TagItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * CreateSubscribe请求参数结构体
                */
                class CreateSubscribeRequest : public AbstractModel
                {
                public:
                    CreateSubscribeRequest();
                    ~CreateSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取订阅的数据库类型，目前支持的有 mysql
                     * @return Product 订阅的数据库类型，目前支持的有 mysql
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置订阅的数据库类型，目前支持的有 mysql
                     * @param _product 订阅的数据库类型，目前支持的有 mysql
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取实例付费类型，1小时计费，0包年包月
                     * @return PayType 实例付费类型，1小时计费，0包年包月
                     * 
                     */
                    int64_t GetPayType() const;

                    /**
                     * 设置实例付费类型，1小时计费，0包年包月
                     * @param _payType 实例付费类型，1小时计费，0包年包月
                     * 
                     */
                    void SetPayType(const int64_t& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取购买时长。PayType为0时必填。单位为月，最大支持120
                     * @return Duration 购买时长。PayType为0时必填。单位为月，最大支持120
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置购买时长。PayType为0时必填。单位为月，最大支持120
                     * @param _duration 购买时长。PayType为0时必填。单位为月，最大支持120
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取购买数量,默认为1，最大为10
                     * @return Count 购买数量,默认为1，最大为10
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置购买数量,默认为1，最大为10
                     * @param _count 购买数量,默认为1，最大为10
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取是否自动续费，0表示不自动续费，1表示自动续费，默认为0。小时计费实例设置该标识无效。
                     * @return AutoRenew 是否自动续费，0表示不自动续费，1表示自动续费，默认为0。小时计费实例设置该标识无效。
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置是否自动续费，0表示不自动续费，1表示自动续费，默认为0。小时计费实例设置该标识无效。
                     * @param _autoRenew 是否自动续费，0表示不自动续费，1表示自动续费，默认为0。小时计费实例设置该标识无效。
                     * 
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取实例资源标签
                     * @return Tags 实例资源标签
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置实例资源标签
                     * @param _tags 实例资源标签
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取用户自定义实例名
                     * @return Name 用户自定义实例名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户自定义实例名
                     * @param _name 用户自定义实例名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 订阅的数据库类型，目前支持的有 mysql
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 实例付费类型，1小时计费，0包年包月
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 购买时长。PayType为0时必填。单位为月，最大支持120
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 购买数量,默认为1，最大为10
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 是否自动续费，0表示不自动续费，1表示自动续费，默认为0。小时计费实例设置该标识无效。
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 实例资源标签
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 用户自定义实例名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_CREATESUBSCRIBEREQUEST_H_
