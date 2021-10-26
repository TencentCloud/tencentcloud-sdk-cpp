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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULINFOLIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULINFOLIST_H_

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
                * 主机安全-漏洞管理-漏洞列表
                */
                class VulInfoList : public AbstractModel
                {
                public:
                    VulInfoList();
                    ~VulInfoList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞包含的事件id串，多个用“,”分割
                     * @return Ids 漏洞包含的事件id串，多个用“,”分割
                     */
                    std::string GetIds() const;

                    /**
                     * 设置漏洞包含的事件id串，多个用“,”分割
                     * @param Ids 漏洞包含的事件id串，多个用“,”分割
                     */
                    void SetIds(const std::string& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取漏洞名
                     * @return Name 漏洞名
                     */
                    std::string GetName() const;

                    /**
                     * 设置漏洞名
                     * @param Name 漏洞名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取0: 待处理 1:忽略  3:已修复  5:检测中 6:修复中 控制台仅处理0,1,3,5,6四种状态
                     * @return Status 0: 待处理 1:忽略  3:已修复  5:检测中 6:修复中 控制台仅处理0,1,3,5,6四种状态
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0: 待处理 1:忽略  3:已修复  5:检测中 6:修复中 控制台仅处理0,1,3,5,6四种状态
                     * @param Status 0: 待处理 1:忽略  3:已修复  5:检测中 6:修复中 控制台仅处理0,1,3,5,6四种状态
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取漏洞id
                     * @return VulId 漏洞id
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置漏洞id
                     * @param VulId 漏洞id
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取漏洞披露事件
                     * @return PublishTime 漏洞披露事件
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置漏洞披露事件
                     * @param PublishTime 漏洞披露事件
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取最后检测时间
                     * @return LastTime 最后检测时间
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置最后检测时间
                     * @param LastTime 最后检测时间
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取影响主机数
                     * @return HostCount 影响主机数
                     */
                    uint64_t GetHostCount() const;

                    /**
                     * 设置影响主机数
                     * @param HostCount 影响主机数
                     */
                    void SetHostCount(const uint64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取漏洞等级 1:低 2:中 3:高 4:提示
                     * @return Level 漏洞等级 1:低 2:中 3:高 4:提示
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置漏洞等级 1:低 2:中 3:高 4:提示
                     * @param Level 漏洞等级 1:低 2:中 3:高 4:提示
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return From 废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetFrom() const;

                    /**
                     * 设置废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param From 废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFrom(const uint64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Descript 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescript() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Descript 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescript(const std::string& _descript);

                    /**
                     * 判断参数 Descript 是否已赋值
                     * @return Descript 是否已赋值
                     */
                    bool DescriptHasBeenSet() const;

                    /**
                     * 获取废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublishTimeWisteria 废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPublishTimeWisteria() const;

                    /**
                     * 设置废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PublishTimeWisteria 废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPublishTimeWisteria(const std::string& _publishTimeWisteria);

                    /**
                     * 判断参数 PublishTimeWisteria 是否已赋值
                     * @return PublishTimeWisteria 是否已赋值
                     */
                    bool PublishTimeWisteriaHasBeenSet() const;

                    /**
                     * 获取废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameWisteria 废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNameWisteria() const;

                    /**
                     * 设置废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NameWisteria 废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNameWisteria(const std::string& _nameWisteria);

                    /**
                     * 判断参数 NameWisteria 是否已赋值
                     * @return NameWisteria 是否已赋值
                     */
                    bool NameWisteriaHasBeenSet() const;

                    /**
                     * 获取废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DescriptWisteria 废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescriptWisteria() const;

                    /**
                     * 设置废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DescriptWisteria 废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescriptWisteria(const std::string& _descriptWisteria);

                    /**
                     * 判断参数 DescriptWisteria 是否已赋值
                     * @return DescriptWisteria 是否已赋值
                     */
                    bool DescriptWisteriaHasBeenSet() const;

                    /**
                     * 获取聚合后事件状态串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusStr 聚合后事件状态串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatusStr() const;

                    /**
                     * 设置聚合后事件状态串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StatusStr 聚合后事件状态串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatusStr(const std::string& _statusStr);

                    /**
                     * 判断参数 StatusStr 是否已赋值
                     * @return StatusStr 是否已赋值
                     */
                    bool StatusStrHasBeenSet() const;

                private:

                    /**
                     * 漏洞包含的事件id串，多个用“,”分割
                     */
                    std::string m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * 漏洞名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 0: 待处理 1:忽略  3:已修复  5:检测中 6:修复中 控制台仅处理0,1,3,5,6四种状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 漏洞id
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 漏洞披露事件
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * 最后检测时间
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 影响主机数
                     */
                    uint64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * 漏洞等级 1:低 2:中 3:高 4:提示
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_descript;
                    bool m_descriptHasBeenSet;

                    /**
                     * 废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publishTimeWisteria;
                    bool m_publishTimeWisteriaHasBeenSet;

                    /**
                     * 废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nameWisteria;
                    bool m_nameWisteriaHasBeenSet;

                    /**
                     * 废弃字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_descriptWisteria;
                    bool m_descriptWisteriaHasBeenSet;

                    /**
                     * 聚合后事件状态串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusStr;
                    bool m_statusStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULINFOLIST_H_
