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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BLACKWHITEIPRELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BLACKWHITEIPRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceRelation.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 黑白名单IP
                */
                class BlackWhiteIpRelation : public AbstractModel
                {
                public:
                    BlackWhiteIpRelation();
                    ~BlackWhiteIpRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP地址
                     * @return Ip IP地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP地址
                     * @param _ip IP地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取IP类型，取值[black(黑IP)，white(白IP)]
                     * @return Type IP类型，取值[black(黑IP)，white(白IP)]
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置IP类型，取值[black(黑IP)，white(白IP)]
                     * @param _type IP类型，取值[black(黑IP)，white(白IP)]
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取黑白IP所属的实例
                     * @return InstanceDetailList 黑白IP所属的实例
                     * 
                     */
                    std::vector<InstanceRelation> GetInstanceDetailList() const;

                    /**
                     * 设置黑白IP所属的实例
                     * @param _instanceDetailList 黑白IP所属的实例
                     * 
                     */
                    void SetInstanceDetailList(const std::vector<InstanceRelation>& _instanceDetailList);

                    /**
                     * 判断参数 InstanceDetailList 是否已赋值
                     * @return InstanceDetailList 是否已赋值
                     * 
                     */
                    bool InstanceDetailListHasBeenSet() const;

                    /**
                     * 获取ip掩码，0表示32位完整ip
                     * @return Mask ip掩码，0表示32位完整ip
                     * 
                     */
                    uint64_t GetMask() const;

                    /**
                     * 设置ip掩码，0表示32位完整ip
                     * @param _mask ip掩码，0表示32位完整ip
                     * 
                     */
                    void SetMask(const uint64_t& _mask);

                    /**
                     * 判断参数 Mask 是否已赋值
                     * @return Mask 是否已赋值
                     * 
                     */
                    bool MaskHasBeenSet() const;

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
                     * IP地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * IP类型，取值[black(黑IP)，white(白IP)]
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 黑白IP所属的实例
                     */
                    std::vector<InstanceRelation> m_instanceDetailList;
                    bool m_instanceDetailListHasBeenSet;

                    /**
                     * ip掩码，0表示32位完整ip
                     */
                    uint64_t m_mask;
                    bool m_maskHasBeenSet;

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

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BLACKWHITEIPRELATION_H_
