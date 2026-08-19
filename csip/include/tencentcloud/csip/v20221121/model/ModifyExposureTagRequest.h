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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEXPOSURETAGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEXPOSURETAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyExposureTag请求参数结构体
                */
                class ModifyExposureTagRequest : public AbstractModel
                {
                public:
                    ModifyExposureTagRequest();
                    ~ModifyExposureTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云边界分析ID集合
                     * @return ExposureIDs 云边界分析ID集合
                     * 
                     */
                    std::vector<uint64_t> GetExposureIDs() const;

                    /**
                     * 设置云边界分析ID集合
                     * @param _exposureIDs 云边界分析ID集合
                     * 
                     */
                    void SetExposureIDs(const std::vector<uint64_t>& _exposureIDs);

                    /**
                     * 判断参数 ExposureIDs 是否已赋值
                     * @return ExposureIDs 是否已赋值
                     * 
                     */
                    bool ExposureIDsHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tag 标签
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置标签
                     * @param _tag 标签
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
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
                     * 获取备注
                     * @return Comment 备注
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置备注
                     * @param _comment 备注
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * 云边界分析ID集合
                     */
                    std::vector<uint64_t> m_exposureIDs;
                    bool m_exposureIDsHasBeenSet;

                    /**
                     * 标签
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEXPOSURETAGREQUEST_H_
