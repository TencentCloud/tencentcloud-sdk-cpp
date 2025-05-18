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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTAPPREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListApp请求参数结构体
                */
                class ListAppRequest : public AbstractModel
                {
                public:
                    ListAppRequest();
                    ~ListAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用类型；knowledge_qa - 知识问答管理 
                     * @return AppType 应用类型；knowledge_qa - 知识问答管理 
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置应用类型；knowledge_qa - 知识问答管理 
                     * @param _appType 应用类型；knowledge_qa - 知识问答管理 
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取每页数目，整型
                     * @return PageSize 每页数目，整型
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数目，整型
                     * @param _pageSize 每页数目，整型
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取页码，整型
                     * @return PageNumber 页码，整型
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码，整型
                     * @param _pageNumber 页码，整型
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取关键词：应用/修改人
                     * @return Keyword 关键词：应用/修改人
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键词：应用/修改人
                     * @param _keyword 关键词：应用/修改人
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取登录用户子账号(集成商模式必填)	
                     * @return LoginSubAccountUin 登录用户子账号(集成商模式必填)	
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置登录用户子账号(集成商模式必填)	
                     * @param _loginSubAccountUin 登录用户子账号(集成商模式必填)	
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                private:

                    /**
                     * 应用类型；knowledge_qa - 知识问答管理 
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * 每页数目，整型
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 页码，整型
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 关键词：应用/修改人
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 登录用户子账号(集成商模式必填)	
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTAPPREQUEST_H_
