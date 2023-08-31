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

#ifndef TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPWHITELISTREQUEST_H_
#define TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20221115
        {
            namespace Model
            {
                /**
                * CreateBPWhiteList请求参数结构体
                */
                class CreateBPWhiteListRequest : public AbstractModel
                {
                public:
                    CreateBPWhiteListRequest();
                    ~CreateBPWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业Id
                     * @return CompanyId 企业Id
                     * 
                     */
                    int64_t GetCompanyId() const;

                    /**
                     * 设置企业Id
                     * @param _companyId 企业Id
                     * 
                     */
                    void SetCompanyId(const int64_t& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取白名单类型：0-网站 1-应用 2-公众号 3-小程
                     * @return WhiteListType 白名单类型：0-网站 1-应用 2-公众号 3-小程
                     * 
                     */
                    int64_t GetWhiteListType() const;

                    /**
                     * 设置白名单类型：0-网站 1-应用 2-公众号 3-小程
                     * @param _whiteListType 白名单类型：0-网站 1-应用 2-公众号 3-小程
                     * 
                     */
                    void SetWhiteListType(const int64_t& _whiteListType);

                    /**
                     * 判断参数 WhiteListType 是否已赋值
                     * @return WhiteListType 是否已赋值
                     * 
                     */
                    bool WhiteListTypeHasBeenSet() const;

                    /**
                     * 获取白名单名称
                     * @return WhiteLists 白名单名称
                     * 
                     */
                    std::vector<std::string> GetWhiteLists() const;

                    /**
                     * 设置白名单名称
                     * @param _whiteLists 白名单名称
                     * 
                     */
                    void SetWhiteLists(const std::vector<std::string>& _whiteLists);

                    /**
                     * 判断参数 WhiteLists 是否已赋值
                     * @return WhiteLists 是否已赋值
                     * 
                     */
                    bool WhiteListsHasBeenSet() const;

                    /**
                     * 获取白名单备注
                     * @return Remark 白名单备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置白名单备注
                     * @param _remark 白名单备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 企业Id
                     */
                    int64_t m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 白名单类型：0-网站 1-应用 2-公众号 3-小程
                     */
                    int64_t m_whiteListType;
                    bool m_whiteListTypeHasBeenSet;

                    /**
                     * 白名单名称
                     */
                    std::vector<std::string> m_whiteLists;
                    bool m_whiteListsHasBeenSet;

                    /**
                     * 白名单备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPWHITELISTREQUEST_H_
