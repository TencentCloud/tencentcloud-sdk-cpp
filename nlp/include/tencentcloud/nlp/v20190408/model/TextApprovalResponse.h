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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_TEXTAPPROVALRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_TEXTAPPROVALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/EvilToken.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * TextApproval返回参数结构体
                */
                class TextApprovalResponse : public AbstractModel
                {
                public:
                    TextApprovalResponse();
                    ~TextApprovalResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取文本审核输出结果列表，列表每个元素包含以下信息：

EvilFlag（文本恶意等级）：
0、正常；
1、恶意；
2、可疑送审

EvilType（文本恶意类型）：
0、正常；
1、政治；
2、色情；
3、辱骂/低俗；
4、暴恐/毒品；
5、广告/灌水；
6、迷信/邪教；
7、其他违法（如跨站追杀/恶意竞争等）；
8、综合；
9、联系方式/链接

EvilKeywords（恶意关键词组）
                     * @return EvilTokens 文本审核输出结果列表，列表每个元素包含以下信息：

EvilFlag（文本恶意等级）：
0、正常；
1、恶意；
2、可疑送审

EvilType（文本恶意类型）：
0、正常；
1、政治；
2、色情；
3、辱骂/低俗；
4、暴恐/毒品；
5、广告/灌水；
6、迷信/邪教；
7、其他违法（如跨站追杀/恶意竞争等）；
8、综合；
9、联系方式/链接

EvilKeywords（恶意关键词组）
                     */
                    std::vector<EvilToken> GetEvilTokens() const;

                    /**
                     * 判断参数 EvilTokens 是否已赋值
                     * @return EvilTokens 是否已赋值
                     */
                    bool EvilTokensHasBeenSet() const;

                private:

                    /**
                     * 文本审核输出结果列表，列表每个元素包含以下信息：

EvilFlag（文本恶意等级）：
0、正常；
1、恶意；
2、可疑送审

EvilType（文本恶意类型）：
0、正常；
1、政治；
2、色情；
3、辱骂/低俗；
4、暴恐/毒品；
5、广告/灌水；
6、迷信/邪教；
7、其他违法（如跨站追杀/恶意竞争等）；
8、综合；
9、联系方式/链接

EvilKeywords（恶意关键词组）
                     */
                    std::vector<EvilToken> m_evilTokens;
                    bool m_evilTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_TEXTAPPROVALRESPONSE_H_
