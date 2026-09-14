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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DEDUPLICATESTRATEGY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DEDUPLICATESTRATEGY_H_

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
                * 重复文件处理规则
                */
                class DeDuplicateStrategy : public AbstractModel
                {
                public:
                    DeDuplicateStrategy();
                    ~DeDuplicateStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>校验方式：1=按文档内容判断是否相同<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_COS_HASH</td><td>1</td><td>按文档内容（cos_hash）判断是否相同</td></tr></tbody></table></p>
                     * @return CheckType <p>校验方式：1=按文档内容判断是否相同<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_COS_HASH</td><td>1</td><td>按文档内容（cos_hash）判断是否相同</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetCheckType() const;

                    /**
                     * 设置<p>校验方式：1=按文档内容判断是否相同<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_COS_HASH</td><td>1</td><td>按文档内容（cos_hash）判断是否相同</td></tr></tbody></table></p>
                     * @param _checkType <p>校验方式：1=按文档内容判断是否相同<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_COS_HASH</td><td>1</td><td>按文档内容（cos_hash）判断是否相同</td></tr></tbody></table></p>
                     * 
                     */
                    void SetCheckType(const int64_t& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取<p>处理方式：1=返回报错，2=跳过并返回重复的文档 ID<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_RETURN_ERR</td><td>1</td><td>返回报错</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_SKIP</td><td>2</td><td>跳过，返回重复的文档 ID</td></tr></tbody></table></p>
                     * @return HandleType <p>处理方式：1=返回报错，2=跳过并返回重复的文档 ID<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_RETURN_ERR</td><td>1</td><td>返回报错</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_SKIP</td><td>2</td><td>跳过，返回重复的文档 ID</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetHandleType() const;

                    /**
                     * 设置<p>处理方式：1=返回报错，2=跳过并返回重复的文档 ID<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_RETURN_ERR</td><td>1</td><td>返回报错</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_SKIP</td><td>2</td><td>跳过，返回重复的文档 ID</td></tr></tbody></table></p>
                     * @param _handleType <p>处理方式：1=返回报错，2=跳过并返回重复的文档 ID<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_RETURN_ERR</td><td>1</td><td>返回报错</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_SKIP</td><td>2</td><td>跳过，返回重复的文档 ID</td></tr></tbody></table></p>
                     * 
                     */
                    void SetHandleType(const int64_t& _handleType);

                    /**
                     * 判断参数 HandleType 是否已赋值
                     * @return HandleType 是否已赋值
                     * 
                     */
                    bool HandleTypeHasBeenSet() const;

                private:

                    /**
                     * <p>校验方式：1=按文档内容判断是否相同<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_COS_HASH</td><td>1</td><td>按文档内容（cos_hash）判断是否相同</td></tr></tbody></table></p>
                     */
                    int64_t m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * <p>处理方式：1=返回报错，2=跳过并返回重复的文档 ID<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_RETURN_ERR</td><td>1</td><td>返回报错</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_SKIP</td><td>2</td><td>跳过，返回重复的文档 ID</td></tr></tbody></table></p>
                     */
                    int64_t m_handleType;
                    bool m_handleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DEDUPLICATESTRATEGY_H_
