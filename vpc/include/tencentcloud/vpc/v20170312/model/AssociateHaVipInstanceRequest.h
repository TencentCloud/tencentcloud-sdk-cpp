/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATEHAVIPINSTANCEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATEHAVIPINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/HaVipAssociation.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AssociateHaVipInstance请求参数结构体
                */
                class AssociateHaVipInstanceRequest : public AbstractModel
                {
                public:
                    AssociateHaVipInstanceRequest();
                    ~AssociateHaVipInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取HaVip绑定的子机或网卡。最多支持10个实例。
                     * @return HaVipAssociationSet HaVip绑定的子机或网卡。最多支持10个实例。
                     * 
                     */
                    std::vector<HaVipAssociation> GetHaVipAssociationSet() const;

                    /**
                     * 设置HaVip绑定的子机或网卡。最多支持10个实例。
                     * @param _haVipAssociationSet HaVip绑定的子机或网卡。最多支持10个实例。
                     * 
                     */
                    void SetHaVipAssociationSet(const std::vector<HaVipAssociation>& _haVipAssociationSet);

                    /**
                     * 判断参数 HaVipAssociationSet 是否已赋值
                     * @return HaVipAssociationSet 是否已赋值
                     * 
                     */
                    bool HaVipAssociationSetHasBeenSet() const;

                private:

                    /**
                     * HaVip绑定的子机或网卡。最多支持10个实例。
                     */
                    std::vector<HaVipAssociation> m_haVipAssociationSet;
                    bool m_haVipAssociationSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATEHAVIPINSTANCEREQUEST_H_
