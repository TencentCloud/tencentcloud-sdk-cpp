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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPASUPPORTEDMETASREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPASUPPORTEDMETASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPASupportedMetas请求参数结构体
                */
                class DescribeDSPASupportedMetasRequest : public AbstractModel
                {
                public:
                    DescribeDSPASupportedMetasRequest();
                    ~DescribeDSPASupportedMetasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取元数据类型
                     * @return MetaTypes 元数据类型
                     * 
                     */
                    std::vector<std::string> GetMetaTypes() const;

                    /**
                     * 设置元数据类型
                     * @param _metaTypes 元数据类型
                     * 
                     */
                    void SetMetaTypes(const std::vector<std::string>& _metaTypes);

                    /**
                     * 判断参数 MetaTypes 是否已赋值
                     * @return MetaTypes 是否已赋值
                     * 
                     */
                    bool MetaTypesHasBeenSet() const;

                private:

                    /**
                     * 元数据类型
                     */
                    std::vector<std::string> m_metaTypes;
                    bool m_metaTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPASUPPORTEDMETASREQUEST_H_
