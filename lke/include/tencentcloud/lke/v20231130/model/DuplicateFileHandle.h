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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DUPLICATEFILEHANDLE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DUPLICATEFILEHANDLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 重复文档处理方式
                */
                class DuplicateFileHandle : public AbstractModel
                {
                public:
                    DuplicateFileHandle();
                    ~DuplicateFileHandle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取重复文档判断方式，1：按文档内容，即cos_hash字段判断是否重复
                     * @return CheckType 重复文档判断方式，1：按文档内容，即cos_hash字段判断是否重复
                     * 
                     */
                    uint64_t GetCheckType() const;

                    /**
                     * 设置重复文档判断方式，1：按文档内容，即cos_hash字段判断是否重复
                     * @param _checkType 重复文档判断方式，1：按文档内容，即cos_hash字段判断是否重复
                     * 
                     */
                    void SetCheckType(const uint64_t& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取重复文档处理方式，1：返回报错，2：跳过，返回重复的文档业务ID
                     * @return HandleType 重复文档处理方式，1：返回报错，2：跳过，返回重复的文档业务ID
                     * 
                     */
                    uint64_t GetHandleType() const;

                    /**
                     * 设置重复文档处理方式，1：返回报错，2：跳过，返回重复的文档业务ID
                     * @param _handleType 重复文档处理方式，1：返回报错，2：跳过，返回重复的文档业务ID
                     * 
                     */
                    void SetHandleType(const uint64_t& _handleType);

                    /**
                     * 判断参数 HandleType 是否已赋值
                     * @return HandleType 是否已赋值
                     * 
                     */
                    bool HandleTypeHasBeenSet() const;

                private:

                    /**
                     * 重复文档判断方式，1：按文档内容，即cos_hash字段判断是否重复
                     */
                    uint64_t m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * 重复文档处理方式，1：返回报错，2：跳过，返回重复的文档业务ID
                     */
                    uint64_t m_handleType;
                    bool m_handleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DUPLICATEFILEHANDLE_H_
