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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_FOLLOWUSER_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_FOLLOWUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wav/v20210129/model/ExternalContactTag.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 添加了此外部联系人的企业成员信息
                */
                class FollowUser : public AbstractModel
                {
                public:
                    FollowUser();
                    ~FollowUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取添加了此外部联系人的企业成员userid
                     * @return UserId 添加了此外部联系人的企业成员userid
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置添加了此外部联系人的企业成员userid
                     * @param _userId 添加了此外部联系人的企业成员userid
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取该成员对此外部联系人的备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 该成员对此外部联系人的备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置该成员对此外部联系人的备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 该成员对此外部联系人的备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取该成员对此外部联系人的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 该成员对此外部联系人的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置该成员对此外部联系人的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 该成员对此外部联系人的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取该成员添加此外部联系人的时间戳，单位为秒
                     * @return CreateTime 该成员添加此外部联系人的时间戳，单位为秒
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置该成员添加此外部联系人的时间戳，单位为秒
                     * @param _createTime 该成员添加此外部联系人的时间戳，单位为秒
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取该成员添加此客户的来源，具体含义详见<a href="https://work.weixin.qq.com/api/doc/90000/90135/92114#%E6%9D%A5%E6%BA%90%E5%AE%9A%E4%B9%89">来源定义</a>
                     * @return AddWay 该成员添加此客户的来源，具体含义详见<a href="https://work.weixin.qq.com/api/doc/90000/90135/92114#%E6%9D%A5%E6%BA%90%E5%AE%9A%E4%B9%89">来源定义</a>
                     * 
                     */
                    int64_t GetAddWay() const;

                    /**
                     * 设置该成员添加此客户的来源，具体含义详见<a href="https://work.weixin.qq.com/api/doc/90000/90135/92114#%E6%9D%A5%E6%BA%90%E5%AE%9A%E4%B9%89">来源定义</a>
                     * @param _addWay 该成员添加此客户的来源，具体含义详见<a href="https://work.weixin.qq.com/api/doc/90000/90135/92114#%E6%9D%A5%E6%BA%90%E5%AE%9A%E4%B9%89">来源定义</a>
                     * 
                     */
                    void SetAddWay(const int64_t& _addWay);

                    /**
                     * 判断参数 AddWay 是否已赋值
                     * @return AddWay 是否已赋值
                     * 
                     */
                    bool AddWayHasBeenSet() const;

                    /**
                     * 获取发起添加的userid，如果成员主动添加，为成员的userid；如果是客户主动添加，则为客户的外部联系人userid；如果是内部成员共享/管理员分配，则为对应的成员/管理员userid
                     * @return OperUserId 发起添加的userid，如果成员主动添加，为成员的userid；如果是客户主动添加，则为客户的外部联系人userid；如果是内部成员共享/管理员分配，则为对应的成员/管理员userid
                     * 
                     */
                    std::string GetOperUserId() const;

                    /**
                     * 设置发起添加的userid，如果成员主动添加，为成员的userid；如果是客户主动添加，则为客户的外部联系人userid；如果是内部成员共享/管理员分配，则为对应的成员/管理员userid
                     * @param _operUserId 发起添加的userid，如果成员主动添加，为成员的userid；如果是客户主动添加，则为客户的外部联系人userid；如果是内部成员共享/管理员分配，则为对应的成员/管理员userid
                     * 
                     */
                    void SetOperUserId(const std::string& _operUserId);

                    /**
                     * 判断参数 OperUserId 是否已赋值
                     * @return OperUserId 是否已赋值
                     * 
                     */
                    bool OperUserIdHasBeenSet() const;

                    /**
                     * 获取该成员添加此外部联系人所打标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 该成员添加此外部联系人所打标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExternalContactTag> GetTags() const;

                    /**
                     * 设置该成员添加此外部联系人所打标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 该成员添加此外部联系人所打标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<ExternalContactTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 添加了此外部联系人的企业成员userid
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 该成员对此外部联系人的备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 该成员对此外部联系人的描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 该成员添加此外部联系人的时间戳，单位为秒
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 该成员添加此客户的来源，具体含义详见<a href="https://work.weixin.qq.com/api/doc/90000/90135/92114#%E6%9D%A5%E6%BA%90%E5%AE%9A%E4%B9%89">来源定义</a>
                     */
                    int64_t m_addWay;
                    bool m_addWayHasBeenSet;

                    /**
                     * 发起添加的userid，如果成员主动添加，为成员的userid；如果是客户主动添加，则为客户的外部联系人userid；如果是内部成员共享/管理员分配，则为对应的成员/管理员userid
                     */
                    std::string m_operUserId;
                    bool m_operUserIdHasBeenSet;

                    /**
                     * 该成员添加此外部联系人所打标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExternalContactTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_FOLLOWUSER_H_
