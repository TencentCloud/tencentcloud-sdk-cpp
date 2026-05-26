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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEZONESINFO_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEZONESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 查询售卖接口，zone信息返回类型
                */
                class DescribeSaleZonesInfo : public AbstractModel
                {
                public:
                    DescribeSaleZonesInfo();
                    ~DescribeSaleZonesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Zone英文字符串</p>
                     * @return Zone <p>Zone英文字符串</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Zone英文字符串</p>
                     * @param _zone <p>Zone英文字符串</p>
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
                     * 获取<p>Zone中文字符串</p>
                     * @return ZoneName <p>Zone中文字符串</p>
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置<p>Zone中文字符串</p>
                     * @param _zoneName <p>Zone中文字符串</p>
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
                     * 获取<p>是否售卖，1：售卖；0：不售卖</p>
                     * @return Enable <p>是否售卖，1：售卖；0：不售卖</p>
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置<p>是否售卖，1：售卖；0：不售卖</p>
                     * @param _enable <p>是否售卖，1：售卖；0：不售卖</p>
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>是否是默认主可用区,0不是，1是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDefaultMaster <p>是否是默认主可用区,0不是，1是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsDefaultMaster() const;

                    /**
                     * 设置<p>是否是默认主可用区,0不是，1是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDefaultMaster <p>是否是默认主可用区,0不是，1是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsDefaultMaster(const int64_t& _isDefaultMaster);

                    /**
                     * 判断参数 IsDefaultMaster 是否已赋值
                     * @return IsDefaultMaster 是否已赋值
                     * 
                     */
                    bool IsDefaultMasterHasBeenSet() const;

                    /**
                     * 获取<p>可用区可选磁盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableDiskTypes <p>可用区可选磁盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAvailableDiskTypes() const;

                    /**
                     * 设置<p>可用区可选磁盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availableDiskTypes <p>可用区可选磁盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailableDiskTypes(const std::vector<std::string>& _availableDiskTypes);

                    /**
                     * 判断参数 AvailableDiskTypes 是否已赋值
                     * @return AvailableDiskTypes 是否已赋值
                     * 
                     */
                    bool AvailableDiskTypesHasBeenSet() const;

                    /**
                     * 获取<p>是否是独享可用区</p>
                     * @return SupportTypes <p>是否是独享可用区</p>
                     * 
                     */
                    std::vector<std::string> GetSupportTypes() const;

                    /**
                     * 设置<p>是否是独享可用区</p>
                     * @param _supportTypes <p>是否是独享可用区</p>
                     * 
                     */
                    void SetSupportTypes(const std::vector<std::string>& _supportTypes);

                    /**
                     * 判断参数 SupportTypes 是否已赋值
                     * @return SupportTypes 是否已赋值
                     * 
                     */
                    bool SupportTypesHasBeenSet() const;

                    /**
                     * 获取<p>是否支持serverless</p>
                     * @return IsSupportServerless <p>是否支持serverless</p>
                     * 
                     */
                    bool GetIsSupportServerless() const;

                    /**
                     * 设置<p>是否支持serverless</p>
                     * @param _isSupportServerless <p>是否支持serverless</p>
                     * 
                     */
                    void SetIsSupportServerless(const bool& _isSupportServerless);

                    /**
                     * 判断参数 IsSupportServerless 是否已赋值
                     * @return IsSupportServerless 是否已赋值
                     * 
                     */
                    bool IsSupportServerlessHasBeenSet() const;

                private:

                    /**
                     * <p>Zone英文字符串</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Zone中文字符串</p>
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * <p>是否售卖，1：售卖；0：不售卖</p>
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>是否是默认主可用区,0不是，1是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isDefaultMaster;
                    bool m_isDefaultMasterHasBeenSet;

                    /**
                     * <p>可用区可选磁盘类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_availableDiskTypes;
                    bool m_availableDiskTypesHasBeenSet;

                    /**
                     * <p>是否是独享可用区</p>
                     */
                    std::vector<std::string> m_supportTypes;
                    bool m_supportTypesHasBeenSet;

                    /**
                     * <p>是否支持serverless</p>
                     */
                    bool m_isSupportServerless;
                    bool m_isSupportServerlessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEZONESINFO_H_
