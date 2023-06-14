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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_SORTBY_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_SORTBY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 排序条件
                */
                class SortBy : public AbstractModel
                {
                public:
                    SortBy();
                    ~SortBy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取排序字段，默认为CreateTime
                     * @return By 排序字段，默认为CreateTime
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段，默认为CreateTime
                     * @param _by 排序字段，默认为CreateTime
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取true表示降序，false表示升序
                     * @return Descend true表示降序，false表示升序
                     * 
                     */
                    bool GetDescend() const;

                    /**
                     * 设置true表示降序，false表示升序
                     * @param _descend true表示降序，false表示升序
                     * 
                     */
                    void SetDescend(const bool& _descend);

                    /**
                     * 判断参数 Descend 是否已赋值
                     * @return Descend 是否已赋值
                     * 
                     */
                    bool DescendHasBeenSet() const;

                private:

                    /**
                     * 排序字段，默认为CreateTime
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * true表示降序，false表示升序
                     */
                    bool m_descend;
                    bool m_descendHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_SORTBY_H_
