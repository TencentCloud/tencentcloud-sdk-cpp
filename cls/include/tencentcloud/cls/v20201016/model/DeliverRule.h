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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELIVERRULE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELIVERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 投递规则
                */
                class DeliverRule : public AbstractModel
                {
                public:
                    DeliverRule();
                    ~DeliverRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据投递范围。</p><p>枚举值：</p><ul><li>1： 历史+新增数据</li><li>2： 自定义时间范围</li><li>3： 仅新增</li></ul><p>本次仅支持3新增数据。后续支持： 2自定义时间范围和1历史+新增数据</p>
                     * @return DataScope <p>数据投递范围。</p><p>枚举值：</p><ul><li>1： 历史+新增数据</li><li>2： 自定义时间范围</li><li>3： 仅新增</li></ul><p>本次仅支持3新增数据。后续支持： 2自定义时间范围和1历史+新增数据</p>
                     * 
                     */
                    uint64_t GetDataScope() const;

                    /**
                     * 设置<p>数据投递范围。</p><p>枚举值：</p><ul><li>1： 历史+新增数据</li><li>2： 自定义时间范围</li><li>3： 仅新增</li></ul><p>本次仅支持3新增数据。后续支持： 2自定义时间范围和1历史+新增数据</p>
                     * @param _dataScope <p>数据投递范围。</p><p>枚举值：</p><ul><li>1： 历史+新增数据</li><li>2： 自定义时间范围</li><li>3： 仅新增</li></ul><p>本次仅支持3新增数据。后续支持： 2自定义时间范围和1历史+新增数据</p>
                     * 
                     */
                    void SetDataScope(const uint64_t& _dataScope);

                    /**
                     * 判断参数 DataScope 是否已赋值
                     * @return DataScope 是否已赋值
                     * 
                     */
                    bool DataScopeHasBeenSet() const;

                private:

                    /**
                     * <p>数据投递范围。</p><p>枚举值：</p><ul><li>1： 历史+新增数据</li><li>2： 自定义时间范围</li><li>3： 仅新增</li></ul><p>本次仅支持3新增数据。后续支持： 2自定义时间范围和1历史+新增数据</p>
                     */
                    uint64_t m_dataScope;
                    bool m_dataScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELIVERRULE_H_
