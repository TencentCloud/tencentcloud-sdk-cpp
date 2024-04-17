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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHDESCRIBEDOCUMENTREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHDESCRIBEDOCUMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * BatchDescribeDocument请求参数结构体
                */
                class BatchDescribeDocumentRequest : public AbstractModel
                {
                public:
                    BatchDescribeDocumentRequest();
                    ~BatchDescribeDocumentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取低代码互动课堂的SdkAppId。
                     * @return SdkAppId 低代码互动课堂的SdkAppId。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码互动课堂的SdkAppId。
                     * @param _sdkAppId 低代码互动课堂的SdkAppId。
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取分页查询当前页数，从1开始递增
                     * @return Page 分页查询当前页数，从1开始递增
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置分页查询当前页数，从1开始递增
                     * @param _page 分页查询当前页数，从1开始递增
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取每页数据量，最大200
                     * @return Limit 每页数据量，最大200
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数据量，最大200
                     * @param _limit 每页数据量，最大200
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取课件权限。[0]：获取owner的私有课件；[1]：获取owner的公开课件; [0,1]：则获取owner的私有课件和公开课件；[2]：获取owner的私有课件和所有人(包括owner)的公开课件
                     * @return Permission 课件权限。[0]：获取owner的私有课件；[1]：获取owner的公开课件; [0,1]：则获取owner的私有课件和公开课件；[2]：获取owner的私有课件和所有人(包括owner)的公开课件
                     * 
                     */
                    std::vector<uint64_t> GetPermission() const;

                    /**
                     * 设置课件权限。[0]：获取owner的私有课件；[1]：获取owner的公开课件; [0,1]：则获取owner的私有课件和公开课件；[2]：获取owner的私有课件和所有人(包括owner)的公开课件
                     * @param _permission 课件权限。[0]：获取owner的私有课件；[1]：获取owner的公开课件; [0,1]：则获取owner的私有课件和公开课件；[2]：获取owner的私有课件和所有人(包括owner)的公开课件
                     * 
                     */
                    void SetPermission(const std::vector<uint64_t>& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取课件所有者的user_id，不填默认获取SdkAppId下所有课件
                     * @return Owner 课件所有者的user_id，不填默认获取SdkAppId下所有课件
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置课件所有者的user_id，不填默认获取SdkAppId下所有课件
                     * @param _owner 课件所有者的user_id，不填默认获取SdkAppId下所有课件
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取课件名称搜索词
                     * @return Keyword 课件名称搜索词
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置课件名称搜索词
                     * @param _keyword 课件名称搜索词
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
                     * 获取课件id列表，从列表中查询，忽略错误的id
                     * @return DocumentId 课件id列表，从列表中查询，忽略错误的id
                     * 
                     */
                    std::vector<std::string> GetDocumentId() const;

                    /**
                     * 设置课件id列表，从列表中查询，忽略错误的id
                     * @param _documentId 课件id列表，从列表中查询，忽略错误的id
                     * 
                     */
                    void SetDocumentId(const std::vector<std::string>& _documentId);

                    /**
                     * 判断参数 DocumentId 是否已赋值
                     * @return DocumentId 是否已赋值
                     * 
                     */
                    bool DocumentIdHasBeenSet() const;

                private:

                    /**
                     * 低代码互动课堂的SdkAppId。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 分页查询当前页数，从1开始递增
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 每页数据量，最大200
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 课件权限。[0]：获取owner的私有课件；[1]：获取owner的公开课件; [0,1]：则获取owner的私有课件和公开课件；[2]：获取owner的私有课件和所有人(包括owner)的公开课件
                     */
                    std::vector<uint64_t> m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * 课件所有者的user_id，不填默认获取SdkAppId下所有课件
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 课件名称搜索词
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 课件id列表，从列表中查询，忽略错误的id
                     */
                    std::vector<std::string> m_documentId;
                    bool m_documentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHDESCRIBEDOCUMENTREQUEST_H_
