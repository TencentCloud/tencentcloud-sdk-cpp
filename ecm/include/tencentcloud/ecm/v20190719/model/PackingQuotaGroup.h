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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_PACKINGQUOTAGROUP_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_PACKINGQUOTAGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/PackingQuotaInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 一组相互关联的装箱配额，以实例类型的优先级排序，优先级高的在前
                */
                class PackingQuotaGroup : public AbstractModel
                {
                public:
                    PackingQuotaGroup();
                    ~PackingQuotaGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取可用区id
                     * @return ZoneId 可用区id
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区id
                     * @param _zoneId 可用区id
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取ISP id
                     * @return ISPId ISP id
                     * 
                     */
                    std::string GetISPId() const;

                    /**
                     * 设置ISP id
                     * @param _iSPId ISP id
                     * 
                     */
                    void SetISPId(const std::string& _iSPId);

                    /**
                     * 判断参数 ISPId 是否已赋值
                     * @return ISPId 是否已赋值
                     * 
                     */
                    bool ISPIdHasBeenSet() const;

                    /**
                     * 获取一组相互关联的装箱配额
                     * @return PackingQuotaInfos 一组相互关联的装箱配额
                     * 
                     */
                    std::vector<PackingQuotaInfo> GetPackingQuotaInfos() const;

                    /**
                     * 设置一组相互关联的装箱配额
                     * @param _packingQuotaInfos 一组相互关联的装箱配额
                     * 
                     */
                    void SetPackingQuotaInfos(const std::vector<PackingQuotaInfo>& _packingQuotaInfos);

                    /**
                     * 判断参数 PackingQuotaInfos 是否已赋值
                     * @return PackingQuotaInfos 是否已赋值
                     * 
                     */
                    bool PackingQuotaInfosHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 可用区id
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * ISP id
                     */
                    std::string m_iSPId;
                    bool m_iSPIdHasBeenSet;

                    /**
                     * 一组相互关联的装箱配额
                     */
                    std::vector<PackingQuotaInfo> m_packingQuotaInfos;
                    bool m_packingQuotaInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_PACKINGQUOTAGROUP_H_
