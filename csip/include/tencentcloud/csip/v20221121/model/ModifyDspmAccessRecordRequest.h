/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMACCESSRECORDREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMACCESSRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmAccessRecordId.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyDspmAccessRecord请求参数结构体
                */
                class ModifyDspmAccessRecordRequest : public AbstractModel
                {
                public:
                    ModifyDspmAccessRecordRequest();
                    ~ModifyDspmAccessRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团账号的成员id
                     * @return MemberId 集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员id
                     * @param _memberId 集团账号的成员id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取来源ip
                     * @return Id 来源ip
                     * 
                     */
                    std::vector<DspmAccessRecordId> GetId() const;

                    /**
                     * 设置来源ip
                     * @param _id 来源ip
                     * 
                     */
                    void SetId(const std::vector<DspmAccessRecordId>& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取视图。ip或instance
                     * @return View 视图。ip或instance
                     * 
                     */
                    std::string GetView() const;

                    /**
                     * 设置视图。ip或instance
                     * @param _view 视图。ip或instance
                     * 
                     */
                    void SetView(const std::string& _view);

                    /**
                     * 判断参数 View 是否已赋值
                     * @return View 是否已赋值
                     * 
                     */
                    bool ViewHasBeenSet() const;

                    /**
                     * 获取阅读标记。 1-已阅
                     * @return Noted 阅读标记。 1-已阅
                     * 
                     */
                    int64_t GetNoted() const;

                    /**
                     * 设置阅读标记。 1-已阅
                     * @param _noted 阅读标记。 1-已阅
                     * 
                     */
                    void SetNoted(const int64_t& _noted);

                    /**
                     * 判断参数 Noted 是否已赋值
                     * @return Noted 是否已赋值
                     * 
                     */
                    bool NotedHasBeenSet() const;

                private:

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 来源ip
                     */
                    std::vector<DspmAccessRecordId> m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 视图。ip或instance
                     */
                    std::string m_view;
                    bool m_viewHasBeenSet;

                    /**
                     * 阅读标记。 1-已阅
                     */
                    int64_t m_noted;
                    bool m_notedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMACCESSRECORDREQUEST_H_
