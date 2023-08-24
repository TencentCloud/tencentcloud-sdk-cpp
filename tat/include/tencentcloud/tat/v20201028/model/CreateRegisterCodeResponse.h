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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_CREATEREGISTERCODERESPONSE_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_CREATEREGISTERCODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreateRegisterCode返回参数结构体
                */
                class CreateRegisterCodeResponse : public AbstractModel
                {
                public:
                    CreateRegisterCodeResponse();
                    ~CreateRegisterCodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取注册码ID。
                     * @return RegisterCodeId 注册码ID。
                     * 
                     */
                    std::string GetRegisterCodeId() const;

                    /**
                     * 判断参数 RegisterCodeId 是否已赋值
                     * @return RegisterCodeId 是否已赋值
                     * 
                     */
                    bool RegisterCodeIdHasBeenSet() const;

                    /**
                     * 获取注册码值。
                     * @return RegisterCodeValue 注册码值。
                     * 
                     */
                    std::string GetRegisterCodeValue() const;

                    /**
                     * 判断参数 RegisterCodeValue 是否已赋值
                     * @return RegisterCodeValue 是否已赋值
                     * 
                     */
                    bool RegisterCodeValueHasBeenSet() const;

                private:

                    /**
                     * 注册码ID。
                     */
                    std::string m_registerCodeId;
                    bool m_registerCodeIdHasBeenSet;

                    /**
                     * 注册码值。
                     */
                    std::string m_registerCodeValue;
                    bool m_registerCodeValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_CREATEREGISTERCODERESPONSE_H_
