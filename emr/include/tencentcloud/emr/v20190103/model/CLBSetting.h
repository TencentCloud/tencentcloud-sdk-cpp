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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CLBSETTING_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CLBSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/VPCSettings.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 容器集群Pod服务CLB设置
                */
                class CLBSetting : public AbstractModel
                {
                public:
                    CLBSetting();
                    ~CLBSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CLB类型，PUBLIC_IP表示支持公网CLB和INTERNAL_IP表示支持内网CLB字段 
                     * @return CLBType CLB类型，PUBLIC_IP表示支持公网CLB和INTERNAL_IP表示支持内网CLB字段 
                     * 
                     */
                    std::string GetCLBType() const;

                    /**
                     * 设置CLB类型，PUBLIC_IP表示支持公网CLB和INTERNAL_IP表示支持内网CLB字段 
                     * @param _cLBType CLB类型，PUBLIC_IP表示支持公网CLB和INTERNAL_IP表示支持内网CLB字段 
                     * 
                     */
                    void SetCLBType(const std::string& _cLBType);

                    /**
                     * 判断参数 CLBType 是否已赋值
                     * @return CLBType 是否已赋值
                     * 
                     */
                    bool CLBTypeHasBeenSet() const;

                    /**
                     * 获取Vpc和子网信息设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VPCSettings Vpc和子网信息设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VPCSettings GetVPCSettings() const;

                    /**
                     * 设置Vpc和子网信息设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vPCSettings Vpc和子网信息设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVPCSettings(const VPCSettings& _vPCSettings);

                    /**
                     * 判断参数 VPCSettings 是否已赋值
                     * @return VPCSettings 是否已赋值
                     * 
                     */
                    bool VPCSettingsHasBeenSet() const;

                private:

                    /**
                     * CLB类型，PUBLIC_IP表示支持公网CLB和INTERNAL_IP表示支持内网CLB字段 
                     */
                    std::string m_cLBType;
                    bool m_cLBTypeHasBeenSet;

                    /**
                     * Vpc和子网信息设置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VPCSettings m_vPCSettings;
                    bool m_vPCSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CLBSETTING_H_
