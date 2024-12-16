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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRASPRULESREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRASPRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyRaspRules请求参数结构体
                */
                class ModifyRaspRulesRequest : public AbstractModel
                {
                public:
                    ModifyRaspRulesRequest();
                    ~ModifyRaspRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则ID(新增时请留空，编辑时候必传)
                     * @return Id 规则ID(新增时请留空，编辑时候必传)
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则ID(新增时请留空，编辑时候必传)
                     * @param _id 规则ID(新增时请留空，编辑时候必传)
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取漏洞id数组
                     * @return VulVulsIDs 漏洞id数组
                     * 
                     */
                    std::vector<uint64_t> GetVulVulsIDs() const;

                    /**
                     * 设置漏洞id数组
                     * @param _vulVulsIDs 漏洞id数组
                     * 
                     */
                    void SetVulVulsIDs(const std::vector<uint64_t>& _vulVulsIDs);

                    /**
                     * 判断参数 VulVulsIDs 是否已赋值
                     * @return VulVulsIDs 是否已赋值
                     * 
                     */
                    bool VulVulsIDsHasBeenSet() const;

                    /**
                     * 获取自定义请求范围加白正则表达式，选择全部请求范围时候为空，否则不能为空，base64编码
                     * @return URLRegexp 自定义请求范围加白正则表达式，选择全部请求范围时候为空，否则不能为空，base64编码
                     * 
                     */
                    std::string GetURLRegexp() const;

                    /**
                     * 设置自定义请求范围加白正则表达式，选择全部请求范围时候为空，否则不能为空，base64编码
                     * @param _uRLRegexp 自定义请求范围加白正则表达式，选择全部请求范围时候为空，否则不能为空，base64编码
                     * 
                     */
                    void SetURLRegexp(const std::string& _uRLRegexp);

                    /**
                     * 判断参数 URLRegexp 是否已赋值
                     * @return URLRegexp 是否已赋值
                     * 
                     */
                    bool URLRegexpHasBeenSet() const;

                    /**
                     * 获取加白方式，0：自定义请求范围加白。1：全部请求加白
                     * @return WhiteType 加白方式，0：自定义请求范围加白。1：全部请求加白
                     * 
                     */
                    uint64_t GetWhiteType() const;

                    /**
                     * 设置加白方式，0：自定义请求范围加白。1：全部请求加白
                     * @param _whiteType 加白方式，0：自定义请求范围加白。1：全部请求加白
                     * 
                     */
                    void SetWhiteType(const uint64_t& _whiteType);

                    /**
                     * 判断参数 WhiteType 是否已赋值
                     * @return WhiteType 是否已赋值
                     * 
                     */
                    bool WhiteTypeHasBeenSet() const;

                private:

                    /**
                     * 规则ID(新增时请留空，编辑时候必传)
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 漏洞id数组
                     */
                    std::vector<uint64_t> m_vulVulsIDs;
                    bool m_vulVulsIDsHasBeenSet;

                    /**
                     * 自定义请求范围加白正则表达式，选择全部请求范围时候为空，否则不能为空，base64编码
                     */
                    std::string m_uRLRegexp;
                    bool m_uRLRegexpHasBeenSet;

                    /**
                     * 加白方式，0：自定义请求范围加白。1：全部请求加白
                     */
                    uint64_t m_whiteType;
                    bool m_whiteTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRASPRULESREQUEST_H_
