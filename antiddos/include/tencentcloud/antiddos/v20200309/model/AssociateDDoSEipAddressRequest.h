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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ASSOCIATEDDOSEIPADDRESSREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ASSOCIATEDDOSEIPADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * AssociateDDoSEipAddress请求参数结构体
                */
                class AssociateDDoSEipAddressRequest : public AbstractModel
                {
                public:
                    AssociateDDoSEipAddressRequest();
                    ~AssociateDDoSEipAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源实例ID，实例ID形如：bgpip-0000011x。只能填写高防IP实例。
                     * @return InstanceId 资源实例ID，实例ID形如：bgpip-0000011x。只能填写高防IP实例。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资源实例ID，实例ID形如：bgpip-0000011x。只能填写高防IP实例。
                     * @param _instanceId 资源实例ID，实例ID形如：bgpip-0000011x。只能填写高防IP实例。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取资源实例ID对应的高防弹性公网IP。
                     * @return Eip 资源实例ID对应的高防弹性公网IP。
                     * 
                     */
                    std::string GetEip() const;

                    /**
                     * 设置资源实例ID对应的高防弹性公网IP。
                     * @param _eip 资源实例ID对应的高防弹性公网IP。
                     * 
                     */
                    void SetEip(const std::string& _eip);

                    /**
                     * 判断参数 Eip 是否已赋值
                     * @return Eip 是否已赋值
                     * 
                     */
                    bool EipHasBeenSet() const;

                    /**
                     * 获取要绑定的实例 ID。实例 ID 形如：ins-11112222。可通过登录控制台查询，也可通过 DescribeInstances 接口返回值中的InstanceId获取。
                     * @return CvmInstanceID 要绑定的实例 ID。实例 ID 形如：ins-11112222。可通过登录控制台查询，也可通过 DescribeInstances 接口返回值中的InstanceId获取。
                     * 
                     */
                    std::string GetCvmInstanceID() const;

                    /**
                     * 设置要绑定的实例 ID。实例 ID 形如：ins-11112222。可通过登录控制台查询，也可通过 DescribeInstances 接口返回值中的InstanceId获取。
                     * @param _cvmInstanceID 要绑定的实例 ID。实例 ID 形如：ins-11112222。可通过登录控制台查询，也可通过 DescribeInstances 接口返回值中的InstanceId获取。
                     * 
                     */
                    void SetCvmInstanceID(const std::string& _cvmInstanceID);

                    /**
                     * 判断参数 CvmInstanceID 是否已赋值
                     * @return CvmInstanceID 是否已赋值
                     * 
                     */
                    bool CvmInstanceIDHasBeenSet() const;

                    /**
                     * 获取cvm实例所在地域，例如：ap-hongkong。
                     * @return CvmRegion cvm实例所在地域，例如：ap-hongkong。
                     * 
                     */
                    std::string GetCvmRegion() const;

                    /**
                     * 设置cvm实例所在地域，例如：ap-hongkong。
                     * @param _cvmRegion cvm实例所在地域，例如：ap-hongkong。
                     * 
                     */
                    void SetCvmRegion(const std::string& _cvmRegion);

                    /**
                     * 判断参数 CvmRegion 是否已赋值
                     * @return CvmRegion 是否已赋值
                     * 
                     */
                    bool CvmRegionHasBeenSet() const;

                private:

                    /**
                     * 资源实例ID，实例ID形如：bgpip-0000011x。只能填写高防IP实例。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 资源实例ID对应的高防弹性公网IP。
                     */
                    std::string m_eip;
                    bool m_eipHasBeenSet;

                    /**
                     * 要绑定的实例 ID。实例 ID 形如：ins-11112222。可通过登录控制台查询，也可通过 DescribeInstances 接口返回值中的InstanceId获取。
                     */
                    std::string m_cvmInstanceID;
                    bool m_cvmInstanceIDHasBeenSet;

                    /**
                     * cvm实例所在地域，例如：ap-hongkong。
                     */
                    std::string m_cvmRegion;
                    bool m_cvmRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ASSOCIATEDDOSEIPADDRESSREQUEST_H_
