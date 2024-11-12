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
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


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
                     * 
                     */
                    int64_t GetItemId() const;

                    /**
                     * 设置项Id
                     * @param _itemId 项Id
                     * 
                     */
                    void SetItemId(const int64_t& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取项名称
                     * @return ItemName 项名称
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置项名称
                     * @param _itemName 项名称
                     * 
                     */
                    void SetItemName(const std::string& _itemName);

                    /**
                     * 判断参数 ItemName 是否已赋值
                     * @return ItemName 是否已赋值
                     * 
                     */
                    bool ItemNameHasBeenSet() const;

                    /**
                     * 获取检测项分类
                     * @return CategoryId 检测项分类
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置检测项分类
                     * @param _categoryId 检测项分类
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取项描述
                     * @return ItemDesc 项描述
                     * 
                     */
                    std::string GetItemDesc() const;

                    /**
                     * 设置项描述
                     * @param _itemDesc 项描述
                     * 
                     */
                    void SetItemDesc(const std::string& _itemDesc);

                    /**
                     * 判断参数 ItemDesc 是否已赋值
                     * @return ItemDesc 是否已赋值
                     * 
                     */
                    bool ItemDescHasBeenSet() const;

                    /**
                     * 获取修复方法
                     * @return FixMethod 修复方法
                     * 
                     */
                    std::string GetFixMethod() const;

                    /**
                     * 设置修复方法
                     * @param _fixMethod 修复方法
                     * 
                     */
                    void SetFixMethod(const std::string& _fixMethod);

                    /**
                     * 判断参数 FixMethod 是否已赋值
                     * @return FixMethod 是否已赋值
                     * 
                     */
                    bool FixMethodHasBeenSet() const;

                    /**
                     * 获取所属规则
                     * @return RuleName 所属规则
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置所属规则
                     * @param _ruleName 所属规则
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取检测结果描述
                     * @return DetectResultDesc 检测结果描述
                     * 
                     */
                    std::string GetDetectResultDesc() const;

                    /**
                     * 设置检测结果描述
                     * @param _detectResultDesc 检测结果描述
                     * 
                     */
                    void SetDetectResultDesc(const std::string& _detectResultDesc);

                    /**
                     * 判断参数 DetectResultDesc 是否已赋值
                     * @return DetectResultDesc 是否已赋值
                     * 
                     */
                    bool DetectResultDescHasBeenSet() const;

                    /**
                     * 获取危险等级
                     * @return Level 危险等级
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置危险等级
                     * @param _level 危险等级
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取检测状态：0 未通过，1：忽略，3：通过，5：检测中
                     * @return DetectStatus 检测状态：0 未通过，1：忽略，3：通过，5：检测中
                     * 
                     */
                    int64_t GetDetectStatus() const;

                    /**
                     * 设置检测状态：0 未通过，1：忽略，3：通过，5：检测中
                     * @param _detectStatus 检测状态：0 未通过，1：忽略，3：通过，5：检测中
                     * 
                     */
                    void SetDetectStatus(const int64_t& _detectStatus);

                    /**
                     * 判断参数 DetectStatus 是否已赋值
                     * @return DetectStatus 是否已赋值
                     * 
                     */
                    bool DetectStatusHasBeenSet() const;

                    /**
                     * 获取主机ID
                     * @return HostId 主机ID
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置主机ID
                     * @param _hostId 主机ID
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取主机名
                     * @return HostName 主机名
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名
                     * @param _hostName 主机名
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取主机IP
                     * @return HostIp 主机IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置主机IP
                     * @param _hostIp 主机IP
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取外网IP
                     * @return WanIp 外网IP
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置外网IP
                     * @param _wanIp 外网IP
                     * 
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     * 
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取第一次出现时间
                     * @return FirstTime 第一次出现时间
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置第一次出现时间
                     * @param _firstTime 第一次出现时间
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取最近出现时间
                     * @return LastTime 最近出现时间
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置最近出现时间
                     * @param _lastTime 最近出现时间
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取是否可以修复
                     * @return CanBeFixed 是否可以修复
                     * 
                     */
                    int64_t GetCanBeFixed() const;

                    /**
                     * 设置是否可以修复
                     * @param _canBeFixed 是否可以修复
                     * 
                     */
                    void SetCanBeFixed(const int64_t& _canBeFixed);

                    /**
                     * 判断参数 CanBeFixed 是否已赋值
                     * @return CanBeFixed 是否已赋值
                     * 
                     */
                    bool CanBeFixedHasBeenSet() const;

                    /**
                     * 获取主机安全uuid
                     * @return Uuid 主机安全uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机安全uuid
                     * @param _uuid 主机安全uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取主机额外信息
                     * @return MachineExtraInfo 主机额外信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置主机额外信息
                     * @param _machineExtraInfo 主机额外信息
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

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
                     */
                    std::string m_detectResultDesc;
                    bool m_detectResultDescHasBeenSet;

                    /**
                     * 危险等级
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 检测状态：0 未通过，1：忽略，3：通过，5：检测中
                     */
                    int64_t m_detectStatus;
                    bool m_detectStatusHasBeenSet;

                    /**
                     * 主机ID
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * 主机名
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 主机IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 外网IP
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 第一次出现时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * 最近出现时间
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 是否可以修复
                     */
                    int64_t m_canBeFixed;
                    bool m_canBeFixedHasBeenSet;

                    /**
                     * 主机安全uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机额外信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEM_H_
