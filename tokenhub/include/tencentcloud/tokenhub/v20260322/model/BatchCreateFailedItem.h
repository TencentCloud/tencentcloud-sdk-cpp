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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_BATCHCREATEFAILEDITEM_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_BATCHCREATEFAILEDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * 批量创建失败项
                */
                class BatchCreateFailedItem : public AbstractModel
                {
                public:
                    BatchCreateFailedItem();
                    ~BatchCreateFailedItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取失败项的序号（从 1 开始，对应后缀编号）。
                     * @return Index 失败项的序号（从 1 开始，对应后缀编号）。
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置失败项的序号（从 1 开始，对应后缀编号）。
                     * @param _index 失败项的序号（从 1 开始，对应后缀编号）。
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取失败项的名称。
                     * @return Name 失败项的名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置失败项的名称。
                     * @param _name 失败项的名称。
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
                     * 获取失败原因。
                     * @return Reason 失败原因。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置失败原因。
                     * @param _reason 失败原因。
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 失败项的序号（从 1 开始，对应后缀编号）。
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 失败项的名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 失败原因。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_BATCHCREATEFAILEDITEM_H_
