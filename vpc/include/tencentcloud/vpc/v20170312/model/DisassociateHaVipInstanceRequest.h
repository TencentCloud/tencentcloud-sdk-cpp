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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEHAVIPINSTANCEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEHAVIPINSTANCEREQUEST_H_

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
                * DisassociateHaVipInstance请求参数结构体
                */
                class DisassociateHaVipInstanceRequest : public AbstractModel
                {
                public:
                    DisassociateHaVipInstanceRequest();
                    ~DisassociateHaVipInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取HaVip解绑的子机或网卡。最多支持10个实例。
                     * @return HaVipAssociationSet HaVip解绑的子机或网卡。最多支持10个实例。
                     * 
                     */
                    std::vector<HaVipAssociation> GetHaVipAssociationSet() const;

                    /**
                     * 设置HaVip解绑的子机或网卡。最多支持10个实例。
                     * @param _haVipAssociationSet HaVip解绑的子机或网卡。最多支持10个实例。
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
                     * HaVip解绑的子机或网卡。最多支持10个实例。
                     */
                    std::vector<HaVipAssociation> m_haVipAssociationSet;
                    bool m_haVipAssociationSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEHAVIPINSTANCEREQUEST_H_
