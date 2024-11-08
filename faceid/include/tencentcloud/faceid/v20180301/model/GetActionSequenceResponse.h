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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETACTIONSEQUENCERESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETACTIONSEQUENCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetActionSequence返回参数结构体
                */
                class GetActionSequenceResponse : public AbstractModel
                {
                public:
                    GetActionSequenceResponse();
                    ~GetActionSequenceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取动作顺序，例如：2,1 or 1,2。
- 1代表张嘴，2代表闭眼。
                     * @return ActionSequence 动作顺序，例如：2,1 or 1,2。
- 1代表张嘴，2代表闭眼。
                     * 
                     */
                    std::string GetActionSequence() const;

                    /**
                     * 判断参数 ActionSequence 是否已赋值
                     * @return ActionSequence 是否已赋值
                     * 
                     */
                    bool ActionSequenceHasBeenSet() const;

                private:

                    /**
                     * 动作顺序，例如：2,1 or 1,2。
- 1代表张嘴，2代表闭眼。
                     */
                    std::string m_actionSequence;
                    bool m_actionSequenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETACTIONSEQUENCERESPONSE_H_
