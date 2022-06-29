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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVSUGGESTIONSRESPONSE_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVSUGGESTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/KTVSuggestionInfo.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * DescribeKTVSuggestions返回参数结构体
                */
                class DescribeKTVSuggestionsResponse : public AbstractModel
                {
                public:
                    DescribeKTVSuggestionsResponse();
                    ~DescribeKTVSuggestionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取联想词信息列表。返回总数最大为10。
                     * @return KTVSuggestionInfoSet 联想词信息列表。返回总数最大为10。
                     */
                    std::vector<KTVSuggestionInfo> GetKTVSuggestionInfoSet() const;

                    /**
                     * 判断参数 KTVSuggestionInfoSet 是否已赋值
                     * @return KTVSuggestionInfoSet 是否已赋值
                     */
                    bool KTVSuggestionInfoSetHasBeenSet() const;

                private:

                    /**
                     * 联想词信息列表。返回总数最大为10。
                     */
                    std::vector<KTVSuggestionInfo> m_kTVSuggestionInfoSet;
                    bool m_kTVSuggestionInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVSUGGESTIONSRESPONSE_H_
