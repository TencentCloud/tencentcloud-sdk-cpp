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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDUSERPOLICIESREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDUSERPOLICIESREQUEST_H_

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
                * ListAttachedUserPolicies请求参数结构体
                */
                class ListAttachedUserPoliciesRequest : public AbstractModel
                {
                public:
                    ListAttachedUserPoliciesRequest();
                    ~ListAttachedUserPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取子账号 uin
                     * @return TargetUin 子账号 uin
                     * 
                     */
                    uint64_t GetTargetUin() const;

                    /**
                     * 设置子账号 uin
                     * @param _targetUin 子账号 uin
                     * 
                     */
                    void SetTargetUin(const uint64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

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

                private:

                    /**
                     * 子账号 uin
                     */
                    uint64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDUSERPOLICIESREQUEST_H_
