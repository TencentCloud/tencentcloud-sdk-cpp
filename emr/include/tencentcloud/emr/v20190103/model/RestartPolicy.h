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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_RESTARTPOLICY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_RESTARTPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 组件重启策略
                */
                class RestartPolicy : public AbstractModel
                {
                public:
                    RestartPolicy();
                    ~RestartPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取重启策略名。
                     * @return Name 重启策略名。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置重启策略名。
                     * @param _name 重启策略名。
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
                     * 获取策略展示名称。
                     * @return DisplayName 策略展示名称。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置策略展示名称。
                     * @param _displayName 策略展示名称。
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取策略描述。
                     * @return Describe 策略描述。
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置策略描述。
                     * @param _describe 策略描述。
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取批量重启节点数可选范围。
                     * @return BatchSizeRange 批量重启节点数可选范围。
                     * 
                     */
                    std::vector<int64_t> GetBatchSizeRange() const;

                    /**
                     * 设置批量重启节点数可选范围。
                     * @param _batchSizeRange 批量重启节点数可选范围。
                     * 
                     */
                    void SetBatchSizeRange(const std::vector<int64_t>& _batchSizeRange);

                    /**
                     * 判断参数 BatchSizeRange 是否已赋值
                     * @return BatchSizeRange 是否已赋值
                     * 
                     */
                    bool BatchSizeRangeHasBeenSet() const;

                    /**
                     * 获取是否是默认策略。
                     * @return IsDefault 是否是默认策略。
                     * 
                     */
                    std::string GetIsDefault() const;

                    /**
                     * 设置是否是默认策略。
                     * @param _isDefault 是否是默认策略。
                     * 
                     */
                    void SetIsDefault(const std::string& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                private:

                    /**
                     * 重启策略名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 策略展示名称。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 策略描述。
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * 批量重启节点数可选范围。
                     */
                    std::vector<int64_t> m_batchSizeRange;
                    bool m_batchSizeRangeHasBeenSet;

                    /**
                     * 是否是默认策略。
                     */
                    std::string m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RESTARTPOLICY_H_
