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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_SMARTDNSCONFIG_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_SMARTDNSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * 智能DNS配置
                */
                class SmartDNSConfig : public AbstractModel
                {
                public:
                    SmartDNSConfig();
                    ~SmartDNSConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开启DNS代理
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IstioMetaDNSCapture 开启DNS代理
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIstioMetaDNSCapture() const;

                    /**
                     * 设置开启DNS代理
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _istioMetaDNSCapture 开启DNS代理
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIstioMetaDNSCapture(const bool& _istioMetaDNSCapture);

                    /**
                     * 判断参数 IstioMetaDNSCapture 是否已赋值
                     * @return IstioMetaDNSCapture 是否已赋值
                     * 
                     */
                    bool IstioMetaDNSCaptureHasBeenSet() const;

                    /**
                     * 获取开启自动地址分配
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IstioMetaDNSAutoAllocate 开启自动地址分配
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIstioMetaDNSAutoAllocate() const;

                    /**
                     * 设置开启自动地址分配
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _istioMetaDNSAutoAllocate 开启自动地址分配
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIstioMetaDNSAutoAllocate(const bool& _istioMetaDNSAutoAllocate);

                    /**
                     * 判断参数 IstioMetaDNSAutoAllocate 是否已赋值
                     * @return IstioMetaDNSAutoAllocate 是否已赋值
                     * 
                     */
                    bool IstioMetaDNSAutoAllocateHasBeenSet() const;

                private:

                    /**
                     * 开启DNS代理
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_istioMetaDNSCapture;
                    bool m_istioMetaDNSCaptureHasBeenSet;

                    /**
                     * 开启自动地址分配
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_istioMetaDNSAutoAllocate;
                    bool m_istioMetaDNSAutoAllocateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_SMARTDNSCONFIG_H_
