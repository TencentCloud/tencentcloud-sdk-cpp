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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTGROUPSFORUSERREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTGROUPSFORUSERREQUEST_H_

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
                * ListGroupsForUser请求参数结构体
                */
                class ListGroupsForUserRequest : public AbstractModel
                {
                public:
                    ListGroupsForUserRequest();
                    ~ListGroupsForUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取子用户 UID，入参Uid和SubUin二选一
                     * @return Uid 子用户 UID，入参Uid和SubUin二选一
                     * 
                     */
                    uint64_t GetUid() const;

                    /**
                     * 设置子用户 UID，入参Uid和SubUin二选一
                     * @param _uid 子用户 UID，入参Uid和SubUin二选一
                     * 
                     */
                    void SetUid(const uint64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取每页数量。默认为20。
                     * @return Rp 每页数量。默认为20。
                     * 
                     */
                    uint64_t GetRp() const;

                    /**
                     * 设置每页数量。默认为20。
                     * @param _rp 每页数量。默认为20。
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
                     * 获取页码。默认为1。
                     * @return Page 页码。默认为1。
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置页码。默认为1。
                     * @param _page 页码。默认为1。
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
                     * 获取子账号UIN，入参Uid和SubUin二选一
                     * @return SubUin 子账号UIN，入参Uid和SubUin二选一
                     * 
                     */
                    uint64_t GetSubUin() const;

                    /**
                     * 设置子账号UIN，入参Uid和SubUin二选一
                     * @param _subUin 子账号UIN，入参Uid和SubUin二选一
                     * 
                     */
                    void SetSubUin(const uint64_t& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                private:

                    /**
                     * 子用户 UID，入参Uid和SubUin二选一
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 每页数量。默认为20。
                     */
                    uint64_t m_rp;
                    bool m_rpHasBeenSet;

                    /**
                     * 页码。默认为1。
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 子账号UIN，入参Uid和SubUin二选一
                     */
                    uint64_t m_subUin;
                    bool m_subUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTGROUPSFORUSERREQUEST_H_
