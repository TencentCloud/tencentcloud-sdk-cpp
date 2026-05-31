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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEDETECTCONTINUOUSRESULT_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEDETECTCONTINUOUSRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 标签持续检测结果
                */
                class SeeDetectContinuousResult : public AbstractModel
                {
                public:
                    SeeDetectContinuousResult();
                    ~SeeDetectContinuousResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检测标签是否在当前区间内持续
                     * @return IsContinuousInRange 检测标签是否在当前区间内持续
                     * 
                     */
                    bool GetIsContinuousInRange() const;

                    /**
                     * 设置检测标签是否在当前区间内持续
                     * @param _isContinuousInRange 检测标签是否在当前区间内持续
                     * 
                     */
                    void SetIsContinuousInRange(const bool& _isContinuousInRange);

                    /**
                     * 判断参数 IsContinuousInRange 是否已赋值
                     * @return IsContinuousInRange 是否已赋值
                     * 
                     */
                    bool IsContinuousInRangeHasBeenSet() const;

                private:

                    /**
                     * 检测标签是否在当前区间内持续
                     */
                    bool m_isContinuousInRange;
                    bool m_isContinuousInRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEDETECTCONTINUOUSRESULT_H_
