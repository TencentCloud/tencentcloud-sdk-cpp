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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_POLICYTRIGGERLOG_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_POLICYTRIGGERLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 护栏策略触发日志
                */
                class PolicyTriggerLog : public AbstractModel
                {
                public:
                    PolicyTriggerLog();
                    ~PolicyTriggerLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取演练ID
                     * @return TaskId 演练ID
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置演练ID
                     * @param _taskId 演练ID
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取类型，0--触发，1--恢复
                     * @return TriggerType 类型，0--触发，1--恢复
                     * 
                     */
                    int64_t GetTriggerType() const;

                    /**
                     * 设置类型，0--触发，1--恢复
                     * @param _triggerType 类型，0--触发，1--恢复
                     * 
                     */
                    void SetTriggerType(const int64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取内容
                     * @return Content 内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置内容
                     * @param _content 内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取触发时间
                     * @return CreatTime 触发时间
                     * 
                     */
                    std::string GetCreatTime() const;

                    /**
                     * 设置触发时间
                     * @param _creatTime 触发时间
                     * 
                     */
                    void SetCreatTime(const std::string& _creatTime);

                    /**
                     * 判断参数 CreatTime 是否已赋值
                     * @return CreatTime 是否已赋值
                     * 
                     */
                    bool CreatTimeHasBeenSet() const;

                private:

                    /**
                     * 演练ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 类型，0--触发，1--恢复
                     */
                    int64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 触发时间
                     */
                    std::string m_creatTime;
                    bool m_creatTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_POLICYTRIGGERLOG_H_
