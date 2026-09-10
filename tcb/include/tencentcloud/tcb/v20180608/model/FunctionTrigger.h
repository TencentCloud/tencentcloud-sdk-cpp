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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_FUNCTIONTRIGGER_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_FUNCTIONTRIGGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 触发器类型
                */
                class FunctionTrigger : public AbstractModel
                {
                public:
                    FunctionTrigger();
                    ~FunctionTrigger() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>触发器最后修改时间</p>
                     * @return ModTime <p>触发器最后修改时间</p>
                     * 
                     */
                    std::string GetModTime() const;

                    /**
                     * 设置<p>触发器最后修改时间</p>
                     * @param _modTime <p>触发器最后修改时间</p>
                     * 
                     */
                    void SetModTime(const std::string& _modTime);

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     * 
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取<p>触发器类型</p>
                     * @return Type <p>触发器类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>触发器类型</p>
                     * @param _type <p>触发器类型</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>触发器详细配置</p>
                     * @return TriggerDesc <p>触发器详细配置</p>
                     * 
                     */
                    std::string GetTriggerDesc() const;

                    /**
                     * 设置<p>触发器详细配置</p>
                     * @param _triggerDesc <p>触发器详细配置</p>
                     * 
                     */
                    void SetTriggerDesc(const std::string& _triggerDesc);

                    /**
                     * 判断参数 TriggerDesc 是否已赋值
                     * @return TriggerDesc 是否已赋值
                     * 
                     */
                    bool TriggerDescHasBeenSet() const;

                    /**
                     * 获取<p>触发器名称</p>
                     * @return TriggerName <p>触发器名称</p>
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置<p>触发器名称</p>
                     * @param _triggerName <p>触发器名称</p>
                     * 
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     * 
                     */
                    bool TriggerNameHasBeenSet() const;

                    /**
                     * 获取<p>触发器创建时间</p>
                     * @return AddTime <p>触发器创建时间</p>
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置<p>触发器创建时间</p>
                     * @param _addTime <p>触发器创建时间</p>
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                private:

                    /**
                     * <p>触发器最后修改时间</p>
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * <p>触发器类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>触发器详细配置</p>
                     */
                    std::string m_triggerDesc;
                    bool m_triggerDescHasBeenSet;

                    /**
                     * <p>触发器名称</p>
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * <p>触发器创建时间</p>
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_FUNCTIONTRIGGER_H_
