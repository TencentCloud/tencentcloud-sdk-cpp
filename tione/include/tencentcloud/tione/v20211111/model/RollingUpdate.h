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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_ROLLINGUPDATE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_ROLLINGUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/NumOrPercent.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 滚动更新策略
                */
                class RollingUpdate : public AbstractModel
                {
                public:
                    RollingUpdate();
                    ~RollingUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取滚动更新的最大不可用
                     * @return MaxUnavailable 滚动更新的最大不可用
                     * 
                     */
                    NumOrPercent GetMaxUnavailable() const;

                    /**
                     * 设置滚动更新的最大不可用
                     * @param _maxUnavailable 滚动更新的最大不可用
                     * 
                     */
                    void SetMaxUnavailable(const NumOrPercent& _maxUnavailable);

                    /**
                     * 判断参数 MaxUnavailable 是否已赋值
                     * @return MaxUnavailable 是否已赋值
                     * 
                     */
                    bool MaxUnavailableHasBeenSet() const;

                    /**
                     * 获取滚动更新的最大新增实例
                     * @return MaxSurge 滚动更新的最大新增实例
                     * 
                     */
                    NumOrPercent GetMaxSurge() const;

                    /**
                     * 设置滚动更新的最大新增实例
                     * @param _maxSurge 滚动更新的最大新增实例
                     * 
                     */
                    void SetMaxSurge(const NumOrPercent& _maxSurge);

                    /**
                     * 判断参数 MaxSurge 是否已赋值
                     * @return MaxSurge 是否已赋值
                     * 
                     */
                    bool MaxSurgeHasBeenSet() const;

                private:

                    /**
                     * 滚动更新的最大不可用
                     */
                    NumOrPercent m_maxUnavailable;
                    bool m_maxUnavailableHasBeenSet;

                    /**
                     * 滚动更新的最大新增实例
                     */
                    NumOrPercent m_maxSurge;
                    bool m_maxSurgeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_ROLLINGUPDATE_H_
