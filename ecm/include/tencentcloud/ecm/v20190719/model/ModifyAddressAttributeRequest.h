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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYADDRESSATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYADDRESSATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyAddressAttribute请求参数结构体
                */
                class ModifyAddressAttributeRequest : public AbstractModel
                {
                public:
                    ModifyAddressAttributeRequest();
                    ~ModifyAddressAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ECM 地域
                     * @return EcmRegion ECM 地域
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM 地域
                     * @param _ecmRegion ECM 地域
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取标识 EIP 的唯一 ID。EIP 唯一 ID 形如：eip-11112222。
                     * @return AddressId 标识 EIP 的唯一 ID。EIP 唯一 ID 形如：eip-11112222。
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置标识 EIP 的唯一 ID。EIP 唯一 ID 形如：eip-11112222。
                     * @param _addressId 标识 EIP 的唯一 ID。EIP 唯一 ID 形如：eip-11112222。
                     * 
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取修改后的 EIP 名称。长度上限为20个字符。
                     * @return AddressName 修改后的 EIP 名称。长度上限为20个字符。
                     * 
                     */
                    std::string GetAddressName() const;

                    /**
                     * 设置修改后的 EIP 名称。长度上限为20个字符。
                     * @param _addressName 修改后的 EIP 名称。长度上限为20个字符。
                     * 
                     */
                    void SetAddressName(const std::string& _addressName);

                    /**
                     * 判断参数 AddressName 是否已赋值
                     * @return AddressName 是否已赋值
                     * 
                     */
                    bool AddressNameHasBeenSet() const;

                    /**
                     * 获取设定EIP是否直通，"TRUE"表示直通，"FALSE"表示非直通。注意该参数仅对EIP直通功能可见的用户可以设定。
                     * @return EipDirectConnection 设定EIP是否直通，"TRUE"表示直通，"FALSE"表示非直通。注意该参数仅对EIP直通功能可见的用户可以设定。
                     * 
                     */
                    std::string GetEipDirectConnection() const;

                    /**
                     * 设置设定EIP是否直通，"TRUE"表示直通，"FALSE"表示非直通。注意该参数仅对EIP直通功能可见的用户可以设定。
                     * @param _eipDirectConnection 设定EIP是否直通，"TRUE"表示直通，"FALSE"表示非直通。注意该参数仅对EIP直通功能可见的用户可以设定。
                     * 
                     */
                    void SetEipDirectConnection(const std::string& _eipDirectConnection);

                    /**
                     * 判断参数 EipDirectConnection 是否已赋值
                     * @return EipDirectConnection 是否已赋值
                     * 
                     */
                    bool EipDirectConnectionHasBeenSet() const;

                private:

                    /**
                     * ECM 地域
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * 标识 EIP 的唯一 ID。EIP 唯一 ID 形如：eip-11112222。
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * 修改后的 EIP 名称。长度上限为20个字符。
                     */
                    std::string m_addressName;
                    bool m_addressNameHasBeenSet;

                    /**
                     * 设定EIP是否直通，"TRUE"表示直通，"FALSE"表示非直通。注意该参数仅对EIP直通功能可见的用户可以设定。
                     */
                    std::string m_eipDirectConnection;
                    bool m_eipDirectConnectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYADDRESSATTRIBUTEREQUEST_H_
