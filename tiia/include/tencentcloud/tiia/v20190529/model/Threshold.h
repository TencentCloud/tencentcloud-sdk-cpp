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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_THRESHOLD_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_THRESHOLD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * 本服务在不同误识率水平下（将图片中的人物识别错误的比例）的推荐阈值，可以用于控制识别结果的精度。
{FalseRate1Percent, FalseRate5Permil, FalseRate1Permil}分别代表误识率在百分之一、千分之五、千分之一情况下的推荐阈值。
因为阈值会存在变动，请勿将此处输出的固定值处理，而是每次取值与confidence对比，来判断本次的识别结果是否可信。
例如，如果您业务中可以接受的误识率是1%，则可以将所有confidence>=FalseRate1Percent的结论认为是正确的。
                */
                class Threshold : public AbstractModel
                {
                public:
                    Threshold();
                    ~Threshold() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取误识率在百分之一时的推荐阈值。
                     * @return FalseRate1Percent 误识率在百分之一时的推荐阈值。
                     */
                    int64_t GetFalseRate1Percent() const;

                    /**
                     * 设置误识率在百分之一时的推荐阈值。
                     * @param FalseRate1Percent 误识率在百分之一时的推荐阈值。
                     */
                    void SetFalseRate1Percent(const int64_t& _falseRate1Percent);

                    /**
                     * 判断参数 FalseRate1Percent 是否已赋值
                     * @return FalseRate1Percent 是否已赋值
                     */
                    bool FalseRate1PercentHasBeenSet() const;

                    /**
                     * 获取误识率在千分之五时的推荐阈值。
                     * @return FalseRate5Permil 误识率在千分之五时的推荐阈值。
                     */
                    int64_t GetFalseRate5Permil() const;

                    /**
                     * 设置误识率在千分之五时的推荐阈值。
                     * @param FalseRate5Permil 误识率在千分之五时的推荐阈值。
                     */
                    void SetFalseRate5Permil(const int64_t& _falseRate5Permil);

                    /**
                     * 判断参数 FalseRate5Permil 是否已赋值
                     * @return FalseRate5Permil 是否已赋值
                     */
                    bool FalseRate5PermilHasBeenSet() const;

                    /**
                     * 获取误识率在千分之一时的推荐阈值。
                     * @return FalseRate1Permil 误识率在千分之一时的推荐阈值。
                     */
                    int64_t GetFalseRate1Permil() const;

                    /**
                     * 设置误识率在千分之一时的推荐阈值。
                     * @param FalseRate1Permil 误识率在千分之一时的推荐阈值。
                     */
                    void SetFalseRate1Permil(const int64_t& _falseRate1Permil);

                    /**
                     * 判断参数 FalseRate1Permil 是否已赋值
                     * @return FalseRate1Permil 是否已赋值
                     */
                    bool FalseRate1PermilHasBeenSet() const;

                private:

                    /**
                     * 误识率在百分之一时的推荐阈值。
                     */
                    int64_t m_falseRate1Percent;
                    bool m_falseRate1PercentHasBeenSet;

                    /**
                     * 误识率在千分之五时的推荐阈值。
                     */
                    int64_t m_falseRate5Permil;
                    bool m_falseRate5PermilHasBeenSet;

                    /**
                     * 误识率在千分之一时的推荐阈值。
                     */
                    int64_t m_falseRate1Permil;
                    bool m_falseRate1PermilHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_THRESHOLD_H_
