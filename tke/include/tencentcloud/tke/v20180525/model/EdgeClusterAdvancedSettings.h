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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTERADVANCEDSETTINGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTERADVANCEDSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/EdgeClusterExtraArgs.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 边缘容器集群高级配置
                */
                class EdgeClusterAdvancedSettings : public AbstractModel
                {
                public:
                    EdgeClusterAdvancedSettings();
                    ~EdgeClusterAdvancedSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraArgs 集群自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EdgeClusterExtraArgs GetExtraArgs() const;

                    /**
                     * 设置集群自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExtraArgs 集群自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExtraArgs(const EdgeClusterExtraArgs& _extraArgs);

                    /**
                     * 判断参数 ExtraArgs 是否已赋值
                     * @return ExtraArgs 是否已赋值
                     */
                    bool ExtraArgsHasBeenSet() const;

                private:

                    /**
                     * 集群自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EdgeClusterExtraArgs m_extraArgs;
                    bool m_extraArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTERADVANCEDSETTINGS_H_
