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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPERRULEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPERRULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/FileTamperRule.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 核心文件监控规则详情
                */
                class FileTamperRuleDetail : public AbstractModel
                {
                public:
                    FileTamperRuleDetail();
                    ~FileTamperRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名称
                     * @return Name 规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param _name 规则名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return ModifyTime 更新时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置更新时间
                     * @param _modifyTime 更新时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取状态 0: 启用 1: 已关闭
                     * @return Status 状态 0: 启用 1: 已关闭
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态 0: 启用 1: 已关闭
                     * @param _status 状态 0: 启用 1: 已关闭
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取规则
                     * @return Rule 规则
                     * 
                     */
                    std::vector<FileTamperRule> GetRule() const;

                    /**
                     * 设置规则
                     * @param _rule 规则
                     * 
                     */
                    void SetRule(const std::vector<FileTamperRule>& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取生效主机uuid,空表示全部主机，通过参数可控制返回的条数
                     * @return Uuids 生效主机uuid,空表示全部主机，通过参数可控制返回的条数
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置生效主机uuid,空表示全部主机，通过参数可控制返回的条数
                     * @param _uuids 生效主机uuid,空表示全部主机，通过参数可控制返回的条数
                     * 
                     */
                    void SetUuids(const std::vector<std::string>& _uuids);

                    /**
                     * 判断参数 Uuids 是否已赋值
                     * @return Uuids 是否已赋值
                     * 
                     */
                    bool UuidsHasBeenSet() const;

                    /**
                     * 获取规则id
                     * @return Id 规则id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则id
                     * @param _id 规则id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取是否全局规则(默认否) 0：否 ，1：是
                     * @return IsGlobal 是否全局规则(默认否) 0：否 ，1：是
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置是否全局规则(默认否) 0：否 ，1：是
                     * @param _isGlobal 是否全局规则(默认否) 0：否 ，1：是
                     * 
                     */
                    void SetIsGlobal(const uint64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取风险等级 0：无， 1: 高危， 2:中危， 3: 低危
                     * @return Level 风险等级 0：无， 1: 高危， 2:中危， 3: 低危
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置风险等级 0：无， 1: 高危， 2:中危， 3: 低危
                     * @param _level 风险等级 0：无， 1: 高危， 2:中危， 3: 低危
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取生效主机的总数
                     * @return UuidTotalCount 生效主机的总数
                     * 
                     */
                    uint64_t GetUuidTotalCount() const;

                    /**
                     * 设置生效主机的总数
                     * @param _uuidTotalCount 生效主机的总数
                     * 
                     */
                    void SetUuidTotalCount(const uint64_t& _uuidTotalCount);

                    /**
                     * 判断参数 UuidTotalCount 是否已赋值
                     * @return UuidTotalCount 是否已赋值
                     * 
                     */
                    bool UuidTotalCountHasBeenSet() const;

                    /**
                     * 获取加白处理类型
<li>cur 仅对当前加白</li>
<li>all 所有符合条件加白</li>
                     * @return AddWhiteType 加白处理类型
<li>cur 仅对当前加白</li>
<li>all 所有符合条件加白</li>
                     * 
                     */
                    std::string GetAddWhiteType() const;

                    /**
                     * 设置加白处理类型
<li>cur 仅对当前加白</li>
<li>all 所有符合条件加白</li>
                     * @param _addWhiteType 加白处理类型
<li>cur 仅对当前加白</li>
<li>all 所有符合条件加白</li>
                     * 
                     */
                    void SetAddWhiteType(const std::string& _addWhiteType);

                    /**
                     * 判断参数 AddWhiteType 是否已赋值
                     * @return AddWhiteType 是否已赋值
                     * 
                     */
                    bool AddWhiteTypeHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 状态 0: 启用 1: 已关闭
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则
                     */
                    std::vector<FileTamperRule> m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 生效主机uuid,空表示全部主机，通过参数可控制返回的条数
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                    /**
                     * 规则id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 是否全局规则(默认否) 0：否 ，1：是
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * 风险等级 0：无， 1: 高危， 2:中危， 3: 低危
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 生效主机的总数
                     */
                    uint64_t m_uuidTotalCount;
                    bool m_uuidTotalCountHasBeenSet;

                    /**
                     * 加白处理类型
<li>cur 仅对当前加白</li>
<li>all 所有符合条件加白</li>
                     */
                    std::string m_addWhiteType;
                    bool m_addWhiteTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPERRULEDETAIL_H_
