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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEM_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 基线项
                */
                class BaselineItem : public AbstractModel
                {
                public:
                    BaselineItem();
                    ~BaselineItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项Id
                     * @return ItemId 项Id
                     */
                    int64_t GetItemId() const;

                    /**
                     * 设置项Id
                     * @param ItemId 项Id
                     */
                    void SetItemId(const int64_t& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取项名称
                     * @return ItemName 项名称
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置项名称
                     * @param ItemName 项名称
                     */
                    void SetItemName(const std::string& _itemName);

                    /**
                     * 判断参数 ItemName 是否已赋值
                     * @return ItemName 是否已赋值
                     */
                    bool ItemNameHasBeenSet() const;

                    /**
                     * 获取检测项分类
                     * @return CategoryId 检测项分类
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置检测项分类
                     * @param CategoryId 检测项分类
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取项描述
                     * @return ItemDesc 项描述
                     */
                    std::string GetItemDesc() const;

                    /**
                     * 设置项描述
                     * @param ItemDesc 项描述
                     */
                    void SetItemDesc(const std::string& _itemDesc);

                    /**
                     * 判断参数 ItemDesc 是否已赋值
                     * @return ItemDesc 是否已赋值
                     */
                    bool ItemDescHasBeenSet() const;

                    /**
                     * 获取修复方法
                     * @return FixMethod 修复方法
                     */
                    std::string GetFixMethod() const;

                    /**
                     * 设置修复方法
                     * @param FixMethod 修复方法
                     */
                    void SetFixMethod(const std::string& _fixMethod);

                    /**
                     * 判断参数 FixMethod 是否已赋值
                     * @return FixMethod 是否已赋值
                     */
                    bool FixMethodHasBeenSet() const;

                    /**
                     * 获取所属规则
                     * @return RuleName 所属规则
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置所属规则
                     * @param RuleName 所属规则
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取检测结果描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetectResultDesc 检测结果描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDetectResultDesc() const;

                    /**
                     * 设置检测结果描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DetectResultDesc 检测结果描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDetectResultDesc(const std::string& _detectResultDesc);

                    /**
                     * 判断参数 DetectResultDesc 是否已赋值
                     * @return DetectResultDesc 是否已赋值
                     */
                    bool DetectResultDescHasBeenSet() const;

                    /**
                     * 获取危险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 危险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置危险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Level 危险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取检测状态：0 未通过，1：忽略，3：通过，5：检测中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetectStatus 检测状态：0 未通过，1：忽略，3：通过，5：检测中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDetectStatus() const;

                    /**
                     * 设置检测状态：0 未通过，1：忽略，3：通过，5：检测中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DetectStatus 检测状态：0 未通过，1：忽略，3：通过，5：检测中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDetectStatus(const int64_t& _detectStatus);

                    /**
                     * 判断参数 DetectStatus 是否已赋值
                     * @return DetectStatus 是否已赋值
                     */
                    bool DetectStatusHasBeenSet() const;

                    /**
                     * 获取主机ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostId 主机ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置主机ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HostId 主机ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostName 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HostName 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostIp 主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HostIp 主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WanIp 外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WanIp 外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取第一次出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstTime 第一次出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置第一次出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FirstTime 第一次出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取最近出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastTime 最近出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置最近出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastTime 最近出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取是否可以修复
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanBeFixed 是否可以修复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCanBeFixed() const;

                    /**
                     * 设置是否可以修复
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CanBeFixed 是否可以修复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCanBeFixed(const int64_t& _canBeFixed);

                    /**
                     * 判断参数 CanBeFixed 是否已赋值
                     * @return CanBeFixed 是否已赋值
                     */
                    bool CanBeFixedHasBeenSet() const;

                    /**
                     * 获取主机安全uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uuid 主机安全uuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机安全uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Uuid 主机安全uuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                private:

                    /**
                     * 项Id
                     */
                    int64_t m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 项名称
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * 检测项分类
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 项描述
                     */
                    std::string m_itemDesc;
                    bool m_itemDescHasBeenSet;

                    /**
                     * 修复方法
                     */
                    std::string m_fixMethod;
                    bool m_fixMethodHasBeenSet;

                    /**
                     * 所属规则
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 检测结果描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_detectResultDesc;
                    bool m_detectResultDescHasBeenSet;

                    /**
                     * 危险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 检测状态：0 未通过，1：忽略，3：通过，5：检测中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_detectStatus;
                    bool m_detectStatusHasBeenSet;

                    /**
                     * 主机ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 第一次出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * 最近出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 是否可以修复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_canBeFixed;
                    bool m_canBeFixedHasBeenSet;

                    /**
                     * 主机安全uuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEM_H_
