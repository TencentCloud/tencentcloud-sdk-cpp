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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_CONTEXT_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_CONTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/NetworkData.h>
#include <tencentcloud/mna/v20210119/model/ExpectedThreshold.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * 加速策略关键数据
                */
                class Context : public AbstractModel
                {
                public:
                    Context();
                    ~Context() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取测速数据
                     * @return NetworkData 测速数据
                     */
                    NetworkData GetNetworkData() const;

                    /**
                     * 设置测速数据
                     * @param NetworkData 测速数据
                     */
                    void SetNetworkData(const NetworkData& _networkData);

                    /**
                     * 判断参数 NetworkData 是否已赋值
                     * @return NetworkData 是否已赋值
                     */
                    bool NetworkDataHasBeenSet() const;

                    /**
                     * 获取用户期望最低门限
                     * @return ExpectedLowThreshold 用户期望最低门限
                     */
                    ExpectedThreshold GetExpectedLowThreshold() const;

                    /**
                     * 设置用户期望最低门限
                     * @param ExpectedLowThreshold 用户期望最低门限
                     */
                    void SetExpectedLowThreshold(const ExpectedThreshold& _expectedLowThreshold);

                    /**
                     * 判断参数 ExpectedLowThreshold 是否已赋值
                     * @return ExpectedLowThreshold 是否已赋值
                     */
                    bool ExpectedLowThresholdHasBeenSet() const;

                    /**
                     * 获取用户期望最高门限
                     * @return ExpectedHighThreshold 用户期望最高门限
                     */
                    ExpectedThreshold GetExpectedHighThreshold() const;

                    /**
                     * 设置用户期望最高门限
                     * @param ExpectedHighThreshold 用户期望最高门限
                     */
                    void SetExpectedHighThreshold(const ExpectedThreshold& _expectedHighThreshold);

                    /**
                     * 判断参数 ExpectedHighThreshold 是否已赋值
                     * @return ExpectedHighThreshold 是否已赋值
                     */
                    bool ExpectedHighThresholdHasBeenSet() const;

                private:

                    /**
                     * 测速数据
                     */
                    NetworkData m_networkData;
                    bool m_networkDataHasBeenSet;

                    /**
                     * 用户期望最低门限
                     */
                    ExpectedThreshold m_expectedLowThreshold;
                    bool m_expectedLowThresholdHasBeenSet;

                    /**
                     * 用户期望最高门限
                     */
                    ExpectedThreshold m_expectedHighThreshold;
                    bool m_expectedHighThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_CONTEXT_H_
