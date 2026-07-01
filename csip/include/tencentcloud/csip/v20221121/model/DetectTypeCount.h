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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DETECTTYPECOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DETECTTYPECOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * EDR-检测方式对应策略数量
                */
                class DetectTypeCount : public AbstractModel
                {
                public:
                    DetectTypeCount();
                    ~DetectTypeCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>检测方式，0：主机检测，1：网络检测</p>
                     * @return DetectType <p>检测方式，0：主机检测，1：网络检测</p>
                     * 
                     */
                    int64_t GetDetectType() const;

                    /**
                     * 设置<p>检测方式，0：主机检测，1：网络检测</p>
                     * @param _detectType <p>检测方式，0：主机检测，1：网络检测</p>
                     * 
                     */
                    void SetDetectType(const int64_t& _detectType);

                    /**
                     * 判断参数 DetectType 是否已赋值
                     * @return DetectType 是否已赋值
                     * 
                     */
                    bool DetectTypeHasBeenSet() const;

                    /**
                     * 获取<p>策略数量</p>
                     * @return Count <p>策略数量</p>
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>策略数量</p>
                     * @param _count <p>策略数量</p>
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
                     * <p>检测方式，0：主机检测，1：网络检测</p>
                     */
                    int64_t m_detectType;
                    bool m_detectTypeHasBeenSet;

                    /**
                     * <p>策略数量</p>
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DETECTTYPECOUNT_H_
