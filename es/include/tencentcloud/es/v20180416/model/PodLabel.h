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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_PODLABEL_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_PODLABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Pod标签
                */
                class PodLabel : public AbstractModel
                {
                public:
                    PodLabel();
                    ~PodLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签键，支持大小写字母、数字、以及-_./，最多支持63个字符
                     * @return LabelKey 标签键，支持大小写字母、数字、以及-_./，最多支持63个字符
                     * 
                     */
                    std::string GetLabelKey() const;

                    /**
                     * 设置标签键，支持大小写字母、数字、以及-_./，最多支持63个字符
                     * @param _labelKey 标签键，支持大小写字母、数字、以及-_./，最多支持63个字符
                     * 
                     */
                    void SetLabelKey(const std::string& _labelKey);

                    /**
                     * 判断参数 LabelKey 是否已赋值
                     * @return LabelKey 是否已赋值
                     * 
                     */
                    bool LabelKeyHasBeenSet() const;

                    /**
                     * 获取标签值，支持大小写字母、数字、以及-_./，最多支持63个字符
                     * @return LabelValue 标签值，支持大小写字母、数字、以及-_./，最多支持63个字符
                     * 
                     */
                    std::string GetLabelValue() const;

                    /**
                     * 设置标签值，支持大小写字母、数字、以及-_./，最多支持63个字符
                     * @param _labelValue 标签值，支持大小写字母、数字、以及-_./，最多支持63个字符
                     * 
                     */
                    void SetLabelValue(const std::string& _labelValue);

                    /**
                     * 判断参数 LabelValue 是否已赋值
                     * @return LabelValue 是否已赋值
                     * 
                     */
                    bool LabelValueHasBeenSet() const;

                private:

                    /**
                     * 标签键，支持大小写字母、数字、以及-_./，最多支持63个字符
                     */
                    std::string m_labelKey;
                    bool m_labelKeyHasBeenSet;

                    /**
                     * 标签值，支持大小写字母、数字、以及-_./，最多支持63个字符
                     */
                    std::string m_labelValue;
                    bool m_labelValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_PODLABEL_H_
