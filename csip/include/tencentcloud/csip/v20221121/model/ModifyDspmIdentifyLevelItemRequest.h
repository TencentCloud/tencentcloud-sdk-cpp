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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMIDENTIFYLEVELITEMREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMIDENTIFYLEVELITEMREQUEST_H_

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
                * ModifyDspmIdentifyLevelItem请求参数结构体
                */
                class ModifyDspmIdentifyLevelItemRequest : public AbstractModel
                {
                public:
                    ModifyDspmIdentifyLevelItemRequest();
                    ~ModifyDspmIdentifyLevelItemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>级别组id</p>
                     * @return Id <p>级别组id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>级别组id</p>
                     * @param _id <p>级别组id</p>
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
                     * 获取<p>级别组名称</p>
                     * @return Name <p>级别组名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>级别组名称</p>
                     * @param _name <p>级别组名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

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
                     * 获取<p>敏感程度分</p><p>取值范围：[1, 10]</p><p>单位：敏感程度</p>
                     * @return LevelScore <p>敏感程度分</p><p>取值范围：[1, 10]</p><p>单位：敏感程度</p>
                     * 
                     */
                    uint64_t GetLevelScore() const;

                    /**
                     * 设置<p>敏感程度分</p><p>取值范围：[1, 10]</p><p>单位：敏感程度</p>
                     * @param _levelScore <p>敏感程度分</p><p>取值范围：[1, 10]</p><p>单位：敏感程度</p>
                     * 
                     */
                    void SetLevelScore(const uint64_t& _levelScore);

                    /**
                     * 判断参数 LevelScore 是否已赋值
                     * @return LevelScore 是否已赋值
                     * 
                     */
                    bool LevelScoreHasBeenSet() const;

                private:

                    /**
                     * <p>级别组id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>级别组名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>敏感程度分</p><p>取值范围：[1, 10]</p><p>单位：敏感程度</p>
                     */
                    uint64_t m_levelScore;
                    bool m_levelScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMIDENTIFYLEVELITEMREQUEST_H_
