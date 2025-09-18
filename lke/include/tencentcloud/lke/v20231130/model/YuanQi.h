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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_YUANQI_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_YUANQI_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * //智能体应用可见范围，public-所有人可见 private-仅自己可见 share-通过分享可见
                */
                class YuanQi : public AbstractModel
                {
                public:
                    YuanQi();
                    ~YuanQi() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取public-所有人可见
                     * @return VisibleRange public-所有人可见
                     * 
                     */
                    std::string GetVisibleRange() const;

                    /**
                     * 设置public-所有人可见
                     * @param _visibleRange public-所有人可见
                     * 
                     */
                    void SetVisibleRange(const std::string& _visibleRange);

                    /**
                     * 判断参数 VisibleRange 是否已赋值
                     * @return VisibleRange 是否已赋值
                     * 
                     */
                    bool VisibleRangeHasBeenSet() const;

                private:

                    /**
                     * public-所有人可见
                     */
                    std::string m_visibleRange;
                    bool m_visibleRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_YUANQI_H_
