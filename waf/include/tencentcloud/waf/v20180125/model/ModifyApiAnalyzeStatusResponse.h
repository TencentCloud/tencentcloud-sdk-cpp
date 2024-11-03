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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAPIANALYZESTATUSRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAPIANALYZESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyApiAnalyzeStatus返回参数结构体
                */
                class ModifyApiAnalyzeStatusResponse : public AbstractModel
                {
                public:
                    ModifyApiAnalyzeStatusResponse();
                    ~ModifyApiAnalyzeStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取已经开启的数量,如果返回值为3（大于支持的域名开启数量），则表示开启失败
                     * @return Count 已经开启的数量,如果返回值为3（大于支持的域名开启数量），则表示开启失败
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取不支持开启的域名列表
                     * @return UnSupportedList 不支持开启的域名列表
                     * 
                     */
                    std::vector<std::string> GetUnSupportedList() const;

                    /**
                     * 判断参数 UnSupportedList 是否已赋值
                     * @return UnSupportedList 是否已赋值
                     * 
                     */
                    bool UnSupportedListHasBeenSet() const;

                    /**
                     * 获取开启/关闭失败的域名列表
                     * @return FailDomainList 开启/关闭失败的域名列表
                     * 
                     */
                    std::vector<std::string> GetFailDomainList() const;

                    /**
                     * 判断参数 FailDomainList 是否已赋值
                     * @return FailDomainList 是否已赋值
                     * 
                     */
                    bool FailDomainListHasBeenSet() const;

                private:

                    /**
                     * 已经开启的数量,如果返回值为3（大于支持的域名开启数量），则表示开启失败
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 不支持开启的域名列表
                     */
                    std::vector<std::string> m_unSupportedList;
                    bool m_unSupportedListHasBeenSet;

                    /**
                     * 开启/关闭失败的域名列表
                     */
                    std::vector<std::string> m_failDomainList;
                    bool m_failDomainListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAPIANALYZESTATUSRESPONSE_H_
