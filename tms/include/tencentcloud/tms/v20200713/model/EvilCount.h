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

#ifndef TENCENTCLOUD_TMS_V20200713_MODEL_EVILCOUNT_H_
#define TENCENTCLOUD_TMS_V20200713_MODEL_EVILCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20200713
        {
            namespace Model
            {
                /**
                * 违规数据分布
                */
                class EvilCount : public AbstractModel
                {
                public:
                    EvilCount();
                    ~EvilCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取----非必选，该参数功能暂未对外开放
                     * @return EvilType ----非必选，该参数功能暂未对外开放
                     * 
                     */
                    std::string GetEvilType() const;

                    /**
                     * 设置----非必选，该参数功能暂未对外开放
                     * @param _evilType ----非必选，该参数功能暂未对外开放
                     * 
                     */
                    void SetEvilType(const std::string& _evilType);

                    /**
                     * 判断参数 EvilType 是否已赋值
                     * @return EvilType 是否已赋值
                     * 
                     */
                    bool EvilTypeHasBeenSet() const;

                    /**
                     * 获取分布类型总量
                     * @return Count 分布类型总量
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置分布类型总量
                     * @param _count 分布类型总量
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * ----非必选，该参数功能暂未对外开放
                     */
                    std::string m_evilType;
                    bool m_evilTypeHasBeenSet;

                    /**
                     * 分布类型总量
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20200713_MODEL_EVILCOUNT_H_
