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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_VSMDIGESTITEM_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_VSMDIGESTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * VSM摘要信息
                */
                class VsmDigestItem : public AbstractModel
                {
                public:
                    VsmDigestItem();
                    ~VsmDigestItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>计数</p>
                     * @return DigestVer <p>计数</p>
                     * 
                     */
                    int64_t GetDigestVer() const;

                    /**
                     * 设置<p>计数</p>
                     * @param _digestVer <p>计数</p>
                     * 
                     */
                    void SetDigestVer(const int64_t& _digestVer);

                    /**
                     * 判断参数 DigestVer 是否已赋值
                     * @return DigestVer 是否已赋值
                     * 
                     */
                    bool DigestVerHasBeenSet() const;

                    /**
                     * 获取<p>摘要值</p>
                     * @return Value <p>摘要值</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>摘要值</p>
                     * @param _value <p>摘要值</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * <p>计数</p>
                     */
                    int64_t m_digestVer;
                    bool m_digestVerHasBeenSet;

                    /**
                     * <p>摘要值</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_VSMDIGESTITEM_H_
