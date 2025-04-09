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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_HAVIPASSOCIATION_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_HAVIPASSOCIATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * HaVip绑定的子机/网卡（用于限制HaVip飘移的范围，并不是真正的飘移动作）。
                */
                class HaVipAssociation : public AbstractModel
                {
                public:
                    HaVipAssociation();
                    ~HaVipAssociation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HaVip绑定的子机或网卡唯一ID。
                     * @return InstanceId HaVip绑定的子机或网卡唯一ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置HaVip绑定的子机或网卡唯一ID。
                     * @param _instanceId HaVip绑定的子机或网卡唯一ID。
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
                     * 获取HaVip实例唯一ID。
                     * @return HaVipId HaVip实例唯一ID。
                     * 
                     */
                    std::string GetHaVipId() const;

                    /**
                     * 设置HaVip实例唯一ID。
                     * @param _haVipId HaVip实例唯一ID。
                     * 
                     */
                    void SetHaVipId(const std::string& _haVipId);

                    /**
                     * 判断参数 HaVipId 是否已赋值
                     * @return HaVipId 是否已赋值
                     * 
                     */
                    bool HaVipIdHasBeenSet() const;

                    /**
                     * 获取HaVip绑定的类型。取值:CVM, ENI。
                     * @return InstanceType HaVip绑定的类型。取值:CVM, ENI。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置HaVip绑定的类型。取值:CVM, ENI。
                     * @param _instanceType HaVip绑定的类型。取值:CVM, ENI。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                private:

                    /**
                     * HaVip绑定的子机或网卡唯一ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * HaVip实例唯一ID。
                     */
                    std::string m_haVipId;
                    bool m_haVipIdHasBeenSet;

                    /**
                     * HaVip绑定的类型。取值:CVM, ENI。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_HAVIPASSOCIATION_H_
