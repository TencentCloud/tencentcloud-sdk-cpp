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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_PRIVATELINKPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_PRIVATELINKPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 建立私有连接的参数
                */
                class PrivateLinkParam : public AbstractModel
                {
                public:
                    PrivateLinkParam();
                    ~PrivateLinkParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户实例的vip
                     * @return ServiceVip 客户实例的vip
                     * 
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置客户实例的vip
                     * @param _serviceVip 客户实例的vip
                     * 
                     */
                    void SetServiceVip(const std::string& _serviceVip);

                    /**
                     * 判断参数 ServiceVip 是否已赋值
                     * @return ServiceVip 是否已赋值
                     * 
                     */
                    bool ServiceVipHasBeenSet() const;

                    /**
                     * 获取客户实例的vpcId
                     * @return UniqVpcId 客户实例的vpcId
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置客户实例的vpcId
                     * @param _uniqVpcId 客户实例的vpcId
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                private:

                    /**
                     * 客户实例的vip
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * 客户实例的vpcId
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_PRIVATELINKPARAM_H_
