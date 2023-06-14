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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_RUNAUTOMATIONSERVICEENABLED_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_RUNAUTOMATIONSERVICEENABLED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 描述了 “自动化助手” 服务相关的信息
                */
                class RunAutomationServiceEnabled : public AbstractModel
                {
                public:
                    RunAutomationServiceEnabled();
                    ~RunAutomationServiceEnabled() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启[自动化助手](https://cloud.tencent.com/document/product/1340)服务。取值范围：<br><li>TRUE：表示开启自动化助手服务<br><li>FALSE：表示不开启自动化助手服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enabled 是否开启[自动化助手](https://cloud.tencent.com/document/product/1340)服务。取值范围：<br><li>TRUE：表示开启自动化助手服务<br><li>FALSE：表示不开启自动化助手服务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启[自动化助手](https://cloud.tencent.com/document/product/1340)服务。取值范围：<br><li>TRUE：表示开启自动化助手服务<br><li>FALSE：表示不开启自动化助手服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enabled 是否开启[自动化助手](https://cloud.tencent.com/document/product/1340)服务。取值范围：<br><li>TRUE：表示开启自动化助手服务<br><li>FALSE：表示不开启自动化助手服务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 是否开启[自动化助手](https://cloud.tencent.com/document/product/1340)服务。取值范围：<br><li>TRUE：表示开启自动化助手服务<br><li>FALSE：表示不开启自动化助手服务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_RUNAUTOMATIONSERVICEENABLED_H_
