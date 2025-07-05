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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKTARGET_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKTARGET_H_

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
                * 演练目标
                */
                class TaskTarget : public AbstractModel
                {
                public:
                    TaskTarget();
                    ~TaskTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标标签ID
                     * @return TargetId 目标标签ID
                     * 
                     */
                    int64_t GetTargetId() const;

                    /**
                     * 设置目标标签ID
                     * @param _targetId 目标标签ID
                     * 
                     */
                    void SetTargetId(const int64_t& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取目标描述
                     * @return TargetDesc 目标描述
                     * 
                     */
                    std::string GetTargetDesc() const;

                    /**
                     * 设置目标描述
                     * @param _targetDesc 目标描述
                     * 
                     */
                    void SetTargetDesc(const std::string& _targetDesc);

                    /**
                     * 判断参数 TargetDesc 是否已赋值
                     * @return TargetDesc 是否已赋值
                     * 
                     */
                    bool TargetDescHasBeenSet() const;

                    /**
                     * 获取1:演练场景
2:演练目标
                     * @return Type 1:演练场景
2:演练目标
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置1:演练场景
2:演练目标
                     * @param _type 1:演练场景
2:演练目标
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取1:平台 2:用户个人
                     * @return Source 1:平台 2:用户个人
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置1:平台 2:用户个人
                     * @param _source 1:平台 2:用户个人
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * 目标标签ID
                     */
                    int64_t m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * 目标描述
                     */
                    std::string m_targetDesc;
                    bool m_targetDescHasBeenSet;

                    /**
                     * 1:演练场景
2:演练目标
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 1:平台 2:用户个人
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKTARGET_H_
