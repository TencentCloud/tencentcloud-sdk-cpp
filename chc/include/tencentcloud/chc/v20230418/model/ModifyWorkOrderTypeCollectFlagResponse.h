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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_MODIFYWORKORDERTYPECOLLECTFLAGRESPONSE_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_MODIFYWORKORDERTYPECOLLECTFLAGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyWorkOrderTypeCollectFlag返回参数结构体
                */
                class ModifyWorkOrderTypeCollectFlagResponse : public AbstractModel
                {
                public:
                    ModifyWorkOrderTypeCollectFlagResponse();
                    ~ModifyWorkOrderTypeCollectFlagResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取工单类型当前的收藏状态
                     * @return CurrentCollectFlag 工单类型当前的收藏状态
                     * 
                     */
                    bool GetCurrentCollectFlag() const;

                    /**
                     * 判断参数 CurrentCollectFlag 是否已赋值
                     * @return CurrentCollectFlag 是否已赋值
                     * 
                     */
                    bool CurrentCollectFlagHasBeenSet() const;

                private:

                    /**
                     * 工单类型当前的收藏状态
                     */
                    bool m_currentCollectFlag;
                    bool m_currentCollectFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_MODIFYWORKORDERTYPECOLLECTFLAGRESPONSE_H_
