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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPERRULEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPERRULEINFO_H_

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
                * 核心文件监控规则列表
                */
                class FileTamperRuleInfo : public AbstractModel
                {
                public:
                    FileTamperRuleInfo();
                    ~FileTamperRuleInfo() = default;
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
                     * 获取规则类型 0 ：系统规则  1：用户规则
                     * @return RuleCategory 规则类型 0 ：系统规则  1：用户规则
                     * 
                     */
                    uint64_t GetRuleCategory() const;

                    /**
                     * 设置规则类型 0 ：系统规则  1：用户规则
                     * @param _ruleCategory 规则类型 0 ：系统规则  1：用户规则
                     * 
                     */
                    void SetRuleCategory(const uint64_t& _ruleCategory);

                    /**
                     * 判断参数 RuleCategory 是否已赋值
                     * @return RuleCategory 是否已赋值
                     * 
                     */
                    bool RuleCategoryHasBeenSet() const;

                    /**
                     * 获取影响主机数
                     * @return HostCount 影响主机数
                     * 
                     */
                    uint64_t GetHostCount() const;

                    /**
                     * 设置影响主机数
                     * @param _hostCount 影响主机数
                     * 
                     */
                    void SetHostCount(const uint64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

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
                     * 获取规则id，系统的规则时为0。
                     * @return Id 规则id，系统的规则时为0。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则id，系统的规则时为0。
                     * @param _id 规则id，系统的规则时为0。
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
                     * 获取是否是全局的 0：否 ，1：是
                     * @return IsGlobal 是否是全局的 0：否 ，1：是
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置是否是全局的 0：否 ，1：是
                     * @param _isGlobal 是否是全局的 0：否 ，1：是
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
                     * 获取子规则写条目数
                     * @return WriteRuleCount 子规则写条目数
                     * 
                     */
                    uint64_t GetWriteRuleCount() const;

                    /**
                     * 设置子规则写条目数
                     * @param _writeRuleCount 子规则写条目数
                     * 
                     */
                    void SetWriteRuleCount(const uint64_t& _writeRuleCount);

                    /**
                     * 判断参数 WriteRuleCount 是否已赋值
                     * @return WriteRuleCount 是否已赋值
                     * 
                     */
                    bool WriteRuleCountHasBeenSet() const;

                    /**
                     * 获取子规则读条目数
                     * @return ReadRuleCount 子规则读条目数
                     * 
                     */
                    uint64_t GetReadRuleCount() const;

                    /**
                     * 设置子规则读条目数
                     * @param _readRuleCount 子规则读条目数
                     * 
                     */
                    void SetReadRuleCount(const uint64_t& _readRuleCount);

                    /**
                     * 判断参数 ReadRuleCount 是否已赋值
                     * @return ReadRuleCount 是否已赋值
                     * 
                     */
                    bool ReadRuleCountHasBeenSet() const;

                    /**
                     * 获取子规则读写条目数
                     * @return ReadWriteRuleCount 子规则读写条目数
                     * 
                     */
                    uint64_t GetReadWriteRuleCount() const;

                    /**
                     * 设置子规则读写条目数
                     * @param _readWriteRuleCount 子规则读写条目数
                     * 
                     */
                    void SetReadWriteRuleCount(const uint64_t& _readWriteRuleCount);

                    /**
                     * 判断参数 ReadWriteRuleCount 是否已赋值
                     * @return ReadWriteRuleCount 是否已赋值
                     * 
                     */
                    bool ReadWriteRuleCountHasBeenSet() const;

                    /**
                     * 获取监控行为
<li>read 读取文件</li>
<li>write 修改文件</li>
<li>read-write 读取修改文件</li>
                     * @return FileAction 监控行为
<li>read 读取文件</li>
<li>write 修改文件</li>
<li>read-write 读取修改文件</li>
                     * 
                     */
                    std::string GetFileAction() const;

                    /**
                     * 设置监控行为
<li>read 读取文件</li>
<li>write 修改文件</li>
<li>read-write 读取修改文件</li>
                     * @param _fileAction 监控行为
<li>read 读取文件</li>
<li>write 修改文件</li>
<li>read-write 读取修改文件</li>
                     * 
                     */
                    void SetFileAction(const std::string& _fileAction);

                    /**
                     * 判断参数 FileAction 是否已赋值
                     * @return FileAction 是否已赋值
                     * 
                     */
                    bool FileActionHasBeenSet() const;

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
                     * 规则类型 0 ：系统规则  1：用户规则
                     */
                    uint64_t m_ruleCategory;
                    bool m_ruleCategoryHasBeenSet;

                    /**
                     * 影响主机数
                     */
                    uint64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

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
                     * 规则id，系统的规则时为0。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 是否是全局的 0：否 ，1：是
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * 风险等级 0：无， 1: 高危， 2:中危， 3: 低危
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 子规则写条目数
                     */
                    uint64_t m_writeRuleCount;
                    bool m_writeRuleCountHasBeenSet;

                    /**
                     * 子规则读条目数
                     */
                    uint64_t m_readRuleCount;
                    bool m_readRuleCountHasBeenSet;

                    /**
                     * 子规则读写条目数
                     */
                    uint64_t m_readWriteRuleCount;
                    bool m_readWriteRuleCountHasBeenSet;

                    /**
                     * 监控行为
<li>read 读取文件</li>
<li>write 修改文件</li>
<li>read-write 读取修改文件</li>
                     */
                    std::string m_fileAction;
                    bool m_fileActionHasBeenSet;

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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPERRULEINFO_H_
