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
                     * 获取<p>目标标签ID</p>
                     * @return TargetId <p>目标标签ID</p>
                     * 
                     */
                    int64_t GetTargetId() const;

                    /**
                     * 设置<p>目标标签ID</p>
                     * @param _targetId <p>目标标签ID</p>
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
                     * 获取<p>目标描述</p>
                     * @return TargetDesc <p>目标描述</p>
                     * 
                     */
                    std::string GetTargetDesc() const;

                    /**
                     * 设置<p>目标描述</p>
                     * @param _targetDesc <p>目标描述</p>
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
                     * 获取<p>1:演练场景<br>2:演练目标</p>
                     * @return Type <p>1:演练场景<br>2:演练目标</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>1:演练场景<br>2:演练目标</p>
                     * @param _type <p>1:演练场景<br>2:演练目标</p>
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
                     * 获取<p>1:平台 2:用户个人</p>
                     * @return Source <p>1:平台 2:用户个人</p>
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置<p>1:平台 2:用户个人</p>
                     * @param _source <p>1:平台 2:用户个人</p>
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>目标标签是否已被删除</p><p>枚举值：</p><ul><li>0： 未删除</li><li>1： 已删除</li></ul>
                     * @return TargetStatus <p>目标标签是否已被删除</p><p>枚举值：</p><ul><li>0： 未删除</li><li>1： 已删除</li></ul>
                     * 
                     */
                    int64_t GetTargetStatus() const;

                    /**
                     * 设置<p>目标标签是否已被删除</p><p>枚举值：</p><ul><li>0： 未删除</li><li>1： 已删除</li></ul>
                     * @param _targetStatus <p>目标标签是否已被删除</p><p>枚举值：</p><ul><li>0： 未删除</li><li>1： 已删除</li></ul>
                     * 
                     */
                    void SetTargetStatus(const int64_t& _targetStatus);

                    /**
                     * 判断参数 TargetStatus 是否已赋值
                     * @return TargetStatus 是否已赋值
                     * 
                     */
                    bool TargetStatusHasBeenSet() const;

                private:

                    /**
                     * <p>目标标签ID</p>
                     */
                    int64_t m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * <p>目标描述</p>
                     */
                    std::string m_targetDesc;
                    bool m_targetDescHasBeenSet;

                    /**
                     * <p>1:演练场景<br>2:演练目标</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>1:平台 2:用户个人</p>
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>目标标签是否已被删除</p><p>枚举值：</p><ul><li>0： 未删除</li><li>1： 已删除</li></ul>
                     */
                    int64_t m_targetStatus;
                    bool m_targetStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKTARGET_H_
