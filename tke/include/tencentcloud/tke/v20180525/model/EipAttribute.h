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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EIPATTRIBUTE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EIPATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 用以帮助用户自动创建EIP的配置
                */
                class EipAttribute : public AbstractModel
                {
                public:
                    EipAttribute();
                    ~EipAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器实例删除后，EIP是否释放。
Never表示不释放，其他任意值（包括空字符串）表示释放。
                     * @return DeletePolicy 容器实例删除后，EIP是否释放。
Never表示不释放，其他任意值（包括空字符串）表示释放。
                     * 
                     */
                    std::string GetDeletePolicy() const;

                    /**
                     * 设置容器实例删除后，EIP是否释放。
Never表示不释放，其他任意值（包括空字符串）表示释放。
                     * @param _deletePolicy 容器实例删除后，EIP是否释放。
Never表示不释放，其他任意值（包括空字符串）表示释放。
                     * 
                     */
                    void SetDeletePolicy(const std::string& _deletePolicy);

                    /**
                     * 判断参数 DeletePolicy 是否已赋值
                     * @return DeletePolicy 是否已赋值
                     * 
                     */
                    bool DeletePolicyHasBeenSet() const;

                    /**
                     * 获取EIP线路类型。默认值：BGP。
已开通静态单线IP白名单的用户，可选值：
CMCC：中国移动
CTCC：中国电信
CUCC：中国联通
注意：仅部分地域支持静态单线IP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternetServiceProvider EIP线路类型。默认值：BGP。
已开通静态单线IP白名单的用户，可选值：
CMCC：中国移动
CTCC：中国电信
CUCC：中国联通
注意：仅部分地域支持静态单线IP。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInternetServiceProvider() const;

                    /**
                     * 设置EIP线路类型。默认值：BGP。
已开通静态单线IP白名单的用户，可选值：
CMCC：中国移动
CTCC：中国电信
CUCC：中国联通
注意：仅部分地域支持静态单线IP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internetServiceProvider EIP线路类型。默认值：BGP。
已开通静态单线IP白名单的用户，可选值：
CMCC：中国移动
CTCC：中国电信
CUCC：中国联通
注意：仅部分地域支持静态单线IP。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInternetServiceProvider(const std::string& _internetServiceProvider);

                    /**
                     * 判断参数 InternetServiceProvider 是否已赋值
                     * @return InternetServiceProvider 是否已赋值
                     * 
                     */
                    bool InternetServiceProviderHasBeenSet() const;

                    /**
                     * 获取EIP出带宽上限，单位：Mbps。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternetMaxBandwidthOut EIP出带宽上限，单位：Mbps。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置EIP出带宽上限，单位：Mbps。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internetMaxBandwidthOut EIP出带宽上限，单位：Mbps。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                private:

                    /**
                     * 容器实例删除后，EIP是否释放。
Never表示不释放，其他任意值（包括空字符串）表示释放。
                     */
                    std::string m_deletePolicy;
                    bool m_deletePolicyHasBeenSet;

                    /**
                     * EIP线路类型。默认值：BGP。
已开通静态单线IP白名单的用户，可选值：
CMCC：中国移动
CTCC：中国电信
CUCC：中国联通
注意：仅部分地域支持静态单线IP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_internetServiceProvider;
                    bool m_internetServiceProviderHasBeenSet;

                    /**
                     * EIP出带宽上限，单位：Mbps。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EIPATTRIBUTE_H_
