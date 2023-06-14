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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEBOUNDIPREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEBOUNDIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/BoundIpInfo.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateBoundIP请求参数结构体
                */
                class CreateBoundIPRequest : public AbstractModel
                {
                public:
                    CreateBoundIPRequest();
                    ~CreateBoundIPRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgp表示独享包；bgp-multip表示共享包）
                     * @return Business 大禹子产品代号（bgp表示独享包；bgp-multip表示共享包）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgp表示独享包；bgp-multip表示共享包）
                     * @param _business 大禹子产品代号（bgp表示独享包；bgp-multip表示共享包）
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
                     * 获取资源实例ID
                     * @return Id 资源实例ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源实例ID
                     * @param _id 资源实例ID
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
                     * 获取绑定到资源实例的IP数组，当资源实例为高防包(独享包)时，数组只允许填1个IP；当没有要绑定的IP时可以为空数组；但是BoundDevList和UnBoundDevList至少有一个不为空；
                     * @return BoundDevList 绑定到资源实例的IP数组，当资源实例为高防包(独享包)时，数组只允许填1个IP；当没有要绑定的IP时可以为空数组；但是BoundDevList和UnBoundDevList至少有一个不为空；
                     * 
                     */
                    std::vector<BoundIpInfo> GetBoundDevList() const;

                    /**
                     * 设置绑定到资源实例的IP数组，当资源实例为高防包(独享包)时，数组只允许填1个IP；当没有要绑定的IP时可以为空数组；但是BoundDevList和UnBoundDevList至少有一个不为空；
                     * @param _boundDevList 绑定到资源实例的IP数组，当资源实例为高防包(独享包)时，数组只允许填1个IP；当没有要绑定的IP时可以为空数组；但是BoundDevList和UnBoundDevList至少有一个不为空；
                     * 
                     */
                    void SetBoundDevList(const std::vector<BoundIpInfo>& _boundDevList);

                    /**
                     * 判断参数 BoundDevList 是否已赋值
                     * @return BoundDevList 是否已赋值
                     * 
                     */
                    bool BoundDevListHasBeenSet() const;

                    /**
                     * 获取与资源实例解绑的IP数组，当资源实例为高防包(独享包)时，数组只允许填1个IP；当没有要解绑的IP时可以为空数组；但是BoundDevList和UnBoundDevList至少有一个不为空；
                     * @return UnBoundDevList 与资源实例解绑的IP数组，当资源实例为高防包(独享包)时，数组只允许填1个IP；当没有要解绑的IP时可以为空数组；但是BoundDevList和UnBoundDevList至少有一个不为空；
                     * 
                     */
                    std::vector<BoundIpInfo> GetUnBoundDevList() const;

                    /**
                     * 设置与资源实例解绑的IP数组，当资源实例为高防包(独享包)时，数组只允许填1个IP；当没有要解绑的IP时可以为空数组；但是BoundDevList和UnBoundDevList至少有一个不为空；
                     * @param _unBoundDevList 与资源实例解绑的IP数组，当资源实例为高防包(独享包)时，数组只允许填1个IP；当没有要解绑的IP时可以为空数组；但是BoundDevList和UnBoundDevList至少有一个不为空；
                     * 
                     */
                    void SetUnBoundDevList(const std::vector<BoundIpInfo>& _unBoundDevList);

                    /**
                     * 判断参数 UnBoundDevList 是否已赋值
                     * @return UnBoundDevList 是否已赋值
                     * 
                     */
                    bool UnBoundDevListHasBeenSet() const;

                    /**
                     * 获取已弃用，不填
                     * @return CopyPolicy 已弃用，不填
                     * 
                     */
                    std::string GetCopyPolicy() const;

                    /**
                     * 设置已弃用，不填
                     * @param _copyPolicy 已弃用，不填
                     * 
                     */
                    void SetCopyPolicy(const std::string& _copyPolicy);

                    /**
                     * 判断参数 CopyPolicy 是否已赋值
                     * @return CopyPolicy 是否已赋值
                     * 
                     */
                    bool CopyPolicyHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgp表示独享包；bgp-multip表示共享包）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源实例ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 绑定到资源实例的IP数组，当资源实例为高防包(独享包)时，数组只允许填1个IP；当没有要绑定的IP时可以为空数组；但是BoundDevList和UnBoundDevList至少有一个不为空；
                     */
                    std::vector<BoundIpInfo> m_boundDevList;
                    bool m_boundDevListHasBeenSet;

                    /**
                     * 与资源实例解绑的IP数组，当资源实例为高防包(独享包)时，数组只允许填1个IP；当没有要解绑的IP时可以为空数组；但是BoundDevList和UnBoundDevList至少有一个不为空；
                     */
                    std::vector<BoundIpInfo> m_unBoundDevList;
                    bool m_unBoundDevListHasBeenSet;

                    /**
                     * 已弃用，不填
                     */
                    std::string m_copyPolicy;
                    bool m_copyPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEBOUNDIPREQUEST_H_
