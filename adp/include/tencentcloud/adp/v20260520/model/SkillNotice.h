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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLNOTICE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLNOTICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Skill 异常通知。
                */
                class SkillNotice : public AbstractModel
                {
                public:
                    SkillNotice();
                    ~SkillNotice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通知级别

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 占位 |
| 1 | 成功，字符串面："success" |
| 2 | 警告，字符串面："warning" |
| 3 | 错误，字符串面："error" |
                     * @return Level 通知级别

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 占位 |
| 1 | 成功，字符串面："success" |
| 2 | 警告，字符串面："warning" |
| 3 | 错误，字符串面："error" |
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置通知级别

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 占位 |
| 1 | 成功，字符串面："success" |
| 2 | 警告，字符串面："warning" |
| 3 | 错误，字符串面："error" |
                     * @param _level 通知级别

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 占位 |
| 1 | 成功，字符串面："success" |
| 2 | 警告，字符串面："warning" |
| 3 | 错误，字符串面："error" |
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
                     * 获取文案（i18n 后字符串）
                     * @return NoticeContent 文案（i18n 后字符串）
                     * 
                     */
                    std::string GetNoticeContent() const;

                    /**
                     * 设置文案（i18n 后字符串）
                     * @param _noticeContent 文案（i18n 后字符串）
                     * 
                     */
                    void SetNoticeContent(const std::string& _noticeContent);

                    /**
                     * 判断参数 NoticeContent 是否已赋值
                     * @return NoticeContent 是否已赋值
                     * 
                     */
                    bool NoticeContentHasBeenSet() const;

                    /**
                     * 获取触发本通知的 Skill 版本ID
                     * @return TriggerVersionId 触发本通知的 Skill 版本ID
                     * 
                     */
                    std::string GetTriggerVersionId() const;

                    /**
                     * 设置触发本通知的 Skill 版本ID
                     * @param _triggerVersionId 触发本通知的 Skill 版本ID
                     * 
                     */
                    void SetTriggerVersionId(const std::string& _triggerVersionId);

                    /**
                     * 判断参数 TriggerVersionId 是否已赋值
                     * @return TriggerVersionId 是否已赋值
                     * 
                     */
                    bool TriggerVersionIdHasBeenSet() const;

                    /**
                     * 获取通知类型 

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 占位 |
| 1 | 发布失败 |
| 2 | 共享审批被拒 |
                     * @return Type 通知类型 

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 占位 |
| 1 | 发布失败 |
| 2 | 共享审批被拒 |
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置通知类型 

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 占位 |
| 1 | 发布失败 |
| 2 | 共享审批被拒 |
                     * @param _type 通知类型 

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 占位 |
| 1 | 发布失败 |
| 2 | 共享审批被拒 |
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 通知级别

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 占位 |
| 1 | 成功，字符串面："success" |
| 2 | 警告，字符串面："warning" |
| 3 | 错误，字符串面："error" |
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 文案（i18n 后字符串）
                     */
                    std::string m_noticeContent;
                    bool m_noticeContentHasBeenSet;

                    /**
                     * 触发本通知的 Skill 版本ID
                     */
                    std::string m_triggerVersionId;
                    bool m_triggerVersionIdHasBeenSet;

                    /**
                     * 通知类型 

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 占位 |
| 1 | 发布失败 |
| 2 | 共享审批被拒 |
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLNOTICE_H_
