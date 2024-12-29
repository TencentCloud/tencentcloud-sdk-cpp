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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CHECKITEM_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CHECKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 实例变配检查条目
                */
                class CheckItem : public AbstractModel
                {
                public:
                    CheckItem();
                    ~CheckItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检查项目名称，CK_CPU-变配后CPU风险检查；CK_MASTER_STORAGE-只读副本变配下，只读副本磁盘空间不小于主实例空间检查；CK_MEMORY-变配后内存风险检查；CK_STORAGE-变配后磁盘空间风险检查；CK_UPGRATE-变配是否需要迁移检查；
                     * @return CheckName 检查项目名称，CK_CPU-变配后CPU风险检查；CK_MASTER_STORAGE-只读副本变配下，只读副本磁盘空间不小于主实例空间检查；CK_MEMORY-变配后内存风险检查；CK_STORAGE-变配后磁盘空间风险检查；CK_UPGRATE-变配是否需要迁移检查；
                     * 
                     */
                    std::string GetCheckName() const;

                    /**
                     * 设置检查项目名称，CK_CPU-变配后CPU风险检查；CK_MASTER_STORAGE-只读副本变配下，只读副本磁盘空间不小于主实例空间检查；CK_MEMORY-变配后内存风险检查；CK_STORAGE-变配后磁盘空间风险检查；CK_UPGRATE-变配是否需要迁移检查；
                     * @param _checkName 检查项目名称，CK_CPU-变配后CPU风险检查；CK_MASTER_STORAGE-只读副本变配下，只读副本磁盘空间不小于主实例空间检查；CK_MEMORY-变配后内存风险检查；CK_STORAGE-变配后磁盘空间风险检查；CK_UPGRATE-变配是否需要迁移检查；
                     * 
                     */
                    void SetCheckName(const std::string& _checkName);

                    /**
                     * 判断参数 CheckName 是否已赋值
                     * @return CheckName 是否已赋值
                     * 
                     */
                    bool CheckNameHasBeenSet() const;

                    /**
                     * 获取检查项目返回值，CK_CPU-当前CPU近7天最大的使用率(%) ；CK_MASTER_STORAGE-主实例的磁盘空间(GB)；CK_MEMORY-当前内存近7天最大的使用值（GB)；
CK_STORAGE-当前磁盘近7天最大的使用值（GB)；CK_UPGRATE- 当前变配检查是否需要迁移，MIGRATE需要迁移变配，LOCAL本地变配；
                     * @return CurrentValue 检查项目返回值，CK_CPU-当前CPU近7天最大的使用率(%) ；CK_MASTER_STORAGE-主实例的磁盘空间(GB)；CK_MEMORY-当前内存近7天最大的使用值（GB)；
CK_STORAGE-当前磁盘近7天最大的使用值（GB)；CK_UPGRATE- 当前变配检查是否需要迁移，MIGRATE需要迁移变配，LOCAL本地变配；
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置检查项目返回值，CK_CPU-当前CPU近7天最大的使用率(%) ；CK_MASTER_STORAGE-主实例的磁盘空间(GB)；CK_MEMORY-当前内存近7天最大的使用值（GB)；
CK_STORAGE-当前磁盘近7天最大的使用值（GB)；CK_UPGRATE- 当前变配检查是否需要迁移，MIGRATE需要迁移变配，LOCAL本地变配；
                     * @param _currentValue 检查项目返回值，CK_CPU-当前CPU近7天最大的使用率(%) ；CK_MASTER_STORAGE-主实例的磁盘空间(GB)；CK_MEMORY-当前内存近7天最大的使用值（GB)；
CK_STORAGE-当前磁盘近7天最大的使用值（GB)；CK_UPGRATE- 当前变配检查是否需要迁移，MIGRATE需要迁移变配，LOCAL本地变配；
                     * 
                     */
                    void SetCurrentValue(const std::string& _currentValue);

                    /**
                     * 判断参数 CurrentValue 是否已赋值
                     * @return CurrentValue 是否已赋值
                     * 
                     */
                    bool CurrentValueHasBeenSet() const;

                    /**
                     * 获取检查条目是否通过 0-不通过，不能变配； 1-通过，可以变配
                     * @return Passed 检查条目是否通过 0-不通过，不能变配； 1-通过，可以变配
                     * 
                     */
                    int64_t GetPassed() const;

                    /**
                     * 设置检查条目是否通过 0-不通过，不能变配； 1-通过，可以变配
                     * @param _passed 检查条目是否通过 0-不通过，不能变配； 1-通过，可以变配
                     * 
                     */
                    void SetPassed(const int64_t& _passed);

                    /**
                     * 判断参数 Passed 是否已赋值
                     * @return Passed 是否已赋值
                     * 
                     */
                    bool PassedHasBeenSet() const;

                    /**
                     * 获取本条目变配是否对实例有影响 0-没有影响 1-有影响
                     * @return IsAffect 本条目变配是否对实例有影响 0-没有影响 1-有影响
                     * 
                     */
                    int64_t GetIsAffect() const;

                    /**
                     * 设置本条目变配是否对实例有影响 0-没有影响 1-有影响
                     * @param _isAffect 本条目变配是否对实例有影响 0-没有影响 1-有影响
                     * 
                     */
                    void SetIsAffect(const int64_t& _isAffect);

                    /**
                     * 判断参数 IsAffect 是否已赋值
                     * @return IsAffect 是否已赋值
                     * 
                     */
                    bool IsAffectHasBeenSet() const;

                    /**
                     * 获取有影响或者不通过的情况下的必要描述
                     * @return Msg 有影响或者不通过的情况下的必要描述
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置有影响或者不通过的情况下的必要描述
                     * @param _msg 有影响或者不通过的情况下的必要描述
                     * 
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取描述对应的代码
                     * @return MsgCode 描述对应的代码
                     * 
                     */
                    int64_t GetMsgCode() const;

                    /**
                     * 设置描述对应的代码
                     * @param _msgCode 描述对应的代码
                     * 
                     */
                    void SetMsgCode(const int64_t& _msgCode);

                    /**
                     * 判断参数 MsgCode 是否已赋值
                     * @return MsgCode 是否已赋值
                     * 
                     */
                    bool MsgCodeHasBeenSet() const;

                private:

                    /**
                     * 检查项目名称，CK_CPU-变配后CPU风险检查；CK_MASTER_STORAGE-只读副本变配下，只读副本磁盘空间不小于主实例空间检查；CK_MEMORY-变配后内存风险检查；CK_STORAGE-变配后磁盘空间风险检查；CK_UPGRATE-变配是否需要迁移检查；
                     */
                    std::string m_checkName;
                    bool m_checkNameHasBeenSet;

                    /**
                     * 检查项目返回值，CK_CPU-当前CPU近7天最大的使用率(%) ；CK_MASTER_STORAGE-主实例的磁盘空间(GB)；CK_MEMORY-当前内存近7天最大的使用值（GB)；
CK_STORAGE-当前磁盘近7天最大的使用值（GB)；CK_UPGRATE- 当前变配检查是否需要迁移，MIGRATE需要迁移变配，LOCAL本地变配；
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * 检查条目是否通过 0-不通过，不能变配； 1-通过，可以变配
                     */
                    int64_t m_passed;
                    bool m_passedHasBeenSet;

                    /**
                     * 本条目变配是否对实例有影响 0-没有影响 1-有影响
                     */
                    int64_t m_isAffect;
                    bool m_isAffectHasBeenSet;

                    /**
                     * 有影响或者不通过的情况下的必要描述
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 描述对应的代码
                     */
                    int64_t m_msgCode;
                    bool m_msgCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CHECKITEM_H_
