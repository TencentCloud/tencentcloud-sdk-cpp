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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICQOSPOLICYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICQOSPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeTrafficQosPolicy请求参数结构体
                */
                class DescribeTrafficQosPolicyRequest : public AbstractModel
                {
                public:
                    DescribeTrafficQosPolicyRequest();
                    ~DescribeTrafficQosPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CCN实例ID。形如：ccn-f49l6u0z。
                     * @return CcnId CCN实例ID。形如：ccn-f49l6u0z。
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置CCN实例ID。形如：ccn-f49l6u0z。
                     * @param _ccnId CCN实例ID。形如：ccn-f49l6u0z。
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取本端地域。
                     * @return LocalRegion 本端地域。
                     * 
                     */
                    std::string GetLocalRegion() const;

                    /**
                     * 设置本端地域。
                     * @param _localRegion 本端地域。
                     * 
                     */
                    void SetLocalRegion(const std::string& _localRegion);

                    /**
                     * 判断参数 LocalRegion 是否已赋值
                     * @return LocalRegion 是否已赋值
                     * 
                     */
                    bool LocalRegionHasBeenSet() const;

                    /**
                     * 获取远端地域。
                     * @return RemoteRegion 远端地域。
                     * 
                     */
                    std::string GetRemoteRegion() const;

                    /**
                     * 设置远端地域。
                     * @param _remoteRegion 远端地域。
                     * 
                     */
                    void SetRemoteRegion(const std::string& _remoteRegion);

                    /**
                     * 判断参数 RemoteRegion 是否已赋值
                     * @return RemoteRegion 是否已赋值
                     * 
                     */
                    bool RemoteRegionHasBeenSet() const;

                private:

                    /**
                     * CCN实例ID。形如：ccn-f49l6u0z。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 本端地域。
                     */
                    std::string m_localRegion;
                    bool m_localRegionHasBeenSet;

                    /**
                     * 远端地域。
                     */
                    std::string m_remoteRegion;
                    bool m_remoteRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICQOSPOLICYREQUEST_H_
