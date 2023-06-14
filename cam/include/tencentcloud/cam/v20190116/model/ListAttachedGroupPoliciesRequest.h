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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDGROUPPOLICIESREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDGROUPPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ListAttachedGroupPolicies请求参数结构体
                */
                class ListAttachedGroupPoliciesRequest : public AbstractModel
                {
                public:
                    ListAttachedGroupPoliciesRequest();
                    ~ListAttachedGroupPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户组ID
                     * @return TargetGroupId 用户组ID
                     * 
                     */
                    uint64_t GetTargetGroupId() const;

                    /**
                     * 设置用户组ID
                     * @param _targetGroupId 用户组ID
                     * 
                     */
                    void SetTargetGroupId(const uint64_t& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取页码，默认值是 1，从 1 开始
                     * @return Page 页码，默认值是 1，从 1 开始
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置页码，默认值是 1，从 1 开始
                     * @param _page 页码，默认值是 1，从 1 开始
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取每页大小，默认值是 20
                     * @return Rp 每页大小，默认值是 20
                     * 
                     */
                    uint64_t GetRp() const;

                    /**
                     * 设置每页大小，默认值是 20
                     * @param _rp 每页大小，默认值是 20
                     * 
                     */
                    void SetRp(const uint64_t& _rp);

                    /**
                     * 判断参数 Rp 是否已赋值
                     * @return Rp 是否已赋值
                     * 
                     */
                    bool RpHasBeenSet() const;

                    /**
                     * 获取搜索关键字
                     * @return Keyword 搜索关键字
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置搜索关键字
                     * @param _keyword 搜索关键字
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * 用户组ID
                     */
                    uint64_t m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * 页码，默认值是 1，从 1 开始
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 每页大小，默认值是 20
                     */
                    uint64_t m_rp;
                    bool m_rpHasBeenSet;

                    /**
                     * 搜索关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDGROUPPOLICIESREQUEST_H_
