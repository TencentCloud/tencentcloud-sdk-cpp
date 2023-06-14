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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_FILTER_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 过滤参数列表
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤参数key
                     * @return FilterKey 过滤参数key
                     * 
                     */
                    std::string GetFilterKey() const;

                    /**
                     * 设置过滤参数key
                     * @param _filterKey 过滤参数key
                     * 
                     */
                    void SetFilterKey(const std::string& _filterKey);

                    /**
                     * 判断参数 FilterKey 是否已赋值
                     * @return FilterKey 是否已赋值
                     * 
                     */
                    bool FilterKeyHasBeenSet() const;

                    /**
                     * 获取过滤参数值
                     * @return FilterValue 过滤参数值
                     * 
                     */
                    std::string GetFilterValue() const;

                    /**
                     * 设置过滤参数值
                     * @param _filterValue 过滤参数值
                     * 
                     */
                    void SetFilterValue(const std::string& _filterValue);

                    /**
                     * 判断参数 FilterValue 是否已赋值
                     * @return FilterValue 是否已赋值
                     * 
                     */
                    bool FilterValueHasBeenSet() const;

                private:

                    /**
                     * 过滤参数key
                     */
                    std::string m_filterKey;
                    bool m_filterKeyHasBeenSet;

                    /**
                     * 过滤参数值
                     */
                    std::string m_filterValue;
                    bool m_filterValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_FILTER_H_
