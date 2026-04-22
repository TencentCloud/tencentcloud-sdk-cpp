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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FLOWREMARKITEM_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FLOWREMARKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 合同备注
                */
                class FlowRemarkItem : public AbstractModel
                {
                public:
                    FlowRemarkItem();
                    ~FlowRemarkItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>合同备注下标，对应最多5个备注位</p><p>取值范围：[0, 4]</p>
                     * @return RemarkId <p>合同备注下标，对应最多5个备注位</p><p>取值范围：[0, 4]</p>
                     * 
                     */
                    int64_t GetRemarkId() const;

                    /**
                     * 设置<p>合同备注下标，对应最多5个备注位</p><p>取值范围：[0, 4]</p>
                     * @param _remarkId <p>合同备注下标，对应最多5个备注位</p><p>取值范围：[0, 4]</p>
                     * 
                     */
                    void SetRemarkId(const int64_t& _remarkId);

                    /**
                     * 判断参数 RemarkId 是否已赋值
                     * @return RemarkId 是否已赋值
                     * 
                     */
                    bool RemarkIdHasBeenSet() const;

                    /**
                     * 获取<p>合同备注内容，不超过 50 个字符，DELETE 时无需传入</p>
                     * @return RemarkValue <p>合同备注内容，不超过 50 个字符，DELETE 时无需传入</p>
                     * 
                     */
                    std::string GetRemarkValue() const;

                    /**
                     * 设置<p>合同备注内容，不超过 50 个字符，DELETE 时无需传入</p>
                     * @param _remarkValue <p>合同备注内容，不超过 50 个字符，DELETE 时无需传入</p>
                     * 
                     */
                    void SetRemarkValue(const std::string& _remarkValue);

                    /**
                     * 判断参数 RemarkValue 是否已赋值
                     * @return RemarkValue 是否已赋值
                     * 
                     */
                    bool RemarkValueHasBeenSet() const;

                private:

                    /**
                     * <p>合同备注下标，对应最多5个备注位</p><p>取值范围：[0, 4]</p>
                     */
                    int64_t m_remarkId;
                    bool m_remarkIdHasBeenSet;

                    /**
                     * <p>合同备注内容，不超过 50 个字符，DELETE 时无需传入</p>
                     */
                    std::string m_remarkValue;
                    bool m_remarkValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWREMARKITEM_H_
