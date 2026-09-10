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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_FUNCTIONEIPCONFIG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_FUNCTIONEIPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 云函数公网访问固定ip配置
                */
                class FunctionEipConfig : public AbstractModel
                {
                public:
                    FunctionEipConfig();
                    ~FunctionEipConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Eip开启状态，取值['ENABLE','DISABLE']
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EipStatus Eip开启状态，取值['ENABLE','DISABLE']
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEipStatus() const;

                    /**
                     * 设置Eip开启状态，取值['ENABLE','DISABLE']
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eipStatus Eip开启状态，取值['ENABLE','DISABLE']
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEipStatus(const std::string& _eipStatus);

                    /**
                     * 判断参数 EipStatus 是否已赋值
                     * @return EipStatus 是否已赋值
                     * 
                     */
                    bool EipStatusHasBeenSet() const;

                private:

                    /**
                     * Eip开启状态，取值['ENABLE','DISABLE']
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eipStatus;
                    bool m_eipStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_FUNCTIONEIPCONFIG_H_
