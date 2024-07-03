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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_ZONECAPACITYCONF_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_ZONECAPACITYCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/ProductConf.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 可用区内产品信息
                */
                class ZoneCapacityConf : public AbstractModel
                {
                public:
                    ZoneCapacityConf();
                    ~ZoneCapacityConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区ID：如ap-guangzhou-3
                     * @return ZoneId 可用区ID：如ap-guangzhou-3
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置可用区ID：如ap-guangzhou-3
                     * @param _zoneId 可用区ID：如ap-guangzhou-3
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取可用区名称。
                     * @return ZoneName 可用区名称。
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置可用区名称。
                     * @param _zoneName 可用区名称。
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取可用区是否售罄。
                     * @return IsSaleout 可用区是否售罄。
                     * 
                     */
                    bool GetIsSaleout() const;

                    /**
                     * 设置可用区是否售罄。
                     * @param _isSaleout 可用区是否售罄。
                     * 
                     */
                    void SetIsSaleout(const bool& _isSaleout);

                    /**
                     * 判断参数 IsSaleout 是否已赋值
                     * @return IsSaleout 是否已赋值
                     * 
                     */
                    bool IsSaleoutHasBeenSet() const;

                    /**
                     * 获取是否为默认可用区。
                     * @return IsDefault 是否为默认可用区。
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否为默认可用区。
                     * @param _isDefault 是否为默认可用区。
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取网络类型。
- basenet：基础网络。
- vpcnet -- VPC网络。
                     * @return NetWorkType 网络类型。
- basenet：基础网络。
- vpcnet -- VPC网络。
                     * 
                     */
                    std::vector<std::string> GetNetWorkType() const;

                    /**
                     * 设置网络类型。
- basenet：基础网络。
- vpcnet -- VPC网络。
                     * @param _netWorkType 网络类型。
- basenet：基础网络。
- vpcnet -- VPC网络。
                     * 
                     */
                    void SetNetWorkType(const std::vector<std::string>& _netWorkType);

                    /**
                     * 判断参数 NetWorkType 是否已赋值
                     * @return NetWorkType 是否已赋值
                     * 
                     */
                    bool NetWorkTypeHasBeenSet() const;

                    /**
                     * 获取可用区内产品规格等信息
                     * @return ProductSet 可用区内产品规格等信息
                     * 
                     */
                    std::vector<ProductConf> GetProductSet() const;

                    /**
                     * 设置可用区内产品规格等信息
                     * @param _productSet 可用区内产品规格等信息
                     * 
                     */
                    void SetProductSet(const std::vector<ProductConf>& _productSet);

                    /**
                     * 判断参数 ProductSet 是否已赋值
                     * @return ProductSet 是否已赋值
                     * 
                     */
                    bool ProductSetHasBeenSet() const;

                    /**
                     * 获取可用区ID：如100003
                     * @return OldZoneId 可用区ID：如100003
                     * 
                     */
                    int64_t GetOldZoneId() const;

                    /**
                     * 设置可用区ID：如100003
                     * @param _oldZoneId 可用区ID：如100003
                     * 
                     */
                    void SetOldZoneId(const int64_t& _oldZoneId);

                    /**
                     * 判断参数 OldZoneId 是否已赋值
                     * @return OldZoneId 是否已赋值
                     * 
                     */
                    bool OldZoneIdHasBeenSet() const;

                private:

                    /**
                     * 可用区ID：如ap-guangzhou-3
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 可用区名称。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 可用区是否售罄。
                     */
                    bool m_isSaleout;
                    bool m_isSaleoutHasBeenSet;

                    /**
                     * 是否为默认可用区。
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 网络类型。
- basenet：基础网络。
- vpcnet -- VPC网络。
                     */
                    std::vector<std::string> m_netWorkType;
                    bool m_netWorkTypeHasBeenSet;

                    /**
                     * 可用区内产品规格等信息
                     */
                    std::vector<ProductConf> m_productSet;
                    bool m_productSetHasBeenSet;

                    /**
                     * 可用区ID：如100003
                     */
                    int64_t m_oldZoneId;
                    bool m_oldZoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_ZONECAPACITYCONF_H_
