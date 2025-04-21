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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SGDNSPARSECOUNT_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SGDNSPARSECOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 企业安全组域名解析的IP统计
                */
                class SgDnsParseCount : public AbstractModel
                {
                public:
                    SgDnsParseCount();
                    ~SgDnsParseCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取有效下发的IP个数，离散数据
                     * @return ValidCount 有效下发的IP个数，离散数据
                     * 
                     */
                    int64_t GetValidCount() const;

                    /**
                     * 设置有效下发的IP个数，离散数据
                     * @param _validCount 有效下发的IP个数，离散数据
                     * 
                     */
                    void SetValidCount(const int64_t& _validCount);

                    /**
                     * 判断参数 ValidCount 是否已赋值
                     * @return ValidCount 是否已赋值
                     * 
                     */
                    bool ValidCountHasBeenSet() const;

                    /**
                     * 获取未下发的IP个数，离散数据
                     * @return InvalidCount 未下发的IP个数，离散数据
                     * 
                     */
                    int64_t GetInvalidCount() const;

                    /**
                     * 设置未下发的IP个数，离散数据
                     * @param _invalidCount 未下发的IP个数，离散数据
                     * 
                     */
                    void SetInvalidCount(const int64_t& _invalidCount);

                    /**
                     * 判断参数 InvalidCount 是否已赋值
                     * @return InvalidCount 是否已赋值
                     * 
                     */
                    bool InvalidCountHasBeenSet() const;

                private:

                    /**
                     * 有效下发的IP个数，离散数据
                     */
                    int64_t m_validCount;
                    bool m_validCountHasBeenSet;

                    /**
                     * 未下发的IP个数，离散数据
                     */
                    int64_t m_invalidCount;
                    bool m_invalidCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SGDNSPARSECOUNT_H_
