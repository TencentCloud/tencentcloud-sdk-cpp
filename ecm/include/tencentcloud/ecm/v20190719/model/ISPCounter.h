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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ISPCOUNTER_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ISPCOUNTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ZoneInstanceInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 运行商统计信息
                */
                class ISPCounter : public AbstractModel
                {
                public:
                    ISPCounter();
                    ~ISPCounter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运营商名称
                     * @return ProviderName 运营商名称
                     * 
                     */
                    std::string GetProviderName() const;

                    /**
                     * 设置运营商名称
                     * @param _providerName 运营商名称
                     * 
                     */
                    void SetProviderName(const std::string& _providerName);

                    /**
                     * 判断参数 ProviderName 是否已赋值
                     * @return ProviderName 是否已赋值
                     * 
                     */
                    bool ProviderNameHasBeenSet() const;

                    /**
                     * 获取节点数量
                     * @return ProviderNodeNum 节点数量
                     * 
                     */
                    int64_t GetProviderNodeNum() const;

                    /**
                     * 设置节点数量
                     * @param _providerNodeNum 节点数量
                     * 
                     */
                    void SetProviderNodeNum(const int64_t& _providerNodeNum);

                    /**
                     * 判断参数 ProviderNodeNum 是否已赋值
                     * @return ProviderNodeNum 是否已赋值
                     * 
                     */
                    bool ProviderNodeNumHasBeenSet() const;

                    /**
                     * 获取实例数量
                     * @return ProvederInstanceNum 实例数量
                     * @deprecated
                     */
                    int64_t GetProvederInstanceNum() const;

                    /**
                     * 设置实例数量
                     * @param _provederInstanceNum 实例数量
                     * @deprecated
                     */
                    void SetProvederInstanceNum(const int64_t& _provederInstanceNum);

                    /**
                     * 判断参数 ProvederInstanceNum 是否已赋值
                     * @return ProvederInstanceNum 是否已赋值
                     * @deprecated
                     */
                    bool ProvederInstanceNumHasBeenSet() const;

                    /**
                     * 获取Zone实例信息结构体数组
                     * @return ZoneInstanceInfoSet Zone实例信息结构体数组
                     * 
                     */
                    std::vector<ZoneInstanceInfo> GetZoneInstanceInfoSet() const;

                    /**
                     * 设置Zone实例信息结构体数组
                     * @param _zoneInstanceInfoSet Zone实例信息结构体数组
                     * 
                     */
                    void SetZoneInstanceInfoSet(const std::vector<ZoneInstanceInfo>& _zoneInstanceInfoSet);

                    /**
                     * 判断参数 ZoneInstanceInfoSet 是否已赋值
                     * @return ZoneInstanceInfoSet 是否已赋值
                     * 
                     */
                    bool ZoneInstanceInfoSetHasBeenSet() const;

                    /**
                     * 获取实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProviderInstanceNum 实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProviderInstanceNum() const;

                    /**
                     * 设置实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _providerInstanceNum 实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProviderInstanceNum(const int64_t& _providerInstanceNum);

                    /**
                     * 判断参数 ProviderInstanceNum 是否已赋值
                     * @return ProviderInstanceNum 是否已赋值
                     * 
                     */
                    bool ProviderInstanceNumHasBeenSet() const;

                private:

                    /**
                     * 运营商名称
                     */
                    std::string m_providerName;
                    bool m_providerNameHasBeenSet;

                    /**
                     * 节点数量
                     */
                    int64_t m_providerNodeNum;
                    bool m_providerNodeNumHasBeenSet;

                    /**
                     * 实例数量
                     */
                    int64_t m_provederInstanceNum;
                    bool m_provederInstanceNumHasBeenSet;

                    /**
                     * Zone实例信息结构体数组
                     */
                    std::vector<ZoneInstanceInfo> m_zoneInstanceInfoSet;
                    bool m_zoneInstanceInfoSetHasBeenSet;

                    /**
                     * 实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_providerInstanceNum;
                    bool m_providerInstanceNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ISPCOUNTER_H_
