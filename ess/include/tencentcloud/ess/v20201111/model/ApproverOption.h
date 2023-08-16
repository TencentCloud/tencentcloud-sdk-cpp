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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_APPROVEROPTION_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_APPROVEROPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 签署人个性化能力信息
                */
                class ApproverOption : public AbstractModel
                {
                public:
                    ApproverOption();
                    ~ApproverOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署方是否可以拒签

- false: ( 默认)可以拒签 
- true:不可以拒签
                     * @return NoRefuse 签署方是否可以拒签

- false: ( 默认)可以拒签 
- true:不可以拒签
                     * 
                     */
                    bool GetNoRefuse() const;

                    /**
                     * 设置签署方是否可以拒签

- false: ( 默认)可以拒签 
- true:不可以拒签
                     * @param _noRefuse 签署方是否可以拒签

- false: ( 默认)可以拒签 
- true:不可以拒签
                     * 
                     */
                    void SetNoRefuse(const bool& _noRefuse);

                    /**
                     * 判断参数 NoRefuse 是否已赋值
                     * @return NoRefuse 是否已赋值
                     * 
                     */
                    bool NoRefuseHasBeenSet() const;

                    /**
                     * 获取签署方是否可以转他人处理

- false: ( 默认)可以转他人处理
- true:不可以转他人处理
                     * @return NoTransfer 签署方是否可以转他人处理

- false: ( 默认)可以转他人处理
- true:不可以转他人处理
                     * 
                     */
                    bool GetNoTransfer() const;

                    /**
                     * 设置签署方是否可以转他人处理

- false: ( 默认)可以转他人处理
- true:不可以转他人处理
                     * @param _noTransfer 签署方是否可以转他人处理

- false: ( 默认)可以转他人处理
- true:不可以转他人处理
                     * 
                     */
                    void SetNoTransfer(const bool& _noTransfer);

                    /**
                     * 判断参数 NoTransfer 是否已赋值
                     * @return NoTransfer 是否已赋值
                     * 
                     */
                    bool NoTransferHasBeenSet() const;

                private:

                    /**
                     * 签署方是否可以拒签

- false: ( 默认)可以拒签 
- true:不可以拒签
                     */
                    bool m_noRefuse;
                    bool m_noRefuseHasBeenSet;

                    /**
                     * 签署方是否可以转他人处理

- false: ( 默认)可以转他人处理
- true:不可以转他人处理
                     */
                    bool m_noTransfer;
                    bool m_noTransferHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_APPROVEROPTION_H_
