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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_EIPADDRESSRELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_EIPADDRESSRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 高防弹性公网IP关联信息
                */
                class EipAddressRelation : public AbstractModel
                {
                public:
                    EipAddressRelation();
                    ~EipAddressRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取高防弹性公网IP绑定的实例地区，例如hk代表中国香港
                     * @return EipAddressRegion 高防弹性公网IP绑定的实例地区，例如hk代表中国香港
                     * 
                     */
                    std::string GetEipAddressRegion() const;

                    /**
                     * 设置高防弹性公网IP绑定的实例地区，例如hk代表中国香港
                     * @param _eipAddressRegion 高防弹性公网IP绑定的实例地区，例如hk代表中国香港
                     * 
                     */
                    void SetEipAddressRegion(const std::string& _eipAddressRegion);

                    /**
                     * 判断参数 EipAddressRegion 是否已赋值
                     * @return EipAddressRegion 是否已赋值
                     * 
                     */
                    bool EipAddressRegionHasBeenSet() const;

                    /**
                     * 获取绑定的资源实例ID。可能是一个CVM。
                     * @return EipBoundRscIns 绑定的资源实例ID。可能是一个CVM。
                     * 
                     */
                    std::string GetEipBoundRscIns() const;

                    /**
                     * 设置绑定的资源实例ID。可能是一个CVM。
                     * @param _eipBoundRscIns 绑定的资源实例ID。可能是一个CVM。
                     * 
                     */
                    void SetEipBoundRscIns(const std::string& _eipBoundRscIns);

                    /**
                     * 判断参数 EipBoundRscIns 是否已赋值
                     * @return EipBoundRscIns 是否已赋值
                     * 
                     */
                    bool EipBoundRscInsHasBeenSet() const;

                    /**
                     * 获取绑定的弹性网卡ID
                     * @return EipBoundRscEni 绑定的弹性网卡ID
                     * 
                     */
                    std::string GetEipBoundRscEni() const;

                    /**
                     * 设置绑定的弹性网卡ID
                     * @param _eipBoundRscEni 绑定的弹性网卡ID
                     * 
                     */
                    void SetEipBoundRscEni(const std::string& _eipBoundRscEni);

                    /**
                     * 判断参数 EipBoundRscEni 是否已赋值
                     * @return EipBoundRscEni 是否已赋值
                     * 
                     */
                    bool EipBoundRscEniHasBeenSet() const;

                    /**
                     * 获取绑定的资源内网ip
                     * @return EipBoundRscVip 绑定的资源内网ip
                     * 
                     */
                    std::string GetEipBoundRscVip() const;

                    /**
                     * 设置绑定的资源内网ip
                     * @param _eipBoundRscVip 绑定的资源内网ip
                     * 
                     */
                    void SetEipBoundRscVip(const std::string& _eipBoundRscVip);

                    /**
                     * 判断参数 EipBoundRscVip 是否已赋值
                     * @return EipBoundRscVip 是否已赋值
                     * 
                     */
                    bool EipBoundRscVipHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 高防弹性公网IP绑定的实例地区，例如hk代表中国香港
                     */
                    std::string m_eipAddressRegion;
                    bool m_eipAddressRegionHasBeenSet;

                    /**
                     * 绑定的资源实例ID。可能是一个CVM。
                     */
                    std::string m_eipBoundRscIns;
                    bool m_eipBoundRscInsHasBeenSet;

                    /**
                     * 绑定的弹性网卡ID
                     */
                    std::string m_eipBoundRscEni;
                    bool m_eipBoundRscEniHasBeenSet;

                    /**
                     * 绑定的资源内网ip
                     */
                    std::string m_eipBoundRscVip;
                    bool m_eipBoundRscVipHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_EIPADDRESSRELATION_H_
