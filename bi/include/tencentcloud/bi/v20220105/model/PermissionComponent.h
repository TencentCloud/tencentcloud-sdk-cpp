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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_PERMISSIONCOMPONENT_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_PERMISSIONCOMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 商业版本权限单元
                */
                class PermissionComponent : public AbstractModel
                {
                public:
                    PermissionComponent();
                    ~PermissionComponent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权限值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModuleId 权限值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置权限值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _moduleId 权限值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取可见/可用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncludeType 可见/可用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIncludeType() const;

                    /**
                     * 设置可见/可用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _includeType 可见/可用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIncludeType(const std::string& _includeType);

                    /**
                     * 判断参数 IncludeType 是否已赋值
                     * @return IncludeType 是否已赋值
                     * 
                     */
                    bool IncludeTypeHasBeenSet() const;

                    /**
                     * 获取目标升级版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpgradeVersionType 目标升级版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpgradeVersionType() const;

                    /**
                     * 设置目标升级版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upgradeVersionType 目标升级版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpgradeVersionType(const std::string& _upgradeVersionType);

                    /**
                     * 判断参数 UpgradeVersionType 是否已赋值
                     * @return UpgradeVersionType 是否已赋值
                     * 
                     */
                    bool UpgradeVersionTypeHasBeenSet() const;

                    /**
                     * 获取补充信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tips 补充信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTips() const;

                    /**
                     * 设置补充信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tips 补充信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTips(const std::string& _tips);

                    /**
                     * 判断参数 Tips 是否已赋值
                     * @return Tips 是否已赋值
                     * 
                     */
                    bool TipsHasBeenSet() const;

                    /**
                     * 获取补充信息的key值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TipsKey 补充信息的key值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTipsKey() const;

                    /**
                     * 设置补充信息的key值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tipsKey 补充信息的key值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTipsKey(const std::string& _tipsKey);

                    /**
                     * 判断参数 TipsKey 是否已赋值
                     * @return TipsKey 是否已赋值
                     * 
                     */
                    bool TipsKeyHasBeenSet() const;

                private:

                    /**
                     * 权限值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * 可见/可用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_includeType;
                    bool m_includeTypeHasBeenSet;

                    /**
                     * 目标升级版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_upgradeVersionType;
                    bool m_upgradeVersionTypeHasBeenSet;

                    /**
                     * 补充信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * 补充信息的key值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tipsKey;
                    bool m_tipsKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_PERMISSIONCOMPONENT_H_
