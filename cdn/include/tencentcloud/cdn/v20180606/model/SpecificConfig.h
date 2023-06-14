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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SPECIFICCONFIG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SPECIFICCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/MainlandConfig.h>
#include <tencentcloud/cdn/v20180606/model/OverseaConfig.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 域名国内海外分地区特殊配置。
                */
                class SpecificConfig : public AbstractModel
                {
                public:
                    SpecificConfig();
                    ~SpecificConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取国内特殊配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mainland 国内特殊配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MainlandConfig GetMainland() const;

                    /**
                     * 设置国内特殊配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mainland 国内特殊配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMainland(const MainlandConfig& _mainland);

                    /**
                     * 判断参数 Mainland 是否已赋值
                     * @return Mainland 是否已赋值
                     * 
                     */
                    bool MainlandHasBeenSet() const;

                    /**
                     * 获取海外特殊配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Overseas 海外特殊配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OverseaConfig GetOverseas() const;

                    /**
                     * 设置海外特殊配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _overseas 海外特殊配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOverseas(const OverseaConfig& _overseas);

                    /**
                     * 判断参数 Overseas 是否已赋值
                     * @return Overseas 是否已赋值
                     * 
                     */
                    bool OverseasHasBeenSet() const;

                private:

                    /**
                     * 国内特殊配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MainlandConfig m_mainland;
                    bool m_mainlandHasBeenSet;

                    /**
                     * 海外特殊配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OverseaConfig m_overseas;
                    bool m_overseasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SPECIFICCONFIG_H_
