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
                     * 获取<p>权限值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModuleId <p>权限值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置<p>权限值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _moduleId <p>权限值</p>
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
                     * 获取<p>可用性</p><p>枚举值：</p><ul><li>usable： 可用</li><li>visible： 可见</li><li>disabled： 不可用</li><li>hidden： 隐藏</li></ul><p>默认值：disabled</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncludeType <p>可用性</p><p>枚举值：</p><ul><li>usable： 可用</li><li>visible： 可见</li><li>disabled： 不可用</li><li>hidden： 隐藏</li></ul><p>默认值：disabled</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIncludeType() const;

                    /**
                     * 设置<p>可用性</p><p>枚举值：</p><ul><li>usable： 可用</li><li>visible： 可见</li><li>disabled： 不可用</li><li>hidden： 隐藏</li></ul><p>默认值：disabled</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _includeType <p>可用性</p><p>枚举值：</p><ul><li>usable： 可用</li><li>visible： 可见</li><li>disabled： 不可用</li><li>hidden： 隐藏</li></ul><p>默认值：disabled</p>
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
                     * 获取<p>目标升级版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpgradeVersionType <p>目标升级版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpgradeVersionType() const;

                    /**
                     * 设置<p>目标升级版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upgradeVersionType <p>目标升级版本</p>
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
                     * 获取<p>补充信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tips <p>补充信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTips() const;

                    /**
                     * 设置<p>补充信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tips <p>补充信息</p>
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
                     * 获取<p>补充信息的key值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TipsKey <p>补充信息的key值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTipsKey() const;

                    /**
                     * 设置<p>补充信息的key值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tipsKey <p>补充信息的key值</p>
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
                     * <p>权限值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * <p>可用性</p><p>枚举值：</p><ul><li>usable： 可用</li><li>visible： 可见</li><li>disabled： 不可用</li><li>hidden： 隐藏</li></ul><p>默认值：disabled</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_includeType;
                    bool m_includeTypeHasBeenSet;

                    /**
                     * <p>目标升级版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_upgradeVersionType;
                    bool m_upgradeVersionTypeHasBeenSet;

                    /**
                     * <p>补充信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * <p>补充信息的key值</p>
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
