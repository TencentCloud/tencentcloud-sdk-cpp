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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBECATALOGAPPROVERSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBECATALOGAPPROVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * DescribeCatalogApprovers请求参数结构体
                */
                class DescribeCatalogApproversRequest : public AbstractModel
                {
                public:
                    DescribeCatalogApproversRequest();
                    ~DescribeCatalogApproversRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方信息
                     * @return Caller 调用方信息
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息
                     * @param _caller 调用方信息
                     * 
                     */
                    void SetCaller(const Caller& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取目录ID
                     * @return CatalogId 目录ID
                     * 
                     */
                    std::string GetCatalogId() const;

                    /**
                     * 设置目录ID
                     * @param _catalogId 目录ID
                     * 
                     */
                    void SetCatalogId(const std::string& _catalogId);

                    /**
                     * 判断参数 CatalogId 是否已赋值
                     * @return CatalogId 是否已赋值
                     * 
                     */
                    bool CatalogIdHasBeenSet() const;

                    /**
                     * 获取查询指定用户是否为参与者,为空表示查询所有参与者
                     * @return UserId 查询指定用户是否为参与者,为空表示查询所有参与者
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置查询指定用户是否为参与者,为空表示查询所有参与者
                     * @param _userId 查询指定用户是否为参与者,为空表示查询所有参与者
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 目录ID
                     */
                    std::string m_catalogId;
                    bool m_catalogIdHasBeenSet;

                    /**
                     * 查询指定用户是否为参与者,为空表示查询所有参与者
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBECATALOGAPPROVERSREQUEST_H_
