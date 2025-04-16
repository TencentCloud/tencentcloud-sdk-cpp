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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INTERNETCHARGETYPECONFIG_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INTERNETCHARGETYPECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述了网络计费
                */
                class InternetChargeTypeConfig : public AbstractModel
                {
                public:
                    InternetChargeTypeConfig();
                    ~InternetChargeTypeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络计费类型。取值范围：<br><li>BANDWIDTH_PREPAID：预付费按带宽结算</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li><li>BANDWIDTH_PACKAGE：带宽包用户</li>默认取值：非带宽包用户默认与子机付费类型保持一致，比如子机付费类型为预付费，网络计费类型默认为预付费；子机付费类型为后付费，网络计费类型默认为后付费。
                     * @return InternetChargeType 网络计费类型。取值范围：<br><li>BANDWIDTH_PREPAID：预付费按带宽结算</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li><li>BANDWIDTH_PACKAGE：带宽包用户</li>默认取值：非带宽包用户默认与子机付费类型保持一致，比如子机付费类型为预付费，网络计费类型默认为预付费；子机付费类型为后付费，网络计费类型默认为后付费。
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置网络计费类型。取值范围：<br><li>BANDWIDTH_PREPAID：预付费按带宽结算</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li><li>BANDWIDTH_PACKAGE：带宽包用户</li>默认取值：非带宽包用户默认与子机付费类型保持一致，比如子机付费类型为预付费，网络计费类型默认为预付费；子机付费类型为后付费，网络计费类型默认为后付费。
                     * @param _internetChargeType 网络计费类型。取值范围：<br><li>BANDWIDTH_PREPAID：预付费按带宽结算</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li><li>BANDWIDTH_PACKAGE：带宽包用户</li>默认取值：非带宽包用户默认与子机付费类型保持一致，比如子机付费类型为预付费，网络计费类型默认为预付费；子机付费类型为后付费，网络计费类型默认为后付费。
                     * 
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     * 
                     */
                    bool InternetChargeTypeHasBeenSet() const;

                    /**
                     * 获取网络计费模式描述信息。
                     * @return Description 网络计费模式描述信息。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置网络计费模式描述信息。
                     * @param _description 网络计费模式描述信息。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 网络计费类型。取值范围：<br><li>BANDWIDTH_PREPAID：预付费按带宽结算</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li><li>BANDWIDTH_PACKAGE：带宽包用户</li>默认取值：非带宽包用户默认与子机付费类型保持一致，比如子机付费类型为预付费，网络计费类型默认为预付费；子机付费类型为后付费，网络计费类型默认为后付费。
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * 网络计费模式描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INTERNETCHARGETYPECONFIG_H_
