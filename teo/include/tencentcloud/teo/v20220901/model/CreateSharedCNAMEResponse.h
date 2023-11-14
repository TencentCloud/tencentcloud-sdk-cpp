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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATESHAREDCNAMERESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATESHAREDCNAMERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateSharedCNAME返回参数结构体
                */
                class CreateSharedCNAMEResponse : public AbstractModel
                {
                public:
                    CreateSharedCNAMEResponse();
                    ~CreateSharedCNAMEResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取共享 CNAME。格式为：`<自定义前缀>+<ZoneId中的12位随机字符串>+share.dnse[0-5].com`。
                     * @return SharedCNAME 共享 CNAME。格式为：`<自定义前缀>+<ZoneId中的12位随机字符串>+share.dnse[0-5].com`。
                     * 
                     */
                    std::string GetSharedCNAME() const;

                    /**
                     * 判断参数 SharedCNAME 是否已赋值
                     * @return SharedCNAME 是否已赋值
                     * 
                     */
                    bool SharedCNAMEHasBeenSet() const;

                private:

                    /**
                     * 共享 CNAME。格式为：`<自定义前缀>+<ZoneId中的12位随机字符串>+share.dnse[0-5].com`。
                     */
                    std::string m_sharedCNAME;
                    bool m_sharedCNAMEHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATESHAREDCNAMERESPONSE_H_
